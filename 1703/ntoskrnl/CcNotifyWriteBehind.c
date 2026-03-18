/*
 * XREFs of CcNotifyWriteBehind @ 0x14013E078
 * Callers:
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 *     MiShutdownSystem @ 0x1404193D0 (MiShutdownSystem.c)
 * Callees:
 *     <none>
 */

LONG __fastcall CcNotifyWriteBehind(char a1)
{
  return CcNotifyWriteBehindInternal((struct _KEVENT *)&CcSystemPartition, a1);
}
