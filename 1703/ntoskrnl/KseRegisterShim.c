/*
 * XREFs of KseRegisterShim @ 0x14059D600
 * Callers:
 *     KseClearPCIDBitsInitialize @ 0x1407F6210 (KseClearPCIDBitsInitialize.c)
 *     KseDriverScopeInitialize @ 0x1407FAD8C (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x1407FADFC (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x1407FBB98 (KseInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
