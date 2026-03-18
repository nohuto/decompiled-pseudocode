/*
 * XREFs of EtwTelemetryCoverageReport @ 0x14014D4B0
 * Callers:
 *     EtwpCoverageRecordAtHighIrql @ 0x1402ADEDC (EtwpCoverageRecordAtHighIrql.c)
 *     EtwpCoverageProvEnableCallback @ 0x14048BCC0 (EtwpCoverageProvEnableCallback.c)
 *     PsSetProcessFaultInformation @ 0x1405C3C50 (PsSetProcessFaultInformation.c)
 *     PopTransitionTelemetryOsState @ 0x140624944 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageEnsureContext @ 0x14064D564 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageReset @ 0x1407A6D88 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1407A6F68 (EtwpCoverageResetCP.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     _TlgCreateSz @ 0x140076288 (_TlgCreateSz.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     EtwpCoverageValidateCP @ 0x1400C3100 (EtwpCoverageValidateCP.c)
 *     EtwpCoverageAddToStringBuffer @ 0x1400C3200 (EtwpCoverageAddToStringBuffer.c)
 *     KeGetEffectiveIrql @ 0x1400F0B10 (KeGetEffectiveIrql.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpCoverageRecord @ 0x14056F594 (EtwpCoverageRecord.c)
 *     EtwpCoverageEnsureContext @ 0x14064D564 (EtwpCoverageEnsureContext.c)
 */

__int64 __fastcall EtwTelemetryCoverageReport(__int64 a1)
{
  int v1; // r12d
  _QWORD *v3; // rsi
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
  __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // r8
  int v19; // r9d
  int v20; // r10d
  const CHAR *v21; // rdx
  int v22; // eax
  int v23; // r9d
  int v24; // [rsp+38h] [rbp-99h]
  int v25; // [rsp+40h] [rbp-91h] BYREF
  int v26; // [rsp+44h] [rbp-8Dh] BYREF
  int v27; // [rsp+48h] [rbp-89h] BYREF
  int v28; // [rsp+4Ch] [rbp-85h] BYREF
  int v29; // [rsp+50h] [rbp-81h] BYREF
  int v30; // [rsp+54h] [rbp-7Dh] BYREF
  __int64 v31; // [rsp+58h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-69h] BYREF
  int *v33; // [rsp+88h] [rbp-49h]
  __int64 v34; // [rsp+90h] [rbp-41h]
  int *v35; // [rsp+98h] [rbp-39h]
  __int64 v36; // [rsp+A0h] [rbp-31h]
  int *v37; // [rsp+A8h] [rbp-29h]
  __int64 v38; // [rsp+B0h] [rbp-21h]
  int *v39; // [rsp+B8h] [rbp-19h]
  __int64 v40; // [rsp+C0h] [rbp-11h]
  int *v41; // [rsp+C8h] [rbp-9h]
  __int64 v42; // [rsp+D0h] [rbp-1h]
  __int64 *v43; // [rsp+D8h] [rbp+7h]
  __int64 v44; // [rsp+E0h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E8h] [rbp+17h] BYREF

  v1 = 0;
  v24 = 0;
  v3 = 0LL;
  v4 = KeGetEffectiveIrql() < 2u && (*(_DWORD *)(a1 + 16) & 1) == 0;
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
  if ( *(_DWORD *)(a1 + 12) >= 0xFFFFFF00 )
    return (unsigned int)-1073741637;
  if ( v4 )
  {
    EtwpCoverageRecord(EtwpCoverageContext, a1);
    return 0;
  }
  v9 = 1;
  if ( !(unsigned int)EtwpCoverageValidateCP(a1, &v25) )
  {
    v7 = -1073741811;
LABEL_39:
    if ( EtwpCoverageCoreTracingEnabled && stru_140397820.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397820, 1uLL) )
    {
      v21 = *(const CHAR **)a1;
      v26 = *(_DWORD *)v5;
      v27 = *(_DWORD *)(v5 + 4);
      v22 = v19 - *(_DWORD *)(v5 + 16);
      v23 = v19 - *(_DWORD *)(v5 + 20);
      v28 = v22;
      v33 = &v26;
      v35 = &v27;
      v37 = &v28;
      v39 = &v29;
      v41 = &v30;
      v43 = &v31;
      v29 = v23;
      v30 = v1;
      LODWORD(v31) = v20;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      TlgCreateSz(&pDesc, v21);
      TlgWrite(&stru_140397820, &unk_14030E26B, 0LL, 0LL, 9u, &pData);
    }
    return v7;
  }
  v10 = *(_DWORD *)(a1 + 12);
  if ( v10 >= *(_DWORD *)v5 )
  {
    v1 = 1;
    v7 = 0;
    goto LABEL_39;
  }
  *(_DWORD *)(a1 + 12) = *(_DWORD *)v5;
  while ( 1 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
    v12 = *(_QWORD *)(v6 + 8);
    v13 = v11;
    v31 = *(_QWORD *)(v6 + 64);
    if ( v12 )
    {
      v24 = EtwpCoverageAddToStringBuffer(v12, *(const char **)a1, v25);
      if ( v24 == 1 )
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
        *(_DWORD *)(a1 + 12) = v10;
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
    v16 = *(_QWORD *)(v6 + 64);
    if ( v31 == v16 )
    {
      v17 = *(_QWORD **)(v6 + 8);
      if ( v17 )
      {
        v18 = *(_QWORD **)(v6 + 24);
        if ( *v18 != v6 + 16 )
          __fastfail(3u);
        *v17 = v6 + 16;
        v17[1] = v18;
        *v18 = v17;
        *(_QWORD *)(v6 + 24) = v17;
        v16 = *(_QWORD *)(v6 + 64);
      }
      *(_QWORD *)(v6 + 8) = v3;
      *(_QWORD *)(v6 + 64) = v16 + 1;
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
    v1 = v24;
    goto LABEL_39;
  }
  return v7;
}
