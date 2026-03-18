/*
 * XREFs of Isoch_ProcessTransferRingEmptyEvent @ 0x1C0029B58
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0029548 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_GetFrameNumber @ 0x1C0010C5C (Controller_GetFrameNumber.c)
 *     TR_AttemptStateChange @ 0x1C002275C (TR_AttemptStateChange.c)
 *     Isoch_MapTransfers @ 0x1C0028964 (Isoch_MapTransfers.c)
 *     WPP_RECORDER_SF_DDDL @ 0x1C002CA5C (WPP_RECORDER_SF_DDDL.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

__int64 __fastcall Isoch_ProcessTransferRingEmptyEvent(__int64 a1, __int64 a2, char a3)
{
  char v6; // r14
  int FrameNumber; // ebp
  KIRQL v8; // al
  int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rdx
  int v14; // [rsp+40h] [rbp-38h]

  v6 = 0;
  FrameNumber = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 1, 0LL, 0LL);
  v14 = *(unsigned __int8 *)(a2 + 11);
  WPP_RECORDER_SF_DDDL(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
    v14,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL));
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  ++*(_DWORD *)(a1 + 268);
  v9 = *(_DWORD *)(a1 + 376);
  *(_BYTE *)(a1 + 104) = v8;
  v10 = *(_DWORD *)(a1 + 328) & 0xFFFFFFEF;
  *(_DWORD *)(a1 + 328) = v10;
  if ( !v9 )
    *(_DWORD *)(a1 + 328) = v10 & 0xFFFFFFDF;
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 272LL) & 0x40000000000LL) != 0
    && v9
    && (*(_DWORD *)(a1 + 328) & 0x20) != 0
    && FrameNumber - *(_DWORD *)(a1 + 364) >= 0 )
  {
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xEu,
      0x27u,
      (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      FrameNumber,
      v14);
    v6 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  if ( v6 )
  {
    v11 = *(_QWORD *)(a1 + 56);
    _m_prefetchw((const void *)(v11 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v11 + 32), 1u);
    if ( (result & 1) == 0 )
      return ESM_AddEvent((PVOID)(v11 + 288));
  }
  else
  {
    _InterlockedExchange((volatile __int32 *)(a1 + 348), 1);
    result = TR_AttemptStateChange(a1, 4, 3);
    if ( (_DWORD)result == 4 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 320),
        0LL);
      LOBYTE(v13) = a3;
      return Isoch_MapTransfers(a1, v13);
    }
  }
  return result;
}
