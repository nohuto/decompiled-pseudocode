/*
 * XREFs of ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18006DC60
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z @ 0x18001D854 (-SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z.c)
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18001D908 (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18001D964 (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800640D0 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180064350 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C4890 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::TileImage(
        CDrawingContext *this,
        __int64 a2,
        const struct MilRectF *a3,
        __int64 a4,
        int a5)
{
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  struct _D3DCOLORVALUE v11; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v12[12]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v13[80]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = 0;
  if ( !(unsigned __int8)IsRectEmptyOrInvalid(a3)
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&a5) & _xmm) >= 0.0000011920929 )
  {
    v8 = CDrawingContext::ApplyRenderStateInternal(this, 0);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x61Au);
    }
    else
    {
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v13, a3);
      *(_QWORD *)&v11.r = 0x3F8000003F800000LL;
      *(_QWORD *)&v11.b = 0x3F8000003F800000LL;
      CLegacyMilBrushRealizer::CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v12);
      v12[0] = &LocalMILObject<CImmediateBrushRealizer>::`vftable';
      CImmediateBrushRealizer::SetSolidColorBrush((CImmediateBrushRealizer *)v12, &v11);
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *, char *, _BYTE *, _QWORD, _QWORD *, _DWORD))(**((_QWORD **)this + 45) + 64LL))(
             *((_QWORD *)this + 45),
             *((_QWORD *)this + 48),
             ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
             (char *)this + 72,
             (char *)this + 3552,
             v13,
             0LL,
             v12,
             *((_DWORD *)this + 70));
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x62Bu);
      v12[0] = &CImmediateBrushRealizer::`vftable';
      CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v12);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v13);
    }
  }
  return v7;
}
