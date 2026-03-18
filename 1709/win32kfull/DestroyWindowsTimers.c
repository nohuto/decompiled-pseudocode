/*
 * XREFs of DestroyWindowsTimers @ 0x1C00D78A4
 * Callers:
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C00D7760 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C00D7A70 (FreeTimer.c)
 */

__int64 DestroyWindowsTimers()
{
  return gtmrListHead[0];
}
