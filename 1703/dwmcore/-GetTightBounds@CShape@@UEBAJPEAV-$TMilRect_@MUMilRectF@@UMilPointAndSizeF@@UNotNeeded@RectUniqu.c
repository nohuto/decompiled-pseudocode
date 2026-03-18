/*
 * XREFs of ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18001E960
 * Callers:
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180094050 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009D050 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FE50 (-HasValidValues@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FEFC (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x180099A90 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::GetTightBounds(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rsi
  __int64 v5; // r10
  int *v6; // r8
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // edi
  int v11; // xmm0_4
  __m128 v12; // xmm2
  __m128 v13; // xmm1
  __int64 v14; // [rsp+30h] [rbp-50h] BYREF
  __int128 v15; // [rsp+38h] [rbp-48h]
  __int128 v16; // [rsp+50h] [rbp-30h] BYREF
  __int128 v17; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v18; // [rsp+70h] [rbp-10h]

  v14 = 0LL;
  v3 = 0LL;
  v5 = a1;
  if ( a3 )
  {
    if ( !(unsigned __int8)CMILMatrix::Is2DAffine<0>(a3) )
      goto LABEL_3;
    v11 = *v6;
    v3 = &v17;
    v12 = (__m128)(unsigned int)v6[13];
    DWORD1(v15) = v6[1];
    HIDWORD(v15) = v6[5];
    v13 = (__m128)(unsigned int)v6[12];
    LODWORD(v15) = v11;
    DWORD2(v15) = v6[4];
    v17 = v15;
    v18 = _mm_unpacklo_ps(v13, v12).m128_u64[0];
  }
  v7 = 0LL;
LABEL_3:
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, v7, &v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x374u);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v14 + 32LL))(v14, v3, &v16);
    v15 = v16;
    *(_OWORD *)a2 = v16;
    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::HasValidValues(a2) )
    {
      if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered() )
      {
        *(_DWORD *)(a2 + 12) = 0;
        *(_DWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 4) = 0;
        *(_DWORD *)a2 = 0;
      }
    }
    else
    {
      v9 = -2003304438;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304438, 0x380u);
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>(v14);
  return v9;
}
