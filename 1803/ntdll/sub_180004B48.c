/*
 * XREFs of sub_180004B48 @ 0x180004B48
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180004A40 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     memcmp @ 0x18008EED0 (memcmp.c)
 */

__int64 __fastcall sub_180004B48(_DWORD *a1)
{
  if ( a1 && *a1 >= 0xB0u && (a1[11] & 0x20000) != 0 )
    return memcmp(a1 + 6, &unk_1801140B8, 0x10uLL) == 0 ? 0xD : 0;
  else
    return 13LL;
}
