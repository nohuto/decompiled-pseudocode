/*
 * XREFs of ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800124D4
 * Callers:
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180008620 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180012054 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180012990 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180077A68 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x180077CCC (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z @ 0x18000BD1C (-GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800356E8 (-Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 */

__int64 __fastcall CAccent::_UpdateSolidFill(_DWORD *a1, CRenderDataVisual *a2, int a3, const __m128i *a4, int a5)
{
  __m128i v5; // xmm6
  CBaseObject *v8; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // xmm0_4
  int v14; // eax
  __int128 v15; // xmm0
  struct CSolidRectangleInstruction *v16; // rdx
  int v17; // eax
  __int128 v19; // xmm6
  unsigned int v20; // esi
  unsigned int v21; // ecx
  int v22; // eax
  __m128i v23; // xmm2
  __m128i v24; // xmm1
  struct IDwmChannel *v25; // rcx
  int v26; // eax
  struct CSolidRectangleInstruction *v27; // rdx
  int v28; // eax
  struct CSolidRectangleInstruction *v29; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v30; // [rsp+38h] [rbp-38h] BYREF
  __int128 v31; // [rsp+48h] [rbp-28h]

  v5 = _mm_loadu_si128(a4);
  v8 = 0LL;
  v29 = 0LL;
  v10 = CRenderDataVisual::ClearInstructions(a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x3D6u);
  }
  else
  {
    *(float *)&v31 = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
    *((float *)&v31 + 1) = GammaLUT_sRGB_to_scRGB[BYTE1(a3)] / 255.0;
    v12 = a1[71];
    *((float *)&v31 + 2) = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
    if ( (v12 & 0x800) != 0 )
      v13 = 0;
    else
      v13 = a5;
    HIDWORD(v31) = v13;
    if ( (v12 & 4) != 0 )
    {
      v19 = v31;
      v20 = 0;
      *(_QWORD *)&v30.left = 0LL;
      *(_QWORD *)&v30.right = 0LL;
      while ( CDesktopManager::GetMonitorRectAtIndex(v20, &v30) )
      {
        if ( v30.left || v30.top || (a1[71] & 8) == 0 )
        {
          v21 = v30.bottom - v30.top;
          if ( v30.bottom - v30.top < 0 )
            v21 = 0;
          v22 = v30.right - v30.left;
          if ( v30.right - v30.left < 0 )
            v22 = 0;
          v23 = _mm_cvtsi32_si128(v30.top - a1[149]);
          *(float *)&v31 = (float)(v30.left - a1[148]);
          *((float *)&v31 + 1) = _mm_cvtepi32_ps(v23).m128_f32[0];
          v24 = _mm_cvtsi32_si128(v21);
          v25 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
          *((float *)&v31 + 2) = (float)v22 + *(float *)&v31;
          *((float *)&v31 + 3) = _mm_cvtepi32_ps(v24).m128_f32[0] + *((float *)&v31 + 1);
          v26 = CSolidRectangleInstruction::Create(v25, &v29);
          v11 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x3F9u);
            goto LABEL_27;
          }
          v8 = v29;
          v27 = v29;
          *((_OWORD *)v29 + 2) = v31;
          *((_OWORD *)v27 + 1) = v19;
          v28 = CRenderDataVisual::AddInstruction(a2, v27);
          v11 = v28;
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x3FCu);
            break;
          }
        }
        ++v20;
      }
    }
    else
    {
      v14 = CSolidRectangleInstruction::Create(
              *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
              &v29);
      v11 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x401u);
LABEL_27:
        v8 = v29;
      }
      else
      {
        v8 = v29;
        v15 = v31;
        v16 = v29;
        *((__m128i *)v29 + 2) = v5;
        *((_OWORD *)v16 + 1) = v15;
        v17 = CRenderDataVisual::AddInstruction(a2, v16);
        v11 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x404u);
      }
    }
    if ( v8 )
      CBaseObject::Release(v8);
  }
  return v11;
}
