/*
 * XREFs of IsPointerInputMessageWithState @ 0x1C009F1AC
 * Callers:
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C01A5310 (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01BF7C0 (xxxRetrievePointerInputMessage.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01CC920 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     _QuerySendMessage @ 0x1C01F2CD8 (_QuerySendMessage.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C00A10A8 (IsPointerInputMessage.c)
 */

__int64 __fastcall IsPointerInputMessageWithState(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // edx

  v2 = IsPointerInputMessage(a1, a2);
  v4 = 0;
  if ( v2 )
    return v3 != 595;
  return v4;
}
