/*
 * XREFs of ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180047C84
 * Callers:
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180025800 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180097FB8 (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180035380 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180047BD0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x1800BC75C (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::FillContainsPoint(CShape *this, const struct D2D_POINT_2F *a2, bool *a3)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rax
  int TightBounds; // eax
  unsigned int v8; // ebx
  int v10; // eax
  int v11; // eax
  BOOL v12; // [rsp+30h] [rbp-20h]
  _QWORD v13[2]; // [rsp+38h] [rbp-18h] BYREF

  v12 = 0;
  if ( CShape::IsAxisAlignedRectangle(this) )
  {
    v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)this + 32LL);
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
    v10 = (*(__int64 (__fastcall **)(CShape *, _QWORD, _QWORD *))(*(_QWORD *)this + 24LL))(this, 0LL, v13);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(*(_QWORD *)v13[0] + 56LL))(
              v13[0],
              _mm_unpacklo_ps((__m128)LODWORD(a2->x), (__m128)LODWORD(a2->y)).m128_u64[0],
              0LL);
      v8 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC2u);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
  }
  *a3 = v12;
  return v8;
}
