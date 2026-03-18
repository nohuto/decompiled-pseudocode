/*
 * XREFs of ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C01163BC
 * Callers:
 *     Win32FreePagedLookasideListImpl @ 0x1C01161B0 (Win32FreePagedLookasideListImpl.c)
 *     Win32UAFMAllocPagedLookasideListImpl @ 0x1C01F4F30 (Win32UAFMAllocPagedLookasideListImpl.c)
 *     Win32UAFMFreePagedLookasideListImpl @ 0x1C01F5110 (Win32UAFMFreePagedLookasideListImpl.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C01161F4 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rbx

  v2 = (NSInstrumentation::CLeakTrackingAllocator *)WPP_MAIN_CB.DeviceQueue.1;
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)(a2 + 16));
  NSInstrumentation::CLeakTrackingAllocator::Free(v2, a2);
}
