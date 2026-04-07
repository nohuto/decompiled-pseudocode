/*
 * XREFs of ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180080F44
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180010178 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180010580 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180010650 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180002E10 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x180010824 (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800808FC (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x180080EF8 (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     ?_HasBlurBehind@CAccent@@IEAA_NXZ @ 0x180080F28 (-_HasBlurBehind@CAccent@@IEAA_NXZ.c)
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
      (const struct tagRECT *)this + 37,
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
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x66Bu);
        return;
      }
    }
    if ( (*((_BYTE *)this + 284) & 2) == 0 )
      goto LABEL_15;
    v9 = *(struct CVisual ***)(*((_QWORD *)this + 42) + 280LL);
    v10 = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), v9, 0LL, 0, 1);
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x673u);
      return;
    }
    *(float *)&v11 = CAccent::_GetSolidFillOpacity(this);
    updated = CAccent::_UpdateSolidFill(v12, (CRenderDataVisual *)v9, *((_DWORD *)this + 88), &v15, v11);
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x674u);
    }
    else
    {
LABEL_15:
      v14 = CAccent::_AddOcclusionInstruction(this);
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x677u);
    }
  }
}
