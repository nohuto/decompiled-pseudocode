/*
 * XREFs of VerifierObfDereferenceObject @ 0x140832C20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140813F1C (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObfDereferenceObject(ULONG_PTR a1)
{
  VfUtilCheckKernelAddress(a1, 8uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvObfDereferenceObject)(a1);
}
