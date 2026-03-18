/*
 * XREFs of ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001EA38
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18001262C (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001E560 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001E810 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x180013AE8 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180072544 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180094050 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::FillContainsPoint(CShape *this, const struct D2D_POINT_2F *a2, bool *a3)
{
  __int64 (__fastcall *v6)(CShape *, _QWORD *, _QWORD); // rax
  int TightBounds; // eax
  unsigned int v8; // ebx
  __int64 result; // rax
  int v10; // eax
  int v11; // eax
  BOOL v12; // [rsp+30h] [rbp-20h]
  _QWORD v13[2]; // [rsp+38h] [rbp-18h] BYREF

  v12 = 0;
  if ( CShape::IsAxisAlignedRectangle(this) )
  {
    v6 = *(__int64 (__fastcall **)(CShape *, _QWORD *, _QWORD))(*(_QWORD *)this + 32LL);
    if ( (char *)v6 == (char *)CRectanglesShape::GetTightBounds )
      TightBounds = CRectanglesShape::GetTightBounds(this, v13, 0LL);
    else
      TightBounds = v6(this, v13, 0LL);
    v8 = TightBounds;
    if ( TightBounds < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0xB9u);
    else
      v12 = IsPointInRect(a2, (const struct MilRectF *)v13);
  }
  else
  {
    v13[0] = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(v13);
    v10 = (*(__int64 (__fastcall **)(CShape *, _QWORD, _QWORD *))(*(_QWORD *)this + 24LL))(this, 0LL, v13);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v13[0] + 56LL))(v13[0], *a2, 0LL);
      v8 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC2u);
    }
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(v13);
  }
  result = v8;
  *a3 = v12;
  return result;
}
