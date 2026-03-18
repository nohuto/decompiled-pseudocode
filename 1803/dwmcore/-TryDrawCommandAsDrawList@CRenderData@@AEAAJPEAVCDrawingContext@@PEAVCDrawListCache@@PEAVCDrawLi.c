/*
 * XREFs of ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180056940
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x180057310 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ @ 0x18001D06C (-IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ.c)
 *     ?IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002ADA0 (-IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M4@Z @ 0x180055E70 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18005613C (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_18005613C.c)
 *     ?DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@MAEBUMilPoint2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800561AC (-DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800564EC (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEB.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006FC90 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B3DF0 (-IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B5F40 (-IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z @ 0x1800B5FFC (-GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z.c)
 *     ?ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ @ 0x1800B7EBC (-ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ.c)
 *     ?GetOpacity@CImageLegacyMilBrush@@QEAAMXZ @ 0x1800B800C (-GetOpacity@CImageLegacyMilBrush@@QEAAMXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801B309C (-DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuild.c)
 */

__int64 __fastcall CRenderData::TryDrawCommandAsDrawList(
        __int64 a1,
        struct CDrawingContext *a2,
        __int64 a3,
        struct CDrawListEntryBuilder *a4,
        bool a5,
        int a6,
        __int64 a7,
        bool *a8)
{
  unsigned int v12; // ebx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r15
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r15
  CRectangleGeometry *v22; // rsi
  __int64 (__fastcall *v23)(__int64, __int64); // rax
  char v24; // al
  int RealizedColor; // eax
  char (__fastcall *v26)(__int64, int); // rax
  char v27; // al
  CRenderData *v28; // rcx
  struct D2D_RECT_F *v29; // r14
  unsigned __int64 v30; // r15
  __int64 i; // rsi
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rsi
  __int64 (__fastcall *v35)(__int64, __int64); // rax
  CRenderData *v37; // rcx
  int v38; // eax
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r15
  int v43; // eax
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rsi
  bool v48; // zf
  struct _D3DCOLORVALUE v49; // xmm0
  CRenderData *v50; // rcx
  int v51; // eax
  int v52; // eax
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // eax
  int v57; // eax
  struct _D3DCOLORVALUE *v58; // rbx
  FLOAT Opacity; // xmm0_4
  CRenderData *v60; // rcx
  int v61; // eax
  int v62; // eax
  int v63; // eax
  __int64 v64; // rcx
  int BoundsSafe; // eax
  CRenderData *v66; // rcx
  int v67; // eax
  struct D2D_RECT_F v68; // [rsp+50h] [rbp-39h] BYREF
  struct _D3DCOLORVALUE v69; // [rsp+60h] [rbp-29h] BYREF
  struct CImageSource *v70[2]; // [rsp+70h] [rbp-19h] BYREF

  *a8 = 0;
  v12 = 0;
  switch ( a6 )
  {
    case 434:
      v34 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL * *(unsigned int *)(*(_QWORD *)(a7 + 8) + 4LL));
      if ( v34 )
      {
        v35 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 48LL);
        if ( v35 == CCachedVisualImage::IsOfType
           ? CCachedVisualImage::IsOfType(v34, 78LL)
           : (unsigned __int8)v35(v34, 78LL) )
        {
          if ( !*(_QWORD *)(a3 + 24) )
          {
            v38 = CRenderData::DrawImageResource_FillMode(
                    v37,
                    a2,
                    a4,
                    a5,
                    (struct CImageSource *)(v34 - 16),
                    0LL,
                    0LL,
                    1.0,
                    0LL);
            v12 = v38;
            if ( v38 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x269u);
              return v12;
            }
          }
          goto LABEL_5;
        }
      }
      break;
    case 435:
      v19 = *(_QWORD *)(a7 + 8);
      v20 = *(_QWORD *)(a1 + 104);
      v21 = *(_QWORD *)(v20 + 8LL * *(unsigned int *)(v19 + 4));
      v22 = *(CRectangleGeometry **)(v20 + 8LL * *(unsigned int *)(v19 + 8));
      if ( v21 && v22 )
      {
        v23 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 48LL);
        if ( v23 == CSolidColorLegacyMilBrush::IsOfType )
          v24 = CSolidColorLegacyMilBrush::IsOfType(v21, 135LL);
        else
          v24 = v23(v21, 135LL);
        if ( v24 )
        {
          RealizedColor = CSolidColorLegacyMilBrush::GetRealizedColor((CSolidColorLegacyMilBrush *)v21, &v69);
          v12 = RealizedColor;
          if ( RealizedColor < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RealizedColor, 0x27Du);
            return v12;
          }
          v26 = *(char (__fastcall **)(__int64, int))(*(_QWORD *)v22 + 48LL);
          if ( v26 == CRgnGeometry::IsOfType )
            v27 = CRgnGeometry::IsOfType((__int64)v22, 121);
          else
            v27 = v26((__int64)v22, 121);
          if ( v27 )
          {
            if ( !*(_QWORD *)(a3 + 24) )
            {
              v29 = (struct D2D_RECT_F *)*((_QWORD *)v22 + 18);
              v30 = (unsigned __int64)*((unsigned int *)v22 + 34) >> 4;
              for ( i = 0LL; i != v30; ++i )
              {
                v32 = 0LL;
                v68 = *v29;
                do
                {
                  *(float *)((char *)v70 + v32) = (float)*(int *)((char *)&v68.left + v32);
                  v32 += 4LL;
                }
                while ( v32 < 16 );
                v33 = CRenderData::DrawSolidColorRectangle(v28, a2, a4, a5, (const struct MilRectF *)v70, &v69);
                v12 = v33;
                if ( v33 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x287u);
                  return v12;
                }
                ++v29;
              }
            }
            goto LABEL_5;
          }
          if ( (*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v22 + 48LL))(v22, 115LL)
            && !CRectangleGeometry::IsRoundedRectangleGeometry(v22) )
          {
            if ( !*(_QWORD *)(a3 + 24) )
            {
              BoundsSafe = CGeometry::GetBoundsSafe(v64, 0LL, &v68);
              v12 = BoundsSafe;
              if ( BoundsSafe < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BoundsSafe, 0x295u);
                return v12;
              }
              v67 = CRenderData::DrawSolidColorRectangle(v66, a2, a4, a5, (const struct MilRectF *)&v68, &v69);
              v12 = v67;
              if ( v67 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v67, 0x297u);
                return v12;
              }
            }
            goto LABEL_5;
          }
        }
        else if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 48LL))(v21, 77LL) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v22 + 48LL))(v22, 115LL) )
          {
            v70[0] = *(struct CImageSource **)(v21 + 528);
            if ( !CRectangleGeometry::IsRoundedRectangleGeometry(v22) )
            {
              if ( !*(_QWORD *)(a3 + 24) && v55 )
              {
                v56 = CGeometry::GetBoundsSafe(v54, 0LL, &v68);
                v12 = v56;
                if ( v56 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x2A9u);
                  return v12;
                }
                v57 = *(_DWORD *)(v21 + 488);
                v58 = 0LL;
                *(struct _D3DCOLORVALUE *)&v69.r = (struct _D3DCOLORVALUE)v68;
                if ( !v57 || v57 == 2 )
                  v58 = &v69;
                Opacity = CImageLegacyMilBrush::GetOpacity((CImageLegacyMilBrush *)v21);
                v61 = CRenderData::DrawImageResource_FillMode(
                        v60,
                        a2,
                        a4,
                        a5,
                        v70[0],
                        (const struct D2D_RECT_F *)v58,
                        (struct D2D_RECT_F *)&v69,
                        Opacity,
                        0LL);
                v12 = v61;
                if ( v61 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x2C4u);
                  return v12;
                }
              }
              goto LABEL_5;
            }
          }
        }
      }
      break;
    case 437:
      v39 = *(_QWORD *)(a7 + 8);
      v40 = *(_QWORD *)(a1 + 104);
      v41 = *(unsigned int *)(v39 + 4);
      v42 = *(_QWORD *)(v40 + 8 * v41);
      if ( v42
        && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v42 + 48LL))(
             *(_QWORD *)(v40 + 8 * v41),
             78LL,
             a1) )
      {
        if ( !*(_QWORD *)(a3 + 24) )
        {
          v68 = *(struct D2D_RECT_F *)(v39 + 8);
          v43 = CRenderData::DrawImageResource_FillMode((__int64)&v68, a2, a4, a5, (CRenderData *)(v42 - 16), &v68, 1.0);
          v12 = v43;
          if ( v43 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x251u);
            return v12;
          }
        }
        goto LABEL_5;
      }
      break;
    case 439:
      goto LABEL_5;
    case 440:
      v44 = *(_QWORD *)(a7 + 8);
      v45 = *(_QWORD *)(a1 + 104);
      v46 = *(unsigned int *)(v44 + 4);
      v47 = *(_QWORD *)(v45 + 8 * v46);
      if ( !v47 )
        return v12;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v47 + 48LL))(
             *(_QWORD *)(v45 + 8 * v46),
             135LL,
             a1) )
      {
        if ( !*(_QWORD *)(a3 + 24) )
        {
          v52 = CSolidColorLegacyMilBrush::GetRealizedColor((CSolidColorLegacyMilBrush *)v47, &v69);
          v12 = v52;
          if ( v52 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x1E3u);
            return v12;
          }
          v53 = CRenderData::DrawSolidColorRectangle(
                  (CRenderData *)&v69,
                  a2,
                  a4,
                  a5,
                  (const struct MilRectF *)(v44 + 8),
                  &v69);
          v12 = v53;
          if ( v53 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x1E5u);
            return v12;
          }
        }
      }
      else
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v47 + 48LL))(v47, 88LL) )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v47 + 48LL))(v47, 77LL) )
            return v12;
          v70[0] = *(struct CImageSource **)(v47 + 528);
          v48 = v70[0] == 0LL;
          if ( v70[0] )
          {
            if ( CImageLegacyMilBrush::ReducesToFillImage((CImageLegacyMilBrush *)v47) )
            {
              if ( !*(_QWORD *)(a3 + 24) )
              {
                *(struct _D3DCOLORVALUE *)&v49.r = *(struct _D3DCOLORVALUE *)(v44 + 8);
                v68 = *(struct D2D_RECT_F *)(v47 + 464);
                *(struct _D3DCOLORVALUE *)&v69.r = *(struct _D3DCOLORVALUE *)&v49.r;
                v49.r = CImageLegacyMilBrush::GetOpacity((CImageLegacyMilBrush *)v47);
                v51 = CRenderData::DrawImageResource_FillMode(
                        v50,
                        a2,
                        a4,
                        a5,
                        v70[0],
                        &v68,
                        (struct D2D_RECT_F *)&v69,
                        v49.r,
                        0LL);
                v12 = v51;
                if ( v51 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x202u);
                  return v12;
                }
              }
              goto LABEL_5;
            }
            v48 = v70[0] == 0LL;
          }
          *a8 = v48;
          return v12;
        }
        if ( !*(_QWORD *)(a3 + 24) )
        {
          v63 = CLinearGradientLegacyMilBrush::DrawAsDrawList(
                  (CLinearGradientLegacyMilBrush *)v47,
                  a2,
                  a4,
                  a5,
                  (const struct MilRectF *)(v44 + 8));
          v12 = v63;
          if ( v63 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v63, 0x1F2u);
            return v12;
          }
        }
      }
