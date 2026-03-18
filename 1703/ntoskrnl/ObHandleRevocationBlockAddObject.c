/*
 * XREFs of ObHandleRevocationBlockAddObject @ 0x1406C0BF0
 * Callers:
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 * Callees:
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14000DF50 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

__int64 __fastcall ObHandleRevocationBlockAddObject(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rbx
  BOOLEAN v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF **Count; // rax

  v3 = 0;
  v4 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(a2 - 48);
  if ( v4 )
  {
    v5 = ExAcquireRundownProtection(a1 + 3);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&a1[2], 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16), (signed __int64)a1, 0LL) )
    {
      v3 = -1073741823;
    }
    else
    {
      Count = (struct _EX_RUNDOWN_REF **)a1[1].Count;
      if ( *Count != a1 )
        __fastfail(3u);
      *(_QWORD *)v4 = a1;
      *(_QWORD *)(v4 + 8) = Count;
      *Count = (struct _EX_RUNDOWN_REF *)v4;
      a1[1].Count = v4;
    }
    ExReleasePushLockEx((ULONG_PTR)&a1[2], 0LL);
    KeLeaveCriticalRegion();
    if ( v3 < 0 && v5 )
      ExReleaseRundownProtection(a1 + 3);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v3;
}
