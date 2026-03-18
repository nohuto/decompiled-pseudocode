/*
 * XREFs of VerifierKeReleaseMutantNoReboot @ 0x140777750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierKeReleaseMutantNoReboot(unsigned __int64 a1, unsigned int a2, char a3, char a4)
{
  __int64 v8; // r9
  __int64 v9; // r8

  VfUtilCheckKernelAddress(a1, 56LL);
  LOBYTE(v8) = a4;
  LOBYTE(v9) = a3;
  return ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, __int64))pXdvKeReleaseMutant)(a1, a2, v9, v8);
}
