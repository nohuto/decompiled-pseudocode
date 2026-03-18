/*
 * XREFs of ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18005CCCC
 * Callers:
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800BDFD8 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800BEA04 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18006129C (--1COcclusionContext@@QEAA@XZ.c)
 */

COcclusionContext *__fastcall COcclusionContext::`scalar deleting destructor'(COcclusionContext *this)
{
  COcclusionContext::~COcclusionContext(this);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
