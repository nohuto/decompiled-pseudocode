/*
 * XREFs of VerifierKeReleaseMutex @ 0x1407777B0
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 *     VfDeadlockReleaseResource @ 0x1407797A0 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseMutex(unsigned __int64 a1, char a2)
{
  __int64 v4; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  VfUtilCheckKernelAddress(a1, 56LL);
  VfDeadlockReleaseResource(a1, 1LL, KeGetCurrentThread(), retaddr);
  LOBYTE(v4) = a2;
  return ((__int64 (__fastcall *)(unsigned __int64, __int64))pXdvKeReleaseMutex)(a1, v4);
}
