/*
 * XREFs of PopInitializeAdpm @ 0x1408A5E40
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopExtendConnectionState @ 0x1406273E0 (PopExtendConnectionState.c)
 */

PVOID PopInitializeAdpm()
{
  ExInitializeResourceLite(&PopAdpmLock);
  memset(&PopConsoleContext, 0, 0x28uLL);
  PopConsoleContext = -1;
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  dword_1403A7B80 = 3;
  return PopExtendConnectionState(0);
}
