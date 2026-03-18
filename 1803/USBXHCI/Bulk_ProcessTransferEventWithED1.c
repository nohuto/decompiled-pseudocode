/*
 * XREFs of Bulk_ProcessTransferEventWithED1 @ 0x1C002D05C
 * Callers:
 *     TR_TransferEventHandler @ 0x1C00212AC (TR_TransferEventHandler.c)
 *     Bulk_EP_TransferEventHandler @ 0x1C002BDD0 (Bulk_EP_TransferEventHandler.c)
 * Callees:
 *     memmove @ 0x1C0002A00 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000DF64 (WPP_RECORDER_SF_dddd.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C0011F18 (Endpoint_HaltedCompletionCode.c)
 *     StageQueue_Release @ 0x1C001F820 (StageQueue_Release.c)
 *     TR_AttemptStateChange @ 0x1C0020004 (TR_AttemptStateChange.c)
 *     TR_ReleaseSegments @ 0x1C0021108 (TR_ReleaseSegments.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C00214B0 (WPP_RECORDER_SF_DDDDD.c)
 *     Bulk_FindStage @ 0x1C002BE60 (Bulk_FindStage.c)
 *     Bulk_MapTransfers @ 0x1C002C548 (Bulk_MapTransfers.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002D524 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x1C002D6FC (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C002E33C (Bulk_Stage_FreeScatterGatherList.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C002F1B4 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_ValidateStagePointer @ 0x1C002F684 (Bulk_ValidateStagePointer.c)
 *     WPP_RECORDER_SF_DDDx @ 0x1C002FFC0 (WPP_RECORDER_SF_DDDx.c)
 *     WPP_RECORDER_SF_DDDqLDDx @ 0x1C0030298 (WPP_RECORDER_SF_DDDqLDDx.c)
 *     WPP_RECORDER_SF_DDDqqq @ 0x1C0030960 (WPP_RECORDER_SF_DDDqqq.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

char __fastcall Bulk_ProcessTransferEventWithED1(__int64 a1, __int64 a2, char a3)
{
  bool v3; // r15
  char v4; // bl
  unsigned __int64 v5; // rsi
  char v6; // r13
  __int64 v7; // rdi
  int v9; // edx
  __int64 v10; // rbx
  int v11; // r9d
  __int64 v12; // r8
  unsigned int v13; // r12d
  bool v14; // al
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // r10
  __int64 v22; // rax
  __int64 v23; // r13
  int v24; // eax
  int v25; // edx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v31; // [rsp+20h] [rbp-98h]
  int v32; // [rsp+20h] [rbp-98h]
  __int64 v33; // [rsp+28h] [rbp-90h]
  __int64 v34; // [rsp+30h] [rbp-88h]
  __int64 v35; // [rsp+38h] [rbp-80h]
  __int64 v36; // [rsp+40h] [rbp-78h]
  int v37; // [rsp+C8h] [rbp+10h] BYREF
  char v38; // [rsp+D0h] [rbp+18h]
  __int64 v39; // [rsp+D8h] [rbp+20h] BYREF

  v38 = a3;
  v3 = 0;
  v4 = 0;
  v5 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v6 = a3;
  v7 = a2;
  if ( a2 )
  {
    if ( !(unsigned __int8)Bulk_ValidateStagePointer(a2, *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      if ( !*(_DWORD *)(v7 + 64) )
      {
        v9 = HIWORD(*(_DWORD *)(a1 + 12)) & 0x1F;
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_DDDx(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL), v9, HIBYTE(*(_DWORD *)(a1 + 12)), 53);
        Controller_ReportFatalError(*(_QWORD *)(v7 + 40), 2, 4126, *(_QWORD *)(v7 + 48), *(_QWORD *)(v7 + 56), v7);
      }
      goto LABEL_36;
    }
    v10 = *(_QWORD *)v5;
  }
  else
  {
    v10 = *(_QWORD *)v5;
    v7 = *(_QWORD *)(*(_QWORD *)v5 + 56LL);
  }
  WPP_RECORDER_SF_DDDqLDDx(
    *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
    HIWORD(*(_DWORD *)(a1 + 12)) & 0x1F,
    (*(_DWORD *)(a1 + 12) >> 2) & 1,
    HIBYTE(*(_DWORD *)(a1 + 8)));
  v12 = *(unsigned int *)(v5 + 40);
  v13 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
  if ( v13 > (unsigned int)v12 )
  {
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
      3u,
      v12,
      0x37u,
      (__int64)&WPP_7e05ccf1ecbe36c41fbb6a7cdf44ebc9_Traceguids);
    v13 = 0;
  }
  WPP_RECORDER_SF_DDDqqq(
    *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 135LL),
    v12,
    v11,
    v31,
    *(_BYTE *)(*(_QWORD *)(v7 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(v7 + 56) + 144LL),
    *(_DWORD *)(v7 + 64),
    *(_QWORD *)(v10 + 24),
    v10,
    v5);
  v14 = Endpoint_HaltedCompletionCode(*(__m128i ***)(v7 + 56), *(unsigned __int8 *)(a1 + 11));
  v16 = *(unsigned __int8 *)(a1 + 11);
  if ( v14 )
  {
    v17 = *(_QWORD *)(v7 + 56);
    LODWORD(v36) = *(unsigned __int8 *)(a1 + 11);
    LODWORD(v35) = *(_DWORD *)(v7 + 64);
    LODWORD(v34) = *(_DWORD *)(v17 + 144);
    LODWORD(v33) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 135LL);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v17 + 80),
      2u,
      0xEu,
      0x39u,
      (__int64)&WPP_7e05ccf1ecbe36c41fbb6a7cdf44ebc9_Traceguids,
      v33,
      v34,
      v35,
      v36);
    LOBYTE(v32) = v6;
    Bulk_ProcessTransferEventWithHaltedCompletion(v7, v5, *(unsigned __int8 *)(a1 + 11), v13, v32);
  }
  else if ( (unsigned int)(v16 - 26) > 2 )
  {
    *(_DWORD *)(v10 + 108) += v13;
    v22 = *(_QWORD *)(v10 + 48);
    *(_DWORD *)(v10 + 68) = v16;
    if ( (*(_DWORD *)(v22 + 32) & 1) != 0 && *(_DWORD *)(v10 + 76) == 2 )
      memmove(*(void **)(v5 + 64), *(const void **)(*(_QWORD *)(v5 + 72) + 16LL), v13);
    LOBYTE(v15) = v6;
    Bulk_Stage_FreeScatterGatherList(v7, v5, v15);
    *(_BYTE *)(v7 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
    v23 = *(_QWORD *)v5;
    if ( *(_BYTE *)(v5 + 44) )
    {
      IoFreeMdl(*(PMDL *)(v5 + 48));
      *(_QWORD *)(v5 + 48) = 0LL;
      *(_BYTE *)(v5 + 44) = 0;
    }
    TR_ReleaseSegments(v7, (unsigned __int64 *)(v5 + 8), 1);
    TR_ReleaseSegments(v7, (unsigned __int64 *)(v5 + 24), 0);
    StageQueue_Release((unsigned __int8 *)(v23 + 128), (unsigned __int8 *)v5);
    ++*(_DWORD *)(v10 + 116);
    if ( *(_DWORD *)(v10 + 68) == 13 || *(_DWORD *)(v10 + 112) == *(_DWORD *)(v10 + 104) )
      Bulk_Transfer_CompleteCancelable(v7, v10, 0xFFFFFFFFLL, 0LL);
    --*(_DWORD *)(v7 + 348);
    v24 = *(_DWORD *)(v7 + 352);
    if ( v24 )
    {
      v25 = v24 - 1;
      v26 = *(_DWORD *)(v7 + 324);
      *(_DWORD *)(v7 + 352) = v25;
      if ( (v26 & 2) != 0 )
        v3 = v25 == 0;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), *(_BYTE *)(v7 + 104));
    if ( v3 )
    {
      v27 = *(_QWORD *)(v7 + 56);
      if ( !*(_BYTE *)(v27 + 37)
        || (v28 = *(_QWORD *)(v27 + 136),
            _InterlockedIncrement((volatile signed __int32 *)(v28 + 20)) == *(_DWORD *)(v28 + 8)) )
      {
        ESM_AddEvent((PVOID)(v27 + 288));
      }
    }
    v6 = v38;
  }
  else
  {
    v18 = *(_QWORD *)(v5 + 96);
    v19 = *(unsigned int *)(v5 + 104);
    v37 = 0;
    v20 = *(_QWORD *)(v18 + 24) + 16 * v19;
    *(_BYTE *)(v7 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
    if ( Bulk_FindStage(v7, v20, &v39, &v37) && v39 == v5 )
      Bulk_ProcessTransferEventWithStoppedCompletion(v7, v5, *(unsigned __int8 *)(a1 + 11), v13, v37);
    *(_DWORD *)(v7 + 324) |= 8u;
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), *(_BYTE *)(v7 + 104));
    v21 = *(_QWORD *)(v7 + 56);
    _m_prefetchw((const void *)(v21 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v21 + 32), 0x10u) & 0x10) != 0 )
    {
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD **)v21,
        *(_QWORD *)(v21 + 8),
        *(_QWORD *)(v21 + 24),
        0x2000000LL,
        "Received duplicate Stopped Transfer Events",
        0LL,
        0LL);
    }
    else
    {
      _m_prefetchw((const void *)(v21 + 32));
      if ( (_InterlockedXor((volatile signed __int32 *)(v21 + 32), 8u) & 8) != 0 )
        ESM_AddEvent((PVOID)(v21 + 288));
    }
  }
  v4 = 1;
LABEL_36:
  _InterlockedExchange((volatile __int32 *)(v7 + 340), 1);
  if ( (unsigned int)TR_AttemptStateChange(v7, 2, 3) == 2 )
  {
    LOBYTE(v29) = v6;
    Bulk_MapTransfers(v7, v29);
  }
  return v4;
}
