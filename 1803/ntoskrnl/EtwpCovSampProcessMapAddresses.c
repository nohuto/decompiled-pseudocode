/*
 * XREFs of EtwpCovSampProcessMapAddresses @ 0x1407B6B3C
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1407B3478 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampContextAddAddresses @ 0x1407B4058 (EtwpCovSampContextAddAddresses.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EtwpCovSampProcessUpperBoundModule @ 0x1407B6DF0 (EtwpCovSampProcessUpperBoundModule.c)
 */

__int64 __fastcall EtwpCovSampProcessMapAddresses(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // r15
  __int64 v9; // rdi
  int v11; // eax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v13; // r14
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  unsigned __int64 *v18; // r13
  unsigned __int64 *v19; // rcx
  unsigned __int64 v20; // r15
  unsigned int v21; // eax
  _QWORD *v22; // rcx
  bool v23; // zf
  int v24; // eax
  __int64 v25; // rcx
  volatile signed __int32 *v26; // rax
  int v28; // [rsp+20h] [rbp-48h]
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]
  unsigned int v30; // [rsp+70h] [rbp+8h]

  v7 = a7;
  v9 = a2;
  v11 = MEMORY[0xFFFFF78000000320];
  *a7 = 0;
  v28 = v11;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = (volatile signed __int64 *)(a1 + 8);
  ExAcquirePushLockExclusiveEx(a1 + 8, 0LL);
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  if ( v9 != *(_QWORD *)a1 || !a6 )
    goto LABEL_22;
  v15 = 0LL;
  v17 = 0LL;
  v30 = 0;
  v18 = 0LL;
  v29 = 0LL;
  if ( !a4 )
    goto LABEL_21;
  v19 = a3;
  while ( 1 )
  {
    v20 = *v19;
    v14 = 0LL;
    if ( v18 )
    {
      if ( v20 < v15 || v20 >= *v18 )
        v18 = 0LL;
      else
        v14 = v18[1];
      if ( v14 )
        break;
    }
    v21 = EtwpCovSampProcessUpperBoundModule(a1, *v19);
    if ( v21 >= *(_DWORD *)(a1 + 32) )
    {
      v15 = v29;
    }
    else
    {
      v22 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v21);
      v14 = v22[1];
      v15 = *v22 - *(_QWORD *)(v14 + 40);
      v29 = v15;
      if ( v20 >= v15 )
      {
        v18 = (unsigned __int64 *)(*(_QWORD *)(a1 + 24) + 16LL * v21);
        break;
      }
    }
LABEL_19:
    v19 = a3 + 1;
    ++v30;
    ++a3;
    if ( v30 >= a4 )
      goto LABEL_20;
  }
  v23 = *(_DWORD *)(v14 + 132) == 0;
  *(_DWORD *)(v14 + 136) = v28;
  if ( v23 )
    _InterlockedExchange((volatile __int32 *)(v14 + 132), 1);
  v24 = *(_DWORD *)(v14 + 124);
  *(_DWORD *)(a5 + 8 * v17 + 4) = v20 - v15;
  *(_DWORD *)(a5 + 8 * v17) = v24;
  v17 = (unsigned int)(v17 + 1);
  if ( (unsigned int)v17 < a6 )
    goto LABEL_19;
LABEL_20:
  v9 = a2;
  v13 = (volatile signed __int64 *)(a1 + 8);
  v7 = a7;
LABEL_21:
  *v7 = v17;
LABEL_22:
  if ( *(struct _KTHREAD **)(a1 + 16) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13, v14, v15, v16);
    KeAbPostRelease((ULONG_PTR)v13);
    KeLeaveCriticalRegion();
  }
  if ( a1 == v9 + 736 )
  {
    v25 = 624LL;
    v26 = (volatile signed __int32 *)(v9 + 620);
  }
  else
  {
    v25 = 616LL;
    v26 = (volatile signed __int32 *)(v9 + 612);
  }
  _InterlockedExchangeAdd(v26, a4);
  return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v9 + v25), *v7);
}
