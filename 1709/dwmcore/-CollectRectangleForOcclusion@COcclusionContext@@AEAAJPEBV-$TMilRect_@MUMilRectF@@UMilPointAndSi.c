/*
 * XREFs of ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18005D24C
 * Callers:
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005D4FC (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005D6C4 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?DrawSolidRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18005DCA0 (-DrawSolidRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0GJ@@@@Z @ 0x18005DDC0 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005CC50 (-CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?GetDestinationRect@COcclusionContext@@AEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x18005D344 (-GetDestinationRect@COcclusionContext@@AEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::CollectRectangleForOcclusion(__int64 a1, float *a2, char a3, __m128i *a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  __m128i v9; // xmm6
  unsigned int v11; // r8d
  __int64 *v12; // r10
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // [rsp+30h] [rbp-68h]
  _BYTE v19[16]; // [rsp+38h] [rbp-60h] BYREF
  __m128i v20; // [rsp+48h] [rbp-50h] BYREF
  int v21; // [rsp+58h] [rbp-40h]

  v7 = 0;
  if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v21 = 0;
    v9 = _mm_loadu_si128((const __m128i *)COcclusionContext::GetDestinationRect(a1, v19, v8));
    v20 = v9;
    if ( a4 )
      *a4 = v9;
    if ( a3 || COcclusionContext::CheckOcclusionRelevance(a1, (float *)v20.m128i_i32) )
    {
      v11 = v18;
      v12 = (__int64 *)(a1 + 400);
      v13 = *(unsigned int *)(a1 + 424);
      v14 = v13 + 1;
      if ( (int)v13 + 1 >= (unsigned int)v13 )
        v11 = v13 + 1;
      v7 = v14 < (unsigned int)v13 ? 0x80070216 : 0;
      if ( v14 < (unsigned int)v13 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
      }
      else if ( v11 > *(_DWORD *)(a1 + 420) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet(v12, 20LL, 1LL, &v20);
        v7 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xC0u);
      }
      else
      {
        v15 = 5 * v13;
        v16 = *v12;
        *(__m128i *)(v16 + 4 * v15) = v9;
        *(_DWORD *)(v16 + 4 * v15 + 16) = v21;
        *(_DWORD *)(a1 + 424) = v11;
      }
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x73Cu);
    }
  }
  return (unsigned int)v7;
}
