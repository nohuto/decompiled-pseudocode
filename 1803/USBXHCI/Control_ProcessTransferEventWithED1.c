/*
 * XREFs of Control_ProcessTransferEventWithED1 @ 0x1C0022404
 * Callers:
 *     TR_TransferEventHandler @ 0x1C00212AC (TR_TransferEventHandler.c)
 *     Control_EP_TransferEventHandler @ 0x1C0021BD0 (Control_EP_TransferEventHandler.c)
 * Callees:
 *     memmove @ 0x1C0002A00 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000DF64 (WPP_RECORDER_SF_dddd.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C0011F18 (Endpoint_HaltedCompletionCode.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C0022DA0 (Control_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqLDDx @ 0x1C0024C90 (WPP_RECORDER_SF_DDqLDDx.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C0024F54 (WPP_RECORDER_SF_DDqq.c)
 *     WPP_RECORDER_SF_DDxqq @ 0x1C0025178 (WPP_RECORDER_SF_DDxqq.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

char __fastcall Control_ProcessTransferEventWithED1(__int64 a1, __int64 a2, char a3)
{
  bool v3; // r15
  __int64 v4; // r12
  unsigned __int64 v5; // rdi
  __int64 v7; // rbx
  char v9; // bp
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // edx
  int v14; // r8d
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // r14d
  __int64 v18; // rcx
  int v19; // edx
  __int64 v20; // rax
  bool v21; // al
  int v22; // ecx
  __int64 v23; // r10
  const char *v24; // rax
  void *v25; // rcx
  unsigned int v26; // eax
  KSPIN_LOCK *v27; // rcx
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rdx
  bool v31; // zf
  int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v37; // [rsp+28h] [rbp-60h]
  __int64 v38; // [rsp+30h] [rbp-58h]
  __int64 v39; // [rsp+38h] [rbp-50h]
  __int64 v40; // [rsp+40h] [rbp-48h]

  v3 = 0;
  v4 = *(_QWORD *)a1 & 4LL;
  v5 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFF8uLL;
  v7 = a2;
  v9 = 1;
  if ( a2 )
  {
    v10 = *(_QWORD *)(a2 + 344);
    if ( v5 != v10 )
    {
      WPP_RECORDER_SF_DDxqq(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), HIBYTE(*(_DWORD *)(a1 + 12)), v10, 19);
      Controller_ReportFatalError(*(_QWORD *)(v7 + 40), 2, 4126, *(_QWORD *)(v7 + 48), *(_QWORD *)(v7 + 56), v7);
      return 0;
    }
  }
  else
  {
    v7 = *(_QWORD *)(v5 + 56);
    v11 = *(_QWORD *)(v7 + 344);
    if ( v5 != v11 )
    {
      HIDWORD(v40) = (*(_QWORD *)a1 & 0xFFFFFFFFFFFFFFF8uLL) >> 32;
      WPP_RECORDER_SF_DDxqq(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL), HIBYTE(*(_DWORD *)(a1 + 12)), v11, 20);
    }
  }
  LODWORD(v40) = HIBYTE(*(_DWORD *)(a1 + 8));
  HIDWORD(v39) = HIDWORD(a1);
  WPP_RECORDER_SF_DDqLDDx(
    *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
    *(_DWORD *)(a1 + 8) & 0xFFFFFF,
    (*(_DWORD *)(a1 + 12) >> 2) & 1,
    21);
  v12 = *(_QWORD *)(v7 + 56);
  v13 = *(_DWORD *)(a1 + 12);
  v14 = HIWORD(v13) & 0x1F;
  v15 = HIBYTE(v13);
  if ( v14 != *(_DWORD *)(v12 + 144) )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v12 + 80),
      2u,
      0xEu,
      0x16u,
      (__int64)&WPP_c6284e221afa347fe82b1ff2c61a8f94_Traceguids,
      v15,
      v14,
      a1,
      v40);
    LOBYTE(v15) = *(_BYTE *)(a1 + 15);
  }
  if ( (_BYTE)v15 != *(_BYTE *)(*(_QWORD *)(v7 + 48) + 135LL) )
  {
    v16 = *(_DWORD *)(a1 + 12);
    LODWORD(v38) = HIWORD(v16) & 0x1F;
    LODWORD(v37) = HIBYTE(v16);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
      2u,
      0xEu,
      0x17u,
      (__int64)&WPP_c6284e221afa347fe82b1ff2c61a8f94_Traceguids,
      v37,
      v38);
  }
  v17 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
  if ( v17 > *(_DWORD *)(v5 + 104) )
  {
    v18 = *(_QWORD *)(v7 + 56);
    LODWORD(v40) = *(_DWORD *)(v5 + 104);
    LODWORD(v39) = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
    LODWORD(v38) = *(_DWORD *)(v18 + 144);
    LODWORD(v37) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 135LL);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v18 + 80),
      3u,
      0xEu,
      0x18u,
      (__int64)&WPP_c6284e221afa347fe82b1ff2c61a8f94_Traceguids,
      v37,
      v38,
      v39,
      v40);
    v17 = 0;
  }
  v19 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 135LL);
  LOBYTE(v19) = 4;
  WPP_RECORDER_SF_DDqq(
    *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
    v19,
    v14,
    25,
    (__int64)&WPP_c6284e221afa347fe82b1ff2c61a8f94_Traceguids,
    *(_BYTE *)(*(_QWORD *)(v7 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(v7 + 56) + 144LL),
    *(_QWORD *)(v5 + 24),
    v5);
  if ( !v4 )
  {
    v20 = *(_QWORD *)(v5 + 48);
    *(_DWORD *)(v5 + 108) = v17;
    if ( (*(_DWORD *)(v20 + 32) & 1) != 0 && *(_DWORD *)(v5 + 64) == 2 )
      memmove(*(void **)(v5 + 80), *(const void **)(*(_QWORD *)(v5 + 88) + 16LL), v17);
  }
  v21 = Endpoint_HaltedCompletionCode(*(__m128i ***)(v7 + 56), *(unsigned __int8 *)(a1 + 11));
  v22 = *(unsigned __int8 *)(a1 + 11);
  if ( v21 )
  {
    *(_DWORD *)(v5 + 124) = v22;
    v23 = *(_QWORD *)(v7 + 56);
    _m_prefetchw((const void *)(v23 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v23 + 32), 0x20u) & 0x20) != 0 )
    {
      v24 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_19:
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD **)v23,
        *(_QWORD *)(v23 + 8),
        *(_QWORD *)(v23 + 24),
        0x2000000LL,
        v24,
        0LL,
        0LL);
      return v9;
    }
    v25 = (void *)(v23 + 288);
    goto LABEL_44;
  }
  v26 = v22 - 26;
  v27 = (KSPIN_LOCK *)(v7 + 96);
  if ( v26 <= 2 )
  {
    *(_BYTE *)(v7 + 104) = KeAcquireSpinLockRaiseToDpc(v27);
    v28 = *(_DWORD *)(v5 + 132) + 1;
    *(_DWORD *)(v5 + 132) = v28;
    if ( v4 )
    {
      if ( *(_DWORD *)(v5 + 108) == *(_DWORD *)(v5 + 104) )
      {
        *(_DWORD *)(v5 + 124) = 1;
      }
      else if ( *(_BYTE *)(a1 + 11) == 28 )
      {
        *(_DWORD *)(v5 + 124) = 28;
      }
      v29 = *(_DWORD *)(v5 + 128) - v28;
    }
    else
    {
      v29 = 0;
    }
    *(_DWORD *)(v7 + 356) = v29;
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), *(_BYTE *)(v7 + 104));
    v23 = *(_QWORD *)(v7 + 56);
    _m_prefetchw((const void *)(v23 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v23 + 32), 0x10u) & 0x10) != 0 )
    {
      v24 = "Received duplicate Stopped Transfer Events";
      goto LABEL_19;
    }
    _m_prefetchw((const void *)(v23 + 32));
    if ( (_InterlockedXor((volatile signed __int32 *)(v23 + 32), 8u) & 8) == 0 )
      return v9;
    v25 = (void *)(v23 + 288);
LABEL_44:
    ESM_AddEvent(v25);
    return v9;
  }
  *(_BYTE *)(v7 + 104) = KeAcquireSpinLockRaiseToDpc(v27);
  ++*(_DWORD *)(v5 + 132);
  if ( v4 )
  {
    v31 = *(_DWORD *)(v5 + 112) == 3;
    *(_DWORD *)(v5 + 124) = *(unsigned __int8 *)(a1 + 11);
    if ( !v31 && *(_DWORD *)(v5 + 116) != 3 )
    {
      LOBYTE(v30) = a3;
      Control_Transfer_CompleteCancelable(v7, v30);
    }
  }
  v32 = *(_DWORD *)(v7 + 356);
  if ( v32 )
  {
    v33 = v32 - 1;
    *(_DWORD *)(v7 + 356) = v33;
    if ( !v33 )
      v3 = (*(_BYTE *)(v7 + 352) & 4) != 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), *(_BYTE *)(v7 + 104));
  if ( v3 )
  {
    v34 = *(_QWORD *)(v7 + 56);
    if ( !*(_BYTE *)(v34 + 37)
      || (v35 = *(_QWORD *)(v34 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v35 + 20)) == *(_DWORD *)(v35 + 8)) )
    {
      v25 = (void *)(v34 + 288);
      goto LABEL_44;
    }
  }
  return v9;
}
