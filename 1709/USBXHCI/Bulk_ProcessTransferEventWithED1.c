/*
 * XREFs of Bulk_ProcessTransferEventWithED1 @ 0x1C002F58C
 * Callers:
 *     TR_TransferEventHandler @ 0x1C0023928 (TR_TransferEventHandler.c)
 *     Bulk_EP_TransferEventHandler @ 0x1C002E320 (Bulk_EP_TransferEventHandler.c)
 * Callees:
 *     memmove @ 0x1C0008700 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00152C4 (WPP_RECORDER_SF_dddd.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C00191E4 (Endpoint_HaltedCompletionCode.c)
 *     StageQueue_Release @ 0x1C0021F70 (StageQueue_Release.c)
 *     TR_AttemptStateChange @ 0x1C002275C (TR_AttemptStateChange.c)
 *     TR_ReleaseSegments @ 0x1C002377C (TR_ReleaseSegments.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0023B20 (WPP_RECORDER_SF_DDDDD.c)
 *     Bulk_FindStage @ 0x1C002E3B0 (Bulk_FindStage.c)
 *     Bulk_MapTransfers @ 0x1C002EA78 (Bulk_MapTransfers.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002FA50 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x1C002FC28 (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C0030854 (Bulk_Stage_FreeScatterGatherList.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C00316F0 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_ValidateStagePointer @ 0x1C0031BBC (Bulk_ValidateStagePointer.c)
 *     WPP_RECORDER_SF_DDDx @ 0x1C00324F0 (WPP_RECORDER_SF_DDDx.c)
 *     WPP_RECORDER_SF_DDDqLDDx @ 0x1C00327C8 (WPP_RECORDER_SF_DDDqLDDx.c)
 *     WPP_RECORDER_SF_DDDqqq @ 0x1C0032E90 (WPP_RECORDER_SF_DDDqqq.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

char __fastcall Bulk_ProcessTransferEventWithED1(__int64 a1, __int64 a2, char a3)
{
  bool v3; // r15
  unsigned __int64 v4; // rsi
  char v5; // bl
  char v6; // r13
  __int64 v7; // rdi
  int v9; // edx
  __int64 v10; // rbx
  int v11; // r9d
  __int64 v12; // r8
  unsigned int v13; // r12d
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // r10
  __int64 v21; // rax
  __int64 v22; // r13
  int v23; // eax
  int v24; // edx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v30; // [rsp+20h] [rbp-98h]
  int v31; // [rsp+20h] [rbp-98h]
  __int64 v32; // [rsp+28h] [rbp-90h]
  __int64 v33; // [rsp+30h] [rbp-88h]
  __int64 v34; // [rsp+38h] [rbp-80h]
  __int64 v35; // [rsp+40h] [rbp-78h]
  int v36; // [rsp+C8h] [rbp+10h] BYREF
  char v37; // [rsp+D0h] [rbp+18h]
  unsigned __int8 *v38; // [rsp+D8h] [rbp+20h] BYREF

  v37 = a3;
  v3 = 0;
  v4 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v5 = 0;
  v6 = a3;
  v7 = a2;
  if ( a2 )
  {
    if ( !(unsigned __int8)Bulk_ValidateStagePointer(a2, *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      if ( !*(_DWORD *)(v7 + 64) )
      {
        v9 = *(unsigned __int8 *)(a1 + 15);
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_DDDx(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL), v9, *(_WORD *)(a1 + 14) & 0x1F, 53);
        Controller_ReportFatalError(*(_QWORD *)(v7 + 40), 2, 4126, *(_QWORD *)(v7 + 48), *(_QWORD *)(v7 + 56), v7);
      }
      goto LABEL_36;
    }
    v10 = *(_QWORD *)v4;
  }
  else
  {
    v10 = *(_QWORD *)v4;
    v7 = *(_QWORD *)(*(_QWORD *)v4 + 56LL);
  }
  WPP_RECORDER_SF_DDDqLDDx(
    *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
    *(unsigned __int8 *)(a1 + 15),
    *(unsigned __int8 *)(a1 + 11),
    *(_DWORD *)(a1 + 8) & 0xFFFFFF);
  v12 = *(unsigned int *)(v4 + 40);
  v13 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
  if ( v13 > (unsigned int)v12 )
  {
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
      3u,
      v12,
      0x37u,
      (__int64)&WPP_553939f7980432fd09db0e6ec2743bdf_Traceguids);
    v13 = 0;
  }
  WPP_RECORDER_SF_DDDqqq(
    *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 135LL),
    v12,
    v11,
    v30,
    *(_BYTE *)(*(_QWORD *)(v7 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(v7 + 56) + 144LL),
    *(_DWORD *)(v7 + 64),
    *(_QWORD *)(v10 + 24),
    v10,
    v4);
  if ( Endpoint_HaltedCompletionCode(*(__m128i ***)(v7 + 56), *(unsigned __int8 *)(a1 + 11)) )
  {
    v15 = *(_QWORD *)(v7 + 56);
    LODWORD(v35) = *(unsigned __int8 *)(a1 + 11);
    LODWORD(v34) = *(_DWORD *)(v7 + 64);
    LODWORD(v33) = *(_DWORD *)(v15 + 144);
    LODWORD(v32) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 135LL);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v15 + 80),
      2u,
      0xEu,
      0x39u,
      (__int64)&WPP_553939f7980432fd09db0e6ec2743bdf_Traceguids,
      v32,
      v33,
      v34,
      v35);
    LOBYTE(v31) = v6;
    Bulk_ProcessTransferEventWithHaltedCompletion(v7, v4, *(unsigned __int8 *)(a1 + 11), v13, v31);
  }
  else
  {
    v16 = *(unsigned __int8 *)(a1 + 11);
    if ( (unsigned int)(v16 - 26) > 2 )
    {
      *(_DWORD *)(v10 + 108) += v13;
      v21 = *(_QWORD *)(v10 + 48);
      *(_DWORD *)(v10 + 68) = v16;
      if ( (*(_DWORD *)(v21 + 32) & 1) != 0 && *(_DWORD *)(v10 + 76) == 2 )
        memmove(*(void **)(v4 + 64), *(const void **)(*(_QWORD *)(v4 + 72) + 16LL), v13);
      LOBYTE(v14) = v6;
      Bulk_Stage_FreeScatterGatherList(v7, v4, v14);
      *(_BYTE *)(v7 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
      v22 = *(_QWORD *)v4;
      if ( *(_BYTE *)(v4 + 44) )
      {
        IoFreeMdl(*(PMDL *)(v4 + 48));
        *(_QWORD *)(v4 + 48) = 0LL;
        *(_BYTE *)(v4 + 44) = 0;
      }
      TR_ReleaseSegments(v7, (unsigned __int64 *)(v4 + 8), 1);
      TR_ReleaseSegments(v7, (unsigned __int64 *)(v4 + 24), 0);
      StageQueue_Release((unsigned __int8 *)(v22 + 128), (unsigned __int8 *)v4);
      ++*(_DWORD *)(v10 + 116);
      if ( *(_DWORD *)(v10 + 68) == 13 || *(_DWORD *)(v10 + 112) == *(_DWORD *)(v10 + 104) )
        Bulk_Transfer_CompleteCancelable(v7, v10, 0xFFFFFFFFLL, 0LL);
      --*(_DWORD *)(v7 + 348);
      v23 = *(_DWORD *)(v7 + 352);
      if ( v23 )
      {
        v24 = v23 - 1;
        v25 = *(_DWORD *)(v7 + 324);
        *(_DWORD *)(v7 + 352) = v24;
        if ( (v25 & 2) != 0 )
          v3 = v24 == 0;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), *(_BYTE *)(v7 + 104));
      if ( v3 )
      {
        v26 = *(_QWORD *)(v7 + 56);
        if ( !*(_BYTE *)(v26 + 37)
          || (v27 = *(_QWORD *)(v26 + 136),
              _InterlockedIncrement((volatile signed __int32 *)(v27 + 20)) == *(_DWORD *)(v27 + 8)) )
        {
          ESM_AddEvent((PVOID)(v26 + 288));
        }
      }
      v6 = v37;
    }
    else
    {
      v17 = *(_QWORD *)(v4 + 96);
      v18 = *(unsigned int *)(v4 + 104);
      v36 = 0;
      v19 = *(_QWORD *)(v17 + 24) + 16 * v18;
      *(_BYTE *)(v7 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
      if ( Bulk_FindStage(v7, v19, &v38, &v36) && v38 == (unsigned __int8 *)v4 )
        Bulk_ProcessTransferEventWithStoppedCompletion(v7, v4, *(unsigned __int8 *)(a1 + 11), v13, v36);
      *(_DWORD *)(v7 + 324) |= 8u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), *(_BYTE *)(v7 + 104));
      v20 = *(_QWORD *)(v7 + 56);
      _m_prefetchw((const void *)(v20 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v20 + 32), 0x10u) & 0x10) != 0 )
      {
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD **)v20,
          *(_QWORD *)(v20 + 8),
          *(_QWORD *)(v20 + 24),
          0x2000000LL,
          "Received duplicate Stopped Transfer Events",
          0LL,
          0LL);
      }
      else
      {
        _m_prefetchw((const void *)(v20 + 32));
        if ( (_InterlockedXor((volatile signed __int32 *)(v20 + 32), 8u) & 8) != 0 )
          ESM_AddEvent((PVOID)(v20 + 288));
      }
    }
  }
  v5 = 1;
LABEL_36:
  _InterlockedExchange((volatile __int32 *)(v7 + 340), 1);
  if ( (unsigned int)TR_AttemptStateChange(v7, 2, 3) == 2 )
  {
    LOBYTE(v28) = v6;
    Bulk_MapTransfers(v7, v28);
  }
  return v5;
}
