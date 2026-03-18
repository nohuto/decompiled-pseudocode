/*
 * XREFs of WdipSemAllocatePool @ 0x140582478
 * Callers:
 *     WdipSemFastAllocate @ 0x140467AE4 (WdipSemFastAllocate.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WdipSemAllocatePool(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // ebx
  __int64 v3; // rdi
  int v4; // ecx
  __int64 v5; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = (a1 + 15) & 0xFFFFFFF0;
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036E9E0, 0LL);
  v4 = dword_14036E9D0;
  if ( v2 > dword_14036E9D0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x73494457u);
    if ( !PoolWithTag )
      goto LABEL_4;
    v8 = (_QWORD *)qword_14036E9C8;
    if ( *(PVOID **)qword_14036E9C8 != &WdipSemPool )
      __fastfail(3u);
    PoolWithTag[1] = qword_14036E9C8;
    *PoolWithTag = &WdipSemPool;
    *v8 = PoolWithTag;
    v4 = 4080;
    qword_14036E9C8 = (__int64)PoolWithTag;
    v5 = (__int64)(PoolWithTag + 2);
  }
  else
  {
    v5 = qword_14036E9D8;
  }
  v3 = v5;
  qword_14036E9D8 = v2 + v5;
  dword_14036E9D0 = v4 - v2;
LABEL_4:
  ExReleasePushLockEx((ULONG_PTR)&qword_14036E9E0, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
