/*
 * XREFs of Bulk_ProcessTransferEventWithED0 @ 0x1C002F2C0
 * Callers:
 *     TR_TransferEventHandler @ 0x1C0023928 (TR_TransferEventHandler.c)
 *     Bulk_EP_TransferEventHandler @ 0x1C002E320 (Bulk_EP_TransferEventHandler.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00152C4 (WPP_RECORDER_SF_dddd.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C00191E4 (Endpoint_HaltedCompletionCode.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0023B20 (WPP_RECORDER_SF_DDDDD.c)
 *     Bulk_FindStage @ 0x1C002E3B0 (Bulk_FindStage.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002FA50 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x1C002FC28 (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     Bulk_Stage_CalculateBytesTransferred @ 0x1C0030250 (Bulk_Stage_CalculateBytesTransferred.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C0031A38 (Bulk_ValidateED0TrbPointerOnMismatch.c)
 *     WPP_RECORDER_SF_dddqLddx @ 0x1C0032FE4 (WPP_RECORDER_SF_dddqLddx.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

char __fastcall Bulk_ProcessTransferEventWithED0(__int64 a1, __int64 a2, char a3)
{
  char v6; // di
  __int64 v7; // rcx
  unsigned __int8 *v9; // rbp
  unsigned int v10; // r15d
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  KIRQL v14; // dl
  __int64 v15; // r10
  int v16; // [rsp+20h] [rbp-88h]
  __int64 v17; // [rsp+28h] [rbp-80h]
  int v18; // [rsp+28h] [rbp-80h]
  __int64 v19; // [rsp+30h] [rbp-78h]
  int v20; // [rsp+30h] [rbp-78h]
  __int64 v21; // [rsp+38h] [rbp-70h]
  int v22; // [rsp+38h] [rbp-70h]
  __int64 v23; // [rsp+40h] [rbp-68h]
  int v24; // [rsp+48h] [rbp-60h]
  int v25; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int8 *v26; // [rsp+B8h] [rbp+10h] BYREF

  v6 = 0;
  HIDWORD(v23) = HIDWORD(a1);
  WPP_RECORDER_SF_dddqLddx(
    *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
    *(unsigned __int8 *)(a1 + 11),
    *(unsigned __int8 *)(a1 + 15),
    *(_DWORD *)(a1 + 8) & 0xFFFFFF);
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 > 2 || (*(_DWORD *)(*(_QWORD *)(a2 + 56) + 32LL) & 0x40) == 0 )
  {
    *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    if ( !Bulk_FindStage(a2, *(_QWORD *)a1, &v26, &v25) )
    {
      if ( !*(_DWORD *)(a2 + 64) )
        Bulk_ValidateED0TrbPointerOnMismatch(a2, a1);
      goto LABEL_7;
    }
    v9 = v26;
    if ( v26 )
    {
      v10 = Bulk_Stage_CalculateBytesTransferred(v7, v26, a1);
      if ( v10 <= *((_DWORD *)v9 + 10) )
      {
LABEL_13:
        if ( Endpoint_HaltedCompletionCode(*(__m128i ***)(a2 + 56), *(unsigned __int8 *)(a1 + 11)) )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
          if ( v9 )
          {
            LOBYTE(v16) = a3;
            Bulk_ProcessTransferEventWithHaltedCompletion(a2, v9, *(unsigned __int8 *)(a1 + 11), v10, v16);
          }
          return 1;
        }
        v12 = *(unsigned __int8 *)(a1 + 11);
        if ( (unsigned int)(v12 - 26) <= 2 )
        {
          Bulk_ProcessTransferEventWithStoppedCompletion(a2, v9, v12, v10, v25);
          v13 = *(_QWORD *)(a2 + 56);
          LODWORD(v23) = *(_DWORD *)(a2 + 352);
          LODWORD(v21) = *(_DWORD *)(a2 + 64);
          LODWORD(v19) = *(_DWORD *)(v13 + 144);
          LODWORD(v17) = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
          WPP_RECORDER_SF_dddd(
            *(_QWORD *)(v13 + 80),
            4u,
            0xEu,
            0x34u,
            (__int64)&WPP_553939f7980432fd09db0e6ec2743bdf_Traceguids,
            v17,
            v19,
            v21,
            v23);
          v14 = *(_BYTE *)(a2 + 104);
          *(_DWORD *)(a2 + 324) |= 8u;
          KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v14);
          v15 = *(_QWORD *)(a2 + 56);
          _m_prefetchw((const void *)(v15 + 32));
          if ( (_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0x10u) & 0x10) != 0 )
          {
            Controller_HwVerifierBreakIfEnabled(
              *(_QWORD **)v15,
              *(_QWORD *)(v15 + 8),
              *(_QWORD *)(v15 + 24),
              0x2000000LL,
              "Received duplicate Stopped Transfer Events",
              0LL,
              0LL);
          }
          else
          {
            _m_prefetchw((const void *)(v15 + 32));
            if ( (_InterlockedXor((volatile signed __int32 *)(v15 + 32), 8u) & 8) != 0 )
              ESM_AddEvent((PVOID)(v15 + 288));
          }
          return 1;
        }
LABEL_7:
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
        return v6;
      }
      v11 = *(_QWORD *)(a2 + 56);
      v24 = *((_DWORD *)v9 + 10);
      LODWORD(v23) = v10;
      v22 = *(_DWORD *)(a2 + 64);
      v20 = *(_DWORD *)(v11 + 144);
      v18 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
      WPP_RECORDER_SF_DDDDD(
        *(_QWORD *)(v11 + 80),
        3u,
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL),
        0x33u,
        (__int64)&WPP_553939f7980432fd09db0e6ec2743bdf_Traceguids,
        v18,
        v20,
        v22,
        v23,
        v24);
    }
    v10 = 0;
    goto LABEL_13;
  }
  return 1;
}
