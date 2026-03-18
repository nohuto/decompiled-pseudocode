/*
 * XREFs of ??_ECD3DPixelShader@@MEAAPEAXI@Z @ 0x1800800C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CD3DPixelShader@@MEAA@XZ @ 0x18008006C (--1CD3DPixelShader@@MEAA@XZ.c)
 */

CD3DPixelShader *__fastcall CD3DPixelShader::`vector deleting destructor'(CD3DPixelShader *this, char a2)
{
  CD3DPixelShader::~CD3DPixelShader(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
