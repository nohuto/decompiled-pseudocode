/*
 * XREFs of sub_180051CBC @ 0x180051CBC
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180051B90 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     memcmp @ 0x180099A70 (memcmp.c)
 */

__int64 __fastcall sub_180051CBC(_DWORD *a1)
{
  if ( a1 && *a1 >= 0xB0u && (a1[11] & 0x20000) != 0 )
    return memcmp(a1 + 6, &unk_1801148A0, 0x10uLL) == 0 ? 0xD : 0;
  else
    return 13LL;
}
