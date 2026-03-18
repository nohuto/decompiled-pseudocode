/*
 * XREFs of KseRegisterShim @ 0x1405C58F0
 * Callers:
 *     KseClearPCIDBitsInitialize @ 0x140827180 (KseClearPCIDBitsInitialize.c)
 *     KseKasperskyInitialize @ 0x1408271F4 (KseKasperskyInitialize.c)
 *     KseDriverScopeInitialize @ 0x14083F6E8 (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x14083F758 (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x1408404D4 (KseInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x1405C5910 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
