/*
 * XREFs of ??1CLightStack@@QEAA@XZ @ 0x1800C539C
 * Callers:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18009F534 (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800A9A7C (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800BD7E0 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x1800C5360 (-Clear@CLightStack@@QEAAXXZ.c)
 */

void __fastcall CLightStack::~CLightStack(CLightStack *this)
{
  CLightStack::Clear(this);
  ReleaseInterface<CHwLightCollectionBuffer>((__int64 *)this + 9);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this);
}
