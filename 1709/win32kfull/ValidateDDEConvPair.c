/*
 * XREFs of ValidateDDEConvPair @ 0x1C01F192C
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     NtUserPostMessage @ 0x1C00ABE80 (NtUserPostMessage.c)
 *     _PostTransformableMessageIL @ 0x1C00CC8E0 (_PostTransformableMessageIL.c)
 *     _PostMessageCheckIL @ 0x1C01C0F9C (_PostMessageCheckIL.c)
 * Callees:
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01F047C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

_BOOL8 __fastcall ValidateDDEConvPair(__int64 a1, struct tagWND *a2)
{
  struct tagWND *v3; // rax

  v3 = (struct tagWND *)ValidateHwnd(a1);
  return v3 && FindDdeConv(v3, a2);
}
