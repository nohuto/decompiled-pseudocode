/*
 * XREFs of EtwpCoverageResetCP @ 0x140745254
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x140579114 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     EtwTelemetryCoverageReport @ 0x14011E500 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageTableLocateInternal @ 0x14011E6B8 (TelemetryCoverageTableLocateInternal.c)
 *     EtwpCoverageValidateCP @ 0x14011E708 (EtwpCoverageValidateCP.c)
 *     TelemetryCoverageStringHashInternal @ 0x14011E7C8 (TelemetryCoverageStringHashInternal.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpCoverageFlushPending @ 0x14059C530 (EtwpCoverageFlushPending.c)
 */

__int64 __fastcall EtwpCoverageResetCP(__int64 a1, __int64 a2)
{
  _DWORD *PoolWithTag; // r14
  unsigned int v3; // ebp
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r11d
  _QWORD *v8; // rsi
  unsigned int v9; // r13d
  unsigned __int64 v10; // r12
  _BYTE *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r9d
  __int64 i; // rsi
  unsigned int *v19; // rax
  unsigned int v20; // r11d
  unsigned int v22; // [rsp+68h] [rbp+10h] BYREF
  int v23; // [rsp+70h] [rbp+18h] BYREF
  unsigned int *Internal; // [rsp+78h] [rbp+20h]

  PoolWithTag = 0LL;
  v3 = 0;
  *(_DWORD *)(a2 + 12) = 0;
  if ( (unsigned int)dword_14035650C < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140356508 )
      dword_140356508 = TelemetryCoverageStringHashInternal(off_140356500, &v23);
    EtwTelemetryCoverageReport(&off_140356500);
  }
  if ( (unsigned int)EtwpCoverageValidateCP(a2, &v22) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    *(_DWORD *)(a1 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    Internal = TelemetryCoverageTableLocateInternal(*(unsigned int **)(a1 + 16), *(_DWORD *)(a2 + 8));
    if ( *Internal == v7 )
    {
      EtwpCoverageFlushPending((int **)a1);
      PoolWithTag = ExAllocatePoolWithTag(
                      PagedPool,
                      (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL)),
                      0x56777445u);
      if ( PoolWithTag )
      {
        v8 = *(_QWORD **)(a1 + 48);
        if ( v8 != (_QWORD *)(a1 + 48) )
        {
          v9 = v22;
          while ( 1 )
          {
            v10 = v8[3];
            v11 = v8 + 5;
            if ( (unsigned __int64)(v8 + 5) < v10 )
              break;
LABEL_18:
            v8 = (_QWORD *)*v8;
            if ( v8 == (_QWORD *)(a1 + 48) )
              goto LABEL_27;
          }
          v12 = v22;
          while ( 1 )
          {
            v13 = -1LL;
            do
              ++v13;
            while ( v11[v13] );
            if ( v13 == v12 )
            {
              if ( !strcmp(v11, *(const char **)a2) )
              {
                memmove(v11, &v11[v22 + 1], v10 - (_QWORD)&v11[v22 + 1]);
                v14 = 0LL;
                v8[3] -= v9 + 1;
                v15 = 0LL;
                v8[4] = v8[3];
                ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL);
                *Internal = 0;
                --*(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
                v16 = *(_QWORD *)(a1 + 16);
                if ( *(_DWORD *)(v16 + 4) )
                {
                  do
                  {
                    v17 = *(_DWORD *)(v16 + 4 * v15 + 52);
                    if ( v17 )
                    {
                      PoolWithTag[v14] = v17;
                      v14 = (unsigned int)(v14 + 1);
                      v16 = *(_QWORD *)(a1 + 16);
                      if ( (unsigned int)v14 >= *(_DWORD *)(v16 + 32) )
                        break;
                    }
                    v15 = (unsigned int)(v15 + 1);
                  }
                  while ( (unsigned int)v15 < *(_DWORD *)(v16 + 4) );
                }
                memset((void *)(*(_QWORD *)(a1 + 16) + 52LL), 0, 4LL * *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL));
                for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL); *v19 = v20 )
                {
                  v19 = TelemetryCoverageTableLocateInternal(*(unsigned int **)(a1 + 16), PoolWithTag[i]);
                  i = (unsigned int)(i + 1);
                }
                v3 = 1;
                *(_DWORD *)(a2 + 12) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
                break;
              }
              v12 = v22;
            }
            v11 += v13 + 1;
            if ( (unsigned __int64)v11 >= v10 )
              goto LABEL_18;
          }
        }
      }
    }
  }
LABEL_27:
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x56777445u);
  return v3;
}
