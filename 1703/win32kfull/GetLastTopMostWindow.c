/*
 * XREFs of GetLastTopMostWindow @ 0x1C001CA48
 * Callers:
 *     CalcForegroundInsertAfter @ 0x1C001C8FC (CalcForegroundInsertAfter.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C001EE80 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C001F3BC (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C001F65C (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C001FDE4 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     LinkWindow @ 0x1C00614C0 (LinkWindow.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00B9844 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01CBF24 (_GetNextQueueWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     GetThreadDesktopWindow @ 0x1C00F2804 (GetThreadDesktopWindow.c)
 */

__int64 __fastcall GetLastTopMostWindow(__int64 a1, __int64 a2)
{
  __int64 ThreadDesktopWindow; // rax
  __int64 v3; // rcx
  __int64 i; // rdx

  if ( !a1 || (ThreadDesktopWindow = GetDesktopWindow(a1, a2)) == 0 )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(gptiCurrent);
    if ( !ThreadDesktopWindow )
      return 0LL;
  }
  v3 = *(_QWORD *)(ThreadDesktopWindow + 112);
  if ( !v3 || (*(_BYTE *)(v3 + 64) & 8) == 0 )
    return 0LL;
  for ( i = *(_QWORD *)(v3 + 88); i && (*(_BYTE *)(i + 64) & 8) != 0; i = *(_QWORD *)(i + 88) )
    v3 = i;
  return v3;
}
