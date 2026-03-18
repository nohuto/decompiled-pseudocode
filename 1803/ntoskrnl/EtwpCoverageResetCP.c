/*
 * XREFs of EtwpCoverageResetCP @ 0x1407A6F68
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x14056F324 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     TelemetryCoverageTableLocateInternal @ 0x1400C30AC (TelemetryCoverageTableLocateInternal.c)
 *     EtwpCoverageValidateCP @ 0x1400C3100 (EtwpCoverageValidateCP.c)
 *     TelemetryCoverageStringHashInternal @ 0x1400C31C0 (TelemetryCoverageStringHashInternal.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EtwTelemetryCoverageReport @ 0x14014D4B0 (EtwTelemetryCoverageReport.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpCoverageFlushPending @ 0x140583420 (EtwpCoverageFlushPending.c)
 */

__int64 __fastcall EtwpCoverageResetCP(__int64 a1, __int64 a2)
{
  _DWORD *PoolWithTag; // r14
  unsigned int v3; // r12d
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v10; // r11d
  _QWORD *v11; // rsi
  unsigned int v12; // r13d
  unsigned __int64 v13; // rbp
  unsigned __int8 *v14; // rcx
  __int64 v15; // rax
  unsigned __int8 *v16; // rax
  __int64 v17; // r9
  __int64 v18; // r8
  _DWORD *v19; // rcx
  _DWORD *v20; // rdx
  int v21; // ecx
  __int64 v22; // rax
  __int64 i; // rsi
  unsigned int *v24; // rax
  unsigned int v25; // r11d
  unsigned int v27; // [rsp+68h] [rbp+10h] BYREF
  int v28; // [rsp+70h] [rbp+18h] BYREF
  unsigned int *Internal; // [rsp+78h] [rbp+20h]

  PoolWithTag = 0LL;
  v3 = 0;
  *(_DWORD *)(a2 + 12) = 0;
  if ( (unsigned int)dword_140399B54 < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140399B50 )
      dword_140399B50 = TelemetryCoverageStringHashInternal(off_140399B48, &v28);
    EtwTelemetryCoverageReport((__int64)&off_140399B48);
  }
  if ( (unsigned int)EtwpCoverageValidateCP(a2, &v27) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    *(_DWORD *)(a1 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    Internal = TelemetryCoverageTableLocateInternal(*(unsigned int **)(a1 + 16), *(_DWORD *)(a2 + 8));
    if ( *Internal == v10 )
    {
      EtwpCoverageFlushPending((int **)a1);
      PoolWithTag = ExAllocatePoolWithTag(
                      PagedPool,
                      (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL)),
                      0x56777445u);
      if ( PoolWithTag )
      {
        v11 = *(_QWORD **)(a1 + 48);
        if ( v11 != (_QWORD *)(a1 + 48) )
        {
          v12 = v27;
          while ( 1 )
          {
            v13 = v11[3];
            v14 = (unsigned __int8 *)(v11 + 5);
            if ( (unsigned __int64)(v11 + 5) < v13 )
              break;
LABEL_21:
            v11 = (_QWORD *)*v11;
            if ( v11 == (_QWORD *)(a1 + 48) )
              goto LABEL_31;
          }
          v15 = v27;
          while ( 1 )
          {
            v6 = -1LL;
            do
              ++v6;
            while ( v14[v6] );
            if ( v6 == v15 )
            {
              v16 = v14;
              do
              {
                v8 = v16[*(_QWORD *)a2 - (_QWORD)v14];
                v7 = *v16 - (unsigned int)v8;
                if ( (_DWORD)v7 )
                  break;
                ++v16;
              }
              while ( (_DWORD)v8 );
              if ( !(_DWORD)v7 )
              {
                memmove(v14, &v14[v27 + 1], v13 - (_QWORD)&v14[v27 + 1]);
                v17 = 0LL;
                v11[3] -= v12 + 1;
                v18 = 0LL;
                v11[4] = v11[3];
                ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL);
                *Internal = 0;
                --*(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
                v19 = *(_DWORD **)(a1 + 16);
                if ( v19[1] )
                {
                  v20 = *(_DWORD **)(a1 + 16);
                  do
                  {
                    v21 = v20[v18 + 13];
                    if ( v21 )
                    {
                      PoolWithTag[v17] = v21;
                      v17 = (unsigned int)(v17 + 1);
                      v19 = *(_DWORD **)(a1 + 16);
                      v20 = v19;
                      if ( (unsigned int)v17 >= v19[8] )
                        break;
                    }
                    v18 = (unsigned int)(v18 + 1);
                    v19 = v20;
                  }
                  while ( (unsigned int)v18 < v20[1] );
                }
                memset(v19 + 13, 0, 4LL * (unsigned int)v19[1]);
                v22 = *(_QWORD *)(a1 + 16);
                for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v22 + 32); v22 = *(_QWORD *)(a1 + 16) )
                {
                  v24 = TelemetryCoverageTableLocateInternal(*(unsigned int **)(a1 + 16), PoolWithTag[i]);
                  i = (unsigned int)(i + 1);
                  *v24 = v25;
                }
                v3 = 1;
                *(_DWORD *)(a2 + 12) = *(_DWORD *)(v22 + 24);
                break;
              }
              v15 = v27;
            }
            v14 += v6 + 1;
            if ( (unsigned __int64)v14 >= v13 )
              goto LABEL_21;
          }
        }
      }
    }
  }
LABEL_31:
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock, v6, v7, v8);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x56777445u);
  return v3;
}
