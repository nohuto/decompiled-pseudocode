/*
 * XREFs of xxxSetClipboardViewer @ 0x1C00AE668
 * Callers:
 *     NtUserSetClipboardViewer @ 0x1C00AE5D0 (NtUserSetClipboardViewer.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     CheckClipboardAccess @ 0x1C00AF8CC (CheckClipboardAccess.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00AFB1C (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSetClipboardViewer(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( a1 && *(char *)(a1 + 59) < 0 )
    goto LABEL_11;
  v2 = (_QWORD *)CheckClipboardAccess();
  if ( !v2 )
    return 0LL;
  if ( a1 && *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) + 632LL) != v2 )
  {
LABEL_11:
    UserSetLastError(87LL);
    return 0LL;
  }
  PushW32ThreadLock((__int64)v2, v6, UserDereferenceObject);
  ObfReferenceObject(v2);
  v3 = (_QWORD *)v2[9];
  if ( v3 )
    v3 = (_QWORD *)*v3;
  v5[0] = v2 + 9;
  v5[1] = a1;
  HMAssignmentLock(v5);
  xxxDrawClipboard((struct tagWINDOWSTATION *)v2);
  PopAndFreeW32ThreadLock(v6);
  if ( !v3 )
    return 0LL;
  return HMValidateHandleNoSecure((unsigned __int64)v3, 1);
}
