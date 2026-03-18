/*
 * XREFs of ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18013F310
 * Callers:
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180064200 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006512C (-HasValidValues@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800651D4 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x1800A56A0 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::GetTightBounds(__int64 a1, __int64 a2, float *a3)
{
  __int128 *v3; // rsi
  __int64 v5; // r10
  int *v6; // r8
  __int64 v7; // r9
  int v8; // xmm0_4
  int v9; // xmm1_4
  int v10; // xmm0_4
  __int64 v11; // xmm1_8
  int v12; // eax
  unsigned int v13; // edi
  float *v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  __int128 v17; // [rsp+38h] [rbp-48h]
  __int128 v18; // [rsp+50h] [rbp-30h] BYREF
  __int128 v19; // [rsp+60h] [rbp-20h] BYREF
  __int64 v20; // [rsp+70h] [rbp-10h]

  v16 = 0LL;
  v3 = 0LL;
  v5 = a1;
  if ( a3 )
  {
    if ( !(unsigned __int8)CMILMatrix::Is2DAffine<0>(a3) )
      goto LABEL_5;
    v8 = *v6;
    v3 = &v19;
    DWORD1(v17) = v6[1];
    v9 = v6[5];
    LODWORD(v17) = v8;
    v10 = v6[4];
    HIDWORD(v17) = v9;
    v11 = *((_QWORD *)v6 + 6);
    DWORD2(v17) = v10;
    v20 = v11;
    v19 = v17;
  }
  v7 = 0LL;
LABEL_5:
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, v7, &v16);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x3F0u);
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v16 + 32LL))(v16, v3, &v18);
    v17 = v18;
    *(_OWORD *)a2 = v18;
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::HasValidValues() )
    {
      if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered(v14) )
      {
        *(_DWORD *)(a2 + 12) = 0;
        *(_DWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 4) = 0;
        *(_DWORD *)a2 = 0;
      }
    }
    else
    {
      v13 = -2003304438;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304438, 0x3FCu);
    }
  }
  ReleaseInterfaceNoNULL<IWICBitmap>(v16);
  return v13;
}
