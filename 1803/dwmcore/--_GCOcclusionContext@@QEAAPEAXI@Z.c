/*
 * XREFs of ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x1800A8DAC
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180043720 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C5768 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800C68A0 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800A8CF0 (--1COcclusionContext@@QEAA@XZ.c)
 */

COcclusionContext *__fastcall COcclusionContext::`scalar deleting destructor'(COcclusionContext *this)
{
  COcclusionContext::~COcclusionContext(this);
  operator delete(this);
  return this;
}
