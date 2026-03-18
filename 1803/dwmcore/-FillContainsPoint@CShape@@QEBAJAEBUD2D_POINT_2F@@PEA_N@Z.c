/*
 * XREFs of ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18008C08C
 * Callers:
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18002813C (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180099BF0 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180064200 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008C02C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x1800C3038 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::FillContainsPoint(CShape *this, const struct D2D_POINT_2F *a2, bool *a3)
{
  __int64 (__fastcall *v6)(__int64, __int64, CMILMatrix *); // rax
  int TightBounds; // eax
  unsigned int v8; // ebx
  int v10; // eax
  int v11; // eax
  BOOL v12; // [rsp+30h] [rbp-20h]
  __int64 v13[2]; // [rsp+38h] [rbp-18h] BYREF

  v12 = 0;
  if ( CShape::IsAxisAlignedRectangle(this) )
  {
    v6 = *(__int64 (__fastcall **)(__int64, __int64, CMILMatrix *))(*(_QWORD *)this + 32LL);
    if ( v6 == CRectanglesShape::GetTightBounds )
      TightBounds = CRectanglesShape::GetTightBounds((__int64)this, (__int64)v13, 0LL);
    else
      TightBounds = v6((__int64)this, (__int64)v13, 0LL);
    v8 = TightBounds;
    if ( TightBounds < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0xB9u);
    else
      v12 = IsPointInRect(a2, (const struct MilRectF *)v13);
  }
  else
  {
    v13[0] = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
    v10 = (*(__int64 (__fastcall **)(CShape *, _QWORD, __int64 *))(*(_QWORD *)this + 24LL))(this, 0LL, v13);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v13[0] + 56LL))(v13[0], *a2, 0LL);
      v8 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC2u);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
  }
  *a3 = v12;
  return v8;
}
