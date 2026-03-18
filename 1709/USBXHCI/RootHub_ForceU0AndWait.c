/*
 * XREFs of RootHub_ForceU0AndWait @ 0x1C001FBCC
 * Callers:
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0003260 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_ForceU3 @ 0x1C001FF3C (RootHub_ForceU3.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001F7B0 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C003FB80 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_ForceU0AndWait(_QWORD *a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // r12
  unsigned int *v5; // r13
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  int Ulong; // ebx
  int v9; // ebx
  unsigned int *v10; // rdx
  int v11; // ebx
  int v12; // ebx
  __m128i *v13; // rcx
  int v14; // ebx
  int v15; // ebp
  unsigned int v16; // ebx
  int v17; // ecx
  int v18; // edx
  __int64 v20; // [rsp+28h] [rbp-40h]
  __int64 v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+28h] [rbp-40h]
  __int64 v24; // [rsp+28h] [rbp-40h]
  __int64 v25; // [rsp+28h] [rbp-40h]
  __int64 v26; // [rsp+28h] [rbp-40h]
  __int64 v27; // [rsp+30h] [rbp-38h]
  int v28; // [rsp+78h] [rbp+10h]

  v3 = 0;
  v4 = *(_QWORD *)(a1[1] + 88LL);
  v5 = (unsigned int *)(a1[5] + 16LL * (unsigned int)(a2 - 1));
  v6 = a1[6];
  v7 = (unsigned __int64)(unsigned int)(a2 - 1) << 6;
  if ( *(_BYTE *)(v6 + v7 + 1) == 2 )
  {
    if ( !*(_BYTE *)(v6 + v7 + 11) )
      return v3;
    DynamicLock_Acquire(*(_QWORD *)(v6 + v7 + 16));
    Ulong = XilRegister_ReadUlong(v4, v5 + 1);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xEDu,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      Ulong);
    v9 = Ulong & 0xFFFEFFFF;
    LODWORD(v20) = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xEEu,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v20);
    v10 = v5 + 1;
  }
  else
  {
    DynamicLock_Acquire(*(_QWORD *)(v6 + v7 + 16));
    WPP_RECORDER_SF_(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xEFu,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
    v11 = XilRegister_ReadUlong(v4, v5 + 1);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xF0u,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v11);
    v11 &= 0xFFFF0000;
    LODWORD(v22) = v11;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xF1u,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v22);
    XilRegister_WriteUlong(v4, v5 + 1, v11);
    LODWORD(v23) = XilRegister_ReadUlong(v4, v5 + 1);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xF2u,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v23);
    v12 = XilRegister_ReadUlong(v4, v5);
    LODWORD(v24) = v12;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xF3u,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v24);
    v13 = (__m128i *)a1[1];
    if ( (_mm_srli_si128(v13[17], 8).m128i_u8[0] & 0x40) != 0 )
      v14 = v12 & 0xE40C200;
    else
      v14 = v12 & 0xE00C200;
    v9 = v14 | 0x10000;
    LODWORD(v25) = v9;
    WPP_RECORDER_SF_d(
      v13[4].m128i_i64[1],
      4u,
      0xBu,
      0xF4u,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v25);
    v10 = v5;
  }
  XilRegister_WriteUlong(v4, v10, v9);
  DynamicLock_Release(*(_QWORD *)(a1[6] + v7 + 16));
  v15 = 1200;
  v16 = XilRegister_ReadUlong(v4, v5);
  LODWORD(v21) = 0;
  WPP_RECORDER_SF_DD(
    *(_QWORD *)(a1[1] + 72LL),
    4u,
    0xBu,
    0xF5u,
    (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
    v21,
    v16);
  if ( v16 == -1 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v17 = 0;
    while ( 1 )
    {
      v18 = (v16 >> 5) & 0xF;
      if ( !v18 )
        break;
      if ( (unsigned int)(v18 - 5) <= 1 || v18 == 10 || (v16 & 0x203) != 0x203 || (v16 & 0x20000) != 0 || v18 == 4 )
        return (unsigned int)-1073741823;
      if ( v18 == 9 || v18 == 11 )
      {
        v3 = -1073741823;
        LODWORD(v26) = (v16 >> 5) & 0xF;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 72LL),
          2u,
          0xBu,
          0xF6u,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v26);
        return v3;
      }
      if ( (v16 & 0x10) == 0 )
      {
        if ( v15 )
        {
          --v15;
          v28 = v17 + 10;
          KeStallExecutionProcessor(0xAu);
          v16 = XilRegister_ReadUlong(v4, v5);
          LODWORD(v27) = v16;
          LODWORD(v26) = v28;
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(a1[1] + 72LL),
            4u,
            0xBu,
            0xF5u,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v26,
            v27);
          v17 = v28;
          if ( v16 != -1 )
            continue;
        }
      }
      return (unsigned int)-1073741823;
    }
  }
  return v3;
}
