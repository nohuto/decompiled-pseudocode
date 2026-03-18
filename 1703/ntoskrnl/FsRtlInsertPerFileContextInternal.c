/*
 * XREFs of FsRtlInsertPerFileContextInternal @ 0x140036BB0
 * Callers:
 *     FsRtlInsertReservedPerFileContext @ 0x140036BA0 (FsRtlInsertReservedPerFileContext.c)
 *     FsRtlInsertPerFileContext @ 0x1401E4340 (FsRtlInsertPerFileContext.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlInsertPerFileContextInternal(volatile signed __int64 *a1, _QWORD *a2, char a3)
{
  _QWORD *v6; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rax
  signed __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx

  if ( !a1 )
    return 3221225488LL;
  v6 = (_QWORD *)_InterlockedCompareExchange64(a1, 0LL, 0LL);
  if ( !v6 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x63665346u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    *PoolWithTag = 0LL;
    v8 = PoolWithTag + 1;
    v8[1] = v8;
    *v8 = v8;
    v6[3] = 0LL;
    v9 = _InterlockedCompareExchange64(a1, (signed __int64)v6, 0LL);
    if ( v9 )
    {
      ExFreePoolWithTag(v6, 0x63665346u);
      v6 = (_QWORD *)v9;
    }
  }
  if ( a3 )
  {
    v6[3] = a2;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
    v12 = v6 + 1;
    v13 = v6[1];
    if ( *(_QWORD **)(v13 + 8) != v6 + 1 )
      __fastfail(3u);
    *a2 = v13;
    a2[1] = v12;
    *(_QWORD *)(v13 + 8) = a2;
    *v12 = a2;
    ExReleasePushLockEx((ULONG_PTR)v6, 0LL);
    KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  }
  return 0LL;
}
