/*
 * XREFs of ValidateDDEConvPair @ 0x1C01E590C
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     NtUserPostMessage @ 0x1C0055CC0 (NtUserPostMessage.c)
 *     _PostTransformableMessageIL @ 0x1C00C8F84 (_PostTransformableMessageIL.c)
 *     _PostMessageCheckIL @ 0x1C01BD084 (_PostMessageCheckIL.c)
 * Callees:
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01E445C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

_BOOL8 __fastcall ValidateDDEConvPair(__int64 a1, struct tagWND *a2)
{
  struct tagWND *v3; // rax

  v3 = (struct tagWND *)ValidateHwnd(a1);
  return v3 && FindDdeConv(v3, a2);
}
