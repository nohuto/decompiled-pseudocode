/*
 * XREFs of PfpRpCHashEmpty @ 0x14064A428
 * Callers:
 *     PfpRpControlRequestReset @ 0x14064A3D0 (PfpRpControlRequestReset.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PfpRpCHashEmpty(__int64 a1, __int64 a2, volatile signed __int64 *a3)
{
  int v3; // r10d
  int v4; // r9d
  unsigned int v7; // eax
  unsigned int v8; // eax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v10; // rdi
  struct _KTHREAD *v11; // rax
  void *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int128 v19; // [rsp+20h] [rbp-28h]
  __int64 v20; // [rsp+30h] [rbp-18h]

  v3 = -1;
  v4 = 1 << *(_DWORD *)(a2 + 8);
  v7 = v4;
  if ( v4 )
  {
    do
    {
      ++v3;
      v7 >>= 1;
    }
    while ( v7 );
  }
  LODWORD(v20) = 0;
  v8 = v3 + 1;
  if ( ((v4 - 1) & v4) == 0 )
    v8 = v3;
  *(_QWORD *)&v19 = 0LL;
  *((_QWORD *)&v19 + 1) = v8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (volatile signed __int64 *)(a1 + 128);
  ExAcquirePushLockExclusiveEx(a1 + 128, 0LL);
  v11 = KeGetCurrentThread();
  v12 = *(void **)a2;
  --v11->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)a3, 0LL);
  *(_OWORD *)a2 = v19;
  *(_QWORD *)(a2 + 16) = v20;
  if ( (_InterlockedExchangeAdd64(a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a3, v13, v14, v15);
  KeAbPostRelease((ULONG_PTR)a3);
  KeLeaveCriticalRegion();
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10, v16, v17, v18);
  KeAbPostRelease((ULONG_PTR)v10);
  KeLeaveCriticalRegion();
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
}
