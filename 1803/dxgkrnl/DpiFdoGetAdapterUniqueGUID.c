/*
 * XREFs of DpiFdoGetAdapterUniqueGUID @ 0x1C01F4CBC
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DpiGdoSetupGdiParameters @ 0x1C020E84C (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoGetAdapterUniqueGUID(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v1 + 4656) )
    return v1 + 4648;
  else
    return 0LL;
}
