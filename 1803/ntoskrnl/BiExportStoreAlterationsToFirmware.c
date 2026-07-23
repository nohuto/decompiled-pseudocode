/*
 * XREFs of BiExportStoreAlterationsToFirmware @ 0x1405EE4C4
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1405EE29C (BcdForciblyUnloadStore.c)
 *     BiCloseStore @ 0x14060649C (BiCloseStore.c)
 * Callees:
 *     BiGetFirmwareType @ 0x14060926C (BiGetFirmwareType.c)
 *     BiExportStoreAlterationsToEfi @ 0x1407E49E0 (BiExportStoreAlterationsToEfi.c)
 */

__int64 __fastcall BiExportStoreAlterationsToFirmware(HANDLE BcdStoreHandle)
{
  int v2; // eax
  int v4; // eax

  v2 = BiGetFirmwareType() - 1;
  if ( !v2 )
    return 0LL;
  v4 = v2 - 1;
  if ( !v4 )
    return BiExportStoreAlterationsToEfi(BcdStoreHandle);
  if ( v4 == 1 )
    return 0LL;
  return 3221225659LL;
}
