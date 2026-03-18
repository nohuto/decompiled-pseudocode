/*
 * XREFs of PopInitializeAdpm @ 0x140856358
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopExtendConnectionState @ 0x1405F091C (PopExtendConnectionState.c)
 */

PVOID PopInitializeAdpm()
{
  ExInitializeResourceLite(&PopAdpmLock);
  memset(&PopConsoleContext, 0, 0x28uLL);
  PopConsoleContext = -1;
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  dword_1403644E0 = 3;
  return PopExtendConnectionState(0);
}
