/*
 * XREFs of KseRegisterShim @ 0x140623280
 * Callers:
 *     KseInitialize @ 0x1408A392C (KseInitialize.c)
 *     KseDriverScopeInitialize @ 0x1408A54DC (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x1408A554C (KseVersionLieInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x1406232A0 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
