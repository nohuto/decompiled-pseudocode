/*
 * XREFs of VerifierKeReleaseMutant @ 0x140826870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140813F1C (VfUtilCheckKernelAddress.c)
 *     VfDeadlockReleaseResource @ 0x140828A64 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseMutant(ULONG_PTR a1, unsigned int a2, char a3, char a4)
{
  __int64 v8; // r9
  __int64 v9; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]

  VfUtilCheckKernelAddress(a1, 0x38uLL);
  VfDeadlockReleaseResource(a1, (unsigned int)(a3 != 0) + 1, KeGetCurrentThread(), retaddr);
  LOBYTE(v8) = a4;
  LOBYTE(v9) = a3;
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64, __int64))pXdvKeReleaseMutant)(a1, a2, v9, v8);
}
