/*
 * XREFs of BcdDeleteObject @ 0x140778BFC
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x14070B380 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x14077A55C (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x14077A784 (BiBindEfiEntries.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x140134AD0 (BiIsOfflineHandle.c)
 *     BiSetFirmwareModifiedFromObject @ 0x140290148 (BiSetFirmwareModifiedFromObject.c)
 *     BiReleaseBcdSyncMutant @ 0x1405AFE48 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1405AFFF8 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1405B025C (BiIsLinkedToFirmwareVariable.c)
 *     BiDeleteKey @ 0x140779740 (BiDeleteKey.c)
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
    v4 = BiDeleteKey(a1);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v4;
  }
  return result;
}
