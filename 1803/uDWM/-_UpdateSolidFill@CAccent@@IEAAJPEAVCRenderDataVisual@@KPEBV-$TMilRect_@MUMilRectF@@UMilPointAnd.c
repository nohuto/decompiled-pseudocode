/*
 * XREFs of ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180002E10
 * Callers:
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180003364 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180010178 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180010650 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180080F44 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x1800810D8 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180003E28 (-Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z @ 0x180003EB0 (-GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010A78 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAccent::_UpdateSolidFill(_DWORD *a1, CRenderDataVisual *a2, int a3, const __m128i *a4, int a5)
{
  __m128i v6; // xmm6
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // xmm0_4
  struct CSolidRectangleInstruction *v13; // rdx
  __int128 v14; // xmm0
  __int128 v16; // xmm6
  unsigned int v17; // edi
  __m128i v18; // xmm2
  unsigned int v19; // eax
  float v20; // xmm1_4
  __m128i v21; // xmm0
  int v22; // eax
  float v23; // xmm0_4
  struct CSolidRectangleInstruction *v24; // rdx
  __int64 v25; // rdx
  struct CSolidRectangleInstruction *v26; // [rsp+20h] [rbp-40h] BYREF
  struct tagRECT v27; // [rsp+28h] [rbp-38h] BYREF
  __int128 v28; // [rsp+38h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v26 = 0LL;
  v6 = _mm_loadu_si128(a4);
  v9 = CRenderDataVisual::ClearInstructions(a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    v25 = 963LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v9,
      (int)v26);
    goto LABEL_8;
  }
  *(float *)&v28 = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
  *((float *)&v28 + 1) = GammaLUT_sRGB_to_scRGB[BYTE1(a3)] / 255.0;
  v11 = a1[71];
  *((float *)&v28 + 2) = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
  if ( (v11 & 0x800) != 0 )
    v12 = 0;
  else
    v12 = a5;
  HIDWORD(v28) = v12;
  if ( (v11 & 4) != 0 )
  {
    v16 = v28;
    *(_QWORD *)&v27.left = 0LL;
    v17 = 0;
    *(_QWORD *)&v27.right = 0LL;
    while ( CDesktopManager::GetMonitorRectAtIndex(v17, &v27) )
    {
      if ( v27.left || v27.top || (a1[71] & 8) == 0 )
      {
        v18 = _mm_cvtsi32_si128(v27.top - a1[149]);
        v19 = 0;
        v20 = (float)(v27.left - a1[148]);
        if ( v27.right - v27.left >= 0 )
          v19 = v27.right - v27.left;
        v21 = _mm_cvtsi32_si128(v19);
        v22 = 0;
        LODWORD(v23) = _mm_cvtepi32_ps(v21).m128_u32[0];
        if ( v27.bottom - v27.top >= 0 )
          v22 = v27.bottom - v27.top;
        *(float *)&v28 = (float)(v27.left - a1[148]);
        *((float *)&v28 + 1) = _mm_cvtepi32_ps(v18).m128_f32[0];
        *((float *)&v28 + 2) = v23 + v20;
        *((float *)&v28 + 3) = (float)v22 + *((float *)&v28 + 1);
        Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v26);
        v9 = CSolidRectangleInstruction::Create(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
               &v26);
        v10 = v9;
        if ( v9 < 0 )
        {
          v25 = 998LL;
          goto LABEL_27;
        }
        v24 = v26;
        *((_OWORD *)v26 + 2) = v28;
        *((_OWORD *)v24 + 1) = v16;
        v9 = CRenderDataVisual::AddInstruction(a2, v24);
        v10 = v9;
        if ( v9 < 0 )
        {
          v25 = 1001LL;
          goto LABEL_27;
        }
      }
      ++v17;
    }
    goto LABEL_7;
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v26);
  v9 = CSolidRectangleInstruction::Create(
         *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
         &v26);
  v10 = v9;
  if ( v9 < 0 )
  {
    v25 = 1006LL;
    goto LABEL_27;
  }
  v13 = v26;
  v14 = v28;
  *((__m128i *)v26 + 2) = v6;
  *((_OWORD *)v13 + 1) = v14;
  v9 = CRenderDataVisual::AddInstruction(a2, v13);
  v10 = v9;
  if ( v9 < 0 )
  {
    v25 = 1009LL;
    goto LABEL_27;
  }
LABEL_7:
  v10 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v26);
  return v10;
}
