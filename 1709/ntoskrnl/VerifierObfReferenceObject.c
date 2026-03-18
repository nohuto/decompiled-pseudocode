/*
 * XREFs of VerifierObfReferenceObject @ 0x1407C5730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1407A6D9C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierObfReferenceObject(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbx

  VfUtilCheckKernelAddress(BugCheckParameter2, 8uLL);
  v2 = ((__int64 (__fastcall *)(ULONG_PTR))pXdvObfReferenceObject)(BugCheckParameter2);
  if ( v2 == 1 && (MmVerifierData & 0x800) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x3FuLL, BugCheckParameter2, 1uLL, 0LL);
  return v2;
}
