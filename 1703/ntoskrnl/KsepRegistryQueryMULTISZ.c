/*
 * XREFs of KsepRegistryQueryMULTISZ @ 0x14059BFA8
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x1407F7CD4 (KsepMatchInitBiosInfo.c)
 * Callees:
 *     KsepRegistryQuerySZ @ 0x14059BFD4 (KsepRegistryQuerySZ.c)
 */

__int64 __fastcall KsepRegistryQueryMULTISZ(void *a1, const WCHAR *a2, __int64 a3, __int64 a4, __int64 a5)
{
  return KsepRegistryQuerySZ(a1, a2, a4, a5);
}
