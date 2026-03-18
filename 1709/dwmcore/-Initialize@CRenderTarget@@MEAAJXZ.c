/*
 * XREFs of ?Initialize@CRenderTarget@@MEAAJXZ @ 0x180079450
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180079484 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800C0CA8 (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CRenderTarget::Initialize(struct CComposition **this)
{
  char *v1; // rdi
  signed int v2; // eax
  unsigned int v3; // ebx

  v1 = (char *)(this + 13);
  v2 = CDrawingContext::Create(this[2], this + 13);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x3Bu);
    ReleaseInterface<CDrawingContext>(v1);
  }
  return v3;
}
