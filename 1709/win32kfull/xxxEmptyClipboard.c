/*
 * XREFs of xxxEmptyClipboard @ 0x1C00C55F4
 * Callers:
 *     FreeWindowStation @ 0x1C00C49E0 (FreeWindowStation.c)
 *     NtUserEmptyClipboard @ 0x1C00C5440 (NtUserEmptyClipboard.c)
 *     xxxSnapWindow @ 0x1C013F298 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C00C5738 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00C5834 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     CheckClipboardAccess @ 0x1C00C6624 (CheckClipboardAccess.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxEmptyClipboard(struct tagCLIP **Object, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 ThreadWin32Thread; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagCLIP **v9; // rax
  int v10; // r14d
  struct tagCLIP *v11; // rdi
  int v13; // ebp
  __int64 v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-48h]
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v17[4]; // [rsp+40h] [rbp-28h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  if ( Object )
    goto LABEL_4;
  v9 = (struct tagCLIP **)CheckClipboardAccess();
  Object = v9;
  if ( !v9 )
    return 0LL;
  if ( v9[6] != (struct tagCLIP *)ThreadWin32Thread )
  {
    UserSetLastError(1418LL, v5);
    return 0LL;
  }
LABEL_4:
  v10 = (_DWORD)Object[4] & 0x10;
  if ( !v10 && ThreadWin32Thread )
  {
    PushW32ThreadLock((__int64)Object, v17, UserDereferenceObject, v8);
    ObfReferenceObject(Object);
    xxxSendClipboardMessage((struct tagWINDOWSTATION *)Object, 0x307u);
  }
  v11 = Object[12];
  if ( v11 )
  {
    v13 = *((_DWORD *)Object + 26);
    while ( v13 )
    {
      v14 = *(unsigned __int16 *)v11;
      --v13;
      if ( (unsigned __int16)v14 >= 0xC000u )
        UserDeleteAtom(v14);
      UT_FreeCBFormat(v11);
      v11 = (struct tagCLIP *)((char *)v11 + 32);
    }
    Win32FreePool(Object[12], v5, v7);
    Object[12] = 0LL;
    *((_DWORD *)Object + 26) = 0;
  }
  *((_DWORD *)Object + 8) |= 0x40u;
  *(_QWORD *)&v15 = Object + 10;
  *((_QWORD *)&v15 + 1) = Object[8];
  v16 = v15;
  HMAssignmentLock(&v16);
  ++*((_DWORD *)Object + 27);
  ++*((_DWORD *)Object + 28);
  *((_DWORD *)Object + 8) &= ~0x80u;
  if ( !v10 )
  {
    if ( ThreadWin32Thread )
      PopAndFreeW32ThreadLock(v17);
  }
  return 1LL;
}
