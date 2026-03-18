/*
 * XREFs of DxgkCreateAllocation @ 0x1C00DD050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCreateAllocation(struct _D3DKMT_CREATEALLOCATION *a1)
{
  return DxgkCreateAllocationInternal(a1, 0LL);
}
