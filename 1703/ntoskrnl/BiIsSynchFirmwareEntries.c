/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x14014CEEC
 * Callers:
 *     BcdForciblyUnloadStore @ 0x14057B770 (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x140589B74 (BcdCloseStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
