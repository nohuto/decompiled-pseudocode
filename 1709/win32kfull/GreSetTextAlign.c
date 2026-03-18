/*
 * XREFs of GreSetTextAlign @ 0x1C0080E00
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

__int64 __fastcall GreSetTextAlign(HDC a1, int a2)
{
  unsigned int v3; // edi
  DC *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  DC *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v8[1] = 0LL;
  XDCOBJ::vLock(v8, a1);
  v4 = v8[0];
  if ( v8[0] )
  {
    v5 = *((_QWORD *)v8[0] + 10);
    v3 = *(_DWORD *)(v5 + 156);
    *(_DWORD *)(v5 + 156) = a2;
    v6 = *((_QWORD *)v4 + 10);
    if ( (*(_DWORD *)(v6 + 312) & 1) != 0 && (a2 & 6) != 6 )
      LOBYTE(a2) = a2 ^ 2;
    *(_DWORD *)(v6 + 152) = a2 & 0x1F;
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  }
  return v3;
}
