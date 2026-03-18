/*
 * XREFs of ?NotifyInvalid@CCompositionSurfaceBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x18015E130
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z @ 0x1800769EC (--$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z.c)
 */

void __fastcall CCompositionSurfaceBitmap::NotifyInvalid(CBitmapRealization **this, const struct IDeviceResource *a2)
{
  ReleaseInterface<CBitmapRealization>(this + 3);
  this[10] = 0LL;
}
