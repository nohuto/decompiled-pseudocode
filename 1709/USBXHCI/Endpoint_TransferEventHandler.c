/*
 * XREFs of Endpoint_TransferEventHandler @ 0x1C001B71C
 * Callers:
 *     UsbDevice_TransferEventHandler @ 0x1C0035B6C (UsbDevice_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0005320 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C00191E4 (Endpoint_HaltedCompletionCode.c)
 *     Endpoint_Stream_IsTransferEventLikelyDuplicate @ 0x1C001B53C (Endpoint_Stream_IsTransferEventLikelyDuplicate.c)
 *     Endpoint_UnhandledCompletionCode @ 0x1C001CF38 (Endpoint_UnhandledCompletionCode.c)
 *     WPP_RECORDER_SF_ddqL @ 0x1C001D798 (WPP_RECORDER_SF_ddqL.c)
 *     WPP_RECORDER_SF_ddx @ 0x1C001DC2C (WPP_RECORDER_SF_ddx.c)
 *     TR_TransferEventHandler @ 0x1C0023928 (TR_TransferEventHandler.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

void __fastcall Endpoint_TransferEventHandler(__int64 a1, __m128i **a2, char a3)
{
  __int64 v6; // r8
  int v7; // r8d
  signed __int64 v8; // rcx
  __m128i *v9; // rbp
  int v10; // r9d
  __int64 v11; // rax
  signed __int64 v12; // rdx
  int v13; // esi
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  __int32 v17; // edx
  const char *v18; // rax
  char v19; // [rsp+98h] [rbp+10h] BYREF

  if ( (_mm_srli_si128((*a2)[17], 8).m128i_u8[0] & 4) != 0
    && *(_BYTE *)(a1 + 11) == 2
    && (*(_DWORD *)(a1 + 12) & 4) == 0 )
  {
    WPP_RECORDER_SF_ddqL((unsigned int)a2[10], (_DWORD)a2, a3, 85);
    return;
  }
  if ( (unsigned __int8)Endpoint_UnhandledCompletionCode(a2, *(unsigned __int8 *)(a1 + 11)) )
  {
    WPP_RECORDER_SF_ddd(
      (__int64)a2[10],
      2u,
      0xDu,
      0x56u,
      (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
      a2[2][8].m128i_u8[7],
      *((_DWORD *)a2 + 36),
      *(unsigned __int8 *)(a1 + 11));
    Controller_HwVerifierBreakIfEnabled(
      *a2,
      (__int64)a2[1],
      (__int64)a2[3],
      2048LL,
      "Unrecognized completion code in Transfer Event TRB",
      0LL,
      (__int64 *)a2 + 23);
    v7 = 4112;
LABEL_7:
    Controller_ReportFatalError((__int64)*a2, 2, v7, (__int64)a2[2], (__int64)a2, 0LL);
    return;
  }
  if ( !*((_BYTE *)a2 + 37) )
  {
    LOBYTE(v6) = a3;
    TR_TransferEventHandler(a1, a2[11], v6);
    return;
  }
  v8 = *(_QWORD *)a1;
  v9 = a2[17];
  if ( !*(_QWORD *)a1 )
  {
    v10 = 87;
LABEL_15:
    WPP_RECORDER_SF_ddqL((unsigned int)a2[10], a2[2][8].m128i_u8[7], (_BYTE)v6, v10);
    goto LABEL_34;
  }
  v11 = v9[2].m128i_i64[0];
  v12 = *(_QWORD *)(v11 + 24);
  if ( v8 >= v12 && v8 < v12 + *(unsigned int *)(v11 + 44) )
  {
    v10 = 88;
    goto LABEL_15;
  }
  v13 = 1;
  if ( v9->m128i_i32[2] )
  {
    while ( 1 )
    {
      LOBYTE(v6) = a3;
      if ( (unsigned __int8)TR_TransferEventHandler(a1, a2[17][3].m128i_i64[13 * (unsigned int)(v13 - 1)], v6) )
        break;
      if ( (unsigned int)++v13 > v9->m128i_i32[2] )
        goto LABEL_19;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_ddd(
        (__int64)a2[10],
        5u,
        0xDu,
        0x59u,
        (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
        a2[2][8].m128i_u8[7],
        *((_DWORD *)a2 + 36),
        v13 + 1);
    return;
  }
LABEL_19:
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_ddx((unsigned int)a2[10], v12, v6, 90);
    v7 = 4126;
    goto LABEL_7;
  }
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) > 2u )
  {
    if ( !Endpoint_Stream_IsTransferEventLikelyDuplicate((_QWORD *)a1, (__int64)a2, &v19) )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_ddx((unsigned int)a2[10], v14, v15, 95);
      v7 = 4127;
      goto LABEL_7;
    }
    if ( ((*a2)[17].m128i_i64[0] & 0x4000000000LL) != 0 )
    {
      v16 = 92;
    }
    else
    {
      if ( !v19 || (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 > 2 )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_ddx((unsigned int)a2[10], v14, v15, 94);
        v7 = 4128;
        goto LABEL_7;
      }
      v16 = 93;
    }
    LOBYTE(v14) = 3;
    WPP_RECORDER_SF_ddx((unsigned int)a2[10], v14, v15, v16);
    return;
  }
  WPP_RECORDER_SF_dd(
    (__int64)a2[10],
    2u,
    0xDu,
    0x5Bu,
    (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
    a2[2][8].m128i_u8[7],
    *((_DWORD *)a2 + 36));
LABEL_34:
  if ( Endpoint_HaltedCompletionCode(a2, *(unsigned __int8 *)(a1 + 11)) )
  {
    v17 = *(unsigned __int8 *)(a1 + 11);
    _m_prefetchw(a2 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)a2 + 8, 0x20u) & 0x20) != 0 )
    {
      v18 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_41:
      Controller_HwVerifierBreakIfEnabled(*a2, (__int64)a2[1], (__int64)a2[3], 0x2000000LL, v18, 0LL, 0LL);
      return;
    }
    a2[17][1].m128i_i32[2] = v17;
    _InterlockedOr((volatile signed __int32 *)a2 + 8, 4u);
LABEL_43:
    ESM_AddEvent(a2 + 36);
    return;
  }
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 > 2 )
    return;
  _m_prefetchw(a2 + 4);
  if ( (_InterlockedOr((volatile signed __int32 *)a2 + 8, 0x10u) & 0x10) != 0 )
  {
    v18 = "Received duplicate Stopped Transfer Events";
    goto LABEL_41;
  }
  _m_prefetchw(a2 + 4);
  if ( (_InterlockedXor((volatile signed __int32 *)a2 + 8, 8u) & 8) != 0 )
    goto LABEL_43;
}