LABEL_5:
      *a8 = 1;
      return v12;
    case 441:
      if ( !*(_QWORD *)(a3 + 24) )
      {
        v62 = CRenderData::DrawSolidColorRectangle(
                (CRenderData *)(*(_QWORD *)(a7 + 8) + 20LL),
                a2,
                a4,
                a5,
                (const struct MilRectF *)(*(_QWORD *)(a7 + 8) + 4LL),
                (const struct _D3DCOLORVALUE *)(*(_QWORD *)(a7 + 8) + 20LL));
        v12 = v62;
        if ( v62 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0x224u);
          return v12;
        }
      }
      goto LABEL_5;
    case 442:
      v14 = *(_QWORD *)(a7 + 8);
      v15 = *(_QWORD *)(a1 + 104);
      v16 = *(unsigned int *)(v14 + 4);
      v17 = *(_QWORD *)(v15 + 8 * v16);
      if ( v17 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v17 + 48LL))(
               *(_QWORD *)(v15 + 8 * v16),
               78LL,
               a1) )
        {
          if ( !*(_QWORD *)(a3 + 24) )
          {
            *(_OWORD *)v70 = *(_OWORD *)(v14 + 8);
            v18 = CRenderData::DrawImageResource_TileMode(
                    v17 - 16,
                    a2,
                    a4,
                    a5,
                    (struct CImageSource *)(v17 - 16),
                    *(FLOAT *)(v14 + 24),
                    (float *)(v14 + 28),
                    (float *)v70);
            v12 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x23Au);
              return v12;
            }
          }
          goto LABEL_5;
        }
      }
      break;
  }
  return v12;
}
