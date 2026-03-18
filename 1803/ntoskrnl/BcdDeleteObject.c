/*
 * XREFs of BcdDeleteObject @ 0x1407E1868
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x14076E950 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x1407E2F44 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x1407E316C (BiBindEfiEntries.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1401643C4 (BiIsOfflineHandle.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1402C5DB8 (BiSetFirmwareModifiedFromObject.c)
 *     BiDeleteKey @ 0x1405EE92C (BiDeleteKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140609030 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1406091E0 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140609238 (BiIsLinkedToFirmwareVariable.c)
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
