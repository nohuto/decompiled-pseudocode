/*
 * XREFs of DecrementCompositedCount @ 0x1C01C1F14
 * Callers:
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     ?DecComposited@@YAXPEAUtagWND@@@Z @ 0x1C020ACD0 (-DecComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 */

__int64 DecrementCompositedCount()
{
  int v0; // edx

  v0 = g_cVisibleComposited--;
  if ( v0 == 1 )
    FindTimer(gTermIO[1], 65525LL, 2u, 1, 0LL);
  return 1LL;
}
