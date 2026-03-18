/*
 * XREFs of ?NotifyInvalid@CCompositionSurfaceBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180187240
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z @ 0x180082E60 (--$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z.c)
 */

void __fastcall CCompositionSurfaceBitmap::NotifyInvalid(CBitmapRealization **this, const struct IDeviceResource *a2)
{
  ReleaseInterface<CBitmapRealization>(this + 3);
  CResource::NotifyOnChanged(
    (CVisual *)(this - 9),
    (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))5,
    0LL);
}
