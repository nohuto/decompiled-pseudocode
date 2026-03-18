/*
 * XREFs of VerifierObGetObjectSecurity @ 0x1407830A0
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObGetObjectSecurity(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  VfUtilCheckKernelAddress(a1, 8LL);
  return ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))pXdvObGetObjectSecurity)(a1, a2, a3);
}
