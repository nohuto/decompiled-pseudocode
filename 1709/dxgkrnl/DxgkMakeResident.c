/*
 * XREFs of DxgkMakeResident @ 0x1C00F3250
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C0084ED0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 */

__int64 __fastcall DxgkMakeResident(struct D3DDDI_MAKERESIDENT *a1, __int64 a2, __int64 a3)
{
  return DxgkMakeResidentInternal(a1, 1, a3);
}
