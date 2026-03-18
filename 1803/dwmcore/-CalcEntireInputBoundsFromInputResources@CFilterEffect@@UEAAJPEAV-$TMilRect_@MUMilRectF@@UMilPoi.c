/*
 * XREFs of ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18018CF80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A5380 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::CalcEntireInputBoundsFromInputResources(__int64 a1, __int128 *a2, __int64 a3)
{
  int v3; // eax
  int v5; // xmm6_4
  unsigned int v6; // r14d
  int v7; // xmm7_4
  int v8; // xmm8_4
  int v9; // xmm9_4
  int v10; // ebx
  __int64 v11; // rax
  __int128 v12; // xmm0
  int v13; // eax
  float *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v18; // r15
  unsigned int v19; // r13d
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rcx
  char v23; // al
  _OWORD *v24; // r15
  bool v25; // zf
  __int64 v26; // rax
  __int128 v27; // xmm0
  int v28; // eax
  unsigned int v29; // eax
  __m128i v30; // xmm0
  int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // eax
  unsigned int v37; // [rsp+28h] [rbp-E0h]
  _QWORD v38[3]; // [rsp+38h] [rbp-D0h] BYREF
  int v39; // [rsp+50h] [rbp-B8h]
  unsigned int v40; // [rsp+54h] [rbp-B4h]
  __int64 v41; // [rsp+58h] [rbp-B0h]
  __int64 v42; // [rsp+60h] [rbp-A8h]
  __int64 v43; // [rsp+68h] [rbp-A0h]
  __m256i v44; // [rsp+70h] [rbp-98h] BYREF
  int v45; // [rsp+90h] [rbp-78h]
  int v46; // [rsp+98h] [rbp-70h] BYREF
  int v47; // [rsp+9Ch] [rbp-6Ch]
  int v48; // [rsp+A0h] [rbp-68h]
  int v49; // [rsp+A4h] [rbp-64h]
  _BYTE v50[20]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v51; // [rsp+C0h] [rbp-48h] BYREF
  float v52[4]; // [rsp+D0h] [rbp-38h] BYREF

  v3 = *(_DWORD *)(a1 + 32);
  v5 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v6 = 0;
  v7 = DWORD1(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v8 = DWORD2(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v9 = HIDWORD(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v39 = 0;
  v40 = 0;
  v46 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_DWORD *)(a1 + 32) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  v47 = v7;
  v48 = v8;
  v49 = v9;
  v42 = a3;
  v44.m256i_i64[0] = (__int64)a2;
  LODWORD(v41) = 0;
  *(_OWORD *)&v38[1] = 0LL;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) == 2 )
  {
    v11 = *(int *)(a1 + 152);
    if ( (_DWORD)v11 )
    {
      v10 = 0;
      v43 = *(int *)(a1 + 152);
      v18 = v11;
      if ( (int)v11 > 0 )
      {
        v19 = v38[0];
        v20 = 0LL;
        while ( 1 )
        {
          v21 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v20);
          LODWORD(v38[0]) = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 4 * v20);
          v51 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
          v22 = *(_QWORD *)(v21 + 24);
          if ( v22 )
          {
            v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 48LL))(v22, 55LL);
            v24 = *(_OWORD **)(v21 + 24);
            v25 = v23 == 0;
            v26 = *(_QWORD *)v24;
            if ( v25 )
            {
              if ( !(*(unsigned __int8 (__fastcall **)(_OWORD *, __int64))(v26 + 48))(v24, 37LL) )
              {
                v10 = -2147467263;
                v37 = 594;
                goto LABEL_3;
              }
              v29 = *(_DWORD *)(v21 + 12) - *(_DWORD *)(v21 + 4);
              v52[0] = 0.0;
              v52[1] = 0.0;
              v30 = _mm_cvtsi32_si128(v29);
              v31 = *(_DWORD *)(v21 + 16) - *(_DWORD *)(v21 + 8);
              LODWORD(v52[2]) = _mm_cvtepi32_ps(v30).m128_u32[0];
              v52[3] = (float)v31;
              CMILMatrix::Transform2DBoundsHelper<1>(v42, v52, (float *)&v51);
            }
            else
            {
              v10 = (*(__int64 (__fastcall **)(_OWORD *, __int64, __int64))(v26 + 216))(v24, v44.m256i_i64[0], v42);
              if ( v10 < 0 )
              {
                v37 = 567;
                goto LABEL_3;
              }
              v45 = 0;
              memset(&v44.m256i_u64[1], 0, 24);
              v27 = v24[10];
              *(_DWORD *)v50 = v38[0];
              *(_OWORD *)&v50[4] = v27;
              v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v44.m256i_i64[1], 0x14u, 1, v50);
              v10 = v28;
              if ( v28 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0xC0u);
              if ( v10 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x23Bu);
                DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v44.m256i_i64[1]);
                goto LABEL_15;
              }
              (*(void (__fastcall **)(_OWORD *, unsigned __int64 *, __int128 *))(*(_QWORD *)v24 + 184LL))(
                v24,
                &v44.m256i_u64[1],
                &v51);
              DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v44.m256i_i64[1]);
            }
            v18 = v43;
          }
          else
          {
            v51 = *a2;
          }
          *(_DWORD *)v50 = v38[0];
          v32 = v6 + 1;
          *(_OWORD *)&v50[4] = v51;
          if ( v6 + 1 >= v6 )
            v19 = v6 + 1;
          v10 = v32 < v6 ? 0x80070216 : 0;
          if ( v32 < v6 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xB5u);
          }
          else if ( v19 > v40 )
          {
            v36 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v38[1], 0x14u, 1, v50);
            v10 = v36;
            if ( v36 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0xC0u);
            v6 = v41;
          }
          else
          {
            v33 = v38[1];
            v34 = v6;
            v6 = v19;
            LODWORD(v41) = v19;
            v35 = 5 * v34;
            *(_OWORD *)(v38[1] + 4 * v35) = *(_OWORD *)v50;
            *(_DWORD *)(v33 + 4 * v35 + 16) = *(_DWORD *)&v50[16];
          }
          if ( v10 < 0 )
            break;
          if ( ++v20 >= v18 )
            goto LABEL_10;
          a2 = (__int128 *)v44.m256i_i64[0];
        }
        v37 = 602;
        goto LABEL_3;
      }
    }
    else
    {
      v12 = *a2;
      *(_DWORD *)v50 = 0;
      *(_OWORD *)&v50[4] = v12;
      v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v38[1], 0x14u, 1, v50);
      v10 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u);
      if ( v10 < 0 )
      {
        v37 = 549;
        goto LABEL_3;
      }
      v6 = v41;
LABEL_10:
      if ( v6 )
      {
        v14 = (float *)(v38[1] + 4LL);
        do
        {
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v46, v14);
          v14 = (float *)(v15 + 20);
        }
        while ( v16 != 1 );
        v9 = v49;
        v8 = v48;
        v7 = v47;
        v5 = v46;
      }
    }
    *(_DWORD *)(a1 + 160) = v5;
    *(_DWORD *)(a1 + 164) = v7;
    *(_DWORD *)(a1 + 168) = v8;
    *(_DWORD *)(a1 + 172) = v9;
    goto LABEL_15;
  }
  v10 = -2147467259;
  v37 = 542;
LABEL_3:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v37);
LABEL_15:
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v38[1]);
  return (unsigned int)v10;
}
