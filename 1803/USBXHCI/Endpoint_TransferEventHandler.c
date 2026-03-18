/*
 * XREFs of Endpoint_TransferEventHandler @ 0x1C00144C0
 * Callers:
 *     UsbDevice_TransferEventHandler @ 0x1C003371C (UsbDevice_TransferEventHandler.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C0011F18 (Endpoint_HaltedCompletionCode.c)
 *     Endpoint_Stream_IsTransferEventLikelyDuplicate @ 0x1C00142E0 (Endpoint_Stream_IsTransferEventLikelyDuplicate.c)
 *     Endpoint_UnhandledCompletionCode @ 0x1C0015CE8 (Endpoint_UnhandledCompletionCode.c)
 *     WPP_RECORDER_SF_ddqL @ 0x1C0016548 (WPP_RECORDER_SF_ddqL.c)
 *     WPP_RECORDER_SF_ddx @ 0x1C00169DC (WPP_RECORDER_SF_ddx.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     TR_TransferEventHandler @ 0x1C00212AC (TR_TransferEventHandler.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

void __fastcall Endpoint_TransferEventHandler(__int64 a1, __m128i **a2, char a3)
{
  __int64 v6; // r8
  int v7; // edx
  int v8; // r8d
  signed __int64 v9; // rcx
  __m128i *v10; // rbp
  int v11; // r9d
  __int64 v12; // rax
  signed __int64 v13; // rdx
  int v14; // esi
  int v15; // edx
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  bool v19; // al
  __int32 v20; // edx
  const char *v21; // rax
  char v22; // [rsp+98h] [rbp+10h] BYREF

  if ( (_mm_srli_si128((*a2)[17], 8).m128i_u8[0] & 4) != 0
    && *(_BYTE *)(a1 + 11) == 2
    && (*(_DWORD *)(a1 + 12) & 4) == 0 )
  {
    WPP_RECORDER_SF_ddqL((unsigned int)a2[10], (_DWORD)a2, a3, 85);
    return;
  }
  if ( (unsigned __int8)Endpoint_UnhandledCompletionCode(a2, *(unsigned __int8 *)(a1 + 11)) )
  {
    v7 = a2[2][8].m128i_u8[7];
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_ddL(
      (unsigned int)a2[10],
      v7,
      13,
      86,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      a2[2][8].m128i_i8[7],
      *((_DWORD *)a2 + 36),
      *(_BYTE *)(a1 + 11));
    Controller_HwVerifierBreakIfEnabled(
      *a2,
      (int)a2[1],
      (int)a2[3],
      2048LL,
      "Unrecognized completion code in Transfer Event TRB",
      0LL,
      a2 + 23);
    v8 = 4112;
LABEL_7:
    Controller_ReportFatalError((__int64)*a2, 2, v8, (__int64)a2[2], (__int64)a2, 0LL);
    return;
  }
  if ( !*((_BYTE *)a2 + 37) )
  {
    LOBYTE(v6) = a3;
    TR_TransferEventHandler(a1, a2[11], v6);
    return;
  }
  v9 = *(_QWORD *)a1;
  v10 = a2[17];
  if ( !*(_QWORD *)a1 )
  {
    v11 = 87;
LABEL_15:
    WPP_RECORDER_SF_ddqL((unsigned int)a2[10], a2[2][8].m128i_u8[7], (_BYTE)v6, v11);
    goto LABEL_34;
  }
  v12 = v10[2].m128i_i64[0];
  v13 = *(_QWORD *)(v12 + 24);
  if ( v9 >= v13 && v9 < v13 + *(unsigned int *)(v12 + 44) )
  {
    v11 = 88;
    goto LABEL_15;
  }
  v14 = 1;
  if ( v10->m128i_i32[2] )
  {
    while ( 1 )
    {
      LOBYTE(v6) = a3;
      if ( (unsigned __int8)TR_TransferEventHandler(a1, a2[17][3].m128i_i64[13 * (unsigned int)(v14 - 1)], v6) )
        break;
      if ( (unsigned int)++v14 > v10->m128i_i32[2] )
        goto LABEL_19;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = a2[2][8].m128i_u8[7];
      LOBYTE(v15) = 5;
      WPP_RECORDER_SF_ddL(
        (unsigned int)a2[10],
        v15,
        13,
        89,
        (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
        a2[2][8].m128i_i8[7],
        *((_DWORD *)a2 + 36),
        v14 + 1);
    }
    return;
  }
LABEL_19:
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_ddx((unsigned int)a2[10], v13, v6, 90);
    v8 = 4126;
    goto LABEL_7;
  }
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) > 2u )
  {
    if ( !Endpoint_Stream_IsTransferEventLikelyDuplicate((_QWORD *)a1, (__int64)a2, &v22) )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_ddx((unsigned int)a2[10], v16, v17, 95);
      v8 = 4127;
      goto LABEL_7;
    }
    if ( ((*a2)[17].m128i_i64[0] & 0x4000000000LL) != 0 )
    {
      v18 = 92;
    }
    else
    {
      if ( !v22 || (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 > 2 )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_ddx((unsigned int)a2[10], v16, v17, 94);
        v8 = 4128;
        goto LABEL_7;
      }
      v18 = 93;
    }
    LOBYTE(v16) = 3;
    WPP_RECORDER_SF_ddx((unsigned int)a2[10], v16, v17, v18);
    return;
  }
  WPP_RECORDER_SF_dd(
    (__int64)a2[10],
    2u,
    0xDu,
    0x5Bu,
    (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
    a2[2][8].m128i_u8[7],
    *((_DWORD *)a2 + 36));
LABEL_34:
  v19 = Endpoint_HaltedCompletionCode(a2, *(unsigned __int8 *)(a1 + 11));
  v20 = *(unsigned __int8 *)(a1 + 11);
  if ( v19 )
  {
    _m_prefetchw(a2 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)a2 + 8, 0x20u) & 0x20) != 0 )
    {
      v21 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_41:
      Controller_HwVerifierBreakIfEnabled(*a2, (int)a2[1], (int)a2[3], 0x2000000LL, v21, 0LL, 0LL);
      return;
    }
    a2[17][1].m128i_i32[2] = v20;
    _InterlockedOr((volatile signed __int32 *)a2 + 8, 4u);
LABEL_43:
    ESM_AddEvent(a2 + 36);
    return;
  }
  if ( (unsigned int)(v20 - 26) > 2 )
    return;
  _m_prefetchw(a2 + 4);
  if ( (_InterlockedOr((volatile signed __int32 *)a2 + 8, 0x10u) & 0x10) != 0 )
  {
    v21 = "Received duplicate Stopped Transfer Events";
    goto LABEL_41;
  }
  _m_prefetchw(a2 + 4);
  if ( (_InterlockedXor((volatile signed __int32 *)a2 + 8, 8u) & 8) != 0 )
    goto LABEL_43;
}
