/*
 * XREFs of _GetKeyState @ 0x1C00B89D4
 * Callers:
 *     xxxDWP_ProcessVirtKey @ 0x1C0008174 (xxxDWP_ProcessVirtKey.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxTranslateAccelerator @ 0x1C00B81C8 (xxxTranslateAccelerator.c)
 *     NtUserGetKeyState @ 0x1C00B8500 (NtUserGetKeyState.c)
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 *     xxxIsDragging @ 0x1C0139758 (xxxIsDragging.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CADC4 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CB59C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01CB990 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CBBB4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01CC84C (xxxOldNextWindow.c)
 *     xxxMNStartMenu @ 0x1C01EB49C (xxxMNStartMenu.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMNLoop @ 0x1C02022C0 (xxxMNLoop.c)
 *     MNCheckButtonDownState @ 0x1C0203DFC (MNCheckButtonDownState.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 *     xxxTrackThumb @ 0x1C02104D0 (xxxTrackThumb.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall GetKeyState(unsigned int a1)
{
  unsigned __int8 v1; // di
  unsigned __int16 v2; // bx
  __int64 v3; // rsi
  __int64 *ThreadWin32Thread; // rax
  int v5; // r8d

  v1 = a1;
  if ( a1 >= 0x100 )
  {
    UserSetLastError(87LL);
    return 0;
  }
  else
  {
    v2 = 0;
    v3 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
    v5 = *(unsigned __int8 *)(((unsigned __int64)v1 >> 2) + *(_QWORD *)(v3 + 384) + 192);
    if ( _bittest(&v5, (unsigned __int8)(2 * (v1 & 3) + 1)) )
      v2 = 1;
    if ( _bittest(&v5, (unsigned __int8)(2 * (v1 & 3))) )
      v2 |= 0xFF80u;
  }
  return v2;
}
