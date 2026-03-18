/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180003270
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FFCC (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099040 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x18016F338 (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@UM.c)
 */

__int64 __fastcall CFilterEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r13
  unsigned int v7; // eax
  __int64 v9; // r15
  __int128 v11; // xmm0
  int v12; // edi
  __int64 v13; // rax
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // eax
  __m128i v23; // xmm0
  int v24; // eax
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  unsigned int v29; // r8d
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  unsigned int v37; // [rsp+20h] [rbp-B9h]
  int v38; // [rsp+40h] [rbp-99h]
  unsigned int v39; // [rsp+44h] [rbp-95h]
  __int128 v41; // [rsp+58h] [rbp-81h] BYREF
  __int64 v42; // [rsp+68h] [rbp-71h]
  unsigned int v43; // [rsp+70h] [rbp-69h]
  __int64 v44; // [rsp+78h] [rbp-61h]
  __int128 v45; // [rsp+80h] [rbp-59h] BYREF
  float v46; // [rsp+90h] [rbp-49h] BYREF
  float v47; // [rsp+94h] [rbp-45h]
  float v48; // [rsp+98h] [rbp-41h]
  float v49; // [rsp+9Ch] [rbp-3Dh]
  __int128 v50; // [rsp+A0h] [rbp-39h] BYREF
  __int128 v51; // [rsp+B0h] [rbp-29h] BYREF
  _BYTE v52[20]; // [rsp+C0h] [rbp-19h] BYREF
  __int128 v53; // [rsp+D8h] [rbp-1h] BYREF

  v6 = 0LL;
  v7 = a1[8] ^ (a1[8] ^ ((a1[8] & 0xFFFFFFFE) + 2)) & 6;
  v41 = 0LL;
  v9 = a2;
  v11 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  a1[8] = v7;
  v12 = 0;
  v42 = 0LL;
  v43 = 0;
  v51 = v11;
  if ( (v7 & 6) != 2 )
  {
    v12 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x1C0u);
    goto LABEL_4;
  }
  (*(void (__fastcall **)(_DWORD *, __int64, __int64, _DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 192LL))(
    a1,
    a2,
    a3,
    a1 + 48,
    &v50,
    &v53);
  v13 = (int)a1[42];
  if ( !(_DWORD)v13 )
  {
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, &v50);
    *(_OWORD *)a6 = v53;
    goto LABEL_4;
  }
  v44 = (int)a1[42];
  if ( v13 <= 0 )
  {
LABEL_41:
    (*(void (__fastcall **)(_DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 152LL))(a1, &v41, &v51);
    CMILMatrix::Transform2DBoundsHelper<1>(v9, &v51, a6);
    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a6) )
    {
      if ( *(float *)a3 > *(float *)a6 )
        *(_DWORD *)a6 = *(_DWORD *)a3;
      v34 = *(float *)(a3 + 4);
      if ( v34 > *(float *)(a6 + 4) )
        *(float *)(a6 + 4) = v34;
      v35 = *(float *)(a3 + 8);
      if ( *(float *)(a6 + 8) > v35 )
        *(float *)(a6 + 8) = v35;
      v36 = *(float *)(a3 + 12);
      if ( *(float *)(a6 + 12) > v36 )
        *(float *)(a6 + 12) = v36;
      if ( *(float *)(a6 + 8) <= *(float *)a6 || *(float *)(a6 + 12) <= *(float *)(a6 + 4) )
      {
        *(_QWORD *)(a6 + 8) = 0LL;
        *(_QWORD *)a6 = 0LL;
      }
    }
    goto LABEL_4;
  }
  while ( 1 )
  {
    v16 = *((_QWORD *)a1 + 20);
    v45 = v50;
    v17 = *(_QWORD *)(v16 + 8 * v6);
    v18 = *(_QWORD *)(v17 + 24);
    v38 = *(_DWORD *)(*((_QWORD *)a1 + 19) + 4 * v6);
    if ( v18 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 48LL))(v18, 8LL);
      v20 = *(_QWORD *)(v17 + 24);
      if ( v19 )
      {
        v9 = a2;
        *(_OWORD *)v52 = v45;
        v21 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64, __int64, __int128 *))(*(_QWORD *)v20 + 176LL))(
                v20,
                a2,
                v52,
                v20 + 192,
                a5,
                &v45);
        v12 = v21;
        if ( v21 < 0 )
        {
          v37 = 490;
          v15 = v21;
          goto LABEL_7;
        }
      }
      else
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 48LL))(v20, 97LL) )
        {
          v12 = -2147467263;
          v37 = 511;
          goto LABEL_54;
        }
        v22 = *(_DWORD *)(v17 + 12) - *(_DWORD *)(v17 + 4);
        v46 = 0.0;
        v47 = 0.0;
        v23 = _mm_cvtsi32_si128(v22);
        v24 = *(_DWORD *)(v17 + 16) - *(_DWORD *)(v17 + 8);
        v9 = a2;
        LODWORD(v48) = _mm_cvtepi32_ps(v23).m128_u32[0];
        v49 = (float)v24;
        CMILMatrix::Transform2DBoundsHelper<1>(a2, &v46, &v46);
        v25 = *(float *)&v45;
        if ( v46 > *(float *)&v45 )
        {
          *(float *)&v45 = v46;
          v25 = v46;
        }
        v26 = *((float *)&v45 + 1);
        if ( v47 > *((float *)&v45 + 1) )
        {
          *((float *)&v45 + 1) = v47;
          v26 = v47;
        }
        v27 = *((float *)&v45 + 2);
        if ( *((float *)&v45 + 2) > v48 )
        {
          v27 = v48;
          *((float *)&v45 + 2) = v48;
        }
        v28 = *((float *)&v45 + 3);
        if ( *((float *)&v45 + 3) > v49 )
        {
          v28 = v49;
          *((float *)&v45 + 3) = v49;
        }
        if ( v27 <= v25 || v28 <= v26 )
          v45 = 0uLL;
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, &v45);
      }
    }
    else
    {
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, &v45);
      v9 = a2;
    }
    if ( (float)(*((float *)&v45 + 2) - *(float *)&v45) > 0.0000099999997
      && (float)(*((float *)&v45 + 3) - *((float *)&v45 + 1)) > 0.0000099999997 )
    {
      break;
    }
