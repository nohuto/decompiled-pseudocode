/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180163310
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036B0C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059BA0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x1801643E0 (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?AddMultipleAndSet@?$DynArray@UInputBoundsPair@@$0A@@@QEAAJPEFBUInputBoundsPair@@I@Z @ 0x180176B80 (-AddMultipleAndSet@-$DynArray@UInputBoundsPair@@$0A@@@QEAAJPEFBUInputBoundsPair@@I@Z.c)
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
  __int64 v8; // r12
  __int128 v10; // xmm0
  __int64 v11; // r14
  unsigned int v12; // edi
  DWORD v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // eax
  __m128i v22; // xmm0
  int v23; // eax
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  unsigned int v32; // [rsp+20h] [rbp-B9h]
  int v33; // [rsp+40h] [rbp-99h]
  __int64 v35; // [rsp+50h] [rbp-89h]
  __int128 v36; // [rsp+58h] [rbp-81h] BYREF
  __int64 v37; // [rsp+68h] [rbp-71h]
  int v38; // [rsp+70h] [rbp-69h]
  __int128 v39; // [rsp+78h] [rbp-61h] BYREF
  float v40; // [rsp+88h] [rbp-51h] BYREF
  float v41; // [rsp+8Ch] [rbp-4Dh]
  float v42; // [rsp+90h] [rbp-49h]
  float v43; // [rsp+94h] [rbp-45h]
  __int128 v44; // [rsp+98h] [rbp-41h] BYREF
  __int128 v45; // [rsp+A8h] [rbp-31h] BYREF
  _BYTE v46[20]; // [rsp+B8h] [rbp-21h] BYREF
  __int128 v47; // [rsp+D0h] [rbp-9h] BYREF

  v6 = a1[8];
  v8 = 0LL;
  v36 = 0LL;
  v10 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v37 = 0LL;
  v38 = 0;
  a1[8] = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6;
  v11 = a2;
  v12 = 0;
  v45 = v10;
  if ( (((unsigned __int8)v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6) & 6) == 2 )
  {
    (*(void (__fastcall **)(_DWORD *, __int64, float *, _DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 224LL))(
      a1,
      a2,
      a3,
      a1 + 40,
      &v44,
      &v47);
    v14 = (int)a1[38];
    if ( (_DWORD)v14 )
    {
      v35 = (int)a1[38];
      if ( v14 > 0 )
      {
        do
        {
          v15 = *((_QWORD *)a1 + 18);
          v39 = v44;
          v16 = *(_QWORD *)(v15 + 8 * v8);
          v17 = *(_QWORD *)(v16 + 24);
          v33 = *(_DWORD *)(*((_QWORD *)a1 + 17) + 4 * v8);
          if ( v17 )
          {
            v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 48LL))(v17, 49LL);
            v19 = *(_QWORD *)(v16 + 24);
            if ( v18 )
            {
              v11 = a2;
              *(_OWORD *)v46 = v39;
              v20 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64, float *, __int128 *))(*(_QWORD *)v19 + 208LL))(
                      v19,
                      a2,
                      v46,
                      v19 + 160,
                      a5,
                      &v39);
              v12 = v20;
              if ( v20 < 0 )
              {
                v32 = 490;
LABEL_13:
                v13 = v20;
                goto LABEL_4;
              }
            }
            else
            {
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, 35LL) )
              {
                v12 = -2147467263;
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004001, 0x1FFu);
                goto LABEL_45;
              }
              v21 = *(_DWORD *)(v16 + 12) - *(_DWORD *)(v16 + 4);
              v40 = 0.0;
              v41 = 0.0;
              v22 = _mm_cvtsi32_si128(v21);
              v23 = *(_DWORD *)(v16 + 16) - *(_DWORD *)(v16 + 8);
              v11 = a2;
              LODWORD(v42) = _mm_cvtepi32_ps(v22).m128_u32[0];
              v43 = (float)v23;
              CMILMatrix::Transform2DBoundsHelper<1>(a2, (__int64)&v40, &v40);
              v24 = *(float *)&v39;
              if ( v40 > *(float *)&v39 )
              {
                *(float *)&v39 = v40;
                v24 = v40;
              }
              v25 = *((float *)&v39 + 1);
              if ( v41 > *((float *)&v39 + 1) )
              {
                *((float *)&v39 + 1) = v41;
                v25 = v41;
              }
              v26 = *((float *)&v39 + 2);
              if ( *((float *)&v39 + 2) > v42 )
              {
                v26 = v42;
                *((float *)&v39 + 2) = v42;
              }
              v27 = *((float *)&v39 + 3);
              if ( *((float *)&v39 + 3) > v43 )
              {
                v27 = v43;
                *((float *)&v39 + 3) = v43;
              }
              if ( v26 <= v24 || v27 <= v25 )
                v39 = 0uLL;
              TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, (float *)&v39);
            }
          }
          else
          {
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, (float *)&v39);
            v11 = a2;
          }
          if ( (float)(*((float *)&v39 + 2) - *(float *)&v39) > 0.0000099999997
            && (float)(*((float *)&v39 + 3) - *((float *)&v39 + 1)) > 0.0000099999997 )
          {
            if ( !(unsigned __int8)CFilterEffect::InvertTransformToCalc2DBounds(v11, &v39, &v39) )
            {
              v32 = 526;
              goto LABEL_3;
            }
            *(_DWORD *)v46 = v33;
            *(_OWORD *)&v46[4] = v39;
            v20 = DynArray<InputBoundsPair,0>::AddMultipleAndSet(&v36, v46);
            v12 = v20;
            if ( v20 < 0 )
            {
              v32 = 529;
              goto LABEL_13;
            }
          }
          ++v8;
        }
        while ( v8 < v35 );
      }
      (*(void (__fastcall **)(_DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 184LL))(a1, &v36, &v45);
      CMILMatrix::Transform2DBoundsHelper<1>(v11, (__int64)&v45, a6);
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a6) )
      {
        if ( *a3 > *a6 )
          *a6 = *a3;
        v28 = a3[1];
        if ( v28 > a6[1] )
          a6[1] = v28;
        v29 = a3[2];
        if ( a6[2] > v29 )
          a6[2] = v29;
        v30 = a3[3];
        if ( a6[3] > v30 )
          a6[3] = v30;
        if ( a6[2] <= *a6 || a6[3] <= a6[1] )
        {
          *((_QWORD *)a6 + 1) = 0LL;
          *(_QWORD *)a6 = 0LL;
        }
      }
    }
    else
    {
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, (float *)&v44);
      *(_OWORD *)a6 = v47;
    }
  }
  else
  {
    v32 = 448;
LABEL_3:
    v13 = -2147467259;
    v12 = -2147467259;
LABEL_4:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, v32);
  }
LABEL_45:
  a1[8] ^= (a1[8] ^ (2 * (a1[8] >> 1) - 2)) & 6;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v36);
  return v12;
}
