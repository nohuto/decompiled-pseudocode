/*
 * XREFs of BiExportStoreAlterationsToFirmware @ 0x14057B738
 * Callers:
 *     BcdForciblyUnloadStore @ 0x14057B770 (BcdForciblyUnloadStore.c)
 *     BiCloseStore @ 0x14058951C (BiCloseStore.c)
 * Callees:
 *     BiGetFirmwareType @ 0x14058BE44 (BiGetFirmwareType.c)
 *     BiExportStoreAlterationsToEfi @ 0x140737960 (BiExportStoreAlterationsToEfi.c)
 */

__int64 __fastcall BiExportStoreAlterationsToFirmware(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v5; // eax

  v1 = 0;
  byte_1407AC01E = 0;
  v3 = BiGetFirmwareType() - 1;
  if ( v3 )
  {
    v5 = v3 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return (unsigned int)-1073741637;
    }
    else
    {
      return (unsigned int)BiExportStoreAlterationsToEfi(a1);
    }
  }
  return v1;
}
