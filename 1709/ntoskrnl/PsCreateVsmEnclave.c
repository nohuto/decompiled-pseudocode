/*
 * XREFs of PsCreateVsmEnclave @ 0x14071B904
 * Callers:
 *     MiCreateVsmEnclave @ 0x1406E8520 (MiCreateVsmEnclave.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PspQueueApcSpecialApc @ 0x140453160 (PspQueueApcSpecialApc.c)
 *     VslCreateEnclave @ 0x1406B355C (VslCreateEnclave.c)
 *     PspVsmEnclaveHashAllocator @ 0x14071C67C (PspVsmEnclaveHashAllocator.c)
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
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v12; // rsi
  char *PoolWithQuotaTag; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  char *v17; // rax
  char *v18; // r14
  int Enclave; // edi
  signed __int64 v20; // rax
  struct _KTHREAD *v21; // rax
  volatile signed __int64 *v22; // r12
  __int64 v23; // r13
  char v24; // di
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  char *v27; // r8
  unsigned __int64 v28; // rcx
  unsigned int v29; // edi
  __int64 v30; // r10
  __int64 v31; // r12
  _QWORD *v32; // r9
  __int64 v33; // rdx
  void *v34; // rcx
  int v35; // esi
  __int64 v36; // r8
  unsigned int v37; // edi
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // [rsp+40h] [rbp-10h]
  __int64 v41; // [rsp+90h] [rbp+40h]

  v9 = a2;
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
        v14 = (unsigned __int64)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x48457350u);
        *(_QWORD *)(a1 + 1824) = v14;
        if ( v14 )
        {
          *(_DWORD *)v14 = 0;
          *(_QWORD *)(v14 + 8) = PoolWithQuotaTag;
          *(_DWORD *)(v14 + 4) = 128;
          v15 = v14 | 1;
          if ( (PoolWithQuotaTag + 32 >= PoolWithQuotaTag ? 4 : 0) != 0 )
            memset64(PoolWithQuotaTag, v15, PoolWithQuotaTag + 32 >= PoolWithQuotaTag ? 4 : 0);
        }
        else
        {
          ExFreePoolWithTag(PoolWithQuotaTag, 0);
        }
      }
      v9 = a2;
    }
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !*(_QWORD *)(a1 + 1824) )
      return 3221225626LL;
  }
  v17 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x88uLL, 0x65567350u);
  v18 = v17;
  if ( !v17 )
    return 3221225626LL;
  memset(v17, 0, 0x88uLL);
  Enclave = VslCreateEnclave((__int64)v18, a1, v9, a3, a4, a5, a6, (_QWORD *)v18 + 3);
  if ( Enclave >= 0 )
  {
    *((_QWORD *)v18 + 4) = a3;
    *((_QWORD *)v18 + 2) = 1LL;
    *((_QWORD *)v18 + 14) = 0LL;
    *((_QWORD *)v18 + 13) = 0LL;
    if ( !*((_QWORD *)v18 + 1) )
    {
      do
      {
        v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1832), 1uLL);
        *((_QWORD *)v18 + 1) = v20 + 1;
      }
      while ( v20 == -1 );
    }
    *((_QWORD *)v18 + 6) = 0LL;
    KeInitializeEvent((PRKEVENT)(v18 + 80), NotificationEvent, 0);
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    v22 = (volatile signed __int64 *)(a1 + 1840);
    ExAcquirePushLockExclusiveEx(a1 + 1840, 0LL);
    v23 = *(_QWORD *)(a1 + 1824);
    if ( *(_DWORD *)v23 >= (unsigned int)(4 * (*(_DWORD *)(v23 + 4) >> 5)) )
    {
      v24 = -1;
      v25 = 2 * ((unsigned __int64)*(unsigned int *)(v23 + 4) >> 5);
      if ( v25 <= 0xFFFFFFFF )
      {
        v26 = (unsigned int)v25;
        if ( (unsigned int)v25 < 4 )
          v26 = 4LL;
        v27 = (char *)PspVsmEnclaveHashAllocator(8LL * (unsigned int)v26);
        if ( v27 )
        {
          if ( (((_DWORD)v26 - 1) & (unsigned int)v26) != 0 )
          {
            do
            {
              ++v24;
              LODWORD(v26) = (unsigned int)v26 >> 1;
            }
            while ( (_DWORD)v26 );
            v26 = (unsigned int)(1 << v24);
          }
          if ( (unsigned int)v26 > 0x4000000 )
            v26 = 0x4000000LL;
          v28 = (unsigned int)v26;
          if ( v27 > &v27[8 * v26] )
            v28 = 0LL;
          if ( v28 )
            memset64(v27, v23 | 1, v28);
          v29 = 0;
          v30 = -1LL << (*(_BYTE *)(v23 + 4) & 0x1F);
          if ( (*(_DWORD *)(v23 + 4) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v31 = *(_QWORD *)(v23 + 8);
              while ( 1 )
              {
                v32 = *(_QWORD **)(v31 + 8LL * v29);
                if ( ((unsigned __int8)v32 & 1) != 0 )
                  break;
                *(_QWORD *)(v31 + 8LL * v29) = *v32;
                v41 = v30 & v32[1];
                v33 = (37
                     * (BYTE6(v41)
                      + 37
                      * (BYTE5(v41)
                       + 37
                       * (BYTE4(v41)
                        + 37
                        * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883)))))))
                     + HIBYTE(v41)) & (unsigned int)(v26 - 1);
                *v32 = *(_QWORD *)&v27[8 * v33];
                *(_QWORD *)&v27[8 * v33] = v32;
              }
              ++v29;
            }
            while ( v29 < *(_DWORD *)(v23 + 4) >> 5 );
            v22 = (volatile signed __int64 *)(a1 + 1840);
          }
          v34 = *(void **)(v23 + 8);
          v35 = *(_DWORD *)(v23 + 4) & 0x1F | (32 * v26);
          *(_QWORD *)(v23 + 8) = v27;
          *(_DWORD *)(v23 + 4) = v35;
          if ( v34 )
            PspQueueApcSpecialApc(v34);
        }
      }
    }
    v36 = *(_QWORD *)(a1 + 1824);
    v37 = *(_DWORD *)(v36 + 4);
    v40 = *((_QWORD *)v18 + 1) & (-1LL << (v37 & 0x1F));
    v38 = *(_QWORD *)(v36 + 8);
    v39 = (37
         * (BYTE6(v40)
          + 37
          * (BYTE5(v40)
           + 37
           * (BYTE4(v40)
            + 37 * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))
         + HIBYTE(v40)) & ((v37 >> 5) - 1);
    *(_QWORD *)v18 = *(_QWORD *)(v38 + 8 * v39);
    *(_QWORD *)(v38 + 8 * v39) = v18;
    ++*(_DWORD *)v36;
    if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v22);
    KeAbPostRelease((ULONG_PTR)v22);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    *a7 = v18;
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(v18, 0);
    return (unsigned int)Enclave;
  }
}
