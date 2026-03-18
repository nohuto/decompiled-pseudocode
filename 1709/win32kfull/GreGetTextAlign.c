/*
 * XREFs of GreGetTextAlign @ 0x1C0080F98
 * Callers:
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C007CCE4 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     xxxMenuDraw @ 0x1C007D26C (xxxMenuDraw.c)
 *     DrawFrameControl @ 0x1C007E640 (DrawFrameControl.c)
 *     _ServerFixupMenuDC @ 0x1C00FC2A0 (_ServerFixupMenuDC.c)
 *     CreateCompatiblePublicDC @ 0x1C013C380 (CreateCompatiblePublicDC.c)
 *     xxxDrawCaptionTemp @ 0x1C013C3E8 (xxxDrawCaptionTemp.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C020EDC8 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 *     xxxDrawState @ 0x1C021AAB8 (xxxDrawState.c)
 *     DrawTextExWorker @ 0x1C023BB1C (DrawTextExWorker.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetTextAlign(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3[1] = 0LL;
  XDCOBJ::vLock(v3, a1);
  if ( v3[0] )
  {
    v1 = *(_DWORD *)(*((_QWORD *)v3[0] + 10) + 156LL);
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  return v1;
}
