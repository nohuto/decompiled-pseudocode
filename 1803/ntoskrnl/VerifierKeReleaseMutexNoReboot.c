/*
 * XREFs of VerifierKeReleaseMutexNoReboot @ 0x1408269B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140813F1C (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierKeReleaseMutexNoReboot(ULONG_PTR a1, char a2)
{
  __int64 v4; // rdx

  VfUtilCheckKernelAddress(a1, 0x38uLL);
  LOBYTE(v4) = a2;
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvKeReleaseMutex)(a1, v4);
}
