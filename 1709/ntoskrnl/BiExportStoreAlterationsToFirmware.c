/*
 * XREFs of BiExportStoreAlterationsToFirmware @ 0x140779704
 * Callers:
 *     BiCloseStore @ 0x1405ADEEC (BiCloseStore.c)
 *     BcdForciblyUnloadStore @ 0x140778AAC (BcdForciblyUnloadStore.c)
 * Callees:
 *     BiGetFirmwareType @ 0x1405B0290 (BiGetFirmwareType.c)
 *     BiExportStoreAlterationsToEfi @ 0x14077BF94 (BiExportStoreAlterationsToEfi.c)
 */

__int64 __fastcall BiExportStoreAlterationsToFirmware(HANDLE BcdStoreHandle)
{
  int v2; // eax
  int v3; // eax

  v2 = BiGetFirmwareType() - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
      return BiExportStoreAlterationsToEfi(BcdStoreHandle);
    if ( v3 != 1 )
      return 3221225659LL;
  }
  return 0LL;
}
