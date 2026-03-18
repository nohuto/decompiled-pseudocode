/*
 * XREFs of ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180002F70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099040 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::CalcEntireInputBoundsFromInputResources(__int64 a1, __int128 *a2, __int64 a3)
{
  int v3; // ebx
  int v4; // xmm6_4
  int v5; // xmm7_4
  unsigned int v6; // r14d
  int v7; // xmm8_4
  unsigned int v8; // eax
  int v9; // xmm9_4
  __int64 v11; // rax
  __int128 v12; // xmm0
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v18; // r12
  __int64 v19; // r15
  unsigned int v20; // r13d
  __int64 v21; // rbx
  __int64 v22; // rcx
  _OWORD *v23; // r15
  __int128 v24; // xmm0
  int v25; // eax
  unsigned int v26; // eax
  __m128i v27; // xmm0
  int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // eax
  unsigned int v34; // [rsp+28h] [rbp-E0h]
  _QWORD v35[3]; // [rsp+38h] [rbp-D0h] BYREF
  int v36; // [rsp+50h] [rbp-B8h]
  unsigned int v37; // [rsp+54h] [rbp-B4h]
  __int64 v38; // [rsp+58h] [rbp-B0h]
  __int64 v39; // [rsp+60h] [rbp-A8h]
  __int128 *v40; // [rsp+68h] [rbp-A0h]
  __m256i v41; // [rsp+70h] [rbp-98h] BYREF
  int v42; // [rsp+90h] [rbp-78h]
  int v43; // [rsp+98h] [rbp-70h] BYREF
  int v44; // [rsp+9Ch] [rbp-6Ch]
  int v45; // [rsp+A0h] [rbp-68h]
  int v46; // [rsp+A4h] [rbp-64h]
  _BYTE v47[20]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v48; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD v49[4]; // [rsp+D0h] [rbp-38h] BYREF

  v3 = 0;
  v4 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v5 = DWORD1(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v6 = 0;
  v7 = DWORD2(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v8 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ ((*(_DWORD *)(a1 + 32) & 0xFFFFFFFE) + 2)) & 6;
  v9 = HIDWORD(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v36 = 0;
  v37 = 0;
  *(_DWORD *)(a1 + 32) = v8;
  v43 = v4;
  v44 = v5;
  v45 = v7;
  v46 = v9;
  v39 = a3;
  v40 = a2;
  LODWORD(v38) = 0;
  *(_OWORD *)&v35[1] = 0LL;
  if ( (v8 & 6) != 2 )
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x233u);
    goto LABEL_12;
  }
  v11 = *(int *)(a1 + 168);
  if ( (_DWORD)v11 )
  {
    v18 = 0LL;
    v41.m256i_i64[0] = *(int *)(a1 + 168);
    v19 = v11;
    if ( (int)v11 <= 0 )
      goto LABEL_7;
    v20 = v35[0];
    while ( 1 )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8 * v18);
      LODWORD(v35[0]) = *(_DWORD *)(*(_QWORD *)(a1 + 152) + 4 * v18);
      v48 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v22 = *(_QWORD *)(v21 + 24);
      if ( v22 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 48LL))(v22, 8LL) )
        {
          v23 = *(_OWORD **)(v21 + 24);
          v3 = (*(__int64 (__fastcall **)(_OWORD *, __int128 *, __int64))(*(_QWORD *)v23 + 184LL))(v23, v40, v39);
          if ( v3 < 0 )
          {
            v34 = 588;
            goto LABEL_15;
          }
          v42 = 0;
          memset(&v41.m256i_u64[1], 0, 24);
          v24 = v23[12];
          *(_DWORD *)v47 = v35[0];
          *(_OWORD *)&v47[4] = v24;
          v25 = DynArrayImpl<0>::AddMultipleAndSet(&v41.m256i_u64[1], 20LL, 1LL, v47);
          v3 = v25;
          if ( v25 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
          if ( v3 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x250u);
            DynArrayImpl<1>::~DynArrayImpl<1>(&v41.m256i_u64[1]);
            goto LABEL_12;
          }
          (*(void (__fastcall **)(_OWORD *, unsigned __int64 *, __int128 *))(*(_QWORD *)v23 + 152LL))(
            v23,
            &v41.m256i_u64[1],
            &v48);
          DynArrayImpl<1>::~DynArrayImpl<1>(&v41.m256i_u64[1]);
          v19 = v41.m256i_i64[0];
        }
        else
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v21 + 24) + 48LL))(
                  *(_QWORD *)(v21 + 24),
                  97LL) )
          {
            v3 = -2147467263;
            v34 = 615;
            goto LABEL_15;
          }
          v26 = *(_DWORD *)(v21 + 12) - *(_DWORD *)(v21 + 4);
          v49[0] = 0;
          v49[1] = 0;
          v27 = _mm_cvtsi32_si128(v26);
          v28 = *(_DWORD *)(v21 + 16) - *(_DWORD *)(v21 + 8);
          v49[2] = _mm_cvtepi32_ps(v27).m128_u32[0];
          *(float *)&v49[3] = (float)v28;
          CMILMatrix::Transform2DBoundsHelper<1>(v39, v49, &v48);
        }
      }
      else
      {
        v48 = *a2;
      }
      *(_DWORD *)v47 = v35[0];
      v29 = v6 + 1;
      *(_OWORD *)&v47[4] = v48;
      if ( v6 + 1 >= v6 )
        v20 = v6 + 1;
      v3 = v29 < v6 ? 0x80070216 : 0;
      if ( v29 < v6 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v20 > v37 )
      {
        v33 = DynArrayImpl<0>::AddMultipleAndSet(&v35[1], 20LL, 1LL, v47);
        v3 = v33;
        if ( v33 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0xC0u);
        v6 = v38;
      }
      else
      {
        v30 = v35[1];
        v31 = v6;
        v6 = v20;
        LODWORD(v38) = v20;
        v32 = 5 * v31;
        *(_OWORD *)(v35[1] + 4 * v32) = *(_OWORD *)v47;
        *(_DWORD *)(v30 + 4 * v32 + 16) = *(_DWORD *)&v47[16];
      }
      if ( v3 < 0 )
        break;
      if ( ++v18 >= v19 )
        goto LABEL_7;
      a2 = v40;
    }
    v34 = 623;
LABEL_15:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v34);
    goto LABEL_12;
  }
  v12 = *a2;
  *(_DWORD *)v47 = 0;
  *(_OWORD *)&v47[4] = v12;
  v13 = DynArrayImpl<0>::AddMultipleAndSet(&v35[1], 20LL, 1LL, v47);
  v3 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
  if ( v3 < 0 )
  {
    v34 = 570;
    goto LABEL_15;
  }
  v6 = v38;
LABEL_7:
  if ( v6 )
  {
    v14 = v35[1] + 4LL;
    do
    {
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v43, v14);
      v14 = v15 + 20;
    }
    while ( v16 != 1 );
    v9 = v46;
    v7 = v45;
    v5 = v44;
    v4 = v43;
  }
  *(_DWORD *)(a1 + 192) = v4;
  *(_DWORD *)(a1 + 196) = v5;
  *(_DWORD *)(a1 + 200) = v7;
  *(_DWORD *)(a1 + 204) = v9;
LABEL_12:
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<1>::~DynArrayImpl<1>(&v35[1]);
  return (unsigned int)v3;
}
