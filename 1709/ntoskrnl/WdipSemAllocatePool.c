/*
 * XREFs of WdipSemAllocatePool @ 0x1405AACEC
 * Callers:
 *     WdipSemFastAllocate @ 0x1405AAA04 (WdipSemFastAllocate.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WdipSemAllocatePool(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // ebx
  __int64 v3; // rdi
  int v4; // ecx
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = (a1 + 15) & 0xFFFFFFF0;
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14038CBA0, 0LL);
  v4 = dword_14038CB90;
  if ( v2 > dword_14038CB90 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x73494457u);
    if ( !PoolWithTag )
      goto LABEL_3;
    v7 = (_QWORD *)qword_14038CB88;
    if ( *(PVOID **)qword_14038CB88 != &WdipSemPool )
      __fastfail(3u);
    PoolWithTag[1] = qword_14038CB88;
    *PoolWithTag = &WdipSemPool;
    *v7 = PoolWithTag;
    v4 = 4080;
    qword_14038CB88 = (__int64)PoolWithTag;
    qword_14038CB98 = (__int64)(PoolWithTag + 2);
  }
  v3 = qword_14038CB98;
  qword_14038CB98 += v2;
  dword_14038CB90 = v4 - v2;
LABEL_3:
  ExReleasePushLockEx((ULONG_PTR)&qword_14038CBA0, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
