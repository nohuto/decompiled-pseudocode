/*
 * XREFs of KeTransitionProcessorParkState @ 0x14020DD2C
 * Callers:
 *     KiForceIdleParkUnparkProcessor @ 0x14020C368 (KiForceIdleParkUnparkProcessor.c)
 *     PpmParkReportParkedCore @ 0x14024CB54 (PpmParkReportParkedCore.c)
 *     PpmParkReportUnparkedCore @ 0x14024CBD8 (PpmParkReportUnparkedCore.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14008AEE4 (KiGroupSchedulingGenerationEnd.c)
 *     KiUpdateThreadPriority @ 0x14008C870 (KiUpdateThreadPriority.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiSetProcessorIdle @ 0x140128644 (KiSetProcessorIdle.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x14020AA0C (KiSendHeteroRescheduleIntRequest.c)
 *     KiFlushReadyLists @ 0x14020E0E8 (KiFlushReadyLists.c)
 */

__int64 __fastcall KeTransitionProcessorParkState(__int64 a1)
{
  bool v1; // r15
  __int64 v2; // rsi
  char v3; // r12
  unsigned __int64 v4; // rbp
  char v5; // r13
  unsigned __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  char v11; // al
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // eax
  int v17; // eax
  char v18; // si
  __int64 result; // rax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  char v23; // si
  char v24; // cl
  bool IsThreadRankNonZero; // al
  _DWORD *v26; // rdx
  __int64 v27; // r8
  volatile signed __int32 *v28; // rdi
  int v29; // [rsp+70h] [rbp+8h] BYREF
  int v30; // [rsp+78h] [rbp+10h] BYREF
  int v31; // [rsp+80h] [rbp+18h]
  _QWORD *v32; // [rsp+88h] [rbp+20h] BYREF

  v32 = 0LL;
  v1 = 0;
  v2 = *(_QWORD *)(a1 + 192);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 200);
  v5 = 0;
  _m_prefetchw((const void *)(v2 + 80));
  v7 = v4 & *(_QWORD *)(v2 + 80);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 88));
  v29 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v29);
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
      v5 = 1;
      goto LABEL_14;
    }
    if ( v10 == v4 )
    {
      *(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208)
                                                                      + *(unsigned __int8 *)(v9 + 596)]]
                + 24912) = 0;
      v11 = *(_BYTE *)(a1 + 209);
      *(_DWORD *)(a1 + 24912) = 1;
LABEL_13:
      *(_BYTE *)(v9 + 596) = v11;
      goto LABEL_14;
    }
    if ( *(_DWORD *)(a1 + 24912) && v7 )
    {
      _BitScanReverse64(&v12, v10);
      v13 = (unsigned int)v12 + (*(unsigned __int8 *)(a1 + 208) << 6);
      v31 = v12;
      v14 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v13]];
      *(_DWORD *)(a1 + 24912) = 0;
      *(_DWORD *)(v14 + 24912) = 1;
      v11 = *(_BYTE *)(v14 + 209);
      goto LABEL_13;
    }
  }
LABEL_14:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 88));
  v15 = *(_QWORD *)(a1 + 24);
  v16 = *(unsigned __int8 *)(a1 + 35);
  if ( v7 )
  {
    if ( (v16 & 2) != 0 )
      __fastfail(0x21u);
    v20 = v16 + 2;
    *(_BYTE *)(a1 + 35) = v20;
    if ( v20 == 2 )
      _InterlockedXor64((volatile signed __int64 *)v2, v4);
    v21 = *(_QWORD *)(a1 + 16);
    if ( v21 && v21 != v15 )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      v3 = 1;
      _interlockedbittestandreset((volatile signed __int32 *)(v21 + 120), 0xCu);
      *(_BYTE *)(v21 + 388) = 7;
      v32 = (_QWORD *)(v21 + 216);
      *(_QWORD *)(v21 + 216) = 0LL;
      v21 = 0LL;
    }
    v22 = *(_QWORD *)(a1 + 8);
    v23 = 1;
    if ( v22 == v15 )
    {
      if ( v3 )
        KiSetProcessorIdle(a1, 1, 0);
    }
    else if ( !v21 )
    {
      if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
      {
        v23 = 0;
      }
      else
      {
        *(_BYTE *)(v22 + 565) = 1;
        _interlockedbittestandset((volatile signed __int32 *)(v22 + 120), 0xCu);
        *(_QWORD *)(a1 + 16) = v15;
        KiSetProcessorIdle(a1, 1, 0);
        v1 = (*(_BYTE *)(a1 + 11884) & 1) == 0;
      }
    }
    KiUpdateThreadPriority(a1, v15, 127, 0);
    if ( v23 )
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
      v26 = *(_DWORD **)(a1 + 25016);
      if ( v26 )
        *v26 = v24;
    }
    if ( KiGroupSchedulingEnabled )
      KiGroupSchedulingGenerationEnd(a1, MEMORY[0xFFFFF78000000320], 1u);
    KiFlushReadyLists(a1 + 22912, a1 + 22808, &v32);
    if ( v5 )
    {
      v28 = *(volatile signed __int32 **)(a1 + 24904);
      v30 = 0;
      while ( _interlockedbittestandset64(v28, 0LL) )
      {
        do
          KeYieldProcessorEx(&v30);
        while ( *(_QWORD *)v28 );
      }
      KiFlushReadyLists(v28 + 4, v28 + 2, &v32);
      _InterlockedAnd64((volatile signed __int64 *)v28, 0LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    KiReadyDeferredReadyList(a1, &v32, v27);
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
    if ( !v17 )
      _InterlockedXor64((volatile signed __int64 *)v2, v4);
    v18 = 0;
    if ( !v17 )
    {
      *(_BYTE *)(a1 + 11883) = 1;
      v18 = 1;
    }
    KiUpdateThreadPriority(a1, v15, 0, v18);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    if ( v18 && KeHeteroSystem && !KeHeteroSystemVirtual )
      KiSendHeteroRescheduleIntRequest((_QWORD *)a1);
    result = 0xFFFFF7800000036AuLL;
    _InterlockedAdd16((volatile signed __int16 *)0xFFFFF7800000036ALL, 1u);
  }
  return result;
}
