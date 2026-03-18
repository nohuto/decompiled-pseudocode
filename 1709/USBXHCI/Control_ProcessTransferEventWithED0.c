/*
 * XREFs of Control_ProcessTransferEventWithED0 @ 0x1C00248A4
 * Callers:
 *     TR_TransferEventHandler @ 0x1C0023928 (TR_TransferEventHandler.c)
 *     Control_EP_TransferEventHandler @ 0x1C0024360 (Control_EP_TransferEventHandler.c)
 * Callees:
 *     memmove @ 0x1C0008700 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00152C4 (WPP_RECORDER_SF_dddd.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C00191E4 (Endpoint_HaltedCompletionCode.c)
 *     Control_ProcessTransferEventPointer @ 0x1C0024708 (Control_ProcessTransferEventPointer.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x1C00263A4 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     WPP_RECORDER_SF_DDqLDDx @ 0x1C002722C (WPP_RECORDER_SF_DDqLDDx.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

char __fastcall Control_ProcessTransferEventWithED0(__int64 a1, __int64 a2)
{
  char v2; // di
  KIRQL v5; // al
  __int64 v6; // rbx
  KIRQL v7; // dl
  size_t v8; // r8
  __int64 v9; // rax
  __int64 v10; // r10
  const char *v11; // rax
  int v12; // ecx
  KIRQL v13; // dl
  __int64 v15; // [rsp+38h] [rbp-40h]
  int v16; // [rsp+48h] [rbp-30h]
  int v17; // [rsp+50h] [rbp-28h]
  __int64 v18; // [rsp+58h] [rbp-20h]
  int v19; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0;
  v19 = 0;
  v20 = 0;
  v18 = *(_QWORD *)a1;
  v17 = (*(_DWORD *)(a1 + 12) >> 2) & 1;
  v16 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
  HIDWORD(v15) = HIDWORD(a1);
  WPP_RECORDER_SF_DDqLDDx(
    *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
    *(unsigned __int8 *)(a1 + 15),
    *(unsigned __int8 *)(a1 + 11),
    17);
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 <= 2 && (*(_DWORD *)(*(_QWORD *)(a2 + 56) + 32LL) & 0x40) != 0 )
    return 1;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v6 = *(_QWORD *)(a2 + 344);
  *(_BYTE *)(a2 + 104) = v5;
  if ( !v6 )
  {
    v7 = v5;
LABEL_29:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v7);
    return v2;
  }
  if ( !Control_ProcessTransferEventPointer(a2, v6, (__int64 *)a1, &v19, (int *)&v20) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
    Control_ValidateED0TrbPointerOnMismatch(a2, a1);
    return v2;
  }
  v8 = v20;
  if ( v20 > *(_DWORD *)(v6 + 104) )
  {
    LODWORD(v15) = v20;
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
      3u,
      0xEu,
      0x12u,
      (__int64)&WPP_9dc305b4e1d93dbd1473da557c698a68_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
      v15,
      *(_DWORD *)(v6 + 104),
      v16,
      v17,
      v18);
    v8 = 0LL;
    v20 = 0;
  }
  if ( (_DWORD)v8 )
  {
    v9 = *(_QWORD *)(v6 + 48);
    *(_DWORD *)(v6 + 108) = v8;
    if ( (*(_DWORD *)(v9 + 32) & 1) != 0 && *(_DWORD *)(v6 + 64) == 2 )
      memmove(*(void **)(v6 + 80), *(const void **)(*(_QWORD *)(v6 + 88) + 16LL), v8);
  }
  if ( !Endpoint_HaltedCompletionCode(*(__m128i ***)(a2 + 56), *(unsigned __int8 *)(a1 + 11)) )
  {
    v12 = *(unsigned __int8 *)(a1 + 11);
    if ( (unsigned int)(v12 - 26) > 2 )
    {
      v7 = *(_BYTE *)(a2 + 104);
      goto LABEL_29;
    }
    if ( *(_DWORD *)(v6 + 108) == *(_DWORD *)(v6 + 104) )
    {
      *(_DWORD *)(v6 + 124) = 1;
    }
    else if ( (_BYTE)v12 == 28 )
    {
      *(_DWORD *)(v6 + 124) = 28;
    }
    ++*(_DWORD *)(v6 + 132);
    v13 = *(_BYTE *)(a2 + 104);
    *(_DWORD *)(a2 + 356) = v19 - *(_DWORD *)(v6 + 132) + 1;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v13);
    v10 = *(_QWORD *)(a2 + 56);
    _m_prefetchw((const void *)(v10 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v10 + 32), 0x10u) & 0x10) != 0 )
    {
      v11 = "Received duplicate Stopped Transfer Events";
      goto LABEL_25;
    }
    _m_prefetchw((const void *)(v10 + 32));
    if ( (_InterlockedXor((volatile signed __int32 *)(v10 + 32), 8u) & 8) == 0 )
      return 1;
LABEL_27:
    ESM_AddEvent((PVOID)(v10 + 288));
    return 1;
  }
  *(_DWORD *)(v6 + 124) = *(unsigned __int8 *)(a1 + 11);
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
  v10 = *(_QWORD *)(a2 + 56);
  _m_prefetchw((const void *)(v10 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v10 + 32), 0x20u) & 0x20) == 0 )
    goto LABEL_27;
  v11 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_25:
  Controller_HwVerifierBreakIfEnabled(
    *(_QWORD **)v10,
    *(_QWORD *)(v10 + 8),
    *(_QWORD *)(v10 + 24),
    0x2000000LL,
    v11,
    0LL,
    0LL);
  return 1;
}
