/*
 * XREFs of Control_ProcessTransferEventWithED0 @ 0x1C0022114
 * Callers:
 *     TR_TransferEventHandler @ 0x1C00212AC (TR_TransferEventHandler.c)
 *     Control_EP_TransferEventHandler @ 0x1C0021BD0 (Control_EP_TransferEventHandler.c)
 * Callees:
 *     memmove @ 0x1C0002A00 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000DF64 (WPP_RECORDER_SF_dddd.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C0011F18 (Endpoint_HaltedCompletionCode.c)
 *     Control_ProcessTransferEventPointer @ 0x1C0021F78 (Control_ProcessTransferEventPointer.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x1C0023BC4 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     WPP_RECORDER_SF_DDqLDDx @ 0x1C0024C90 (WPP_RECORDER_SF_DDqLDDx.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

char __fastcall Control_ProcessTransferEventWithED0(__int64 a1, __int64 a2)
{
  char v2; // di
  KIRQL v5; // al
  __int64 v6; // rbx
  KIRQL v7; // dl
  size_t v8; // r8
  __int64 v9; // rax
  bool v10; // al
  int v11; // ecx
  __int64 v12; // r10
  const char *v13; // rax
  KIRQL v14; // dl
  __int64 v16; // [rsp+38h] [rbp-40h]
  int v17; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0;
  v17 = 0;
  v18 = 0;
  HIDWORD(v16) = HIDWORD(a1);
  WPP_RECORDER_SF_DDqLDDx(
    *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
    HIWORD(*(_DWORD *)(a1 + 12)) & 0x1F,
    *(_DWORD *)(a1 + 8) & 0xFFFFFF,
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
  if ( !Control_ProcessTransferEventPointer(a2, v6, (__int64 *)a1, &v17, (int *)&v18) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
    Control_ValidateED0TrbPointerOnMismatch(a2, a1);
    return v2;
  }
  v8 = v18;
  if ( v18 > *(_DWORD *)(v6 + 104) )
  {
    LODWORD(v16) = v18;
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
      3u,
      0xEu,
      0x12u,
      (__int64)&WPP_c6284e221afa347fe82b1ff2c61a8f94_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
      v16,
      *(_DWORD *)(v6 + 104));
    v8 = 0LL;
    v18 = 0;
  }
  if ( (_DWORD)v8 )
  {
    v9 = *(_QWORD *)(v6 + 48);
    *(_DWORD *)(v6 + 108) = v8;
    if ( (*(_DWORD *)(v9 + 32) & 1) != 0 && *(_DWORD *)(v6 + 64) == 2 )
      memmove(*(void **)(v6 + 80), *(const void **)(*(_QWORD *)(v6 + 88) + 16LL), v8);
  }
  v10 = Endpoint_HaltedCompletionCode(*(__m128i ***)(a2 + 56), *(unsigned __int8 *)(a1 + 11));
  v11 = *(unsigned __int8 *)(a1 + 11);
  if ( !v10 )
  {
    if ( (unsigned int)(v11 - 26) > 2 )
    {
      v7 = *(_BYTE *)(a2 + 104);
      goto LABEL_29;
    }
    if ( *(_DWORD *)(v6 + 108) == *(_DWORD *)(v6 + 104) )
    {
      *(_DWORD *)(v6 + 124) = 1;
    }
    else if ( (_BYTE)v11 == 28 )
    {
      *(_DWORD *)(v6 + 124) = 28;
    }
    ++*(_DWORD *)(v6 + 132);
    v14 = *(_BYTE *)(a2 + 104);
    *(_DWORD *)(a2 + 356) = v17 - *(_DWORD *)(v6 + 132) + 1;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v14);
    v12 = *(_QWORD *)(a2 + 56);
    _m_prefetchw((const void *)(v12 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v12 + 32), 0x10u) & 0x10) != 0 )
    {
      v13 = "Received duplicate Stopped Transfer Events";
      goto LABEL_25;
    }
    _m_prefetchw((const void *)(v12 + 32));
    if ( (_InterlockedXor((volatile signed __int32 *)(v12 + 32), 8u) & 8) == 0 )
      return 1;
LABEL_27:
    ESM_AddEvent((PVOID)(v12 + 288));
    return 1;
  }
  *(_DWORD *)(v6 + 124) = v11;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
  v12 = *(_QWORD *)(a2 + 56);
  _m_prefetchw((const void *)(v12 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v12 + 32), 0x20u) & 0x20) == 0 )
    goto LABEL_27;
  v13 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_25:
  Controller_HwVerifierBreakIfEnabled(
    *(_QWORD **)v12,
    *(_QWORD *)(v12 + 8),
    *(_QWORD *)(v12 + 24),
    0x2000000LL,
    v13,
    0LL,
    0LL);
  return 1;
}
