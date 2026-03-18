/*
 * XREFs of VerifierObfDereferenceObjectWithTag @ 0x140783350
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObfDereferenceObjectWithTag(unsigned __int64 a1, unsigned int a2)
{
  VfUtilCheckKernelAddress(a1, 8LL);
  return ((__int64 (__fastcall *)(unsigned __int64, _QWORD))pXdvObfDereferenceObjectWithTag)(a1, a2);
}
