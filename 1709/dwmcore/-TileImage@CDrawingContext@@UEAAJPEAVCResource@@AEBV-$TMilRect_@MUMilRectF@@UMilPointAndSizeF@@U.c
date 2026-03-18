/*
 * XREFs of ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18003F820
 * Callers:
 *     <none>
 * Callees:
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180035280 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180035570 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180036C7C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1800373D8 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAPEAUI.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z @ 0x18007D77C (-SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z.c)
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18007D85C (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18007D8B8 (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180097B78 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@QEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x1800C27E4 (-GetD2DInterpolationMode@CDrawingContext@@QEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     fmodf_0 @ 0x1800C5D68 (fmodf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::TileImage(CDrawingContext *this, __int64 a2, __int64 a3, float *a4, int a5)
{
  unsigned int v6; // ebx
  int v10; // eax
  __int64 v11; // rsi
  int v12; // eax
  const struct CMILMatrix *v13; // r8
  int v14; // eax
  float v15; // xmm10_4
  float v16; // xmm9_4
  float v17; // xmm0_4
  float v18; // xmm13_4
  float v19; // xmm0_4
  float v20; // xmm12_4
  float v21; // xmm11_4
  float v22; // xmm8_4
  float v23; // xmm6_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm7_4
  float v27; // xmm1_4
  bool v28; // zf
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  float v33; // xmm3_4
  float v34; // xmm2_4
  enum D2D1_INTERPOLATION_MODE D2DInterpolationMode; // eax
  __int64 v36; // r8
  int v37; // r9d
  __int64 v38; // r11
  int v39; // eax
  float v40; // xmm0_4
  float v41; // xmm0_4
  int v43; // eax
  struct ID2D1Bitmap1 *v44; // [rsp+58h] [rbp-B0h] BYREF
  struct _D3DCOLORVALUE v45; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v46[2]; // [rsp+70h] [rbp-98h] BYREF
  float v47; // [rsp+78h] [rbp-90h]
  float v48; // [rsp+7Ch] [rbp-8Ch]
  _BYTE v49[8]; // [rsp+80h] [rbp-88h] BYREF
  float Y; // [rsp+88h] [rbp-80h]
  float v51; // [rsp+8Ch] [rbp-7Ch]
  _QWORD v52[12]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v53[64]; // [rsp+F8h] [rbp-10h] BYREF

  v6 = 0;
  v44 = 0LL;
  if ( !(unsigned __int8)IsRectEmptyOrInvalid(a3)
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&a5) & _xmm) >= 0.0000011920929 )
  {
    v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x628u);
    }
    else if ( CDrawingContext::IsBounding(this) )
    {
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v53, (const struct MilRectF *)a3);
      *(_QWORD *)&v45.r = 0x3F8000003F800000LL;
      *(_QWORD *)&v45.b = 0x3F8000003F800000LL;
      CLegacyMilBrushRealizer::CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v52);
      v52[0] = &LocalMILObject<CImmediateBrushRealizer>::`vftable';
      CImmediateBrushRealizer::SetSolidColorBrush((CImmediateBrushRealizer *)v52, &v45);
      v43 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *, char *, _BYTE *, _QWORD, _QWORD *, _DWORD))(**((_QWORD **)this + 45) + 64LL))(
              *((_QWORD *)this + 45),
              *((_QWORD *)this + 48),
              ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
              (char *)this + 72,
              (char *)this + 3552,
              v53,
              0LL,
              v52,
              *((_DWORD *)this + 70));
      v6 = v43;
      if ( v43 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x639u);
      v52[0] = &CImmediateBrushRealizer::`vftable';
      CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v52);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v53);
    }
    else if ( a2 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 72LL) )
    {
      v11 = (a2 - 16) & -(__int64)(a2 != 0);
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v11 + 8) + 120LL))(
              v11 + 8,
              0LL,
              0LL,
              v49);
      v6 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x645u);
      }
      else
      {
        v14 = CDrawingContext::BitmapResourceToD2DBitmap(
                this,
                (struct IBitmapResource *)((v11 + 8) & -(__int64)(v11 != 0)),
                v13,
                0,
                &v44);
        v6 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x64Au);
        }
        else
        {
          if ( !v44 )
            goto LABEL_39;
          v15 = Y;
          v16 = v51;
          v17 = fmodf_0(*a4, Y);
          v18 = v17;
          if ( v17 < 0.0 )
            v18 = v17 + v15;
          v19 = fmodf_0(a4[1], v16);
          v20 = v19;
          if ( v19 < 0.0 )
            v20 = v19 + v16;
          v21 = v15 - v18;
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15 - v18)) & _xmm) < 0.0000011920929 )
            v21 = v15;
          v22 = v16 - v20;
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v16 - v20)) & _xmm) < 0.0000011920929 )
            v22 = v16;
          v23 = *(float *)(a3 + 4);
          if ( *(float *)(a3 + 12) > v23 )
          {
            while ( 1 )
            {
              v24 = *(float *)a3;
              v25 = *(float *)(a3 + 8);
              v26 = *(float *)a3;
              if ( v25 > *(float *)a3 )
                break;
LABEL_36:
              if ( v23 == *(float *)(a3 + 4) )
                v41 = v22;
              else
                v41 = v16;
              v23 = v23 + v41;
              if ( *(float *)(a3 + 12) <= v23 )
                goto LABEL_39;
            }
            while ( 1 )
            {
              *(float *)v46 = v26;
              *(float *)&v46[1] = v23;
              if ( v26 == v24 )
                v27 = v21;
              else
                v27 = v15;
              v28 = v23 == *(float *)(a3 + 4);
              v29 = v27 + v26;
              v47 = v29;
              if ( v28 )
                v30 = v22;
              else
                v30 = v16;
              v31 = v30 + v23;
              v48 = v31;
              if ( v25 <= v29 )
              {
                v47 = v25;
                v29 = v25;
              }
              v32 = *(float *)(a3 + 12);
              if ( v32 <= v31 )
              {
                v48 = *(float *)(a3 + 12);
                v31 = v32;
              }
              v33 = v26 == v24 ? v18 : 0.0;
              v28 = v23 == *(float *)(a3 + 4);
              v45.r = v33;
              v34 = v28 ? v20 : 0.0;
              v45.g = v34;
              v45.b = (float)(v29 - v26) + v33;
              v45.a = (float)(v31 - v23) + v34;
              D2DInterpolationMode = CDrawingContext::GetD2DInterpolationMode(this);
              v39 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, struct ID2D1Bitmap1 *, struct _D3DCOLORVALUE *, _DWORD *, int, int, enum D2D1_INTERPOLATION_MODE, int))(v36 + 88))(
                      v38,
                      ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
                      v44,
                      &v45,
                      v46,
                      a5,
                      1,
                      D2DInterpolationMode,
                      v37);
              v6 = v39;
              if ( v39 < 0 )
                break;
              v24 = *(float *)a3;
              if ( v26 == *(float *)a3 )
                v40 = v21;
              else
                v40 = v15;
              v25 = *(float *)(a3 + 8);
              v26 = v26 + v40;
              if ( v25 <= v26 )
                goto LABEL_36;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x695u);
          }
          else
          {
LABEL_39:
            if ( g_LockTilingTarget )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**((_QWORD **)this + 45) + 184LL))(
                *((_QWORD *)this + 45),
                *((_QWORD *)this + 48),
                ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
              g_LockTilingTarget = 0;
            }
          }
        }
      }
    }
  }
  ReleaseInterface<ID2D1Geometry>(&v44);
  return v6;
}
