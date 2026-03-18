/*
 * XREFs of ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180049F10
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180091AB0 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A7C80 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18004CCB4 (-GetTouchTargetBounds@CVisual@@IEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShouldHitTest@CWindowNode@@MEBA_NXZ @ 0x18008FE20 (-ShouldHitTest@CWindowNode@@MEBA_NXZ.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x1800C3038 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::HitTestContent(CVisual *this, char a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  unsigned int v4; // edi
  __int64 (*v9)(void); // rax
  char ShouldHitTest; // al
  bool v11; // al
  __int64 v12; // rcx
  int v14; // eax
  const struct MilRectF *TouchTargetBounds; // rax
  _BYTE v16[16]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  *a4 = 0;
  v9 = *(__int64 (**)(void))(*(_QWORD *)this + 248LL);
  if ( (char *)v9 == (char *)CWindowNode::ShouldHitTest )
    ShouldHitTest = CWindowNode::ShouldHitTest(this);
  else
    ShouldHitTest = v9();
  if ( ShouldHitTest )
  {
    if ( a2 )
    {
      TouchTargetBounds = (const struct MilRectF *)CVisual::GetTouchTargetBounds(this, v16);
      v11 = IsPointInRect(a3, TouchTargetBounds);
      *a4 = v11;
    }
    else
    {
      v11 = *a4;
    }
    if ( !v11 )
    {
      v12 = *((_QWORD *)this + 31);
      if ( v12 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, char *, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v12 + 176LL))(
                v12,
                (char *)this + 132,
                a3,
                a4);
        v4 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x137Du);
      }
    }
  }
  return v4;
}
