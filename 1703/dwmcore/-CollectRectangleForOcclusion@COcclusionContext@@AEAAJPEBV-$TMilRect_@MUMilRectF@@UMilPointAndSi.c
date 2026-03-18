/*
 * XREFs of ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18009B190
 * Callers:
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D9BC (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18009B4BC (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?DrawSolidRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18009BB00 (-DrawSolidRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DG@@@@Z @ 0x18009BC50 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009AF48 (-CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?GetDestinationRect@COcclusionContext@@AEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x18009B288 (-GetDestinationRect@COcclusionContext@@AEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::CollectRectangleForOcclusion(__int64 a1, float *a2, char a3, __m128i *a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  __m128i v9; // xmm6
  unsigned int v10; // r8d
  __int64 *v11; // r10
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
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
      v10 = v18;
      v11 = (__int64 *)(a1 + 312);
      v12 = *(unsigned int *)(a1 + 336);
      v13 = v12 + 1;
      if ( (int)v12 + 1 >= (unsigned int)v12 )
        v10 = v12 + 1;
      v7 = v13 < (unsigned int)v12 ? 0x80070216 : 0;
      if ( v13 < (unsigned int)v12 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
      }
      else if ( v10 > *(_DWORD *)(a1 + 332) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v11, 0x14u, 1, &v20);
        v7 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
      }
      else
      {
        v14 = 5 * v12;
        v15 = *v11;
        *(__m128i *)(v15 + 4 * v14) = v9;
        *(_DWORD *)(v15 + 4 * v14 + 16) = v21;
        *(_DWORD *)(a1 + 336) = v10;
      }
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x73Eu);
    }
  }
  return (unsigned int)v7;
}
