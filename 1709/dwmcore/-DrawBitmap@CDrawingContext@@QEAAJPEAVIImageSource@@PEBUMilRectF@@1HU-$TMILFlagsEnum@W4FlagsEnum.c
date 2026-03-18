/*
 * XREFs of ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18003DD0C
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180035280 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180035570 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x180037114 (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x18003F3AC (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18003FE70 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmap(
        CDrawingContext *this,
        struct IImageSource *a2,
        __int64 a3,
        const struct MilRectF *a4,
        int a5,
        char a6)
{
  int v9; // r14d
  int v10; // eax
  unsigned int v11; // edi
  struct IImageSource *v12; // rbx
  int v13; // eax
  bool v15; // r8
  int v16; // eax
  char v17; // [rsp+30h] [rbp-A8h]
  struct IImageSource *v18[2]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v19[64]; // [rsp+50h] [rbp-88h] BYREF

  if ( *((_BYTE *)this + 3136) || *((_QWORD *)this + 846) )
  {
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v19, a4);
    v16 = CDrawingContext::FillShapeForBounds(this, (const struct CShape *)v19, v15);
    v11 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xCB1u);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v19);
  }
  else
  {
    v9 = *((_DWORD *)this + 70);
    v18[0] = 0LL;
    v10 = CDrawingContext::ImageSourceToDrawListImageSource(this, a2, 0LL, v18);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC9Fu);
      goto LABEL_10;
    }
    v12 = v18[0];
    if ( v18[0] )
    {
      v17 = a6 & 1;
      v13 = CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(this, v18[0], a3, a4, a5, v9, v17);
      v11 = v13;
      if ( v13 >= 0 )
      {
        (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v12 + 16LL))(v12);
        return v11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xCAAu);
LABEL_10:
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v18);
    }
  }
  return v11;
}
