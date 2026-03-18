/*
 * XREFs of NtMITInitMinuserThread @ 0x1C00DF780
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ProtectHandle @ 0x1C0044EA0 (ProtectHandle.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

_BOOL8 __fastcall NtMITInitMinuserThread(HANDLE Handle, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  BOOL v5; // ebx
  struct tagTHREADINFO *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  LARGE_INTEGER v11; // rcx
  LARGE_INTEGER v12; // rsi
  LARGE_INTEGER v13; // r8
  bool v14; // al
  __int64 ThreadWin32Thread; // rsi
  int v16; // edx
  int v17; // r12d
  PVOID v18; // r13
  int v19; // edx
  PVOID *Object; // [rsp+20h] [rbp-78h]
  PVOID v23; // [rsp+A8h] [rbp+10h] BYREF
  __int64 *v24; // [rsp+B0h] [rbp+18h]
  __int64 *v25; // [rsp+B8h] [rbp+20h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Handle, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = 1;
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v10 = PsGetCurrentThreadWin32Thread(v8, v7, v9);
  if ( v10 )
  {
    v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      v14 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
         && (qword_1C0186D80 & 0x200000010000000LL) != 0
         && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
      if ( v14 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v11.LowPart) = byte_1C0186D98 - 1;
        Template_xqx(
          v11.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v13.QuadPart,
          v12.QuadPart,
          0,
          gullUserCritAcquireToken,
          0);
      }
    }
    if ( v12.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(Object) = 1000 * v12.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v13.QuadPart,
        0LL,
        Object,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  v24 = &gWndLock;
  RIMLockExclusive((__int64)&gWndLock);
  v25 = &gInputLock;
  RIMLockExclusive((__int64)&gInputLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(ThreadWin32Thread + 1096) & 0x1000000) == 0 )
  {
    v17 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &v23, 0LL);
    v18 = v23;
    if ( v17 >= 0 )
    {
      v17 = ProtectHandle(Handle, v16, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
      if ( v17 < 0 )
      {
        ObfDereferenceObject(v18);
      }
      else
      {
        if ( *(_QWORD *)(ThreadWin32Thread + 648) )
        {
          ProtectHandle(*(void **)(ThreadWin32Thread + 640), v19, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
          ObCloseHandle(*(HANDLE *)(ThreadWin32Thread + 640), 1);
          ObfDereferenceObject(*(PVOID *)(ThreadWin32Thread + 648));
        }
        *(_QWORD *)(ThreadWin32Thread + 640) = Handle;
        *(_QWORD *)(ThreadWin32Thread + 648) = v18;
        *(_DWORD *)(ThreadWin32Thread + 1096) |= 0x1000000u;
      }
    }
    v5 = v17 >= 0;
  }
  qword_1C018E820 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C018E830 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit();
  return v5;
}
