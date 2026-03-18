/*
 * XREFs of EtwTelemetryCoverageReport @ 0x14011E500
 * Callers:
 *     EtwpCoverageRecordAtHighIrql @ 0x14027AD0C (EtwpCoverageRecordAtHighIrql.c)
 *     EtwpCoverageProvEnableCallback @ 0x1404F18A0 (EtwpCoverageProvEnableCallback.c)
 *     PsSetProcessFaultInformation @ 0x140578FB0 (PsSetProcessFaultInformation.c)
 *     PopTransitionTelemetryOsState @ 0x1405ACF48 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageEnsureContext @ 0x1405E714C (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageReset @ 0x140745074 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x140745254 (EtwpCoverageResetCP.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeGetEffectiveIrql @ 0x140088FA0 (KeGetEffectiveIrql.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1400B0934 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     EtwpCoverageAddToStringBuffer @ 0x14011E5D4 (EtwpCoverageAddToStringBuffer.c)
 *     EtwpCoverageValidateCP @ 0x14011E708 (EtwpCoverageValidateCP.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpCoverageRecord @ 0x140579384 (EtwpCoverageRecord.c)
 *     EtwpCoverageEnsureContext @ 0x1405E714C (EtwpCoverageEnsureContext.c)
 */

__int64 __fastcall EtwTelemetryCoverageReport(_QWORD *a1)
{
  int v1; // r12d
  _QWORD *v3; // rdi
  BOOL v4; // r14d
  __int64 v5; // r15
  __int64 v6; // rbx
  unsigned int v7; // ebx
  int v9; // r13d
  unsigned int v10; // r12d
  KIRQL v11; // al
  __int64 v12; // rcx
  KIRQL v13; // r14
  _QWORD *PoolWithTag; // rax
  KIRQL v15; // r14
  _QWORD *v16; // rcx
  _QWORD *v17; // r8
  int v18; // r9d
  int v19; // r10d
  const CHAR *v20; // rdx
  int v21; // eax
  int v22; // r9d
  int v23; // [rsp+38h] [rbp-99h]
  unsigned int v24; // [rsp+40h] [rbp-91h] BYREF
  int v25; // [rsp+44h] [rbp-8Dh] BYREF
  int v26; // [rsp+48h] [rbp-89h] BYREF
  int v27; // [rsp+4Ch] [rbp-85h] BYREF
  int v28; // [rsp+50h] [rbp-81h] BYREF
  int v29; // [rsp+54h] [rbp-7Dh] BYREF
  __int64 v30; // [rsp+58h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-69h] BYREF
  int *v32; // [rsp+88h] [rbp-49h]
  __int64 v33; // [rsp+90h] [rbp-41h]
  int *v34; // [rsp+98h] [rbp-39h]
  __int64 v35; // [rsp+A0h] [rbp-31h]
  int *v36; // [rsp+A8h] [rbp-29h]
  __int64 v37; // [rsp+B0h] [rbp-21h]
  int *v38; // [rsp+B8h] [rbp-19h]
  __int64 v39; // [rsp+C0h] [rbp-11h]
  int *v40; // [rsp+C8h] [rbp-9h]
  __int64 v41; // [rsp+D0h] [rbp-1h]
  __int64 *v42; // [rsp+D8h] [rbp+7h]
  __int64 v43; // [rsp+E0h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E8h] [rbp+17h] BYREF

  v1 = 0;
  v23 = 0;
  v3 = 0LL;
  v4 = KeGetEffectiveIrql() < 2u && (a1[2] & 1) == 0;
  if ( !EtwpCoverageNonPagedContext )
  {
    if ( !v4 )
      return (unsigned int)-1073741641;
    v7 = EtwpCoverageEnsureContext();
    if ( (v7 & 0x80000000) != 0 )
      return v7;
  }
  v5 = EtwpCoverageNonPagedContext;
  v6 = EtwpCoverageNonPagedContext + 24;
  if ( *((_DWORD *)a1 + 3) >= 0xFFFFFF00 )
    return (unsigned int)-1073741637;
  if ( v4 )
  {
    EtwpCoverageRecord(EtwpCoverageContext, a1);
    return 0;
  }
  v9 = 1;
  if ( !(unsigned int)EtwpCoverageValidateCP(a1, &v24) )
  {
    v7 = -1073741811;
LABEL_39:
    if ( EtwpCoverageCoreTracingEnabled && stru_140354BD0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140354BD0, 1uLL) )
    {
      v20 = (const CHAR *)*a1;
      v25 = *(_DWORD *)v5;
      v26 = *(_DWORD *)(v5 + 4);
      v21 = v18 - *(_DWORD *)(v5 + 16);
      v22 = v18 - *(_DWORD *)(v5 + 20);
      v27 = v21;
      v32 = &v25;
      v34 = &v26;
      v36 = &v27;
      v38 = &v28;
      v40 = &v29;
      v42 = &v30;
      v28 = v22;
      v29 = v1;
      LODWORD(v30) = v19;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      TlgCreateSz(&pDesc, v20);
      TlgWrite(&stru_140354BD0, &unk_1402D40A4, 0LL, 0LL, 9u, &pData);
    }
    return v7;
  }
  v10 = *((_DWORD *)a1 + 3);
  if ( v10 >= *(_DWORD *)v5 )
  {
    v1 = 1;
    v7 = 0;
    goto LABEL_39;
  }
  *((_DWORD *)a1 + 3) = *(_DWORD *)v5;
  while ( 1 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
    v12 = *(_QWORD *)(v6 + 8);
    v13 = v11;
    v30 = *(_QWORD *)(v6 + 64);
    if ( v12 )
    {
      v23 = EtwpCoverageAddToStringBuffer(v12, *a1, v24);
      if ( v23 == 1 )
        break;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)v6);
    __writecr8(v13);
    if ( !v3 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x56777445u);
      v3 = PoolWithTag;
      if ( !PoolWithTag )
      {
        *((_DWORD *)a1 + 3) = v10;
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 4));
        v7 = -1073741670;
        goto LABEL_35;
      }
      memset(PoolWithTag, 0, 0x400uLL);
      v3[2] = v3 + 128;
      v3[3] = v3 + 5;
      v3[4] = v3 + 5;
    }
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
    if ( v30 == *(_QWORD *)(v6 + 64) )
    {
      v16 = *(_QWORD **)(v6 + 8);
      if ( v16 )
      {
        v17 = *(_QWORD **)(v6 + 24);
        if ( *v17 != v6 + 16 )
          __fastfail(3u);
        *v16 = v6 + 16;
        v16[1] = v17;
        *v17 = v16;
        *(_QWORD *)(v6 + 24) = v16;
      }
      ++*(_QWORD *)(v6 + 64);
      *(_QWORD *)(v6 + 8) = v3;
      v3 = 0LL;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)v6);
    __writecr8(v15);
  }
  if ( !*(_DWORD *)(v6 + 72) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v6 + 32), DelayedWorkQueue);
    *(_DWORD *)(v6 + 72) = 1;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v6);
  __writecr8(v13);
  v9 = 0;
  v7 = 0;
LABEL_35:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x56777445u);
  if ( v9 )
  {
    v1 = v23;
    goto LABEL_39;
  }
  return v7;
}
