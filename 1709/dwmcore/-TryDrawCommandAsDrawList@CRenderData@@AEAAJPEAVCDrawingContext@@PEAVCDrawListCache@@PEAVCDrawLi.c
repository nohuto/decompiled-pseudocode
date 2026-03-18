/*
 * XREFs of ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE@gsl@@PEA_N@Z @ 0x18001E008
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18001E590 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?DrawBitmapResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCBitmapResource@@AEBUMilRectF@@@Z @ 0x18001D8BC (-DrawBitmapResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x18001DB7C (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEB.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ @ 0x18007C22C (-ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ.c)
 *     ?GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z @ 0x18007D48C (-GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z.c)
 *     ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007D670 (-IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180096BB0 (-IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::TryDrawCommandAsDrawList(
        __int64 a1,
        struct CDrawingContext *a2,
        __int64 a3,
        struct CDrawListEntryBuilder *a4,
        char a5,
        int a6,
        __int64 *a7,
        _BYTE *a8)
{
  unsigned int v11; // ebx
  __int64 v13; // rdx
  CSolidColorLegacyMilBrush *v14; // r14
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(CSolidColorLegacyMilBrush *, __int64); // rax
  char v17; // al
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  int RealizedColor; // eax
  CRenderData *v21; // rcx
  struct _D3DCOLORVALUE *v22; // rsi
  struct _D3DCOLORVALUE *v23; // rdi
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rcx
  CSolidColorLegacyMilBrush *v32; // rdi
  struct CBitmapResource *v33; // r15
  CRenderData *v34; // rcx
  int v35; // eax
  __int64 v36; // rax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  struct _D3DCOLORVALUE v41; // [rsp+30h] [rbp-78h] BYREF
  struct _D3DCOLORVALUE v42; // [rsp+40h] [rbp-68h] BYREF
  _DWORD v43[4]; // [rsp+50h] [rbp-58h] BYREF

  *a8 = 1;
  v11 = 0;
  switch ( a6 )
  {
    case 374:
      v13 = *(_QWORD *)(a1 + 104);
      v14 = *(CSolidColorLegacyMilBrush **)(v13 + 8LL * *(unsigned int *)(*a7 + 4));
      v15 = *(_QWORD *)(v13 + 8LL * *(unsigned int *)(*a7 + 8));
      if ( !v14 )
        goto LABEL_7;
      v16 = *(__int64 (__fastcall **)(CSolidColorLegacyMilBrush *, __int64))(*(_QWORD *)v14 + 48LL);
      v17 = (char *)v16 == (char *)CSolidColorLegacyMilBrush::IsOfType
          ? CSolidColorLegacyMilBrush::IsOfType(v14, 122LL)
          : v16(v14, 122LL);
      if ( !v17 || !v15 )
        goto LABEL_7;
      v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 48LL);
      if ( !(v18 == CRgnGeometry::IsOfType ? CRgnGeometry::IsOfType(v15, 109LL) : (unsigned __int8)v18(v15, 109LL)) )
        goto LABEL_7;
      if ( !*(_QWORD *)(a3 + 24) )
      {
        RealizedColor = CSolidColorLegacyMilBrush::GetRealizedColor(v14, &v42);
        v11 = RealizedColor;
        if ( RealizedColor < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RealizedColor, 0x22Bu);
        }
        else
        {
          v22 = *(struct _D3DCOLORVALUE **)(v15 + 112);
          v23 = (struct _D3DCOLORVALUE *)((char *)v22 + (*(_DWORD *)(v15 + 104) & 0xFFFFFFF0));
          while ( v22 != v23 )
          {
            v36 = 0LL;
            *(struct _D3DCOLORVALUE *)&v41.r = *(struct _D3DCOLORVALUE *)&v22->r;
            do
            {
              *(float *)&v43[v36] = (float)*(int *)((char *)&v41.r + v36 * 4);
              ++v36;
            }
            while ( v36 < 4 );
            v37 = CRenderData::DrawSolidColorRectangle(v21, a2, a4, a5, (const struct MilRectF *)v43, &v42);
            v11 = v37;
            if ( v37 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x230u);
              return v11;
            }
            ++v22;
          }
        }
      }
      break;
    case 376:
      v24 = *a7;
      v25 = *(_QWORD *)(a1 + 104);
      v26 = *(unsigned int *)(*a7 + 4);
      v27 = *(_QWORD *)(v25 + 8 * v26);
      if ( !v27
        || !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v27 + 48LL))(
              *(_QWORD *)(v25 + 8 * v26),
              11LL) )
      {
        goto LABEL_7;
      }
      if ( !*(_QWORD *)(a3 + 24) )
      {
        v28 = CRenderData::DrawBitmapResource_FillMode(
                (CRenderData *)(v27 - 16),
                a2,
                a4,
                a5,
                (struct CBitmapResource *)(v27 - 16),
                (const struct MilRectF *)(v24 + 8));
        v11 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x211u);
      }
      break;
    case 378:
      return v11;
    case 379:
      v29 = *a7;
      v30 = *(_QWORD *)(a1 + 104);
      v31 = *(unsigned int *)(*a7 + 4);
      v32 = *(CSolidColorLegacyMilBrush **)(v30 + 8 * v31);
      if ( !v32 )
        goto LABEL_7;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v32 + 48LL))(
             *(_QWORD *)(v30 + 8 * v31),
             122LL) )
      {
        if ( !*(_QWORD *)(a3 + 24) )
        {
          v39 = CSolidColorLegacyMilBrush::GetRealizedColor(v32, &v41);
          v11 = v39;
          if ( v39 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x1D2u);
          }
          else
          {
            v40 = CRenderData::DrawSolidColorRectangle(
                    (CRenderData *)&v41,
                    a2,
                    a4,
                    a5,
                    (const struct MilRectF *)(v29 + 8),
                    &v41);
            v11 = v40;
            if ( v40 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x1D4u);
          }
        }
      }
      else
      {
        if ( !(*(unsigned __int8 (__fastcall **)(CSolidColorLegacyMilBrush *, __int64))(*(_QWORD *)v32 + 48LL))(
                v32,
                71LL) )
          goto LABEL_7;
        v33 = (struct CBitmapResource *)*((_QWORD *)v32 + 66);
        if ( CImageLegacyMilBrush::ReducesToFillImage(v32)
          && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)v32 + 66) + 16LL) + 48LL))(
               *((_QWORD *)v32 + 66) + 16LL,
               11LL) )
        {
          if ( !*(_QWORD *)(a3 + 24) )
          {
            v35 = CRenderData::DrawBitmapResource_FillMode(v34, a2, a4, a5, v33, (const struct MilRectF *)(v29 + 8));
            v11 = v35;
            if ( v35 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x1E2u);
          }
        }
        else
        {
          *a8 = 0;
        }
      }
      break;
    case 380:
      if ( !*(_QWORD *)(a3 + 24) )
      {
        v38 = CRenderData::DrawSolidColorRectangle(
                (CRenderData *)(*a7 + 20),
                a2,
                a4,
                a5,
                (const struct MilRectF *)(*a7 + 4),
                (const struct _D3DCOLORVALUE *)(*a7 + 20));
        v11 = v38;
        if ( v38 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x201u);
      }
      break;
    default:
LABEL_7:
      *a8 = 0;
      return v11;
  }
  return v11;
}
