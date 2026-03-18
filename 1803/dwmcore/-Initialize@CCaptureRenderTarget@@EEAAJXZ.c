/*
 * XREFs of ?Initialize@CCaptureRenderTarget@@EEAAJXZ @ 0x180156020
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z @ 0x180033E00 (-AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCaptureRenderTarget::Initialize(CCaptureRenderTarget *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  *((_BYTE *)this + 266) = 1;
  v1 = CComposition::AddRenderTarget(*((CRenderTargetManager ***)this + 2), this);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0xD3u);
  return v2;
}
