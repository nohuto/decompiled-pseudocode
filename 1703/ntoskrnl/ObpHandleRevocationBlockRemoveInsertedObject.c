/*
 * XREFs of ObpHandleRevocationBlockRemoveInsertedObject @ 0x1406C0CC0
 * Callers:
 *     ObpHandleRevocationBlockRemoveObject @ 0x140428F60 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObRevokeHandles @ 0x140579840 (ObRevokeHandles.c)
 *     ObDestroyHandleRevocationBlock @ 0x14057DB94 (ObDestroyHandleRevocationBlock.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

void __fastcall ObpHandleRevocationBlockRemoveInsertedObject(
        __int64 *a1,
        struct _EX_RUNDOWN_REF *a2,
        __int64 a3,
        char a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v9; // rcx
  __int64 **v10; // rax

  if ( a2 == (struct _EX_RUNDOWN_REF *)_InterlockedCompareExchange64(a1 + 2, 2LL, (signed __int64)a2) )
  {
    if ( !a4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[2], 0LL);
    }
    v9 = (__int64 *)*a1;
    v10 = (__int64 **)a1[1];
    if ( *(__int64 **)(*a1 + 8) != a1 || *v10 != a1 )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = (__int64)v10;
    if ( !a4 )
    {
      ExReleasePushLockEx((ULONG_PTR)&a2[2], 0LL);
      KeLeaveCriticalRegion();
    }
    ExReleaseRundownProtection(a2 + 3);
    a1[2] = a3;
  }
}
