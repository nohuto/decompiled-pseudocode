/*
 * XREFs of Isoch_ProcessTransferEventWithED0 @ 0x1C0026FC0
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x1C0025C90 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0025464 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_FindTrbMatch @ 0x1C0025D64 (Isoch_FindTrbMatch.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C00275D8 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_Stage_CompleteTD @ 0x1C0027F88 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C0029BD4 (Isoch_Transfer_CompleteStaleStages.c)
 *     WPP_RECORDER_SF_DDL @ 0x1C002A614 (WPP_RECORDER_SF_DDL.c)
 *     WPP_RECORDER_SF_DDLDDx @ 0x1C002A70C (WPP_RECORDER_SF_DDLDDx.c)
 *     WPP_RECORDER_SF_DDLx @ 0x1C002A868 (WPP_RECORDER_SF_DDLx.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED0(__int64 a1, __int64 a2, char a3)
{
  char v6; // si
  unsigned int v7; // ebx
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // edx
  int v11; // edx
  int v12; // r9d
  __int64 v13; // r8
  KIRQL v14; // dl
  KSPIN_LOCK *v15; // rcx
  KIRQL v16; // dl
  __int64 v17; // r10
  __int64 ****v18; // r15
  __int64 ***v19; // rbx
  __int64 v20; // r9
  __int64 v21; // rcx
  int v23; // [rsp+60h] [rbp-38h] BYREF
  __int64 ****v24; // [rsp+68h] [rbp-30h] BYREF
  char v25; // [rsp+A0h] [rbp+8h] BYREF
  int v26; // [rsp+A8h] [rbp+10h] BYREF
  char v27; // [rsp+B8h] [rbp+20h] BYREF

  v6 = 0;
  v7 = *(_DWORD *)(a1 + 12);
  v8 = *(_DWORD *)(a1 + 8);
  v9 = *(_QWORD *)(a2 + 56);
  v10 = HIWORD(v7) & 0x1F;
  LOBYTE(v10) = 4;
  WPP_RECORDER_SF_DDLDDx(*(_QWORD *)(v9 + 80), v10, v8 & 0xFFFFFF, 40);
  v13 = *(unsigned __int8 *)(a1 + 11);
  if ( (unsigned int)v13 >= 0xE )
  {
    if ( (unsigned int)v13 <= 0xF )
    {
      LOBYTE(v13) = a3;
      Isoch_ProcessTransferRingEmptyEvent(a2, a1, v13);
      return v6;
    }
    if ( (_DWORD)v13 == 20 )
    {
      WPP_RECORDER_SF_DDLx(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL),
        20,
        v12);
      ((void (__fastcall *)(_QWORD, _QWORD))qword_1C004C8D0)(
        *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 24LL));
      if ( !*(_QWORD *)a1 )
        return v6;
    }
    else if ( (_DWORD)v13 == 23 )
    {
      ++*(_DWORD *)(a2 + 264);
      if ( !*(_QWORD *)a1 )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_DDL(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), v11, *(unsigned __int8 *)(a1 + 11), 41);
        return v6;
      }
    }
  }
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_BYTE *)(a2 + 104) = v14;
  if ( (*(_DWORD *)(a2 + 328) & 0x40) == 0 )
  {
    Isoch_FindTrbMatch(a2, (signed __int64 *)a1, (__int64 *)&v24, &v23, &v26);
    v15 = (KSPIN_LOCK *)(a2 + 96);
    v16 = *(_BYTE *)(a2 + 104);
    if ( (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 > 2 )
    {
      KeReleaseSpinLock(v15, v16);
      v18 = v24;
      if ( !v24 )
        return v6;
      v19 = *v24;
      Isoch_CompleteStaleTransfers(a2, *v24, a3);
      LOBYTE(v20) = a3;
      Isoch_Transfer_CompleteStaleStages(v21, v19, v18, v20);
      Isoch_Stage_CompleteTD((_DWORD)v18, *(unsigned __int8 *)(a1 + 11), v26, 0, (__int64)&v25, (__int64)&v27, a3);
    }
    else
    {
      *(_DWORD *)(a2 + 328) |= 0x40u;
      KeReleaseSpinLock(v15, v16);
      if ( v24 )
        Isoch_Stage_CompleteTD((_DWORD)v24, *(unsigned __int8 *)(a1 + 11), v26, 0, (__int64)&v25, (__int64)&v27, a3);
      v17 = *(_QWORD *)(a2 + 56);
      _m_prefetchw((const void *)(v17 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v17 + 32), 0x10u) & 0x10) != 0 )
      {
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD **)v17,
          *(_QWORD *)(v17 + 8),
          *(_QWORD *)(v17 + 24),
          0x2000000LL,
          "Received duplicate Stopped Transfer Events",
          0LL,
          0LL);
      }
      else
      {
        _m_prefetchw((const void *)(v17 + 32));
        if ( (_InterlockedXor((volatile signed __int32 *)(v17 + 32), 8u) & 8) != 0 )
          ESM_AddEvent((PVOID)(v17 + 288));
      }
    }
    return 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v14);
  return v6;
}
