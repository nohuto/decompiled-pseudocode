/*
 * XREFs of Isoch_ProcessTransferEventWithED0 @ 0x1C0029548
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x1C0028220 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C00279F4 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_FindTrbMatch @ 0x1C00282F4 (Isoch_FindTrbMatch.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C0029B58 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_Stage_CompleteTD @ 0x1C002A500 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C002C144 (Isoch_Transfer_CompleteStaleStages.c)
 *     WPP_RECORDER_SF_DDL @ 0x1C002CB64 (WPP_RECORDER_SF_DDL.c)
 *     WPP_RECORDER_SF_DDLDDx @ 0x1C002CC5C (WPP_RECORDER_SF_DDLDDx.c)
 *     WPP_RECORDER_SF_DDLx @ 0x1C002CDB8 (WPP_RECORDER_SF_DDLx.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED0(__int64 a1, __int64 a2, char a3)
{
  char v6; // si
  int v7; // edx
  int v8; // edx
  int v9; // r9d
  __int64 v10; // r8
  KIRQL v11; // dl
  KSPIN_LOCK *v12; // rcx
  KIRQL v13; // dl
  __int64 v14; // r10
  __int64 ****v15; // r15
  __int64 ***v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rcx
  int v20; // [rsp+60h] [rbp-38h] BYREF
  __int64 ****v21; // [rsp+68h] [rbp-30h] BYREF
  char v22; // [rsp+A0h] [rbp+8h] BYREF
  int v23; // [rsp+A8h] [rbp+10h] BYREF
  char v24; // [rsp+B8h] [rbp+20h] BYREF

  v6 = 0;
  v7 = *(unsigned __int8 *)(a1 + 15);
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_DDLDDx(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), v7, *(unsigned __int8 *)(a1 + 11), 40);
  v10 = *(unsigned __int8 *)(a1 + 11);
  if ( (unsigned int)v10 >= 0xE )
  {
    if ( (unsigned int)v10 <= 0xF )
    {
      LOBYTE(v10) = a3;
      Isoch_ProcessTransferRingEmptyEvent(a2, a1, v10);
      return v6;
    }
    if ( (_DWORD)v10 == 20 )
    {
      WPP_RECORDER_SF_DDLx(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL),
        20,
        v9);
      ((void (__fastcall *)(_QWORD, _QWORD))qword_1C004F8D0)(
        *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 24LL));
      if ( !*(_QWORD *)a1 )
        return v6;
    }
    else if ( (_DWORD)v10 == 23 )
    {
      ++*(_DWORD *)(a2 + 264);
      if ( !*(_QWORD *)a1 )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_DDL(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), v8, *(unsigned __int8 *)(a1 + 11), 41);
        return v6;
      }
    }
  }
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_BYTE *)(a2 + 104) = v11;
  if ( (*(_DWORD *)(a2 + 328) & 0x40) == 0 )
  {
    Isoch_FindTrbMatch(a2, (signed __int64 *)a1, (__int64 *)&v21, &v20, &v23);
    v12 = (KSPIN_LOCK *)(a2 + 96);
    v13 = *(_BYTE *)(a2 + 104);
    if ( (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 > 2 )
    {
      KeReleaseSpinLock(v12, v13);
      v15 = v21;
      if ( !v21 )
        return v6;
      v16 = *v21;
      Isoch_CompleteStaleTransfers(a2, *v21, a3);
      LOBYTE(v17) = a3;
      Isoch_Transfer_CompleteStaleStages(v18, v16, v15, v17);
      Isoch_Stage_CompleteTD((_DWORD)v15, *(unsigned __int8 *)(a1 + 11), v23, 0, (__int64)&v22, (__int64)&v24, a3);
    }
    else
    {
      *(_DWORD *)(a2 + 328) |= 0x40u;
      KeReleaseSpinLock(v12, v13);
      if ( v21 )
        Isoch_Stage_CompleteTD((_DWORD)v21, *(unsigned __int8 *)(a1 + 11), v23, 0, (__int64)&v22, (__int64)&v24, a3);
      v14 = *(_QWORD *)(a2 + 56);
      _m_prefetchw((const void *)(v14 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v14 + 32), 0x10u) & 0x10) != 0 )
      {
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD **)v14,
          *(_QWORD *)(v14 + 8),
          *(_QWORD *)(v14 + 24),
          0x2000000LL,
          "Received duplicate Stopped Transfer Events",
          0LL,
          0LL);
      }
      else
      {
        _m_prefetchw((const void *)(v14 + 32));
        if ( (_InterlockedXor((volatile signed __int32 *)(v14 + 32), 8u) & 8) != 0 )
          ESM_AddEvent((PVOID)(v14 + 288));
      }
    }
    return 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v11);
  return v6;
}
