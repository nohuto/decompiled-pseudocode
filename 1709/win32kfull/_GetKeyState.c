/*
 * XREFs of _GetKeyState @ 0x1C00FC8DC
 * Callers:
 *     xxxDWP_ProcessVirtKey @ 0x1C000D158 (xxxDWP_ProcessVirtKey.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxTranslateAccelerator @ 0x1C00FC58C (xxxTranslateAccelerator.c)
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 *     xxxIsDragging @ 0x1C0140348 (xxxIsDragging.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CF200 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CF95C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01CFD54 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CFF78 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DAD48 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMNStartMenu @ 0x1C01F72BC (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 *     MNCheckButtonDownState @ 0x1C02058B0 (MNCheckButtonDownState.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 *     xxxTrackThumb @ 0x1C0211C00 (xxxTrackThumb.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetKeyState(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  int v5; // edx
  unsigned __int16 v6; // r9

  v4 = a1;
  if ( a1 >= 0x100 )
  {
    UserSetLastError(87LL, a2);
    return 0LL;
  }
  else
  {
    v5 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)a1 >> 2)
                            + *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 408)
                            + 224);
    v6 = (v5 & (1 << (2 * (v4 & 3) + 1))) != 0;
    if ( _bittest(&v5, (unsigned __int8)(2 * (v4 & 3))) )
      return ((v5 & (1 << (2 * (v4 & 3) + 1))) != 0) | 0xFF80u;
    return v6;
  }
}
