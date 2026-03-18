/*
 * XREFs of ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C0116310
 * Callers:
 *     Win32AllocPagedLookasideListImpl @ 0x1C01161D0 (Win32AllocPagedLookasideListImpl.c)
 *     Win32UAFMAllocPagedLookasideListImpl @ 0x1C01F4F30 (Win32UAFMAllocPagedLookasideListImpl.c)
 * Callees:
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C0116250 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C01162A8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z.c)
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

  v5 = (NSInstrumentation::CLeakTrackingAllocator *)WPP_MAIN_CB.DeviceQueue.1;
  result = NSInstrumentation::CLeakTrackingAllocator::Allocate(
             *(NSInstrumentation::CLeakTrackingAllocator **)&WPP_MAIN_CB.DeviceQueue.32,
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
      (PALLOCATE_FUNCTION)NSInstrumentation::PlatformAllocate,
      (PFREE_FUNCTION)NSInstrumentation::PlatformFree,
      0x220u,
      a2,
      a4,
      Depth);
    return v9;
  }
  return result;
}
