/*
 * XREFs of EtwpCovSampContextCleanup @ 0x1407B43D4
 * Callers:
 *     EtwpCoverageSamplerCleanup @ 0x1407B7488 (EtwpCoverageSamplerCleanup.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x1407B5B40 (EtwpCovSampContextRemoveAndFreeModule.c)
 *     EtwpCovSampProcessCleanup @ 0x1407B6A0C (EtwpCovSampProcessCleanup.c)
 */

_QWORD *__fastcall EtwpCovSampContextCleanup(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // r8
  unsigned __int64 v4; // r9
  _QWORD *v5; // r10
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *i; // rcx
  _QWORD *v9; // r10
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *j; // rcx
  __int64 *v13; // rsi
  __int64 v14; // rdx
  void *v15; // rcx

  EtwpCovSampProcessCleanup(a1 + 736, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 664, 0LL);
  *(_QWORD *)(a1 + 672) = KeGetCurrentThread();
  v5 = *(_QWORD **)(a1 + 688);
  v6 = v5;
  while ( 1 )
  {
    if ( !v6 )
      goto LABEL_7;
    v7 = (_QWORD *)*v6;
    if ( (*v6 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v7 = (_QWORD *)*v6;
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
LABEL_7:
      v3 = v5 + 1;
      v4 = *(_QWORD *)(a1 + 688) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 684) >> 5);
      while ( 1 )
      {
        if ( (unsigned __int64)v3 >= v4 )
        {
          v7 = 0LL;
          goto LABEL_12;
        }
        if ( (*v3 & 1) == 0 )
          break;
        ++v3;
      }
      v6 = (_QWORD *)*v3;
      v5 = v3;
      v7 = (_QWORD *)*v3;
    }
    else
    {
      v6 = v7;
    }
LABEL_12:
    if ( !v7 )
      break;
    v3 = v6;
    for ( i = v5; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v6 )
      {
        *i = *v6;
        --*(_DWORD *)(a1 + 680);
        *v6 |= 0x8000000000000002uLL;
        v6 = i;
        goto LABEL_20;
      }
    }
    v3 = 0LL;
LABEL_20:
    *v3 = 0LL;
  }
  v9 = *(_QWORD **)(a1 + 704);
  v10 = v9;
  while ( 1 )
  {
    if ( !v10 )
      goto LABEL_27;
    v11 = (_QWORD *)*v10;
    if ( (*v10 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v11 = (_QWORD *)*v10;
    if ( ((unsigned __int8)v11 & 1) != 0 )
    {
LABEL_27:
      v3 = v9 + 1;
      v4 = *(_QWORD *)(a1 + 704) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 700) >> 5);
      while ( 1 )
      {
        if ( (unsigned __int64)v3 >= v4 )
        {
          v11 = 0LL;
          goto LABEL_32;
        }
        if ( (*v3 & 1) == 0 )
          break;
        ++v3;
      }
      v10 = (_QWORD *)*v3;
      v9 = v3;
      v11 = (_QWORD *)*v3;
    }
    else
    {
      v10 = v11;
    }
LABEL_32:
    if ( !v11 )
      break;
    v3 = v10;
    for ( j = v9; (*j & 1) == 0; j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v10 )
      {
        *j = *v10;
        --*(_DWORD *)(a1 + 696);
        *v10 |= 0x8000000000000002uLL;
        v10 = j;
        goto LABEL_40;
      }
    }
    v3 = 0LL;
LABEL_40:
    *v3 = 0LL;
  }
  v13 = (__int64 *)(a1 + 712);
  while ( 1 )
  {
    v14 = *v13;
    if ( (__int64 *)*v13 == v13 )
      break;
    *(_DWORD *)(v14 - 72 + 132) = 0;
    EtwpCovSampContextRemoveAndFreeModule(a1);
  }
  v15 = *(void **)(a1 + 688);
  if ( v15 )
    ExFreePoolWithTag(v15, 0x56777445u);
  *(_QWORD *)(a1 + 672) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 664), v14, (__int64)v3, v4);
  KeAbPostRelease(a1 + 664);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
