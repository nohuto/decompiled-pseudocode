/*
 * XREFs of ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x18011CB94
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1AEBV?$span@PEAVIImageSource@@@gsl@@2AEBV?$span@PEAVCPrimitiveColor@@@4@PEAPEAV1@@Z @ 0x180046718 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1AEBV-$span@PEA.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void **__fastcall CPrimitiveBuffer::`scalar deleting destructor'(void **this)
{
  WPF::ProcessHeapImpl::Free(*this);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
