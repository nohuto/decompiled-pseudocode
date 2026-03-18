/*
 * XREFs of VerifierExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1407BF770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfDeadlockAcquireResource @ 0x1407BA944 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierExEnterPriorityRegionAndAcquireResourceExclusive(ULONG_PTR a1)
{
  __int64 v2; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = ((__int64 (*)(void))pXdvExEnterPriorityRegionAndAcquireResourceExclusive)();
  VfDeadlockAcquireResource(a1, 8u, (__int64)KeGetCurrentThread(), 0, retaddr);
  return v2;
}
