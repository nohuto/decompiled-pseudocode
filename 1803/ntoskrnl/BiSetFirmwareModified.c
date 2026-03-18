/*
 * XREFs of BiSetFirmwareModified @ 0x1401642D0
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1402C5DB8 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x14060649C (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x140608164 (BiOpenSystemStore.c)
 *     BcdCreateObject @ 0x1407E17D0 (BcdCreateObject.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x140606D48 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x1406092E4 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
