/*
 * XREFs of ?AddToCurrentFrameInvalidRegion@CHDRConversionRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x1801B8E20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800894CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::AddToCurrentFrameInvalidRegion(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  signed int v2; // eax
  unsigned int v3; // ebx

  v2 = FastRegion::CRegion::Union(this + 72, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x19Bu);
  return v3;
}
