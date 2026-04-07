/*
 * XREFs of ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18001D01C
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18001C8A0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18001CB3C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18001D5A0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?_HasBlurBehind@CAccent@@IEAA_NXZ @ 0x1800067A8 (-_HasBlurBehind@CAccent@@IEAA_NXZ.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18000AE30 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18001D35C (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x18001E2BC (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x18003E884 (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  int v9; // eax
  struct CVisual *v10; // rbx
  int v11; // eax
  float SolidFillOpacity; // xmm0_4
  __int64 v13; // rcx
  int updated; // eax
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  float v16; // [rsp+38h] [rbp-20h]
  float v17; // [rsp+3Ch] [rbp-1Ch]

  if ( *((_QWORD *)this + 42) && *((_BYTE *)this + 366) )
  {
    CRenderDataVisual::ClearInstructions(this);
    CAccentBlurBehind::UpdateAccentBlurBehind(
      *((struct CResource ***)this + 42),
      (const struct tagRECT *)((char *)this + 584),
      *((_QWORD *)this + 47),
      *((HWND *)this + 46));
    v2 = 0;
    v3 = *((_DWORD *)this + 149) - *((_DWORD *)this + 147);
    v4 = *((_DWORD *)this + 148) - *((_DWORD *)this + 146);
    v15 = 0LL;
    if ( v4 >= 0 )
      v2 = v4;
    v5 = _mm_cvtsi32_si128(v2);
    v6 = 0;
    LODWORD(v7) = _mm_cvtepi32_ps(v5).m128_u32[0];
    if ( v3 >= 0 )
      v6 = v3;
    v16 = v7 + 0.0;
    v17 = (float)v6 + 0.0;
    if ( CAccent::_HasBlurBehind(this) )
    {
      inserted = VisualCollection::InsertRelative(
                   (CAccent *)((char *)this + 32),
                   *((struct CVisual **)this + 42),
                   0LL,
                   0,
                   1);
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x664u);
        return;
      }
    }
    if ( (*((_BYTE *)this + 284) & 2) == 0 )
      goto LABEL_11;
    v10 = *(struct CVisual **)(*((_QWORD *)this + 42) + 280LL);
    v11 = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), v10, 0LL, 0, 1);
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x66Cu);
      return;
    }
    SolidFillOpacity = CAccent::_GetSolidFillOpacity(this);
    updated = CAccent::_UpdateSolidFill(v13, v10, *((unsigned int *)this + 86), &v15, LODWORD(SolidFillOpacity));
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x66Du);
    }
    else
    {
LABEL_11:
      v9 = CAccent::_AddOcclusionInstruction(this);
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x670u);
    }
  }
}
