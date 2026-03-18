/*
 * XREFs of Control_ProcessTransferEventWithED1 @ 0x1C0024B9C
 * Callers:
 *     TR_TransferEventHandler @ 0x1C0023928 (TR_TransferEventHandler.c)
 *     Control_EP_TransferEventHandler @ 0x1C0024360 (Control_EP_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 *     memmove @ 0x1C0008700 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00152C4 (WPP_RECORDER_SF_dddd.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C00191E4 (Endpoint_HaltedCompletionCode.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C002552C (Control_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqLDDx @ 0x1C002722C (WPP_RECORDER_SF_DDqLDDx.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C00274F0 (WPP_RECORDER_SF_DDqq.c)
 *     WPP_RECORDER_SF_DDxqq @ 0x1C0027714 (WPP_RECORDER_SF_DDxqq.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

char __fastcall Control_ProcessTransferEventWithED1(__int64 *a1, __int64 a2, char a3)
{
  bool v3; // r15
  __int64 v4; // r12
  unsigned __int64 v5; // rsi
  __int64 v7; // rdi
  char v9; // bp
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rcx
  void *v13; // r8
  unsigned __int8 v14; // cl
  unsigned int v15; // ebx
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rax
  bool v19; // zf
  int v20; // eax
  __int64 v21; // r10
  void *v22; // rcx
  KSPIN_LOCK *v23; // rcx
  int v24; // ecx
  __int64 v25; // r10
  __int64 v26; // rdx
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v32; // [rsp+28h] [rbp-60h]
  __int64 v33; // [rsp+30h] [rbp-58h]
  __int64 v34; // [rsp+38h] [rbp-50h]
  __int64 v35; // [rsp+40h] [rbp-48h]
  __int64 v36; // [rsp+48h] [rbp-40h]
  int v37; // [rsp+50h] [rbp-38h]
  __int64 v38; // [rsp+58h] [rbp-30h]

  v3 = 0;
  v4 = *a1 & 4;
  v5 = *a1 & 0xFFFFFFFFFFFFFFF8uLL;
  v7 = a2;
  v9 = 1;
  if ( a2 )
  {
    v10 = *(_QWORD *)(a2 + 344);
    if ( v5 != v10 )
    {
      WPP_RECORDER_SF_DDxqq(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), *((_WORD *)a1 + 7) & 0x1F, v10, 19);
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
      v36 = *(_QWORD *)(v7 + 344);
      HIDWORD(v35) = (*a1 & 0xFFFFFFFFFFFFFFF8uLL) >> 32;
      WPP_RECORDER_SF_DDxqq(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL), *((_WORD *)a1 + 7) & 0x1F, v11, 20);
    }
  }
  v38 = *a1;
  v37 = (*((_DWORD *)a1 + 3) >> 2) & 1;
  LODWORD(v36) = a1[1] & 0xFFFFFF;
  HIDWORD(v34) = HIDWORD(a1);
  WPP_RECORDER_SF_DDqLDDx(
    *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
    *((unsigned __int8 *)a1 + 15),
    *((unsigned __int8 *)a1 + 11),
    21);
  v12 = *(_QWORD *)(v7 + 56);
  v13 = &WPP_9dc305b4e1d93dbd1473da557c698a68_Traceguids;
  if ( (*((_WORD *)a1 + 7) & 0x1F) != *(_DWORD *)(v12 + 144) )
  {
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(v12 + 80),
      2u,
      0xEu,
      0x16u,
      (__int64)&WPP_9dc305b4e1d93dbd1473da557c698a68_Traceguids,
      *((unsigned __int8 *)a1 + 15),
      *((_WORD *)a1 + 7) & 0x1F,
      a1);
    v13 = &WPP_9dc305b4e1d93dbd1473da557c698a68_Traceguids;
  }
  v14 = *((_BYTE *)a1 + 15);
  if ( v14 != *(_BYTE *)(*(_QWORD *)(v7 + 48) + 135LL) )
  {
    LODWORD(v33) = *((_WORD *)a1 + 7) & 0x1F;
    LODWORD(v32) = v14;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
      2u,
      0xEu,
      0x17u,
      (__int64)&WPP_9dc305b4e1d93dbd1473da557c698a68_Traceguids,
      v32,
      v33);
  }
  v15 = a1[1] & 0xFFFFFF;
  if ( v15 > *(_DWORD *)(v5 + 104) )
  {
    v16 = *(_QWORD *)(v7 + 56);
    LODWORD(v35) = *(_DWORD *)(v5 + 104);
    LODWORD(v34) = a1[1] & 0xFFFFFF;
    LODWORD(v33) = *(_DWORD *)(v16 + 144);
    LODWORD(v32) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 135LL);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v16 + 80),
      3u,
      0xEu,
      0x18u,
      (__int64)&WPP_9dc305b4e1d93dbd1473da557c698a68_Traceguids,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    v15 = 0;
  }
  v17 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 135LL);
  LOBYTE(v17) = 4;
  WPP_RECORDER_SF_DDqq(
    *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
    v17,
    (_DWORD)v13,
    25,
    (__int64)&WPP_9dc305b4e1d93dbd1473da557c698a68_Traceguids,
    *(_BYTE *)(*(_QWORD *)(v7 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(v7 + 56) + 144LL),
    *(_QWORD *)(v5 + 24),
    v5);
  if ( !v4 )
  {
    v18 = *(_QWORD *)(v5 + 48);
    *(_DWORD *)(v5 + 108) = v15;
    if ( (*(_DWORD *)(v18 + 32) & 1) != 0 && *(_DWORD *)(v5 + 64) == 2 )
      memmove(*(void **)(v5 + 80), *(const void **)(*(_QWORD *)(v5 + 88) + 16LL), v15);
  }
  v19 = !Endpoint_HaltedCompletionCode(*(__m128i ***)(v7 + 56), *((unsigned __int8 *)a1 + 11));
  v20 = *((unsigned __int8 *)a1 + 11);
  if ( !v19 )
  {
    *(_DWORD *)(v5 + 124) = v20;
    v21 = *(_QWORD *)(v7 + 56);
    _m_prefetchw((const void *)(v21 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v21 + 32), 0x20u) & 0x20) != 0 )
    {
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD **)v21,
        *(_QWORD *)(v21 + 8),
        *(_QWORD *)(v21 + 24),
        0x2000000LL,
        "Received duplicate Transfer Event TRB with Halted Completion Code",
        0LL,
        0LL);
      return v9;
    }
    v22 = (void *)(v21 + 288);
LABEL_43:
    ESM_AddEvent(v22);
    return v9;
  }
  v23 = (KSPIN_LOCK *)(v7 + 96);
  if ( (unsigned int)(v20 - 26) <= 2 )
  {
    *(_BYTE *)(v7 + 104) = KeAcquireSpinLockRaiseToDpc(v23);
    v24 = ++*(_DWORD *)(v5 + 132);
    if ( v4 )
    {
      if ( *(_DWORD *)(v5 + 108) == *(_DWORD *)(v5 + 104) )
      {
        *(_DWORD *)(v5 + 124) = 1;
      }
      else if ( *((_BYTE *)a1 + 11) == 28 )
      {
        *(_DWORD *)(v5 + 124) = 28;
      }
      *(_DWORD *)(v7 + 356) = *(_DWORD *)(v5 + 128) - v24;
    }
    else
    {
      *(_DWORD *)(v7 + 356) = 0;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), *(_BYTE *)(v7 + 104));
    v25 = *(_QWORD *)(v7 + 56);
    _m_prefetchw((const void *)(v25 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v25 + 32), 0x10u) & 0x10) != 0 )
    {
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD **)v25,
        *(_QWORD *)(v25 + 8),
        *(_QWORD *)(v25 + 24),
        0x2000000LL,
        "Received duplicate Stopped Transfer Events",
        0LL,
        0LL);
      return v9;
    }
    _m_prefetchw((const void *)(v25 + 32));
    if ( (_InterlockedXor((volatile signed __int32 *)(v25 + 32), 8u) & 8) == 0 )
      return v9;
    v22 = (void *)(v25 + 288);
    goto LABEL_43;
  }
  *(_BYTE *)(v7 + 104) = KeAcquireSpinLockRaiseToDpc(v23);
  ++*(_DWORD *)(v5 + 132);
  if ( v4 )
  {
    v19 = *(_DWORD *)(v5 + 112) == 3;
    *(_DWORD *)(v5 + 124) = *((unsigned __int8 *)a1 + 11);
    if ( !v19 && *(_DWORD *)(v5 + 116) != 3 )
    {
      LOBYTE(v26) = a3;
      Control_Transfer_CompleteCancelable(v7, v26);
    }
  }
  v27 = *(_DWORD *)(v7 + 356);
  if ( v27 )
  {
    v28 = v27 - 1;
    *(_DWORD *)(v7 + 356) = v28;
    if ( !v28 )
      v3 = (*(_BYTE *)(v7 + 352) & 4) != 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), *(_BYTE *)(v7 + 104));
  if ( v3 )
  {
    v29 = *(_QWORD *)(v7 + 56);
    if ( !*(_BYTE *)(v29 + 37)
      || (v30 = *(_QWORD *)(v29 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v30 + 20)) == *(_DWORD *)(v30 + 8)) )
    {
      v22 = (void *)(v29 + 288);
      goto LABEL_43;
    }
  }
  return v9;
}
