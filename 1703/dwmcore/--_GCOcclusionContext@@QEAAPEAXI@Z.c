/*
 * XREFs of ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18009F5F0
 * Callers:
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C624C (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800C77EC (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18009F534 (--1COcclusionContext@@QEAA@XZ.c)
 */

COcclusionContext *__fastcall COcclusionContext::`scalar deleting destructor'(COcclusionContext *this, unsigned int a2)
{
  COcclusionContext::~COcclusionContext(this, a2);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
