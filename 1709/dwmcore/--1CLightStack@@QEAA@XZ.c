/*
 * XREFs of ??1CLightStack@@QEAA@XZ @ 0x18009E998
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18004096C (--1CDrawingContext@@MEAA@XZ.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x180055014 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18006129C (--1COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18009EDDC (-Clear@CLightStack@@QEAAXXZ.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800B7818 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 */

void __fastcall CLightStack::~CLightStack(void **this)
{
  CLightStack::Clear((CLightStack *)this);
  ReleaseInterface<CDisplay>(this + 13);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 23);
  DynArrayImpl<1>::~DynArrayImpl<1>(this);
}
