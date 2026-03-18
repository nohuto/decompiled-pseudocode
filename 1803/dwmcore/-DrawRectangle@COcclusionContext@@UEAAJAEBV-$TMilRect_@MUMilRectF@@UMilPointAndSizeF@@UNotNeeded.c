/*
 * XREFs of ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0HF@@@@Z @ 0x1800A9A20
 * Callers:
 *     ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x1800566A8 (-DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@IV-$span@$$CBE$0-0@gsl@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x1800A90A0 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ @ 0x1800B5ED0 (-IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ.c)
 *     ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B5F40 (-IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x1800B804C (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawRectangle(
        __int64 a1,
        const struct D2D_RECT_F *a2,
        CSolidColorLegacyMilBrush *a3,
        __int64 a4)
{
  unsigned int v4; // edi
  bool (__fastcall *v8)(CSolidColorLegacyMilBrush *__hidden); // rax
  int v10; // eax
  __int64 (__fastcall *v11)(CSolidColorLegacyMilBrush *, __int64); // rax
  char v12; // al
  struct CCachedVisualImage *CachedBrushCVINoRef; // rax
  int v15; // r9d
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // [rsp+20h] [rbp-50h]
  __int128 v22; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v23[24]; // [rsp+40h] [rbp-30h]
  __m128i v24; // [rsp+58h] [rbp-18h] BYREF

  v4 = 0;
  v24 = (__m128i)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( !*(_DWORD *)(a1 + 1036) && !a4 && a3 )
  {
    v8 = *(bool (__fastcall **)(CSolidColorLegacyMilBrush *__hidden))(*(_QWORD *)a3 + 184LL);
    if ( v8 == CSolidColorLegacyMilBrush::IsConstantOpaque ? CSolidColorLegacyMilBrush::IsConstantOpaque(a3) : v8(a3) )
    {
      v10 = COcclusionContext::CollectRectangleForOcclusion(a1, a2, 0, &v24);
      v4 = v10;
      if ( v10 < 0 )
      {
        v21 = 992;
        goto LABEL_17;
      }
    }
  }
  v11 = *(__int64 (__fastcall **)(CSolidColorLegacyMilBrush *, __int64))(*(_QWORD *)a3 + 48LL);
  if ( (char *)v11 == (char *)CSolidColorLegacyMilBrush::IsOfType )
    v12 = CSolidColorLegacyMilBrush::IsOfType(a3, 77LL);
  else
    v12 = v11(a3, 77LL);
  if ( v12 )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a3);
    if ( CachedBrushCVINoRef )
    {
      v16 = *(_QWORD *)(a1 + 808);
      *((_QWORD *)&v22 + 1) = CachedBrushCVINoRef;
      v17 = *(unsigned int *)(a1 + 1176);
      *(_QWORD *)&v22 = v16;
      v23[0] = 0;
      *(__m128i *)&v23[4] = v24;
      v18 = v17 + 1;
      v15 = (int)v17 + 1 < (unsigned int)v17 ? 0x80070216 : 0;
      if ( (int)v17 + 1 < (unsigned int)v17 )
      {
        v21 = 181;
        goto LABEL_24;
      }
      if ( v18 <= *(_DWORD *)(a1 + 1172) )
      {
        v19 = 5 * v17;
        v20 = *(_QWORD *)(a1 + 1152);
        *(_OWORD *)(v20 + 8 * v19) = v22;
        *(_OWORD *)(v20 + 8 * v19 + 16) = *(_OWORD *)v23;
        *(_QWORD *)(v20 + 8 * v19 + 32) = *(_QWORD *)&v23[16];
        *(_DWORD *)(a1 + 1176) = v18;
        return v4;
      }
      v10 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 1152, 0x28u, 1, &v22);
      if ( v10 >= 0 )
        return v4;
      v21 = 192;
LABEL_17:
      v15 = v10;
LABEL_24:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v21);
    }
  }
  return v4;
}
