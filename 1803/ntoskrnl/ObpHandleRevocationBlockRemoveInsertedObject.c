/*
 * XREFs of ObpHandleRevocationBlockRemoveInsertedObject @ 0x140758C60
 * Callers:
 *     ObpHandleRevocationBlockRemoveObject @ 0x140552910 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObDestroyHandleRevocationBlock @ 0x14056FD8C (ObDestroyHandleRevocationBlock.c)
 *     ObRevokeHandles @ 0x1405EE8C4 (ObRevokeHandles.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 */

void __fastcall ObpHandleRevocationBlockRemoveInsertedObject(
        __int64 *a1,
        struct _EX_RUNDOWN_REF *a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // bp
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v9; // rcx
  __int64 **v10; // rax

  v5 = a4;
  if ( a2 == (struct _EX_RUNDOWN_REF *)_InterlockedCompareExchange64(a1 + 2, 2LL, (signed __int64)a2) )
  {
    if ( !(_BYTE)a4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[2], 0LL);
    }
    v9 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v10 = (__int64 **)a1[1], *v10 != a1) )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = (__int64)v10;
    if ( !v5 )
    {
      ExReleasePushLockEx((ULONG_PTR)&a2[2], 0LL, a3, a4);
      KeLeaveCriticalRegion();
    }
    ExReleaseRundownProtection(a2 + 3);
    a1[2] = a3;
  }
}
