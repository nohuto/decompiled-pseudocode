/*
 * XREFs of VerifierObfReferenceObject @ 0x140783390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierObfReferenceObject(unsigned __int64 a1)
{
  __int64 v2; // rbx

  VfUtilCheckKernelAddress(a1, 8LL);
  v2 = ((__int64 (__fastcall *)(unsigned __int64))pXdvObfReferenceObject)(a1);
  if ( v2 == 1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x3FuLL, a1, 1uLL, 0LL);
  return v2;
}
