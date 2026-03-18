/*
 * XREFs of VerifierKeReleaseMutexNoReboot @ 0x140777810
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierKeReleaseMutexNoReboot(unsigned __int64 a1, char a2)
{
  __int64 v4; // rdx

  VfUtilCheckKernelAddress(a1, 56LL);
  LOBYTE(v4) = a2;
  return ((__int64 (__fastcall *)(unsigned __int64, __int64))pXdvKeReleaseMutex)(a1, v4);
}
