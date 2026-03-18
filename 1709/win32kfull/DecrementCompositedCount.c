/*
 * XREFs of DecrementCompositedCount @ 0x1C01C5180
 * Callers:
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     ?DecComposited@@YAXPEAUtagWND@@@Z @ 0x1C020C060 (-DecComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 */

__int64 DecrementCompositedCount()
{
  int v0; // edx

  v0 = g_cVisibleComposited--;
  if ( v0 == 1 )
    FindTimer(gTermIO[1], 65525LL, 2u, 1, 0LL);
  return 1LL;
}
