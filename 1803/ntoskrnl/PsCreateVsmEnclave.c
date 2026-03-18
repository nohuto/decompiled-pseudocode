/*
 * XREFs of PsCreateVsmEnclave @ 0x14077F3CC
 * Callers:
 *     MiCreateVsmEnclave @ 0x140751EE4 (MiCreateVsmEnclave.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PspQueueApcSpecialApc @ 0x14052A140 (PspQueueApcSpecialApc.c)
 *     VslCreateEnclave @ 0x14071818C (VslCreateEnclave.c)
 *     PspVsmEnclaveHashAllocator @ 0x1407801D8 (PspVsmEnclaveHashAllocator.c)
 */

__int64 __fastcall PsCreateVsmEnclave(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        _QWORD *a7)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char *PoolWithQuotaTag; // rdi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  char *v20; // rax
  char *v21; // r14
  int Enclave; // edi
  signed __int64 v23; // rax
  struct _KTHREAD *v24; // rax
  volatile signed __int64 *v25; // r12
  __int64 v26; // r15
  char v27; // di
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  char *v30; // r8
  unsigned __int64 v31; // rcx
  unsigned int v32; // r9d
  __int64 v33; // r10
  __int64 v34; // r12
  _QWORD *v35; // r11
  unsigned __int64 v36; // rcx
  void *v37; // rcx
  int v38; // eax
  __int64 v39; // r9
  unsigned int v40; // r8d
  char v41; // al
  __int64 v42; // r8
  unsigned __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rdx

  if ( !*(_QWORD *)(a1 + 1824) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = (volatile signed __int64 *)(a1 + 1840);
    ExAcquirePushLockExclusiveEx(a1 + 1840, 0LL);
    if ( !*(_QWORD *)(a1 + 1824) )
    {
      PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x20uLL, 0x48457350u);
      if ( PoolWithQuotaTag )
      {
        v17 = (unsigned __int64)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x48457350u);
        *(_QWORD *)(a1 + 1824) = v17;
        if ( v17 )
        {
          *(_DWORD *)v17 = 0;
          *(_QWORD *)(v17 + 8) = PoolWithQuotaTag;
          *(_DWORD *)(v17 + 4) = 128;
          v18 = v17 | 1;
          if ( (PoolWithQuotaTag + 32 >= PoolWithQuotaTag ? 4 : 0) != 0 )
            memset64(PoolWithQuotaTag, v18, PoolWithQuotaTag + 32 >= PoolWithQuotaTag ? 4 : 0);
        }
        else
        {
          ExFreePoolWithTag(PoolWithQuotaTag, 0);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12, v13, v14, v15);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !*(_QWORD *)(a1 + 1824) )
      return 3221225626LL;
  }
  v20 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x88uLL, 0x65567350u);
  v21 = v20;
  if ( !v20 )
    return 3221225626LL;
  memset(v20, 0, 0x88uLL);
  Enclave = VslCreateEnclave((__int64)v21, a1, a2, a3, a4, a5, a6, (_QWORD *)v21 + 3);
  if ( Enclave >= 0 )
  {
    *((_QWORD *)v21 + 4) = a3;
    *((_QWORD *)v21 + 2) = 1LL;
    *((_QWORD *)v21 + 14) = 0LL;
    *((_QWORD *)v21 + 13) = 0LL;
    if ( !*((_QWORD *)v21 + 1) )
    {
      do
      {
        v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1832), 1uLL);
        *((_QWORD *)v21 + 1) = v23 + 1;
      }
      while ( v23 == -1 );
    }
    *((_QWORD *)v21 + 6) = 0LL;
    KeInitializeEvent((PRKEVENT)(v21 + 80), NotificationEvent, 0);
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    v25 = (volatile signed __int64 *)(a1 + 1840);
    ExAcquirePushLockExclusiveEx(a1 + 1840, 0LL);
    v26 = *(_QWORD *)(a1 + 1824);
    if ( *(_DWORD *)v26 >= (unsigned int)(4 * (*(_DWORD *)(v26 + 4) >> 5)) )
    {
      v27 = -1;
      v28 = 2 * ((unsigned __int64)*(unsigned int *)(v26 + 4) >> 5);
      if ( v28 <= 0xFFFFFFFF )
      {
        v29 = (unsigned int)v28;
        if ( (unsigned int)v28 < 4 )
          v29 = 4LL;
        v30 = (char *)PspVsmEnclaveHashAllocator(8LL * (unsigned int)v29);
        if ( v30 )
        {
          if ( (((_DWORD)v29 - 1) & (unsigned int)v29) != 0 )
          {
            do
            {
              ++v27;
              LODWORD(v29) = (unsigned int)v29 >> 1;
            }
            while ( (_DWORD)v29 );
            v29 = (unsigned int)(1 << v27);
          }
          if ( (unsigned int)v29 > 0x4000000 )
            v29 = 0x4000000LL;
          v31 = (unsigned int)v29;
          if ( v30 > &v30[8 * v29] )
            v31 = 0LL;
          if ( v31 )
            memset64(v30, v26 | 1, v31);
          v32 = 0;
          v33 = -1LL << (*(_BYTE *)(v26 + 4) & 0x1F);
          if ( (*(_DWORD *)(v26 + 4) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v34 = *(_QWORD *)(v26 + 8);
              while ( 1 )
              {
                v35 = *(_QWORD **)(v34 + 8LL * v32);
                if ( ((unsigned __int8)v35 & 1) != 0 )
                  break;
                *(_QWORD *)(v34 + 8LL * v32) = *v35;
                v36 = ((((unsigned __int64)v33 & v35[1]) >> 56)
                     + 37
                     * ((unsigned __int8)(((unsigned __int64)v33 & v35[1]) >> 48)
                      + 37
                      * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v33 & v35[1]) >> 32) >> 8)
                       + 37
                       * ((unsigned __int8)(((unsigned __int64)v33 & v35[1]) >> 32)
                        + 37
                        * ((((unsigned int)v33 & (_DWORD)v35[1]) >> 24)
                         + 37
                         * ((unsigned __int8)(((unsigned int)v33 & (_DWORD)v35[1]) >> 16)
                          + 37
                          * (37 * ((unsigned __int8)(v33 & v35[1]) + 11623883)
                           + (unsigned __int8)((unsigned __int16)(v33 & v35[1]) >> 8)))))))) & (unsigned int)(v29 - 1);
                *v35 = *(_QWORD *)&v30[8 * v36];
                *(_QWORD *)&v30[8 * v36] = v35;
              }
              ++v32;
            }
            while ( v32 < *(_DWORD *)(v26 + 4) >> 5 );
            v25 = (volatile signed __int64 *)(a1 + 1840);
          }
          v37 = *(void **)(v26 + 8);
          v38 = (32 * v29) | *(_DWORD *)(v26 + 4) & 0x1F;
          *(_QWORD *)(v26 + 8) = v30;
          *(_DWORD *)(v26 + 4) = v38;
          if ( v37 )
            PspQueueApcSpecialApc(v37);
        }
      }
    }
    v39 = *(_QWORD *)(a1 + 1824);
    v40 = *(_DWORD *)(v39 + 4);
    v41 = v40 & 0x1F;
    v42 = v40 >> 5;
    v43 = *((_QWORD *)v21 + 1) & (-1LL << v41);
    v44 = *(_QWORD *)(v39 + 8);
    v45 = (HIBYTE(v43)
         + 37
         * (BYTE6(v43)
          + 37
          * (BYTE5(v43)
           + 37
           * (BYTE4(v43)
            + 37
            * (((*((_DWORD *)v21 + 2) & (unsigned int)(-1 << v41)) >> 24)
             + 37
             * ((unsigned __int8)((*((_DWORD *)v21 + 2) & (unsigned int)(-1 << v41)) >> 16)
              + 37
              * ((unsigned __int8)((unsigned __int16)(*((_WORD *)v21 + 4) & (-1 << v41)) >> 8)
               + 37 * ((unsigned __int8)v43 + 11623883)))))))) & (unsigned int)(v42 - 1);
    *(_QWORD *)v21 = *(_QWORD *)(v44 + 8 * v45);
    *(_QWORD *)(v44 + 8 * v45) = v21;
    ++*(_DWORD *)v39;
    if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v25, v45, v42, v39);
    KeAbPostRelease((ULONG_PTR)v25);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    *a7 = v21;
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(v21, 0);
    return (unsigned int)Enclave;
  }
}
