/*
 * XREFs of Win32UAFMFreeToPagedLookasideListImpl @ 0x1C01E9180
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1C01E8B08 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 */

void __fastcall Win32UAFMFreeToPagedLookasideListImpl(char **a1, ULONG_PTR a2, unsigned int a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v5; // rcx

  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(a2, a3);
  *(_DWORD *)(a2 - 4) = 0;
  NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(v5, *a1, (struct _SLIST_ENTRY *)(a2 - 16));
}