LABEL_40:
    if ( ++v6 >= v44 )
      goto LABEL_41;
  }
  if ( (unsigned __int8)CFilterEffect::InvertTransformToCalc2DBounds(v9, &v45, &v45) )
  {
    v29 = v39;
    *(_DWORD *)v52 = v38;
    v30 = v43 + 1;
    *(_OWORD *)&v52[4] = v45;
    if ( v43 + 1 >= v43 )
      v29 = v43 + 1;
    v12 = v30 < v43 ? 0x80070216 : 0;
    v39 = v29;
    if ( v30 < v43 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB5u);
    }
    else if ( v29 > HIDWORD(v42) )
    {
      v33 = DynArrayImpl<0>::AddMultipleAndSet(&v41, 20LL, 1LL, v52);
      v12 = v33;
      if ( v33 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0xC0u);
    }
    else
    {
      v31 = 5LL * v43;
      v32 = v41;
      *(_OWORD *)(v41 + 4 * v31) = *(_OWORD *)v52;
      *(_DWORD *)(v32 + 4 * v31 + 16) = *(_DWORD *)&v52[16];
      v43 = v29;
    }
    if ( v12 < 0 )
    {
      v37 = 529;
LABEL_54:
      v15 = v12;
      goto LABEL_7;
    }
    goto LABEL_40;
  }
  v15 = -2147467259;
  v37 = 526;
  v12 = -2147467259;
LABEL_7:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v37);
LABEL_4:
  a1[8] ^= (a1[8] ^ (2 * (a1[8] >> 1) - 2)) & 6;
  DynArrayImpl<1>::~DynArrayImpl<1>(&v41);
  return (unsigned int)v12;
}
