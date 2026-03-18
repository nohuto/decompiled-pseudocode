/*
 * XREFs of DxgkQueryAdapterInfo @ 0x1C008E6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C008E700 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkQueryAdapterInfo(const struct _D3DKMT_QUERYADAPTERINFO *a1)
{
  return DxgkQueryAdapterInfoInternal(a1, 1u, 0LL);
}
