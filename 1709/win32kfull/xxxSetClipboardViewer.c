/*
 * XREFs of xxxSetClipboardViewer @ 0x1C00C5520
 * Callers:
 *     NtUserSetClipboardViewer @ 0x1C00C5480 (NtUserSetClipboardViewer.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     CheckClipboardAccess @ 0x1C00C6624 (CheckClipboardAccess.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00C6904 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSetClipboardViewer(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // r9
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( a1 && *(char *)(a1 + 59) < 0 )
    goto LABEL_11;
  v3 = (_QWORD *)CheckClipboardAccess();
  if ( !v3 )
    return 0LL;
  if ( a1 && *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) + 640LL) != v3 )
  {
LABEL_11:
    UserSetLastError(87LL, a2);
    return 0LL;
  }
  PushW32ThreadLock((__int64)v3, v11, UserDereferenceObject, v4);
  ObfReferenceObject(v3);
  v5 = (_QWORD *)v3[9];
  if ( v5 )
    v5 = (_QWORD *)*v5;
  v10[0] = v3 + 9;
  v10[1] = a1;
  HMAssignmentLock(v10);
  xxxDrawClipboard((struct tagWINDOWSTATION *)v3);
  PopAndFreeW32ThreadLock(v11);
  if ( !v5 )
    return 0LL;
  LOBYTE(v6) = 1;
  return HMValidateHandleNoSecure((unsigned __int64)v5, v6, v7, v8);
}
