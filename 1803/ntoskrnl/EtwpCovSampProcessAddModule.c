/*
 * XREFs of EtwpCovSampProcessAddModule @ 0x1407B6798
 * Callers:
 *     EtwpCovSampImageNotify @ 0x1407B63B0 (EtwpCovSampImageNotify.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpCovSampProcessRemoveModule @ 0x1407B6D48 (EtwpCovSampProcessRemoveModule.c)
 */

__int64 __fastcall EtwpCovSampProcessAddModule(__int64 a1, PVOID *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID PoolWithTag; // r15
  volatile signed __int64 *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r12d
  unsigned int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // esi
  struct _KTHREAD *v20; // rax
  void *v21; // rax
  unsigned int v22; // esi
  _QWORD *v23; // rsi

  CurrentThread = KeGetCurrentThread();
  PoolWithTag = 0LL;
  --CurrentThread->KernelApcDisable;
  v10 = (volatile signed __int64 *)(a1 + 8);
  ExAcquirePushLockExclusiveEx(a1 + 8, 0LL);
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  if ( !*(_QWORD *)a1 )
  {
    ObfReferenceObject(*a2);
    *(_QWORD *)a1 = a2;
  }
  if ( (*(_DWORD *)(a3 + 120) & 0x10000) != 0 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = EtwpCovSampProcessRemoveModule(a1, a4, *(_QWORD *)(a3 + 40));
      v16 = *(_DWORD *)(a1 + 36);
      v17 = v15;
      v18 = *(_DWORD *)(a1 + 32);
      if ( v18 < v16 )
        break;
      v19 = 2 * v16;
      if ( !v16 )
        v19 = 16;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v10, v17, v12, v13);
      KeAbPostRelease((ULONG_PTR)v10);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x56777445u);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v19, 0x56777445u);
      if ( !PoolWithTag )
      {
        v22 = -1073741670;
        goto LABEL_30;
      }
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v10, 0LL);
      *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
      if ( v19 > *(_DWORD *)(a1 + 36) )
      {
        v21 = *(void **)(a1 + 24);
        if ( v21 )
        {
          memmove(PoolWithTag, *(const void **)(a1 + 24), 16LL * *(unsigned int *)(a1 + 32));
          v21 = *(void **)(a1 + 24);
        }
        *(_QWORD *)(a1 + 24) = PoolWithTag;
        PoolWithTag = v21;
        *(_DWORD *)(a1 + 36) = v19;
      }
      if ( (unsigned int)++v14 >= 0x14 )
      {
        v22 = -1073741823;
        goto LABEL_30;
      }
    }
    v23 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 16 * v17);
    if ( v18 > (unsigned int)v17 )
    {
      memmove(v23 + 2, (const void *)(*(_QWORD *)(a1 + 24) + 16 * v17), 16LL * (v18 - (unsigned int)v17));
      v18 = *(_DWORD *)(a1 + 32);
    }
    *(_DWORD *)(a1 + 32) = v18 + 1;
    *v23 = a4 + *(_QWORD *)(a3 + 40);
    v11 = *(_QWORD *)a1;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(a3 + 64)) <= 1 )
      __fastfail(0xEu);
    if ( *(_QWORD *)(a3 + 64) == 2LL && !*(_DWORD *)(a3 + 132) )
      _InterlockedAdd((volatile signed __int32 *)(v11 + 1108), 0xFFFFFFFF);
    v23[1] = a3;
  }
  else
  {
    EtwpCovSampProcessRemoveModule(a1, a4, *(_QWORD *)(a3 + 40));
  }
  v22 = 0;
LABEL_30:
  if ( *(struct _KTHREAD **)(a1 + 16) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10, v11, v12, v13);
    KeAbPostRelease((ULONG_PTR)v10);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x56777445u);
  return v22;
}
