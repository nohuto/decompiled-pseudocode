/*
 * XREFs of ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0GJ@@@@Z @ 0x18005DDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18005D24C (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x18007C5B8 (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawRectangle(__int64 a1, float *a2, CImageLegacyMilBrush *a3, __int64 a4)
{
  unsigned int v4; // edi
  struct CCachedVisualImage *CachedBrushCVINoRef; // rax
  int v10; // eax
  int v11; // r9d
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-60h]
  unsigned int v18; // [rsp+30h] [rbp-50h]
  __int128 v19; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v20[24]; // [rsp+48h] [rbp-38h]
  __m128i v21; // [rsp+60h] [rbp-20h] BYREF

  v4 = 0;
  v21 = (__m128i)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( !*(_DWORD *)(a1 + 1036) && !a4 )
  {
    if ( a3 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CImageLegacyMilBrush *))(*(_QWORD *)a3 + 184LL))(a3) )
      {
        v10 = COcclusionContext::CollectRectangleForOcclusion(a1, a2, 0, &v21);
        v4 = v10;
        if ( v10 < 0 )
        {
          v17 = 982;
LABEL_10:
          v11 = v10;
LABEL_19:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v17);
          return v4;
        }
      }
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(CImageLegacyMilBrush *, __int64))(*(_QWORD *)a3 + 48LL))(a3, 71LL) )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a3);
    if ( CachedBrushCVINoRef )
    {
      v12 = v18;
      *(_QWORD *)&v19 = *(_QWORD *)(a1 + 808);
      v13 = *(unsigned int *)(a1 + 1176);
      *((_QWORD *)&v19 + 1) = CachedBrushCVINoRef;
      v20[0] = 0;
      *(__m128i *)&v20[4] = v21;
      v14 = v13 + 1;
      if ( (int)v13 + 1 >= (unsigned int)v13 )
        v12 = v13 + 1;
      v11 = v14 < (unsigned int)v13 ? 0x80070216 : 0;
      if ( v14 < (unsigned int)v13 )
      {
        v17 = 181;
        goto LABEL_19;
      }
      if ( v12 > *(_DWORD *)(a1 + 1172) )
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 1152, 40LL, 1LL, &v19);
        if ( v10 < 0 )
        {
          v17 = 192;
          goto LABEL_10;
        }
      }
      else
      {
        v15 = *(_QWORD *)(a1 + 1152);
        v16 = 5 * v13;
        *(_OWORD *)(v15 + 8 * v16) = v19;
        *(_OWORD *)(v15 + 8 * v16 + 16) = *(_OWORD *)v20;
        *(_QWORD *)(v15 + 8 * v16 + 32) = *(_QWORD *)&v20[16];
        *(_DWORD *)(a1 + 1176) = v12;
      }
    }
  }
  return v4;
}
