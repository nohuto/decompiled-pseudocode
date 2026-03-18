/*
 * XREFs of ?Release@CRenderTargetImageSource@@UEAAKXZ @ 0x180035CE0
 * Callers:
 *     ??1EffectInput@@QEAA@XZ @ 0x18007001C (--1EffectInput@@QEAA@XZ.c)
 *     ?Release@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800C6230 (-Release@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 *     ?Release@CRenderTargetImageSource@@WBI@EAAKXZ @ 0x1800C62F0 (-Release@CRenderTargetImageSource@@WBI@EAAKXZ.c)
 *     ?Release@CRenderTargetImageSource@@WGA@EAAKXZ @ 0x1800C6300 (-Release@CRenderTargetImageSource@@WGA@EAAKXZ.c)
 *     ?Release@CRenderTargetImageSource@@WJI@EAAKXZ @ 0x1800C6310 (-Release@CRenderTargetImageSource@@WJI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRenderTargetImageSource::Release(CRenderTargetImageSource *this)
{
  return CMILCOMBase::InternalRelease((CRenderTargetImageSource *)((char *)this + 8));
}
