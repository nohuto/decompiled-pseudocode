/*
 * XREFs of ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x1800A87D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18004A8D0 (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18004A92C (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007D99C (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180093F4C (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800941B0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800A1D6C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800A2550 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCCol.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C22F4 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     ?SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z @ 0x1800C576C (-SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     fmodf_0 @ 0x1800D5378 (fmodf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::TileImage(CDrawingContext *this, __int64 a2, __int64 a3, float *a4, int a5)
{
  unsigned int v6; // ebx
  int v10; // eax
  __int64 v11; // rsi
  int v12; // eax
  int v13; // eax
  float v14; // xmm10_4
  float v15; // xmm9_4
  float v16; // xmm0_4
  float v17; // xmm13_4
  float v18; // xmm0_4
  float v19; // xmm12_4
  float v20; // xmm11_4
  float v21; // xmm8_4
  float v22; // xmm6_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  float v25; // xmm7_4
  float v26; // xmm1_4
  bool v27; // zf
  float v28; // xmm1_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm2_4
  int v34; // eax
  int v35; // r8d
  int v36; // eax
  float v37; // xmm0_4
  float v38; // xmm0_4
  int v40; // eax
  struct ID2D1Bitmap1 *v41; // [rsp+58h] [rbp-B0h] BYREF
  struct _D3DCOLORVALUE v42; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v43[2]; // [rsp+70h] [rbp-98h] BYREF
  float v44; // [rsp+78h] [rbp-90h]
  float v45; // [rsp+7Ch] [rbp-8Ch]
  _BYTE v46[8]; // [rsp+80h] [rbp-88h] BYREF
  float Y; // [rsp+88h] [rbp-80h]
  float v48; // [rsp+8Ch] [rbp-7Ch]
  _QWORD v49[12]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v50[64]; // [rsp+F8h] [rbp-10h] BYREF

  v6 = 0;
  v41 = 0LL;
  if ( !IsRectEmptyOrInvalid((float *)a3)
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&a5) & _xmm) >= 0.0000011920929 )
  {
    v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x640u);
    }
    else if ( (unsigned __int8)CDrawingContext::IsBounding(this) )
    {
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v50, (const struct MilRectF *)a3);
      *(_QWORD *)&v42.r = 0x3F8000003F800000LL;
      *(_QWORD *)&v42.b = 0x3F8000003F800000LL;
      CLegacyMilBrushRealizer::CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v49);
      v49[0] = &LocalMILObject<CImmediateBrushRealizer>::`vftable';
      CImmediateBrushRealizer::SetSolidColorBrush((CImmediateBrushRealizer *)v49, &v42);
      v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *, char *, _BYTE *, _QWORD, _QWORD *, _DWORD))(**((_QWORD **)this + 46) + 80LL))(
              *((_QWORD *)this + 46),
              *((_QWORD *)this + 49),
              ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
              (char *)this + 80,
              (char *)this + 3456,
              v50,
              0LL,
              v49,
              *((_DWORD *)this + 72));
      v6 = v40;
      if ( v40 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x651u);
      v49[0] = &CImmediateBrushRealizer::`vftable';
      CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v49);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v50);
    }
    else if ( a2 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 60LL) )
    {
      v11 = (a2 - 16) & -(__int64)(a2 != 0);
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v11 + 8) + 112LL))(
              v11 + 8,
              0LL,
              0LL,
              v46);
      v6 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x65Du);
      }
      else
      {
        v13 = CDrawingContext::BitmapResourceToD2DBitmap(
                this,
                (struct IBitmapResource *)((v11 + 8) & -(__int64)(v11 != 0)),
                0LL,
                0,
                0LL,
                &v41);
        v6 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x663u);
        }
        else
        {
          if ( !v41 )
            goto LABEL_39;
          v14 = Y;
          v15 = v48;
          v16 = fmodf_0(*a4, Y);
          v17 = v16;
          if ( v16 < 0.0 )
            v17 = v16 + v14;
          v18 = fmodf_0(a4[1], v15);
          v19 = v18;
          if ( v18 < 0.0 )
            v19 = v18 + v15;
          v20 = v14 - v17;
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - v17)) & _xmm) < 0.0000011920929 )
            v20 = v14;
          v21 = v15 - v19;
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15 - v19)) & _xmm) < 0.0000011920929 )
            v21 = v15;
          v22 = *(float *)(a3 + 4);
          if ( *(float *)(a3 + 12) > v22 )
          {
            while ( 1 )
            {
              v23 = *(float *)a3;
              v24 = *(float *)(a3 + 8);
              v25 = *(float *)a3;
              if ( v24 > *(float *)a3 )
                break;
LABEL_36:
              if ( v22 == *(float *)(a3 + 4) )
                v38 = v21;
              else
                v38 = v15;
              v22 = v22 + v38;
              if ( *(float *)(a3 + 12) <= v22 )
                goto LABEL_39;
            }
            while ( 1 )
            {
              *(float *)v43 = v25;
              *(float *)&v43[1] = v22;
              if ( v25 == v23 )
                v26 = v20;
              else
                v26 = v14;
              v27 = v22 == *(float *)(a3 + 4);
              v28 = v26 + v25;
              v44 = v28;
              if ( v27 )
                v29 = v21;
              else
                v29 = v15;
              v30 = v29 + v22;
              v45 = v30;
              if ( v24 <= v28 )
              {
                v44 = v24;
                v28 = v24;
              }
              v31 = *(float *)(a3 + 12);
              if ( v31 <= v30 )
              {
                v45 = *(float *)(a3 + 12);
                v30 = v31;
              }
              v32 = v25 == v23 ? v17 : 0.0;
              v27 = v22 == *(float *)(a3 + 4);
              v42.r = v32;
              v33 = v27 ? v19 : 0.0;
              v42.g = v33;
              v42.b = (float)(v28 - v25) + v32;
              v42.a = (float)(v30 - v22) + v33;
              v34 = D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 65));
              v36 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, struct ID2D1Bitmap1 *, struct _D3DCOLORVALUE *, _DWORD *, int, int, int, int))(**((_QWORD **)this + 49) + 88LL))(
                      *((_QWORD *)this + 49),
                      ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
                      v41,
                      &v42,
                      v43,
                      a5,
                      1,
                      v34,
                      v35);
              v6 = v36;
              if ( v36 < 0 )
                break;
              v23 = *(float *)a3;
              if ( v25 == *(float *)a3 )
                v37 = v20;
              else
                v37 = v14;
              v24 = *(float *)(a3 + 8);
              v25 = v25 + v37;
              if ( v24 <= v25 )
                goto LABEL_36;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x6AEu);
          }
          else
          {
LABEL_39:
            if ( g_LockTilingTarget )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**((_QWORD **)this + 46) + 176LL))(
                *((_QWORD *)this + 46),
                *((_QWORD *)this + 49),
                ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
              g_LockTilingTarget = 0;
            }
          }
        }
      }
    }
  }
  ReleaseInterface<ID2D1Geometry>((__int64 *)&v41);
  return v6;
}
