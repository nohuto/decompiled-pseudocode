/*
 * XREFs of Isoch_ProcessTransferEventWithED1 @ 0x1C00272C8
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x1C0025C90 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     TR_AttemptStateChange @ 0x1C0020004 (TR_AttemptStateChange.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0025464 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_MapTransfers @ 0x1C00263C0 (Isoch_MapTransfers.c)
 *     Isoch_Stage_CompleteTD @ 0x1C0027F88 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_Find @ 0x1C002852C (Isoch_Stage_Find.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C0029BD4 (Isoch_Transfer_CompleteStaleStages.c)
 *     WPP_RECORDER_SF_DDLDDx @ 0x1C002A70C (WPP_RECORDER_SF_DDLDDx.c)
 *     WPP_RECORDER_SF_DDX @ 0x1C002A978 (WPP_RECORDER_SF_DDX.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED1(__int64 a1, __int64 a2, char a3, int a4)
{
  unsigned int v7; // ebx
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // edx
  KIRQL v11; // al
  int v12; // edx
  __int64 ****v13; // r12
  KIRQL v14; // dl
  KSPIN_LOCK *v15; // rcx
  __int64 v16; // r10
  __int64 ***v17; // rbx
  int v18; // edi
  __int64 v19; // r9
  __int64 v20; // rcx
  int v21; // r9d
  __int64 v22; // rdx
  char v24; // [rsp+A0h] [rbp+8h] BYREF
  int v25; // [rsp+A8h] [rbp+10h] BYREF

  v25 = 0;
  v24 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = *(_DWORD *)(a1 + 12);
    v8 = *(_DWORD *)(a1 + 8);
    v9 = *(_QWORD *)(a2 + 56);
    v10 = HIWORD(v7) & 0x1F;
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_DDLDDx(*(_QWORD *)(v9 + 80), v10, v8 & 0xFFFFFF, 27);
  }
  if ( (*(_QWORD *)a1 & 3) != 1 )
  {
    WPP_RECORDER_SF_DDX(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), HIBYTE(*(_DWORD *)(a1 + 12)), *(_QWORD *)a1, a4);
    Controller_ReportFatalError(*(_QWORD *)(a2 + 40), 2, 4126, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56), a2);
    return 0;
  }
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v12 = *(_DWORD *)(a2 + 328);
  *(_BYTE *)(a2 + 104) = v11;
  if ( (v12 & 0x40) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v11);
    return 0;
  }
  v13 = (__int64 ****)Isoch_Stage_Find(a2, a1, a1);
  v14 = *(_BYTE *)(a2 + 104);
  v15 = (KSPIN_LOCK *)(a2 + 96);
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 > 2 )
  {
    KeReleaseSpinLock(v15, v14);
    if ( !v13 )
      return 0;
    v17 = *v13;
    v18 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
    Isoch_CompleteStaleTransfers(a2, *v13, a3);
    LOBYTE(v19) = a3;
    Isoch_Transfer_CompleteStaleStages(v20, v17, v13, v19);
    LOBYTE(v21) = 1;
    Isoch_Stage_CompleteTD((_DWORD)v13, *(unsigned __int8 *)(a1 + 11), v18, v21, (__int64)&v24, (__int64)&v25, a3);
  }
  else
  {
    *(_DWORD *)(a2 + 328) |= 0x40u;
    KeReleaseSpinLock(v15, v14);
    Isoch_Stage_CompleteTD(
      (_DWORD)v13,
      HIBYTE(*(_DWORD *)(a1 + 8)),
      *(_DWORD *)(a1 + 8) & 0xFFFFFF,
      0,
      (__int64)&v24,
      (__int64)&v25,
      a3);
    v16 = *(_QWORD *)(a2 + 56);
    _m_prefetchw((const void *)(v16 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v16 + 32), 0x10u) & 0x10) != 0 )
    {
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD **)v16,
        *(_QWORD *)(v16 + 8),
        *(_QWORD *)(v16 + 24),
        0x2000000LL,
        "Received duplicate Stopped Transfer Events",
        0LL,
        0LL);
    }
    else
    {
      _m_prefetchw((const void *)(v16 + 32));
      if ( (_InterlockedXor((volatile signed __int32 *)(v16 + 32), 8u) & 8) != 0 )
        ESM_AddEvent((PVOID)(v16 + 288));
    }
  }
  if ( !v24 )
    return 0;
  _InterlockedExchange((volatile __int32 *)(a2 + 344), 1);
  if ( (unsigned int)TR_AttemptStateChange(a2, 2, 3) == 2 )
  {
LABEL_19:
    LOBYTE(v22) = a3;
    Isoch_MapTransfers(a2, v22);
    return 0;
  }
  if ( !v25 && (unsigned int)TR_AttemptStateChange(a2, 4, 3) == 4 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(a2 + 320),
      0LL);
    goto LABEL_19;
  }
  return 0;
}
