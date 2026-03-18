/*
 * XREFs of BcdDeleteObject @ 0x140734974
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x1406D5770 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x140736118 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140736328 (BiBindEfiEntries.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14014CF2C (BiIsOfflineHandle.c)
 *     BiSetFirmwareModifiedFromObject @ 0x140265E54 (BiSetFirmwareModifiedFromObject.c)
 *     BiDeleteKey @ 0x140578EEC (BiDeleteKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14058BC08 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14058BDB8 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x14058BE10 (BiIsLinkedToFirmwareVariable.c)
 */

NTSTATUS __fastcall BcdDeleteObject(void *a1)
{
  char IsOfflineHandle; // di
  NTSTATUS result; // eax
  int v4; // ebx

  IsOfflineHandle = BiIsOfflineHandle((char)a1);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    if ( BiIsLinkedToFirmwareVariable((__int64)a1, 0LL) )
      BiSetFirmwareModifiedFromObject(a1);
    v4 = BiDeleteKey((__int64)a1);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v4;
  }
  return result;
}
