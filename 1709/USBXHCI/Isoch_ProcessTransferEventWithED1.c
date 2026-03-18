/*
 * XREFs of Isoch_ProcessTransferEventWithED1 @ 0x1C0029850
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x1C0028220 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     TR_AttemptStateChange @ 0x1C002275C (TR_AttemptStateChange.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C00279F4 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_MapTransfers @ 0x1C0028964 (Isoch_MapTransfers.c)
 *     Isoch_Stage_CompleteTD @ 0x1C002A500 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_Find @ 0x1C002AAA4 (Isoch_Stage_Find.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C002C144 (Isoch_Transfer_CompleteStaleStages.c)
 *     WPP_RECORDER_SF_DDLDDx @ 0x1C002CC5C (WPP_RECORDER_SF_DDLDDx.c)
 *     WPP_RECORDER_SF_DDX @ 0x1C002CEC8 (WPP_RECORDER_SF_DDX.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED1(__int64 a1, __int64 a2, char a3, int a4)
{
  int v7; // edx
  KIRQL v8; // al
  int v9; // edx
  __int64 ****v10; // r12
  KIRQL v11; // dl
  KSPIN_LOCK *v12; // rcx
  __int64 v13; // r10
  __int64 ***v14; // rbx
  int v15; // edi
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // r9d
  __int64 v19; // rdx
  char v21; // [rsp+A0h] [rbp+8h] BYREF
  int v22; // [rsp+A8h] [rbp+10h] BYREF

  v22 = 0;
  v21 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = *(unsigned __int8 *)(a1 + 15);
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_DDLDDx(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), v7, *(unsigned __int8 *)(a1 + 11), 27);
  }
  if ( (*(_QWORD *)a1 & 3) != 1 )
  {
    WPP_RECORDER_SF_DDX(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), *(_WORD *)(a1 + 14) & 0x1F, *(_QWORD *)a1, a4);
    Controller_ReportFatalError(*(_QWORD *)(a2 + 40), 2, 4126, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56), a2);
    return 0;
  }
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v9 = *(_DWORD *)(a2 + 328);
  *(_BYTE *)(a2 + 104) = v8;
  if ( (v9 & 0x40) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v8);
    return 0;
  }
  v10 = (__int64 ****)Isoch_Stage_Find(a2, a1, a1);
  v11 = *(_BYTE *)(a2 + 104);
  v12 = (KSPIN_LOCK *)(a2 + 96);
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 > 2 )
  {
    KeReleaseSpinLock(v12, v11);
    if ( !v10 )
      return 0;
    v14 = *v10;
    v15 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
    Isoch_CompleteStaleTransfers(a2, *v10, a3);
    LOBYTE(v16) = a3;
    Isoch_Transfer_CompleteStaleStages(v17, v14, v10, v16);
    LOBYTE(v18) = 1;
    Isoch_Stage_CompleteTD((_DWORD)v10, *(unsigned __int8 *)(a1 + 11), v15, v18, (__int64)&v21, (__int64)&v22, a3);
  }
  else
  {
    *(_DWORD *)(a2 + 328) |= 0x40u;
    KeReleaseSpinLock(v12, v11);
    Isoch_Stage_CompleteTD(
      (_DWORD)v10,
      *(unsigned __int8 *)(a1 + 11),
      *(_DWORD *)(a1 + 8) & 0xFFFFFF,
      0,
      (__int64)&v21,
      (__int64)&v22,
      a3);
    v13 = *(_QWORD *)(a2 + 56);
    _m_prefetchw((const void *)(v13 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v13 + 32), 0x10u) & 0x10) != 0 )
    {
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD **)v13,
        *(_QWORD *)(v13 + 8),
        *(_QWORD *)(v13 + 24),
        0x2000000LL,
        "Received duplicate Stopped Transfer Events",
        0LL,
        0LL);
    }
    else
    {
      _m_prefetchw((const void *)(v13 + 32));
      if ( (_InterlockedXor((volatile signed __int32 *)(v13 + 32), 8u) & 8) != 0 )
        ESM_AddEvent((PVOID)(v13 + 288));
    }
  }
  if ( !v21 )
    return 0;
  _InterlockedExchange((volatile __int32 *)(a2 + 344), 1);
  if ( (unsigned int)TR_AttemptStateChange(a2, 2, 3) == 2 )
  {
LABEL_19:
    LOBYTE(v19) = a3;
    Isoch_MapTransfers(a2, v19);
    return 0;
  }
  if ( !v22 && (unsigned int)TR_AttemptStateChange(a2, 4, 3) == 4 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(a2 + 320),
      0LL);
    goto LABEL_19;
  }
  return 0;
}
