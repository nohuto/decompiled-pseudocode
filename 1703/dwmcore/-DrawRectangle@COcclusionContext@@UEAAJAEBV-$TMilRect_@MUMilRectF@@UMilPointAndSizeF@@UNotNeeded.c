/*
 * XREFs of ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DG@@@@Z @ 0x18009BC50
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ @ 0x18004BC60 (-IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ.c)
 *     ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004BCD0 (-IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x18007B360 (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     ?IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007BA70 (-IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18009B190 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawRectangle(__int64 a1, float *a2, CSolidColorLegacyMilBrush *a3, __int64 a4)
{
  unsigned int v4; // edi
  bool (__fastcall *v8)(CSolidColorLegacyMilBrush *); // rax
  int v10; // eax
  __int64 (__fastcall *v11)(CSolidColorLegacyMilBrush *, __int64); // rax
  char v12; // al
  struct CCachedVisualImage *CachedBrushCVINoRef; // rax
  int v15; // r9d
  unsigned int v16; // edx
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // [rsp+20h] [rbp-60h]
  unsigned int v22; // [rsp+30h] [rbp-50h]
  __int128 v23; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v24[24]; // [rsp+48h] [rbp-38h]
  __m128i v25; // [rsp+60h] [rbp-20h] BYREF

  v4 = 0;
  v25 = (__m128i)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( !*(_DWORD *)(a1 + 948) && !a4 && a3 )
  {
    v8 = *(bool (__fastcall **)(CSolidColorLegacyMilBrush *))(*(_QWORD *)a3 + 168LL);
    if ( v8 == CSolidColorLegacyMilBrush::IsConstantOpaque ? CSolidColorLegacyMilBrush::IsConstantOpaque(a3) : v8(a3) )
    {
      v10 = COcclusionContext::CollectRectangleForOcclusion(a1, a2, 0, &v25);
      v4 = v10;
      if ( v10 < 0 )
      {
        v21 = 983;
        goto LABEL_19;
      }
    }
  }
  v11 = *(__int64 (__fastcall **)(CSolidColorLegacyMilBrush *, __int64))(*(_QWORD *)a3 + 48LL);
  if ( (char *)v11 == (char *)CSolidColorLegacyMilBrush::IsOfType )
  {
    v12 = CSolidColorLegacyMilBrush::IsOfType((__int64)a3, 80);
  }
  else if ( (char *)v11 == (char *)CImageLegacyMilBrush::IsOfType )
  {
    v12 = CImageLegacyMilBrush::IsOfType((__int64)a3, 80);
  }
  else
  {
    v12 = v11(a3, 80LL);
  }
  if ( v12 )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a3);
    if ( CachedBrushCVINoRef )
    {
      v16 = v22;
      *(_QWORD *)&v23 = *(_QWORD *)(a1 + 720);
      v17 = *(unsigned int *)(a1 + 1080);
      *((_QWORD *)&v23 + 1) = CachedBrushCVINoRef;
      v24[0] = 0;
      *(__m128i *)&v24[4] = v25;
      v18 = v17 + 1;
      if ( (int)v17 + 1 >= (unsigned int)v17 )
        v16 = v17 + 1;
      v15 = v18 < (unsigned int)v17 ? 0x80070216 : 0;
      if ( v18 < (unsigned int)v17 )
      {
        v21 = 181;
        goto LABEL_28;
      }
      if ( v16 <= *(_DWORD *)(a1 + 1076) )
      {
        v19 = *(_QWORD *)(a1 + 1056);
        v20 = 5 * v17;
        *(_OWORD *)(v19 + 8 * v20) = v23;
        *(_OWORD *)(v19 + 8 * v20 + 16) = *(_OWORD *)v24;
        *(_QWORD *)(v19 + 8 * v20 + 32) = *(_QWORD *)&v24[16];
        *(_DWORD *)(a1 + 1080) = v16;
        return v4;
      }
      v10 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 1056, 0x28u, 1, &v23);
      if ( v10 >= 0 )
        return v4;
      v21 = 192;
LABEL_19:
      v15 = v10;
LABEL_28:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v21);
    }
  }
  return v4;
}
