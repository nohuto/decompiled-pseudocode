/*
 * XREFs of VerifierKeSetEvent @ 0x1407B98C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1407A6D9C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierKeSetEvent(ULONG_PTR BugCheckParameter3, unsigned int a2, char a3)
{
  __int64 v6; // r8
  unsigned __int8 CurrentIrql; // al

  VfUtilCheckKernelAddress(BugCheckParameter3, 0x18uLL);
  if ( (MmVerifierData & 2) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
      VerifierBugCheckIfAppropriate(0xC4u, 0x80uLL, CurrentIrql, BugCheckParameter3, 0LL);
  }
  LOBYTE(v6) = a3;
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64))pXdvKeSetEvent)(BugCheckParameter3, a2, v6);
}
