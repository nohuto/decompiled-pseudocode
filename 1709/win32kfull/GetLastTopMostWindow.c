/*
 * XREFs of GetLastTopMostWindow @ 0x1C0058904
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0056D64 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C00572C0 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C00575BC (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C0057CAC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     CalcForegroundInsertAfter @ 0x1C00587B8 (CalcForegroundInsertAfter.c)
 *     LinkWindow @ 0x1C0064B10 (LinkWindow.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00C6C40 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01D02B4 (_GetNextQueueWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     GetThreadDesktopWindow @ 0x1C00FB0A0 (GetThreadDesktopWindow.c)
 */

__int64 __fastcall GetLastTopMostWindow(__int64 a1)
{
  __int64 ThreadDesktopWindow; // rax
  __int64 v2; // rcx
  __int64 i; // rdx

  if ( !a1 || (ThreadDesktopWindow = GetDesktopWindow(a1)) == 0 )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(gptiCurrent);
    if ( !ThreadDesktopWindow )
      return 0LL;
  }
  v2 = *(_QWORD *)(ThreadDesktopWindow + 112);
  if ( !v2 || (*(_BYTE *)(v2 + 64) & 8) == 0 )
    return 0LL;
  for ( i = *(_QWORD *)(v2 + 88); i && (*(_BYTE *)(i + 64) & 8) != 0; i = *(_QWORD *)(i + 88) )
    v2 = i;
  return v2;
}
