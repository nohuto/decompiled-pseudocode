/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireResourceExclusive @ 0x14082CB30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfDeadlockAcquireResource @ 0x140827CF8 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierExEnterCriticalRegionAndAcquireResourceExclusive(ULONG_PTR a1)
{
  __int64 v2; // rdi
  void *v4; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = ((__int64 (*)(void))pXdvExEnterCriticalRegionAndAcquireResourceExclusive)();
  if ( (MmVerifierData & 0x400000) == 0 )
  {
    v4 = retaddr;
    goto LABEL_5;
  }
  if ( ViDeadlockDetectionEnabled )
  {
    v4 = retaddr;
LABEL_5:
    VfDeadlockAcquireResource(a1, 8u, (__int64)KeGetCurrentThread(), 0, v4);
  }
  return v2;
}
