/*
 * XREFs of Win32UAFMFreePoolImpl @ 0x1C01E9150
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1C01E8B08 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 */

void __fastcall Win32UAFMFreePoolImpl(ULONG_PTR a1, ULONG_PTR a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v3; // rcx

  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(a1, a2);
  v3 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
  *(_DWORD *)(a1 - 4) = 0;
  NSInstrumentation::CLeakTrackingAllocator::Free(v3, (char *)(a1 - 16));
}
