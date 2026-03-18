/*
 * XREFs of BiSetFirmwareModified @ 0x140265E08
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x140265E54 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x14058951C (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x14058A528 (BiOpenSystemStore.c)
 *     BcdCreateObject @ 0x1407348DC (BcdCreateObject.c)
 * Callees:
 *     BiSetRegistryValue @ 0x14058BEBC (BiSetRegistryValue.c)
 *     BiDeleteRegistryValue @ 0x1407354B8 (BiDeleteRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified");
}
