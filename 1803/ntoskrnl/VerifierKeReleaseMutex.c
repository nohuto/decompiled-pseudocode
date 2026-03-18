/*
 * XREFs of VerifierKeReleaseMutex @ 0x140826950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140813F1C (VfUtilCheckKernelAddress.c)
 *     VfDeadlockReleaseResource @ 0x140828A64 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseMutex(ULONG_PTR a1, char a2)
{
  __int64 v4; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  VfUtilCheckKernelAddress(a1, 0x38uLL);
  VfDeadlockReleaseResource(a1, 1LL, KeGetCurrentThread(), retaddr);
  LOBYTE(v4) = a2;
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvKeReleaseMutex)(a1, v4);
}
