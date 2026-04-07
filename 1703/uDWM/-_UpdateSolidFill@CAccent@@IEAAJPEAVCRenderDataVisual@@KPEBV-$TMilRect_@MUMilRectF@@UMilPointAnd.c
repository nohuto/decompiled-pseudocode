/*
 * XREFs of ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18001D35C
 * Callers:
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180006B34 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18001C8A0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18001CB3C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18001D01C (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x18007F8E0 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z @ 0x18000DD1C (-GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001A33C (-Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001A41C (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccent::_UpdateSolidFill(_DWORD *a1, CRenderDataVisual *a2, int a3, struct tagRECT *a4, int a5)
{
  struct CSolidRectangleInstruction *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // xmm0_4
  int v13; // eax
  int v14; // eax
  __int128 v16; // xmm6
  unsigned int v17; // esi
  unsigned int v18; // ecx
  int v19; // eax
  __m128i v20; // xmm2
  __m128i v21; // xmm1
  struct IDwmChannel *v22; // rcx
  int v23; // eax
  int v24; // eax
  struct CSolidRectangleInstruction *v25; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v26; // [rsp+38h] [rbp-38h] BYREF
  __int128 v27; // [rsp+48h] [rbp-28h] BYREF

  v26 = *a4;
  v25 = 0LL;
  v8 = 0LL;
  v9 = CRenderDataVisual::ClearInstructions(a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x3C8u);
  }
  else
  {
    *(float *)&v27 = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
    *((float *)&v27 + 1) = GammaLUT_sRGB_to_scRGB[BYTE1(a3)] / 255.0;
    v11 = a1[71];
    *((float *)&v27 + 2) = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
    if ( (v11 & 0x800) != 0 )
      v12 = 0;
    else
      v12 = a5;
    HIDWORD(v27) = v12;
    if ( (v11 & 4) != 0 )
    {
      v16 = v27;
      v17 = 0;
      *(_QWORD *)&v26.left = 0LL;
      *(_QWORD *)&v26.right = 0LL;
      while ( CDesktopManager::GetMonitorRectAtIndex(v17, &v26) )
      {
        if ( v26.left || v26.top || (a1[71] & 8) == 0 )
        {
          v18 = v26.bottom - v26.top;
          if ( v26.bottom - v26.top < 0 )
            v18 = 0;
          v19 = v26.right - v26.left;
          if ( v26.right - v26.left < 0 )
            v19 = 0;
          v20 = _mm_cvtsi32_si128(v26.top - a1[147]);
          *(float *)&v27 = (float)(v26.left - a1[146]);
          *((float *)&v27 + 1) = _mm_cvtepi32_ps(v20).m128_f32[0];
          v21 = _mm_cvtsi32_si128(v18);
          v22 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
          *((float *)&v27 + 2) = (float)v19 + *(float *)&v27;
          *((float *)&v27 + 3) = _mm_cvtepi32_ps(v21).m128_f32[0] + *((float *)&v27 + 1);
          v23 = CSolidRectangleInstruction::Create(v22, &v25);
          v10 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x3EBu);
            goto LABEL_27;
          }
          v8 = v25;
          CSolidRectangleInstruction::SetRect((__int64)v25, &v27);
          *((_OWORD *)v8 + 1) = v16;
          v24 = CRenderDataVisual::AddInstruction(a2, v8);
          v10 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x3EEu);
            break;
          }
        }
        ++v17;
      }
    }
    else
    {
      v13 = CSolidRectangleInstruction::Create(
              *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
              &v25);
      v10 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x3F3u);
LABEL_27:
        v8 = v25;
      }
      else
      {
        v8 = v25;
        CSolidRectangleInstruction::SetRect((__int64)v25, &v26);
        *((_OWORD *)v8 + 1) = v27;
        v14 = CRenderDataVisual::AddInstruction(a2, v8);
        v10 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x3F6u);
      }
    }
    if ( v8 )
      CBaseObject::Release(v8);
  }
  return v10;
}
