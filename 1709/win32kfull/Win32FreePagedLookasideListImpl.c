/*
 * XREFs of Win32FreePagedLookasideListImpl @ 0x1C01161B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C01163BC (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall Win32FreePagedLookasideListImpl(NSInstrumentation::CLeakTrackingAllocator *a1)
{
  NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(a1, a1);
}
