/*
 * XREFs of ??1CLightStack@@QEAA@XZ @ 0x1800C22F0
 * Callers:
 *     ??1CDrawingContext@@EEAA@XZ @ 0x18006E594 (--1CDrawingContext@@EEAA@XZ.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x1800A29B8 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800A8CF0 (--1COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x1800C2320 (-Clear@CLightStack@@QEAAXXZ.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800C2374 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 */

void __fastcall CLightStack::~CLightStack(CLightStack *this)
{
  CLightStack::Clear(this);
  ReleaseInterface<CDisplay>((char *)this + 104);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 184);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this);
}
