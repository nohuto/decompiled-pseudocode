/*
 * XREFs of DxgkCreateAllocation @ 0x1C008F800
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C008F820 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkCreateAllocation(struct _D3DKMT_CREATEALLOCATION *a1)
{
  return DxgkCreateAllocationInternal(a1, 0LL);
}
