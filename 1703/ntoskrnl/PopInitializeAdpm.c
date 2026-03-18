/*
 * XREFs of PopInitializeAdpm @ 0x14082503C
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     memset @ 0x140192D80 (memset.c)
 */

PVOID PopInitializeAdpm()
{
  ExInitializeResourceLite(&PopAdpmLock);
  memset(&PopConsoleContext, 0, 0x28uLL);
  PopConsoleContext = -1;
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  dword_140349EA0 = 3;
  return PopExtendConnectionState(0);
}
