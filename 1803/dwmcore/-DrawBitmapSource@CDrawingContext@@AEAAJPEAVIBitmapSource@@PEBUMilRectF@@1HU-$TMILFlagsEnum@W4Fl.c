/*
 * XREFs of ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@@Z @ 0x18006C8C4
 * Callers:
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0HF@@@@Z @ 0x18006DDD0 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800640D0 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180064350 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800665E4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18006DF14 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@@Z @ 0x18015ECE0 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapSource(
        CDrawingContext *this,
        __int64 a2,
        __int64 a3,
        float *a4,
        int a5,
        int a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rcx
  const struct MilRectF *v9; // r9
  bool v10; // r8
  int v11; // eax
  int v13; // eax
  _BYTE v14[80]; // [rsp+40h] [rbp-88h] BYREF

  v6 = 0;
  if ( (float)(a4[2] - *a4) >= 2.220446e-16 && (float)(a4[3] - a4[1]) >= 2.220446e-16 )
  {
    if ( CDrawingContext::IsBounding(this) )
    {
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v14, v9);
      v11 = CDrawingContext::FillShapeForBounds(this, (const struct CShape *)v14, v10);
      v6 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xD62u);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v14);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_DRAWEVENT_Start,
          0LL,
          *(unsigned int *)(v8 + 6760));
      v13 = CDrawingContext::DrawBitmapSourceWithPartialOcclusion(this, a5, a6);
      v6 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xD59u);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0qq(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_DRAWEVENT_Stop,
          0LL,
          *((unsigned int *)this + 1690));
      }
    }
  }
  return v6;
}
