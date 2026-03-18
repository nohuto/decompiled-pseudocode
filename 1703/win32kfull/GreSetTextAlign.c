/*
 * XREFs of GreSetTextAlign @ 0x1C000E1DC
 * Callers:
 *     CreateCompatiblePublicDC @ 0x1C000CF78 (CreateCompatiblePublicDC.c)
 *     xxxMenuDraw @ 0x1C000D438 (xxxMenuDraw.c)
 *     DrawFrameControl @ 0x1C002B024 (DrawFrameControl.c)
 *     _ServerFixupMenuDC @ 0x1C00EF1B4 (_ServerFixupMenuDC.c)
 *     FlipUserTextOutW @ 0x1C00F6CEC (FlipUserTextOutW.c)
 *     xxxDrawCaptionTemp @ 0x1C0138108 (xxxDrawCaptionTemp.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C020D0B4 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 *     xxxDrawState @ 0x1C0219860 (xxxDrawState.c)
 *     DrawTextExWorker @ 0x1C023A250 (DrawTextExWorker.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreSetTextAlign(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // r8
  char v7; // dl
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+2Ch] [rbp-Ch]

  v3 = 0;
  v10 = 0;
  v11 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v9, a1);
  v4 = v9;
  if ( v9 )
  {
    v5 = *(_QWORD *)(v9 + 80);
    v3 = *(_DWORD *)(v5 + 156);
    *(_DWORD *)(v5 + 156) = a2;
    v6 = *(_QWORD *)(v4 + 80);
    v7 = a2 ^ 2;
    if ( (*(_BYTE *)(v6 + 312) & 1) == 0 || (a2 & 6) == 6 )
      v7 = a2;
    *(_DWORD *)(v6 + 152) = v7 & 0x1F;
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v9);
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 12));
  }
  return v3;
}
