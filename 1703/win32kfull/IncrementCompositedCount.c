/*
 * XREFs of IncrementCompositedCount @ 0x1C01C2094
 * Callers:
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     SetRedirectedWindow @ 0x1C0022830 (SetRedirectedWindow.c)
 *     ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1C020ACE0 (-IncComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00B21F0 (_SetSystemTimer.c)
 */

__int64 __fastcall IncrementCompositedCount(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 71) & 0x10) != 0 )
  {
    if ( !g_cVisibleComposited++ )
      SetSystemTimer(gTermIO[1], 65525LL, 100, (int)xxxSystemTimerProc, 1);
    return 1;
  }
  return v1;
}
