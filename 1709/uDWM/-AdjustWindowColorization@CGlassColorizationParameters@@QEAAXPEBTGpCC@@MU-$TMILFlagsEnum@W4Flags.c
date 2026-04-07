/*
 * XREFs of ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001F690
 * Callers:
 *     ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x180017F94 (-GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Coloriz.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x18001BB00 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001E690 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x180065A84 (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800346A8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180036960 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     floorf_0 @ 0x180046748 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18006D808 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     PacksRGBColor @ 0x18006FD8C (PacksRGBColor.c)
 *     GetStaticImmersiveColorPriv @ 0x1800A1CB8 (GetStaticImmersiveColorPriv.c)
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
  DWORD v12; // ecx
  __m128i v13; // xmm3
  __m128i v14; // xmm4
  int v15; // eax
  int Color; // ecx
  unsigned int v17; // eax
  char v18; // di
  bool v19; // si
  bool v20; // sf
  _DWORD *v21; // rax
  _DWORD *v22; // rdi
  int v23; // edi
  float v24; // xmm1_4
  float v25; // xmm13_4
  float v26; // xmm2_4
  float v27; // xmm9_4
  float v28; // xmm10_4
  float v29; // xmm7_4
  __int64 result; // rax
  bool v31; // al
  __int64 v32; // rcx
  __int64 StaticImmersiveColorPriv; // rax
  const wchar_t *v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // [rsp+28h] [rbp-69h] BYREF
  struct _RTL_CRITICAL_SECTION *v37; // [rsp+30h] [rbp-61h] BYREF
  __int64 Buffer; // [rsp+38h] [rbp-59h] BYREF
  char v39; // [rsp+40h] [rbp-51h]
  _BYTE pvParam[12]; // [rsp+48h] [rbp-49h] BYREF
  float v41; // [rsp+54h] [rbp-3Dh]
  int v42; // [rsp+110h] [rbp+7Fh] BYREF

  if ( (a4 & 0x30) != 0x30 )
  {
    v5 = (float)*(unsigned __int8 *)a1 / 255.0;
    v6 = (float)a2[3] / 255.0;
    v7 = (float)a2[2] / 255.0;
    v8 = (float)a2[1] / 255.0;
    v9 = (float)*a2 / 255.0;
    v10 = (float)*((unsigned __int8 *)a1 + 2) / 255.0;
    v11 = (float)*((unsigned __int8 *)a1 + 1) / 255.0;
    if ( (a4 & 4) != 0 )
    {
      if ( (a4 & 8) != 0 )
      {
        Color = 0;
        v17 = 0;
        v42 = 0;
        v18 = a4 & 1;
        v36 = 0;
        v19 = 0;
        if ( (a4 & 0x60) == 0 )
        {
          v20 = (*(int (__fastcall **)(_QWORD, const wchar_t *, unsigned int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                  + 7)
                                                                               + 8LL))(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
                  L"ColorPrevalence",
                  &v36) < 0;
          v17 = v36;
          if ( !v20 && v36 )
          {
            v34 = L"AccentColorInactive";
            if ( v18 )
              v34 = L"AccentColor";
            v20 = (*(int (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                           + 7)
                                                                        + 8LL))(
                    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
                    v34,
                    &v42) < 0;
            v17 = v36;
            v19 = !v20;
          }
          Color = v42;
        }
        if ( (v18 || v19) && v17 )
        {
          if ( !Color )
          {
            if ( v17 <= 2 )
            {
              v35 = 4LL;
            }
            else
            {
              switch ( v17 )
              {
                case 3u:
                  v35 = 3LL;
                  break;
                case 4u:
                  v35 = 2LL;
                  break;
                case 5u:
                  v35 = 1LL;
                  break;
                default:
                  v35 = 338LL;
                  break;
              }
            }
            Color = ColorCache::GetColor(v35);
          }
          v13 = _mm_cvtsi32_si128((unsigned __int8)Color);
          v14 = _mm_cvtsi32_si128(BYTE1(Color));
          v15 = BYTE2(Color);
          goto LABEL_21;
        }
        v37 = &ColorCache::_lock;
        EnterCriticalSection(&ColorCache::_lock);
        *(_QWORD *)pvParam = 338LL;
        pvParam[8] = 1;
        v21 = RtlLookupElementGenericTable(&ColorCache::_cachedColors, pvParam);
        v22 = v21;
        if ( v21 )
        {
          if ( !*((_BYTE *)v21 + 8) )
          {
            v21[1] = CImmersiveColor::GetColor(338LL);
            *((_BYTE *)v22 + 8) = 1;
          }
          v23 = v22[1];
          LeaveCriticalSection(&ColorCache::_lock);
        }
        else
        {
          Buffer = 338LL;
          v39 = 1;
          HIDWORD(Buffer) = CImmersiveColor::GetColor(338LL);
          RtlInsertElementGenericTable(&ColorCache::_cachedColors, &Buffer, 0xCu, 0LL);
          v23 = HIDWORD(Buffer);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v37);
        }
        v13 = _mm_cvtsi32_si128((unsigned __int8)v23);
        v14 = _mm_cvtsi32_si128(BYTE1(v23));
        v15 = BYTE2(v23);
LABEL_20:
        v6 = FLOAT_1_0;
LABEL_21:
        v10 = _mm_cvtepi32_ps(v13).m128_f32[0] / 255.0;
        v5 = (float)v15 / 255.0;
        v11 = _mm_cvtepi32_ps(v14).m128_f32[0] / 255.0;
        v9 = v5;
        v7 = v10;
        v8 = v11;
        goto LABEL_22;
      }
      if ( (a4 & 1) == 0 )
      {
        *(_DWORD *)pvParam = 16;
        *(_QWORD *)&pvParam[4] = 0LL;
        v41 = 0.0;
        if ( SystemParametersInfoA(0x42u, 0x10u, pvParam, 0) && (pvParam[4] & 1) != 0 )
          v12 = GetSysColor(15) | 0xFF000000;
        else
          v12 = -15263977;
        v13 = _mm_cvtsi32_si128((unsigned __int8)v12);
        v14 = _mm_cvtsi32_si128(BYTE1(v12));
        v15 = BYTE2(v12);
        goto LABEL_20;
      }
    }
LABEL_22:
    v24 = (float)((float)a1[2] / 100.0) * a3;
    v25 = (float)((float)a1[3] / 100.0) * (float)(1.0 - v6);
    v26 = (float)((float)(1.0 - v24) * (float)(v7 * v6)) + (float)(v24 * v10);
    v27 = (float)((float)(1.0 - v24) * (float)(v8 * v6)) + (float)(v24 * v11);
    v28 = (float)((float)(1.0 - v24) * v6) + v24;
    v29 = (float)((float)(1.0 - v24) * (float)(v9 * v6)) + (float)(v24 * v5);
    if ( v28 > 0.0 )
    {
      v26 = v26 / v28;
      v27 = v27 / v28;
      v29 = v29 / v28;
    }
    *((_BYTE *)a1 + 2) = (int)fminf(floorf_0((float)(v26 * 255.0) + 0.5), 255.0);
    *((_BYTE *)a1 + 1) = (int)fminf(floorf_0((float)(v27 * 255.0) + 0.5), 255.0);
    *(_BYTE *)a1 = (int)fminf(floorf_0((float)(v29 * 255.0) + 0.5), 255.0);
    *((_BYTE *)a1 + 3) = (int)fminf(floorf_0((float)(v28 * 255.0) + 0.5), 255.0);
    a1[2] = (int)floorf_0((float)(v28 * 100.0) + 0.5);
    a1[3] = (int)floorf_0((float)(v25 * 100.0) + 0.5);
    result = (unsigned int)(int)floorf_0(0.5);
    a1[4] = result;
    return result;
  }
  v31 = IsPPIEdition();
  v32 = 311LL;
  if ( v31 )
    v32 = 1173LL;
  StaticImmersiveColorPriv = GetStaticImmersiveColorPriv(v32);
  v41 = FLOAT_1_0;
  *(float *)pvParam = (float)(unsigned __int8)StaticImmersiveColorPriv / 255.0;
  *(float *)&pvParam[4] = (float)BYTE1(StaticImmersiveColorPriv) / 255.0;
  *(float *)&pvParam[8] = (float)BYTE2(StaticImmersiveColorPriv) / 255.0;
  return PacksRGBColor(pvParam, a1);
}
