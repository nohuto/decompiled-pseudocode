/*
 * XREFs of NtMITInitMinuserThread @ 0x1C00E6680
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ProtectHandle @ 0x1C0074204 (ProtectHandle.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 */

_BOOL8 __fastcall NtMITInitMinuserThread(HANDLE Handle, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rdi
  BOOL v6; // ebx
  int v7; // edx
  int v8; // esi
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v15; // [rsp+78h] [rbp+10h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v15, a2, a3, a4);
  RIMLockExclusive((__int64)&gWndLock);
  RIMLockExclusive((__int64)&gInputLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v6 = 1;
  if ( (*(_DWORD *)(ThreadWin32Thread + 1184) & 0x1000000) == 0 )
  {
    v8 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    if ( v8 >= 0 )
    {
      v8 = ProtectHandle(Handle, v7, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
      if ( v8 < 0 )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        if ( *(_QWORD *)(ThreadWin32Thread + 704) )
        {
          ProtectHandle(*(void **)(ThreadWin32Thread + 696), v9, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
          ObCloseHandle(*(HANDLE *)(ThreadWin32Thread + 696), 1);
          ObfDereferenceObject(*(PVOID *)(ThreadWin32Thread + 704));
        }
        *(_QWORD *)(ThreadWin32Thread + 696) = Handle;
        *(_QWORD *)(ThreadWin32Thread + 704) = Object;
        *(_DWORD *)(ThreadWin32Thread + 1184) |= 0x1000000u;
      }
    }
    v6 = v8 >= 0;
  }
  qword_1C01936E0 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C01936F0 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v6;
}
