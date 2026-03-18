/*
 * XREFs of Win32FreePagedLookasideListImpl @ 0x1C010C960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32FreePagedLookasideListImpl(NSInstrumentation::CLeakTrackingAllocator *a1)
{
  NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(a1, a1);
}
