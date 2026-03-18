/*
 * XREFs of VerifierObfDereferenceObject @ 0x140783320
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObfDereferenceObject(unsigned __int64 a1)
{
  VfUtilCheckKernelAddress(a1, 8LL);
  return ((__int64 (__fastcall *)(unsigned __int64))pXdvObfDereferenceObject)(a1);
}
