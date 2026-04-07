/*
 * XREFs of ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002B290
 * Callers:
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180026D5C (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180026F30 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180029EF0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x18006FEF0 (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800157E8 (-IsPPIEdition@@YA_NXZ.c)
 *     floorf_0 @ 0x18004DE78 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1800794B0 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     PacksRGBColor @ 0x1800794E8 (PacksRGBColor.c)
 *     GetStaticImmersiveColorPriv @ 0x1800A3594 (GetStaticImmersiveColorPriv.c)
 */

__int64 __fastcall CGlassColorizationParameters::AdjustWindowColorization(
        int *a1,
        unsigned __int8 *a2,
        float a3,
        char a4)
{
  float v5; // xmm5_4
  float v6; // xmm6_4
  float v7; // xmm9_4
  float v8; // xmm11_4
  float v9; // xmm12_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  int Color; // ecx
  char v13; // di
  bool v14; // si
  unsigned int v15; // eax
  bool v16; // sf
  __int64 ColorFromPreference; // rax
  __m128i v18; // xmm3
  unsigned int v19; // ecx
  int v20; // eax
  __m128i v21; // xmm4
  float v22; // xmm13_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm9_4
  float v26; // xmm10_4
  float v27; // xmm7_4
  __int64 result; // rax
  DWORD v29; // ecx
  bool v30; // al
  __int64 v31; // rcx
  __int64 StaticImmersiveColorPriv; // rax
  const wchar_t *v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE pvParam[12]; // [rsp+28h] [rbp-B0h] BYREF
  float v37; // [rsp+34h] [rbp-A4h]
  int v38; // [rsp+F8h] [rbp+20h] BYREF

  if ( (a4 & 0x30) != 0x30 )
  {
    v5 = (float)*(unsigned __int8 *)a1 / 255.0;
    v6 = (float)a2[3] / 255.0;
    v7 = (float)a2[2] / 255.0;
    v8 = (float)a2[1] / 255.0;
    v9 = (float)*a2 / 255.0;
    v10 = (float)*((unsigned __int8 *)a1 + 2) / 255.0;
    v11 = (float)*((unsigned __int8 *)a1 + 1) / 255.0;
    if ( (a4 & 4) == 0 )
    {
LABEL_13:
      v22 = (float)((float)a1[3] / 100.0) * (float)(1.0 - v6);
      v23 = (float)((float)a1[2] / 100.0) * a3;
      v24 = (float)((float)(1.0 - v23) * (float)(v7 * v6)) + (float)(v23 * v10);
      v25 = (float)((float)(1.0 - v23) * (float)(v8 * v6)) + (float)(v23 * v11);
      v26 = (float)((float)(1.0 - v23) * v6) + v23;
      v27 = (float)((float)(1.0 - v23) * (float)(v9 * v6)) + (float)(v23 * v5);
      if ( v26 > 0.0 )
      {
        v24 = v24 / v26;
        v25 = v25 / v26;
        v27 = v27 / v26;
      }
      *((_BYTE *)a1 + 2) = (int)fminf(floorf_0((float)(v24 * 255.0) + 0.5), 255.0);
      *((_BYTE *)a1 + 1) = (int)fminf(floorf_0((float)(v25 * 255.0) + 0.5), 255.0);
      *(_BYTE *)a1 = (int)fminf(floorf_0((float)(v27 * 255.0) + 0.5), 255.0);
      *((_BYTE *)a1 + 3) = (int)fminf(floorf_0((float)(v26 * 255.0) + 0.5), 255.0);
      a1[2] = (int)floorf_0((float)(v26 * 100.0) + 0.5);
      a1[3] = (int)floorf_0((float)(v22 * 100.0) + 0.5);
      result = (unsigned int)(int)floorf_0(0.5);
      a1[4] = result;
      return result;
    }
    if ( (a4 & 8) != 0 )
    {
      Color = 0;
      v38 = 0;
      v13 = a4 & 1;
      v35 = 0;
      v14 = 0;
      v15 = 0;
      if ( (a4 & 0x60) == 0 )
      {
        v16 = (*(int (__fastcall **)(_QWORD, const wchar_t *, unsigned int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                + 7)
                                                                             + 8LL))(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
                L"ColorPrevalence",
                &v35) < 0;
        v15 = v35;
        if ( !v16 && v35 )
        {
          v33 = L"AccentColorInactive";
          if ( v13 )
            v33 = L"AccentColor";
          v16 = (*(int (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                         + 7)
                                                                      + 8LL))(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
                  v33,
                  &v38) < 0;
          v15 = v35;
          v14 = !v16;
        }
        Color = v38;
      }
      if ( (v13 || v14) && v15 )
      {
        if ( !Color )
        {
          if ( v15 <= 2 )
          {
            v34 = 4LL;
          }
          else
          {
            switch ( v15 )
            {
              case 3u:
                v34 = 3LL;
                break;
              case 4u:
                v34 = 2LL;
                break;
              case 5u:
                v34 = 1LL;
                break;
              default:
                v34 = 338LL;
                break;
            }
          }
          Color = CImmersiveColor::GetColor(v34);
        }
        v18 = _mm_cvtsi32_si128((unsigned __int8)Color);
        v21 = _mm_cvtsi32_si128(BYTE1(Color));
        v20 = BYTE2(Color);
        goto LABEL_12;
      }
      *(_QWORD *)pvParam = 0LL;
      GetUserColorPreference(pvParam, 0LL);
      ColorFromPreference = GetColorFromPreference(pvParam, 338LL, 0LL, 1LL);
      v18 = _mm_cvtsi32_si128((unsigned __int8)ColorFromPreference);
      v19 = BYTE1(ColorFromPreference);
      v20 = BYTE2(ColorFromPreference);
      v21 = _mm_cvtsi32_si128(v19);
    }
    else
    {
      if ( (a4 & 1) != 0 )
        goto LABEL_13;
      *(_DWORD *)pvParam = 16;
      *(_QWORD *)&pvParam[4] = 0LL;
      v37 = 0.0;
      if ( SystemParametersInfoA(0x42u, 0x10u, pvParam, 0) && (pvParam[4] & 1) != 0 )
        v29 = GetSysColor(15) | 0xFF000000;
      else
        v29 = -15263977;
      v18 = _mm_cvtsi32_si128((unsigned __int8)v29);
      v21 = _mm_cvtsi32_si128(BYTE1(v29));
      v20 = BYTE2(v29);
    }
    v6 = FLOAT_1_0;
LABEL_12:
    v10 = _mm_cvtepi32_ps(v18).m128_f32[0] / 255.0;
    v5 = (float)v20 / 255.0;
    v11 = _mm_cvtepi32_ps(v21).m128_f32[0] / 255.0;
    v9 = v5;
    v7 = v10;
    v8 = v11;
    goto LABEL_13;
  }
  v30 = IsPPIEdition();
  v31 = 311LL;
  if ( v30 )
    v31 = 1173LL;
  StaticImmersiveColorPriv = GetStaticImmersiveColorPriv(v31);
  v37 = FLOAT_1_0;
  *(float *)pvParam = (float)(unsigned __int8)StaticImmersiveColorPriv / 255.0;
  *(float *)&pvParam[4] = (float)BYTE1(StaticImmersiveColorPriv) / 255.0;
  *(float *)&pvParam[8] = (float)BYTE2(StaticImmersiveColorPriv) / 255.0;
  return PacksRGBColor(pvParam, a1);
}
