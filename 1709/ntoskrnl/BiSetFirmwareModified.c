/*
 * XREFs of BiSetFirmwareModified @ 0x1401349DC
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x140290148 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x1405ADEEC (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x1405AECB4 (BiOpenSystemStore.c)
 *     BcdCreateObject @ 0x140778B64 (BcdCreateObject.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x1405AE26C (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x1405B0308 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
