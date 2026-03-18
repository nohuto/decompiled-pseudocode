/*
 * XREFs of Win32UAFMFreePagedLookasideListImpl @ 0x1C01F5110
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C01161F4 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C01163BC (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1C01F4B10 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 */

void __fastcall Win32UAFMFreePagedLookasideListImpl(
        NSInstrumentation::CLeakTrackingAllocator *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // ebx
  NSInstrumentation::CLeakTrackingAllocator *v4; // rcx

  v2 = BugCheckParameter3;
  NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(BugCheckParameter2, *(char **)BugCheckParameter2);
  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(
    (ULONG_PTR)BugCheckParameter2,
    v2);
  v4 = (NSInstrumentation::CLeakTrackingAllocator *)WPP_MAIN_CB.DeviceQueue.1;
  *((_DWORD *)BugCheckParameter2 - 1) = 0;
  NSInstrumentation::CLeakTrackingAllocator::Free(v4, (char *)BugCheckParameter2 - 16);
}
