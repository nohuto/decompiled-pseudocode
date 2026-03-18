/*
 * XREFs of NtUserSwitchDesktop @ 0x1C00F60D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     xxxSwitchDesktopWithFade @ 0x1C00F61D8 (xxxSwitchDesktopWithFade.c)
 */

_BOOL8 __fastcall NtUserSwitchDesktop(__int64 a1, int a2, int a3)
{
  BOOL v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  PVOID v12; // rcx
  int v13; // r8d
  __int64 v14; // rcx
  int v15; // eax
  int v16; // edx
  int v17; // ebx
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = 0;
  v7 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x20000000) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 728LL);
    v8 = *(_DWORD *)(v7 + 24) & 0x40;
  }
  else
  {
    v8 = 0;
  }
  if ( v8 )
    goto LABEL_15;
  LOBYTE(v7) = 1;
  if ( (int)ValidateHdesk(a1, v7, 256LL, &Object) < 0 )
    goto LABEL_11;
  if ( (*(_DWORD *)(*((_QWORD *)Object + 5) + 32LL) & 4) != 0 )
  {
    ObfDereferenceObject(Object);
LABEL_15:
    UserSetLastError(5LL, v7);
    goto LABEL_11;
  }
  PushW32ThreadLock((__int64)Object, v19, UserDereferenceObject, v11);
  v12 = Object;
  if ( Object )
  {
    ObfReferenceObject(Object);
    v12 = Object;
  }
  ObfDereferenceObject(v12);
  v14 = *((_QWORD *)Object + 5);
  if ( a2 )
    v15 = xxxSwitchDesktopWithFade(v14, (_DWORD)Object, v13, a2, a3);
  else
    v15 = xxxSwitchDesktop(v14, (__int64)Object, 0, a3);
  v17 = v15;
  PopAndFreeW32ThreadLock((__int64)v19, v16);
  v6 = v17 >= 0;
LABEL_11:
  UserSessionSwitchLeaveCrit(v10, v9);
  return v6;
}
