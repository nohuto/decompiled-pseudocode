/*
 * XREFs of DxgkQueryAdapterInfo @ 0x1C00D94E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkQueryAdapterInfo(const struct _D3DKMT_QUERYADAPTERINFO *a1)
{
  return DxgkQueryAdapterInfoInternal(a1, 1u, 0LL);
}
