/*
 * XREFs of ?NotifyInvalid@CCompositionSurfaceBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801645D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z @ 0x1800C6348 (--$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z.c)
 */

void __fastcall CCompositionSurfaceBitmap::NotifyInvalid(CBitmapRealization **this, const struct IDeviceResource *a2)
{
  ReleaseInterface<CBitmapRealization>(this + 50);
  CCommandListBitmapRepresentation::ReleaseAllCommandListRepresentations((CCommandListBitmapRepresentation *)(this + 2));
}
