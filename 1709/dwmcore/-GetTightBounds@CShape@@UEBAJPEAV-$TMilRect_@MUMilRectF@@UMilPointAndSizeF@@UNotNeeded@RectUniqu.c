/*
 * XREFs of ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800C2890
 * Callers:
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180035380 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003687C (-HasValidValues@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003692C (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18005A380 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::GetTightBounds(__int64 a1, __int64 a2, float *a3)
{
  __int128 *v3; // rsi
  __int64 v5; // r10
  int *v6; // r8
  __int64 v7; // r9
  int v8; // xmm0_4
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  signed int v11; // eax
  unsigned int v12; // edi
  float *v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  __int128 v16; // [rsp+38h] [rbp-48h]
  __int128 v17; // [rsp+50h] [rbp-30h] BYREF
  __int128 v18; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v19; // [rsp+70h] [rbp-10h]

  v15 = 0LL;
  v3 = 0LL;
  v5 = a1;
  if ( a3 )
  {
    if ( !(unsigned __int8)CMILMatrix::Is2DAffine<0>(a3, a2) )
      goto LABEL_5;
    v8 = *v6;
    v3 = &v18;
    v9 = (__m128)(unsigned int)v6[13];
    DWORD1(v16) = v6[1];
    HIDWORD(v16) = v6[5];
    v10 = (__m128)(unsigned int)v6[12];
    LODWORD(v16) = v8;
    DWORD2(v16) = v6[4];
    v18 = v16;
    v19 = _mm_unpacklo_ps(v10, v9).m128_u64[0];
  }
  v7 = 0LL;
LABEL_5:
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, v7, &v15);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x3E4u);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v15 + 32LL))(v15, v3, &v17);
    v16 = v17;
    *(_OWORD *)a2 = v17;
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::HasValidValues() )
    {
      if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered(v13) )
      {
        *(_DWORD *)(a2 + 12) = 0;
        *(_DWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 4) = 0;
        *(_DWORD *)a2 = 0;
      }
    }
    else
    {
      v12 = -2003304438;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8898000A, 0x3F0u);
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>(v15);
  return v12;
}
