/*
 * XREFs of KeTransitionProcessorParkState @ 0x14024BF2C
 * Callers:
 *     KiForceIdleParkUnparkProcessor @ 0x14024A578 (KiForceIdleParkUnparkProcessor.c)
 *     PpmParkReportParkedCore @ 0x1402828F0 (PpmParkReportParkedCore.c)
 *     PpmParkReportUnparkedCore @ 0x140282974 (PpmParkReportUnparkedCore.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400A8540 (KiGroupSchedulingGenerationEnd.c)
 *     KiSetProcessorIdle @ 0x1400A9678 (KiSetProcessorIdle.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiUpdateThreadPriority @ 0x1400EDCB0 (KiUpdateThreadPriority.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x1402487EC (KiSendHeteroRescheduleIntRequest.c)
 *     KiFlushReadyLists @ 0x14024C380 (KiFlushReadyLists.c)
 */

__int64 __fastcall KeTransitionProcessorParkState(__int64 a1)
{
  bool v1; // r15
  __int64 v2; // rbp
  char v3; // r13
  unsigned __int64 v4; // r14
  unsigned __int64 v6; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  char v11; // al
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int8 v16; // al
  int v17; // esi
  __int64 result; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  char v22; // si
  __int64 v23; // r8
  char v24; // cl
  bool IsThreadRankNonZero; // al
  int *v26; // rdx
  int v27; // eax
  struct _KPRCB *v28; // rsi
  volatile signed __int32 *v29; // rdi
  __int64 v30; // r8
  _QWORD *v31[11]; // [rsp+20h] [rbp-58h] BYREF
  char v32; // [rsp+80h] [rbp+8h]
  int v33; // [rsp+88h] [rbp+10h] BYREF
  int v34; // [rsp+90h] [rbp+18h] BYREF
  int v35; // [rsp+98h] [rbp+20h]

  v31[0] = 0LL;
  v1 = 0;
  v2 = *(_QWORD *)(a1 + 192);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 200);
  v32 = 0;
  _m_prefetchw((const void *)(v2 + 80));
  v6 = v4 & *(_QWORD *)(v2 + 80);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 96));
  CurrentPrcb = KeGetCurrentPrcb();
  v33 = 0;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    do
      KeYieldProcessorEx(&v33);
    while ( *(_QWORD *)(a1 + 48) );
  }
  _InterlockedXor64((volatile signed __int64 *)(v2 + 80), v4);
  v8 = *(_QWORD *)(a1 + 24896);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 24904);
    v10 = v8 & *(_QWORD *)(v2 + 80);
    if ( !v10 )
    {
      v32 = 1;
      goto LABEL_15;
    }
    if ( v10 == v4 )
    {
      *(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208)
                                                                      + *(unsigned __int8 *)(v9 + 596)]]
                + 24912) = 0;
      v11 = *(_BYTE *)(a1 + 209);
      *(_DWORD *)(a1 + 24912) = 1;
LABEL_14:
      *(_BYTE *)(v9 + 596) = v11;
      goto LABEL_15;
    }
    if ( *(_DWORD *)(a1 + 24912) && v6 )
    {
      _BitScanReverse64(&v12, v10);
      v13 = (unsigned int)v12 + (*(unsigned __int8 *)(a1 + 208) << 6);
      v35 = v12;
      v14 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v13]];
      *(_DWORD *)(a1 + 24912) = 0;
      *(_DWORD *)(v14 + 24912) = 1;
      v11 = *(_BYTE *)(v14 + 209);
      goto LABEL_14;
    }
  }
