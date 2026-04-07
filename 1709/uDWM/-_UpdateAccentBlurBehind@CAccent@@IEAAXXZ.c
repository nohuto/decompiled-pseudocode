/*
 * XREFs of ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180077A68
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180012054 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180012710 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180012990 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800124D4 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x1800127C8 (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x180038878 (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18007728C (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?_HasBlurBehind@CAccent@@IEAA_NXZ @ 0x180077A4C (-_HasBlurBehind@CAccent@@IEAA_NXZ.c)
 */

void __fastcall CAccent::_UpdateAccentBlurBehind(CAccent *this)
{
  unsigned int v2; // eax
  int v3; // edx
  int v4; // ecx
  __m128i v5; // xmm0
  int v6; // eax
  float v7; // xmm0_4
  int inserted; // eax
  struct CVisual **v9; // rbx
  int v10; // eax
  int v11; // xmm0_4
  _DWORD *v12; // rcx
  int updated; // eax
  int v14; // eax
  __m128i v15; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 42) && *((_BYTE *)this + 374) )
  {
    CRenderDataVisual::ClearInstructions(this);
    CAccentBlurBehind::UpdateAccentBlurBehind(
      *((CAccentBlurBehind **)this + 42),
      (struct tagRECT *)this + 37,
      *((_QWORD *)this + 48),
      *((HWND *)this + 47));
    v2 = 0;
    v3 = *((_DWORD *)this + 151) - *((_DWORD *)this + 149);
    v4 = *((_DWORD *)this + 150) - *((_DWORD *)this + 148);
    v15.m128i_i64[0] = 0LL;
    if ( v4 >= 0 )
      v2 = v4;
    v5 = _mm_cvtsi32_si128(v2);
    v6 = 0;
    LODWORD(v7) = _mm_cvtepi32_ps(v5).m128_u32[0];
    if ( v3 >= 0 )
      v6 = v3;
    *(float *)&v15.m128i_i32[2] = v7 + 0.0;
    *(float *)&v15.m128i_i32[3] = (float)v6 + 0.0;
    if ( CAccent::_HasBlurBehind(this) )
    {
      inserted = VisualCollection::InsertRelative(
                   (CAccent *)((char *)this + 32),
                   *((struct CVisual ***)this + 42),
                   0LL,
                   0,
                   1);
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x687u);
        return;
      }
    }
    if ( (*((_BYTE *)this + 284) & 2) == 0 )
      goto LABEL_15;
    v9 = *(struct CVisual ***)(*((_QWORD *)this + 42) + 280LL);
    v10 = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), v9, 0LL, 0, 1);
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x68Fu);
      return;
    }
    *(float *)&v11 = CAccent::_GetSolidFillOpacity(this);
    updated = CAccent::_UpdateSolidFill(v12, (CRenderDataVisual *)v9, *((_DWORD *)this + 88), &v15, v11);
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x690u);
    }
    else
    {
LABEL_15:
      v14 = CAccent::_AddOcclusionInstruction(this);
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x693u);
    }
  }
}
