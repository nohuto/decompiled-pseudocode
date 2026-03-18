/*
 * XREFs of IsPointerInputMessageWithState @ 0x1C0049424
 * Callers:
 *     IsPointerInputHookCall @ 0x1C0048F34 (IsPointerInputHookCall.c)
 *     UnlinkSendListSms @ 0x1C0049380 (UnlinkSendListSms.c)
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C019974C (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01BBAB8 (xxxRetrievePointerInputMessage.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01C7CE0 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     _QuerySendMessage @ 0x1C01E6C98 (_QuerySendMessage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerInputMessageWithState(int a1)
{
  unsigned int v1; // ecx
  int v2; // eax
  _BOOL8 result; // rax

  v1 = a1 - 577;
  result = 0;
  if ( v1 <= 0x16 )
  {
    v2 = 8122367;
    if ( _bittest(&v2, v1) )
      return 1;
  }
  return result;
}