LABEL_15:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 96));
  v15 = *(_QWORD *)(a1 + 24);
  v16 = *(_BYTE *)(a1 + 35);
  if ( v6 )
  {
    if ( (v16 & 2) != 0 )
      __fastfail(0x21u);
    v19 = v16 + 2;
    *(_BYTE *)(a1 + 35) = v19;
    if ( v19 == 2 )
      _InterlockedXor64((volatile signed __int64 *)v2, v4);
    v20 = *(_QWORD *)(a1 + 16);
    if ( v20 && v20 != v15 )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      v3 = 1;
      _interlockedbittestandreset((volatile signed __int32 *)(v20 + 120), 0xCu);
      *(_BYTE *)(v20 + 388) = 7;
      v31[0] = (_QWORD *)(v20 + 216);
      *(_QWORD *)(v20 + 216) = 0LL;
      v20 = 0LL;
    }
    v21 = *(_QWORD *)(a1 + 8);
    v22 = 1;
    if ( v21 == v15 )
    {
      if ( v3 )
        KiSetProcessorIdle(a1, 1, 0);
    }
    else if ( !v20 )
    {
      if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
      {
        v22 = 0;
      }
      else
      {
        *(_BYTE *)(v21 + 565) = 1;
        _interlockedbittestandset((volatile signed __int32 *)(v21 + 120), 0xCu);
        *(_QWORD *)(a1 + 16) = v15;
        KiSetProcessorIdle(a1, 1, 0);
        v1 = (*(_BYTE *)(a1 + 11884) & 1) == 0;
      }
    }
    KiUpdateThreadPriority((struct _KPRCB *)a1, v15, 127, 0);
    if ( v22 )
    {
      if ( (*(_BYTE *)(v15 + 2) & 4) != 0 )
      {
        IsThreadRankNonZero = KiIsThreadRankNonZero(v15, (struct _KPRCB *)a1);
        v24 = 1;
        if ( !IsThreadRankNonZero )
          v24 = *(_BYTE *)(v15 + 195);
      }
      else
      {
        v24 = *(_BYTE *)(v15 + 195);
      }
      **(_BYTE **)(a1 + 56) = v24;
      v26 = *(int **)(a1 + 25016);
      if ( v26 )
      {
        v27 = KiVpThreadSystemWorkPriority;
        if ( v15 != *(_QWORD *)(a1 + 24) )
          v27 = v24;
        *v26 = v27;
      }
    }
    if ( KiGroupSchedulingEnabled )
    {
      LOBYTE(v23) = 1;
      KiGroupSchedulingGenerationEnd(a1, MEMORY[0xFFFFF78000000320], v23);
    }
    KiFlushReadyLists(a1 + 22912, a1 + 22808, v31);
    if ( v32 )
    {
      v28 = KeGetCurrentPrcb();
      v29 = *(volatile signed __int32 **)(a1 + 24904);
      v34 = 0;
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount((__int64)v28, 1);
        if ( !_interlockedbittestandset64(v29, 0LL) )
          break;
        KiSetVpThreadSpinLockCount((__int64)v28, 0);
        do
          KeYieldProcessorEx(&v34);
        while ( *(_QWORD *)v29 );
      }
      KiFlushReadyLists(v29 + 4, v29 + 2, v31);
      _InterlockedAnd64((volatile signed __int64 *)v29, 0LL);
      KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
    KiReadyDeferredReadyList(a1, v31, v30);
    if ( *(_QWORD *)(a1 + 16) && !*(_BYTE *)(a1 + 11882) )
      KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
    result = 0xFFFFF7800000036AuLL;
    _InterlockedDecrement16((volatile signed __int16 *)0xFFFFF7800000036ALL);
    if ( v1 )
      return KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
  }
  else
  {
    if ( (v16 & 2) == 0 )
      __fastfail(0x21u);
    v17 = v16 - 2;
    *(_BYTE *)(a1 + 35) = v17;
    if ( v16 == 2 )
    {
      _InterlockedXor64((volatile signed __int64 *)v2, v4);
      *(_BYTE *)(a1 + 11883) = 1;
    }
    KiUpdateThreadPriority((struct _KPRCB *)a1, v15, 0, v16 == 2);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
    if ( !v17 && KeHeteroSystem && !KeHeteroSystemVirtual )
      KiSendHeteroRescheduleIntRequest((_QWORD *)a1);
    result = 0xFFFFF7800000036AuLL;
    _InterlockedAdd16((volatile signed __int16 *)0xFFFFF7800000036ALL, 1u);
  }
  return result;
}
