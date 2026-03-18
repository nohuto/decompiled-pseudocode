/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x140134BA0
 * Callers:
 *     BcdCloseStore @ 0x1405AE528 (BcdCloseStore.c)
 *     BcdForciblyUnloadStore @ 0x140778AAC (BcdForciblyUnloadStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
