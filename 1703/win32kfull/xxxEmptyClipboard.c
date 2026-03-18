/*
 * XREFs of xxxEmptyClipboard @ 0x1C00AE73C
 * Callers:
 *     FreeWindowStation @ 0x1C00ADD90 (FreeWindowStation.c)
 *     NtUserEmptyClipboard @ 0x1C00AE590 (NtUserEmptyClipboard.c)
 *     xxxSnapWindow @ 0x1C0138DA0 (xxxSnapWindow.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C00AE880 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00AE988 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     CheckClipboardAccess @ 0x1C00AF8CC (CheckClipboardAccess.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxEmptyClipboard(struct tagCLIP **Object)
{
  __int64 ThreadWin32Thread; // rsi
  struct tagCLIP **v3; // rax
  int v4; // r14d
  struct tagCLIP *v5; // rdi
  int v7; // ebp
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-48h]
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v11[4]; // [rsp+40h] [rbp-28h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( Object )
    goto LABEL_4;
  v3 = (struct tagCLIP **)CheckClipboardAccess();
  Object = v3;
  if ( !v3 )
    return 0LL;
  if ( v3[6] != (struct tagCLIP *)ThreadWin32Thread )
  {
    UserSetLastError(1418LL);
    return 0LL;
  }
LABEL_4:
  v4 = (_DWORD)Object[4] & 0x10;
  if ( !v4 && ThreadWin32Thread )
  {
    PushW32ThreadLock((__int64)Object, v11, UserDereferenceObject);
    ObfReferenceObject(Object);
    xxxSendClipboardMessage((struct tagWINDOWSTATION *)Object, 0x307u);
  }
  v5 = Object[12];
  if ( v5 )
  {
    v7 = *((_DWORD *)Object + 26);
    while ( v7 )
    {
      v8 = *(unsigned __int16 *)v5;
      --v7;
      if ( (unsigned __int16)v8 >= 0xC000u )
        UserDeleteAtom(v8);
      UT_FreeCBFormat(v5);
      v5 = (struct tagCLIP *)((char *)v5 + 32);
    }
    Win32FreePool(Object[12]);
    Object[12] = 0LL;
    *((_DWORD *)Object + 26) = 0;
  }
  *((_DWORD *)Object + 8) |= 0x40u;
  *(_QWORD *)&v9 = Object + 10;
  *((_QWORD *)&v9 + 1) = Object[8];
  v10 = v9;
  HMAssignmentLock(&v10);
  ++*((_DWORD *)Object + 27);
  ++*((_DWORD *)Object + 28);
  *((_DWORD *)Object + 8) &= ~0x80u;
  if ( !v4 )
  {
    if ( ThreadWin32Thread )
      PopAndFreeW32ThreadLock(v11);
  }
  return 1LL;
}
