/*
 * XREFs of DxgkMakeResident @ 0x1C009F200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkMakeResident(struct D3DDDI_MAKERESIDENT *a1)
{
  return DxgkMakeResidentInternal(a1, 1);
}
