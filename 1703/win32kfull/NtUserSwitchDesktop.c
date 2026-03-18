/*
 * XREFs of NtUserSwitchDesktop @ 0x1C00E68B0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     xxxSwitchDesktopWithFade @ 0x1C00E69B8 (xxxSwitchDesktopWithFade.c)
 */

_BOOL8 __fastcall NtUserSwitchDesktop(__int64 a1, int a2, int a3)
{
  BOOL v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  PVOID v13; // rcx
  int v14; // r8d
  __int64 v15; // rcx
  int v16; // eax
  int v17; // ebx
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = 0;
  v7 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000000) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 720LL);
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
    UserSetLastError(5LL);
    goto LABEL_11;
  }
  PushW32ThreadLock((__int64)Object, v19, UserDereferenceObject);
  v13 = Object;
  if ( Object )
  {
    ObfReferenceObject(Object);
    v13 = Object;
  }
  ObfDereferenceObject(v13);
  v15 = *((_QWORD *)Object + 5);
  if ( a2 )
    v16 = xxxSwitchDesktopWithFade(v15, (_DWORD)Object, v14, a2, a3);
  else
    v16 = xxxSwitchDesktop(v15, (__int64)Object, 0, a3);
  v17 = v16;
  PopAndFreeW32ThreadLock((__int64)v19);
  v6 = v17 >= 0;
LABEL_11:
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v6;
}
