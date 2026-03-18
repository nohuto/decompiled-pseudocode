/*
 * XREFs of ??_GCCommandBuffer@@QEAAPEAXI@Z @ 0x18004691C
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1AEBV?$span@PEAVIImageSource@@@gsl@@2AEBV?$span@PEAVCPrimitiveColor@@@4@PEAPEAV1@@Z @ 0x180046718 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1AEBV-$span@PEA.c)
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x180046CB0 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

LPVOID *__fastcall CCommandBuffer::`scalar deleting destructor'(LPVOID *this)
{
  if ( *this )
    HeapFree(WPF::g_processHeap, 0, *this);
  HeapFree(WPF::g_processHeap, 0, this);
  return this;
}
