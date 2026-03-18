/*
 * XREFs of ?Initialize@CRenderTarget@@MEAAJXZ @ 0x1800B4B70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B4E20 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800CA50C (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CRenderTarget::Initialize(struct CComposition **this)
{
  char *v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx

  v1 = (char *)(this + 13);
  v2 = CDrawingContext::Create(this[2], this + 13);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x3Bu);
    ReleaseInterface<CDrawingContext>(v1);
  }
  return v3;
}
