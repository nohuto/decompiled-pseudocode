/*
 * XREFs of ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C010CAB4
 * Callers:
 *     Win32AllocPagedLookasideListImpl @ 0x1C010C970 (Win32AllocPagedLookasideListImpl.c)
 *     Win32UAFMAllocPagedLookasideListImpl @ 0x1C01E8F30 (Win32UAFMAllocPagedLookasideListImpl.c)
 * Callees:
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C010C9F0 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C010CA4C (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z.c)
 */

char *__fastcall NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        SIZE_T a2,
        int a3,
        ULONG a4,
        USHORT Depth)
{
  NSInstrumentation::CLeakTrackingAllocator *v5; // rbp
  char *result; // rax
  char *v9; // rbx

  v5 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
  result = NSInstrumentation::CLeakTrackingAllocator::Allocate(
             (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
             (enum _POOL_TYPE)544,
             144LL,
             a3);
  v9 = result;
  if ( result )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v5, a4) )
    {
      a2 += 16LL;
      *v9 = 1;
    }
    else
    {
      *v9 = 0;
    }
    ExInitializePagedLookasideList(
      (PPAGED_LOOKASIDE_LIST)(v9 + 16),
      NSInstrumentation::PlatformAllocate,
      (PFREE_FUNCTION)NSInstrumentation::PlatformFree,
      0x220u,
      a2,
      a4,
      Depth);
    return v9;
  }
  return result;
}
