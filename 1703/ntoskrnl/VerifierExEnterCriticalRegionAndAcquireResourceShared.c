/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireResourceShared @ 0x14077D780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfDeadlockAcquireResource @ 0x140778A28 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierExEnterCriticalRegionAndAcquireResourceShared(__int64 a1)
{
  __int64 v2; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = ((__int64 (*)(void))pXdvExEnterCriticalRegionAndAcquireResourceShared)();
  VfDeadlockAcquireResource(a1, 8u, (__int64)KeGetCurrentThread(), 0, retaddr);
  return v2;
}
