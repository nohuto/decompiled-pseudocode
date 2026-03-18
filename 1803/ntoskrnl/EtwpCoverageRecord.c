/*
 * XREFs of EtwpCoverageRecord @ 0x14056F594
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x14014D4B0 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x1402ADDA0 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     EtwSetProcessTelemetryCoverage @ 0x14056F324 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     _TlgCreateSz @ 0x140076288 (_TlgCreateSz.c)
 *     TelemetryCoverageTableLocateInternal @ 0x1400C30AC (TelemetryCoverageTableLocateInternal.c)
 *     EtwpCoverageValidateCP @ 0x1400C3100 (EtwpCoverageValidateCP.c)
 *     EtwpCoverageAddToStringBuffer @ 0x1400C3200 (EtwpCoverageAddToStringBuffer.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     EtwpCoverageFlushPending @ 0x140583420 (EtwpCoverageFlushPending.c)
 *     EtwpCoverageEnsureStringBuffer @ 0x14064D958 (EtwpCoverageEnsureStringBuffer.c)
 */

void __fastcall EtwpCoverageRecord(int **a1, __int64 a2)
{
  int v4; // r14d
  int v5; // r15d
  unsigned __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // r12d
  unsigned int v12; // ecx
  int v13; // edx
  unsigned int *v14; // r14
  unsigned int *Internal; // r13
  int v16; // r11d
  int *v17; // rcx
  int *v18; // rcx
  const CHAR *v19; // rdx
  int v20; // eax
  int *v21; // rcx
  const CHAR *v22; // rdx
  int v23; // r12d
  int v24; // [rsp+30h] [rbp-D0h]
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+4Ch] [rbp-B4h] BYREF
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+54h] [rbp-ACh] BYREF
  int v32; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+5Ch] [rbp-A4h] BYREF
  int v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+64h] [rbp-9Ch] BYREF
  _QWORD v36[3]; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR v37; // [rsp+80h] [rbp-80h] BYREF
  int *v38; // [rsp+A0h] [rbp-60h]
  int v39; // [rsp+A8h] [rbp-58h]
  int v40; // [rsp+ACh] [rbp-54h]
  int *v41; // [rsp+B0h] [rbp-50h]
  int v42; // [rsp+B8h] [rbp-48h]
  int v43; // [rsp+BCh] [rbp-44h]
  int *v44; // [rsp+C0h] [rbp-40h]
  int v45; // [rsp+C8h] [rbp-38h]
  int v46; // [rsp+CCh] [rbp-34h]
  int *v47; // [rsp+D0h] [rbp-30h]
  int v48; // [rsp+D8h] [rbp-28h]
  int v49; // [rsp+DCh] [rbp-24h]
  int *v50; // [rsp+E0h] [rbp-20h]
  int v51; // [rsp+E8h] [rbp-18h]
  int v52; // [rsp+ECh] [rbp-14h]
  int *v53; // [rsp+F0h] [rbp-10h]
  int v54; // [rsp+F8h] [rbp-8h]
  int v55; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  int *v58; // [rsp+130h] [rbp+30h]
  int v59; // [rsp+138h] [rbp+38h]
  int v60; // [rsp+13Ch] [rbp+3Ch]
  int *v61; // [rsp+140h] [rbp+40h]
  int v62; // [rsp+148h] [rbp+48h]
  int v63; // [rsp+14Ch] [rbp+4Ch]
  int *v64; // [rsp+150h] [rbp+50h]
  int v65; // [rsp+158h] [rbp+58h]
  int v66; // [rsp+15Ch] [rbp+5Ch]
  int *v67; // [rsp+160h] [rbp+60h]
  int v68; // [rsp+168h] [rbp+68h]
  int v69; // [rsp+16Ch] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+170h] [rbp+70h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v24 = v6;
  if ( (unsigned int)EtwpCoverageValidateCP(a2, &v25) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
    v11 = *(_DWORD *)(a2 + 12);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    v12 = a1[2][6];
    if ( v11 >= v12 )
    {
      v5 = 1;
    }
    else
    {
      v13 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 12) = v12;
      v14 = (unsigned int *)a1[2];
      Internal = TelemetryCoverageTableLocateInternal(v14, v13);
      if ( *Internal == v16 )
      {
        v4 = 0;
        v5 = 1;
      }
      else if ( v14[8] >= *((_DWORD *)a1 + 8) )
      {
        _InterlockedIncrement(*a1 + 1);
        v4 = 0;
      }
      else
      {
        v4 = EtwpCoverageAddToStringBuffer((__int64)a1[5], *(const char **)a2, v25);
        if ( v4 )
          goto LABEL_6;
        EtwpCoverageFlushPending(a1);
        if ( (int)EtwpCoverageEnsureStringBuffer(a1) >= 0 )
        {
          v4 = EtwpCoverageAddToStringBuffer((__int64)a1[5], *(const char **)a2, v25);
LABEL_6:
          *Internal = *(_DWORD *)(a2 + 8);
          ++*((_DWORD *)a1 + 16);
          ++a1[2][8];
          if ( *((_DWORD *)a1 + 16) == 1 )
          {
            v17 = *a1;
            v36[1] = -1LL;
            v36[0] = 0LL;
            KeSetTimer2((__int64)(v17 + 60), -10000LL * *((unsigned int *)a1 + 7), 0LL, (__int64)v36);
          }
          goto LABEL_8;
        }
        *(_DWORD *)(a2 + 12) = v11;
        _InterlockedIncrement(*a1 + 1);
      }
    }
LABEL_8:
    LODWORD(v6) = v24;
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock, v7, v8, v9);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegion();
  }
  if ( !v5 && v4 && stru_140397820.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397820, 2uLL) )
  {
    v18 = *a1;
    v19 = *(const CHAR **)a2;
    v26 = **a1;
    v27 = v18[1];
    v28 = v6 - v18[4];
    v20 = v6 - v18[5];
    v60 = 0;
    v63 = 0;
    v66 = 0;
    v69 = 0;
    v29 = v20;
    v58 = &v26;
    v61 = &v27;
    v64 = &v28;
    v67 = &v29;
    v59 = 4;
    v62 = 4;
    v65 = 4;
    v68 = 4;
    TlgCreateSz(&pDesc, v19);
    TlgWrite(&stru_140397820, &unk_14030E353, 0LL, 0LL, 7u, &pData);
  }
  if ( EtwpCoverageCoreTracingEnabled && stru_140397820.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140397820, 1uLL) )
    {
      v21 = *a1;
      v22 = *(const CHAR **)a2;
      v30 = **a1;
      v31 = v21[1];
      v32 = v6 - v21[4];
      v23 = v6 - v21[5];
      v40 = 0;
      v43 = 0;
      v46 = 0;
      v49 = 0;
      v52 = 0;
      v55 = 0;
      v38 = &v30;
      v41 = &v31;
      v44 = &v32;
      v47 = &v33;
      v50 = &v34;
      v53 = &v35;
      v33 = v23;
      v34 = v4;
      v35 = v5;
      v39 = 4;
      v42 = 4;
      v45 = 4;
      v48 = 4;
      v51 = 4;
      v54 = 4;
      TlgCreateSz(&v56, v22);
      TlgWrite(&stru_140397820, &unk_14030E2DF, 0LL, 0LL, 9u, &v37);
    }
  }
}
