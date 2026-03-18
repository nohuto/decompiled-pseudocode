/*
 * XREFs of WdipSemAllocatePool @ 0x1406443DC
 * Callers:
 *     WdipSemFastAllocate @ 0x14060CBAC (WdipSemFastAllocate.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WdipSemAllocatePool(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ecx
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = (a1 + 15) & 0xFFFFFFF0;
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403D0E60, 0LL);
  v6 = dword_1403D0E50;
  if ( v2 > dword_1403D0E50 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x73494457u);
    if ( !PoolWithTag )
      goto LABEL_3;
    v9 = (_QWORD *)qword_1403D0E48;
    if ( *(PVOID **)qword_1403D0E48 != &WdipSemPool )
      __fastfail(3u);
    PoolWithTag[1] = qword_1403D0E48;
    *PoolWithTag = &WdipSemPool;
    *v9 = PoolWithTag;
    v6 = 4080;
    qword_1403D0E48 = (__int64)PoolWithTag;
    qword_1403D0E58 = (__int64)(PoolWithTag + 2);
  }
  v3 = qword_1403D0E58;
  qword_1403D0E58 += v2;
  dword_1403D0E50 = v6 - v2;
LABEL_3:
  ExReleasePushLockEx((ULONG_PTR)&qword_1403D0E60, 0LL, v4, v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
