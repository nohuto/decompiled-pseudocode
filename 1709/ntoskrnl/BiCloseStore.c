/*
 * XREFs of BiCloseStore @ 0x1405ADEEC
 * Callers:
 *     BcdCloseStore @ 0x1405AE528 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x1405AECB4 (BiOpenSystemStore.c)
 * Callees:
 *     BiSanitizeHandle @ 0x140131B74 (BiSanitizeHandle.c)
 *     BiSetFirmwareModified @ 0x1401349DC (BiSetFirmwareModified.c)
 *     BiWasFirmwareModified @ 0x140134A10 (BiWasFirmwareModified.c)
 *     BiCloseKey @ 0x1405AFC68 (BiCloseKey.c)
 *     BiLogMessage @ 0x1405B05D0 (BiLogMessage.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140779704 (BiExportStoreAlterationsToFirmware.c)
 *     BiUnloadHiveByHandle @ 0x1407798B0 (BiUnloadHiveByHandle.c)
 */

__int64 __fastcall BiCloseStore(__int64 a1, char a2)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // rax
  void *v5; // rbx
  char v6; // dl
  int v8; // eax

  v3 = 0;
  v4 = BiSanitizeHandle(a1);
  v5 = (void *)v4;
  if ( (v6 & 4) != 0 && BiWasFirmwareModified(v4) )
  {
    BiLogMessage(2LL, L"Exporting alterations to firmware.");
    v8 = BiExportStoreAlterationsToFirmware(v5);
    v3 = v8;
    if ( v8 < 0 )
      BiLogMessage(4LL, L"Failed to export alterations to firmware. Status: %x", (unsigned int)v8);
    else
      BiSetFirmwareModified((__int64)v5, 0);
  }
  if ( (a2 & 2) != 0 )
    BiUnloadHiveByHandle(v5, 0LL);
  else
    BiCloseKey(v5);
  return v3;
}
