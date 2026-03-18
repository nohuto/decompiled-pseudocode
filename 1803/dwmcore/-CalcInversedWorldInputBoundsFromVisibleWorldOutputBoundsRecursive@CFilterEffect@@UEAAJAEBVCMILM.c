/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x18018D570
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180064E8C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A5380 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x18018E7AC (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@UM.c)
 */

__int64 __fastcall CFilterEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive(
        _DWORD *a1,
        __int64 a2,
        float *a3,
        __int64 a4,
        float *a5,
        float *a6)
{
  int v6; // eax
  __int64 v8; // r13
  __int128 v10; // xmm0
  __int64 v11; // r15
  int v12; // edi
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // eax
  __m128i v22; // xmm0
  int v23; // eax
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  unsigned int v28; // r8d
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // eax
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm2_4
  float v37; // xmm1_4
  unsigned int v39; // [rsp+20h] [rbp-B9h]
  int v40; // [rsp+40h] [rbp-99h]
  unsigned int v41; // [rsp+44h] [rbp-95h]
  __int128 v43; // [rsp+58h] [rbp-81h] BYREF
  __int64 v44; // [rsp+68h] [rbp-71h]
  unsigned int v45; // [rsp+70h] [rbp-69h]
  __int64 v46; // [rsp+78h] [rbp-61h]
  __int128 v47; // [rsp+80h] [rbp-59h] BYREF
  float v48; // [rsp+90h] [rbp-49h] BYREF
  float v49; // [rsp+94h] [rbp-45h]
  float v50; // [rsp+98h] [rbp-41h]
  float v51; // [rsp+9Ch] [rbp-3Dh]
  __int128 v52; // [rsp+A0h] [rbp-39h] BYREF
  __int128 v53; // [rsp+B0h] [rbp-29h] BYREF
  _BYTE v54[20]; // [rsp+C0h] [rbp-19h] BYREF
  __int128 v55; // [rsp+D8h] [rbp-1h] BYREF

  v6 = a1[8];
  v8 = 0LL;
  v43 = 0LL;
  v10 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v44 = 0LL;
  a1[8] = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6;
  v11 = a2;
  v45 = 0;
  v12 = 0;
  v53 = v10;
  if ( (((unsigned __int8)v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6) & 6) != 2 )
  {
    v13 = -2147467259;
    v39 = 427;
    v12 = -2147467259;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_DWORD *, __int64, float *, _DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 224LL))(
    a1,
    a2,
    a3,
    a1 + 40,
    &v52,
    &v55);
  v14 = (int)a1[38];
  if ( !(_DWORD)v14 )
  {
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, (float *)&v52);
    *(_OWORD *)a6 = v55;
    goto LABEL_50;
  }
  v46 = (int)a1[38];
  if ( v14 <= 0 )
  {
LABEL_38:
    (*(void (__fastcall **)(_DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 184LL))(a1, &v43, &v53);
    CMILMatrix::Transform2DBoundsHelper<1>(v11, (float *)&v53, a6);
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a6) )
    {
      if ( *a3 > *a6 )
        *a6 = *a3;
      v33 = a3[1];
      if ( v33 > a6[1] )
        a6[1] = v33;
      v34 = a3[2];
      v35 = a6[2];
      if ( v35 > v34 )
      {
        a6[2] = v34;
        v35 = v34;
      }
      v36 = a3[3];
      v37 = a6[3];
      if ( v37 > v36 )
      {
        a6[3] = v36;
        v37 = v36;
        v35 = a6[2];
      }
      if ( v35 <= *a6 || v37 <= a6[1] )
      {
        *((_QWORD *)a6 + 1) = 0LL;
        *(_QWORD *)a6 = 0LL;
      }
    }
    goto LABEL_50;
  }
  while ( 1 )
  {
    v15 = *((_QWORD *)a1 + 18);
    v47 = v52;
    v16 = *(_QWORD *)(v15 + 8 * v8);
    v17 = *(_QWORD *)(v16 + 24);
    v40 = *(_DWORD *)(*((_QWORD *)a1 + 17) + 4 * v8);
    if ( v17 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 48LL))(v17, 55LL);
      v19 = *(_QWORD *)(v16 + 24);
      if ( v18 )
      {
        v11 = a2;
        *(_OWORD *)v54 = v47;
        v20 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64, float *, __int128 *))(*(_QWORD *)v19 + 208LL))(
                v19,
                a2,
                v54,
                v19 + 160,
                a5,
                &v47);
        v12 = v20;
        if ( v20 < 0 )
        {
          v39 = 469;
          v13 = v20;
          goto LABEL_3;
        }
      }
      else
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, 37LL) )
        {
          v12 = -2147467263;
          v39 = 490;
LABEL_52:
          v13 = v12;
          goto LABEL_3;
        }
        v21 = *(_DWORD *)(v16 + 12) - *(_DWORD *)(v16 + 4);
        v48 = 0.0;
        v49 = 0.0;
        v22 = _mm_cvtsi32_si128(v21);
        v23 = *(_DWORD *)(v16 + 16) - *(_DWORD *)(v16 + 8);
        v11 = a2;
        LODWORD(v50) = _mm_cvtepi32_ps(v22).m128_u32[0];
        v51 = (float)v23;
        CMILMatrix::Transform2DBoundsHelper<1>(a2, &v48, &v48);
        v24 = *(float *)&v47;
        if ( v48 > *(float *)&v47 )
        {
          *(float *)&v47 = v48;
          v24 = v48;
        }
        v25 = *((float *)&v47 + 1);
        if ( v49 > *((float *)&v47 + 1) )
        {
          *((float *)&v47 + 1) = v49;
          v25 = v49;
        }
        v26 = *((float *)&v47 + 2);
        if ( *((float *)&v47 + 2) > v50 )
        {
          *((float *)&v47 + 2) = v50;
          v26 = v50;
        }
        v27 = *((float *)&v47 + 3);
        if ( *((float *)&v47 + 3) > v51 )
        {
          *((float *)&v47 + 3) = v51;
          v27 = v51;
        }
        if ( v26 <= v24 || v27 <= v25 )
          v47 = 0uLL;
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, (float *)&v47);
      }
    }
    else
    {
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, (float *)&v47);
      v11 = a2;
    }
    if ( (float)(*((float *)&v47 + 2) - *(float *)&v47) > 0.0000099999997
      && (float)(*((float *)&v47 + 3) - *((float *)&v47 + 1)) > 0.0000099999997 )
    {
      break;
    }
