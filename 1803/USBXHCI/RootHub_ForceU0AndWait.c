/*
 * XREFs of RootHub_ForceU0AndWait @ 0x1C001A260
 * Callers:
 *     RootHub_ForceU3 @ 0x1C001A594 (RootHub_ForceU3.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C001D970 (RootHub_UcxEvtSetPortFeature.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_ForceU0AndWait(_QWORD *a1, int a2)
{
  unsigned int v3; // esi
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  unsigned int *v9; // rdi
  int Ulong; // ebx
  unsigned int *v11; // rbx
  int v12; // ebx
  int v13; // ebx
  __m128i *v14; // rcx
  unsigned __int32 v15; // edi
  int v16; // edi
  int i; // r14d
  unsigned int v18; // ebx
  int v19; // edx
  __int64 v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+28h] [rbp-40h]
  __int64 v24; // [rsp+28h] [rbp-40h]
  __int64 v25; // [rsp+28h] [rbp-40h]
  __int64 v26; // [rsp+28h] [rbp-40h]
  __int64 v27; // [rsp+30h] [rbp-38h]
  unsigned int *v28; // [rsp+70h] [rbp+8h]

  v3 = 0;
  v4 = *(_QWORD *)(a1[1] + 88LL);
  v5 = (unsigned int)(a2 - 1);
  v6 = a1[5];
  v7 = a1[6];
  v8 = (unsigned __int64)(unsigned int)v5 << 6;
  v28 = (unsigned int *)(16 * v5 + v6);
  v9 = v28 + 1;
  if ( *(_BYTE *)(v7 + v8 + 1) == 2 )
  {
    if ( !*(_BYTE *)(v7 + v8 + 11) )
      return v3;
    DynamicLock_Acquire(*(_QWORD *)(v7 + v8 + 16));
    Ulong = XilRegister_ReadUlong(v4, v9);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xEDu,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      Ulong);
    Ulong &= ~0x10000u;
    LODWORD(v21) = Ulong;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xEEu,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v21);
    XilRegister_WriteUlong(v4, v9, Ulong);
    v11 = v28;
  }
  else
  {
    DynamicLock_Acquire(*(_QWORD *)(v7 + v8 + 16));
    WPP_RECORDER_SF_(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xEFu,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids);
    v12 = XilRegister_ReadUlong(v4, v9);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xF0u,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v12);
    v12 &= 0xFFFF0000;
    LODWORD(v23) = v12;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xF1u,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v23);
    XilRegister_WriteUlong(v4, v9, v12);
    LODWORD(v24) = XilRegister_ReadUlong(v4, v9);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xF2u,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v24);
    v13 = XilRegister_ReadUlong(v4, v28);
    LODWORD(v25) = v13;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xF3u,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v25);
    v14 = (__m128i *)a1[1];
    v15 = v13 & ((_mm_srli_si128(v14[17], 8).m128i_u32[0] << 16) & 0x400000 | 0xE00C200) | 0x10000;
    LODWORD(v26) = v15;
    WPP_RECORDER_SF_d(
      v14[4].m128i_i64[1],
      4u,
      0xBu,
      0xF4u,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v26);
    v11 = v28;
    XilRegister_WriteUlong(v4, v28, v15);
  }
  DynamicLock_Release(*(_QWORD *)(a1[6] + v8 + 16));
  v16 = 1200;
  for ( i = 0; ; i += 10 )
  {
    v18 = XilRegister_ReadUlong(v4, v11);
    LODWORD(v27) = v18;
    LODWORD(v22) = i;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xF5u,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v22,
      v27);
    if ( v18 == -1 )
      break;
    v19 = (v18 >> 5) & 0xF;
    if ( !v19 )
      return v3;
    if ( ((v19 - 5) & 0xFFFFFFFA) == 0 && v19 != 9 || (v18 & 0x20203) != 0x203 || v19 == 4 )
      break;
    if ( ((v19 - 9) & 0xFFFFFFFD) == 0 )
    {
      v3 = -1073741823;
      LODWORD(v22) = (v18 >> 5) & 0xF;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        2u,
        0xBu,
        0xF6u,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v22);
      return v3;
    }
    if ( (v18 & 0x10) != 0 || !v16 )
      break;
    --v16;
    KeStallExecutionProcessor(0xAu);
    v11 = v28;
  }
  return (unsigned int)-1073741823;
}
