/*
 * XREFs of VerifierObfReferenceObjectWithTag @ 0x1407833F0
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObfReferenceObjectWithTag(unsigned __int64 a1, unsigned int a2)
{
  VfUtilCheckKernelAddress(a1, 8LL);
  return ((__int64 (__fastcall *)(unsigned __int64, _QWORD))pXdvObfReferenceObjectWithTag)(a1, a2);
}