LABEL_37:
    if ( ++v8 >= v46 )
      goto LABEL_38;
  }
  if ( (unsigned __int8)CFilterEffect::InvertTransformToCalc2DBounds(v11, &v47, &v47) )
  {
    v28 = v41;
    *(_DWORD *)v54 = v40;
    v29 = v45 + 1;
    *(_OWORD *)&v54[4] = v47;
    if ( v45 + 1 >= v45 )
      v28 = v45 + 1;
    v12 = v29 < v45 ? 0x80070216 : 0;
    v41 = v28;
    if ( v29 < v45 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
    }
    else if ( v28 > HIDWORD(v44) )
    {
      v32 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v43, 0x14u, 1, v54);
      v12 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0xC0u);
    }
    else
    {
      v30 = 5LL * v45;
      v31 = v43;
      *(_OWORD *)(v43 + 4 * v30) = *(_OWORD *)v54;
      *(_DWORD *)(v31 + 4 * v30 + 16) = *(_DWORD *)&v54[16];
      v45 = v28;
    }
    if ( v12 < 0 )
    {
      v39 = 508;
      goto LABEL_52;
    }
    goto LABEL_37;
  }
  v13 = -2147467259;
  v39 = 505;
  v12 = -2147467259;
LABEL_3:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v39);
LABEL_50:
  a1[8] ^= (a1[8] ^ (2 * (a1[8] >> 1) - 2)) & 6;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v43);
  return (unsigned int)v12;
}
