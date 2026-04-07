/*
 * XREFs of ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180032750
 * Callers:
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x18001B940 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001E820 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x1800254B8 (-GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Coloriz.c)
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x18006C534 (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18003137C (-IsPPIEdition@@YA_NXZ.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180032CCC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     GetStaticImmersiveColorPrivForHighContrastState @ 0x18004B248 (GetStaticImmersiveColorPrivForHighContrastState.c)
 *     floorf_0 @ 0x18004B348 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1800745A8 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     PacksRGBColor @ 0x180076814 (PacksRGBColor.c)
 */

__int64 __fastcall CGlassColorizationParameters::AdjustWindowColorization(
        int *a1,
        unsigned __int8 *a2,
        float a3,
        char a4)
{
  bool v6; // zf
  __int64 v7; // rcx
  __int64 StaticImmersiveColorPrivForHighContrastState; // rax
  __int64 result; // rax
  float v10; // xmm11_4
  float v11; // xmm6_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm7_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  char v17; // bl
  int Color; // ecx
  unsigned int v19; // eax
  bool v20; // si
  bool v21; // sf
  const wchar_t *v22; // rdx
  _DWORD *v23; // rax
  _DWORD *v24; // rbx
  int v25; // ebx
  __m128i v26; // xmm2
  __m128i v27; // xmm3
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned int v31; // ecx
  float v32; // xmm13_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm10_4
  float v36; // xmm9_4
  float v37; // xmm7_4
  unsigned int v38; // [rsp+20h] [rbp-69h] BYREF
  struct _RTL_CRITICAL_SECTION *v39; // [rsp+28h] [rbp-61h] BYREF
  __int64 v40; // [rsp+30h] [rbp-59h] BYREF
  char v41; // [rsp+38h] [rbp-51h]
  __int64 Buffer; // [rsp+40h] [rbp-49h] BYREF
  float v43; // [rsp+48h] [rbp-41h]
  float v44; // [rsp+4Ch] [rbp-3Dh]
  int v45; // [rsp+108h] [rbp+7Fh] BYREF

  if ( (a4 & 0x30) == 0x30 )
  {
    v6 = !IsPPIEdition();
    v7 = 311LL;
    if ( !v6 )
      v7 = 1173LL;
    StaticImmersiveColorPrivForHighContrastState = GetStaticImmersiveColorPrivForHighContrastState(
                                                     v7,
                                                     *((unsigned __int8 *)CDesktopManager::s_pDesktopManagerInstance + 26));
    v44 = FLOAT_1_0;
    *(float *)&Buffer = (float)(unsigned __int8)StaticImmersiveColorPrivForHighContrastState / 255.0;
    *((float *)&Buffer + 1) = (float)BYTE1(StaticImmersiveColorPrivForHighContrastState) / 255.0;
    v43 = (float)BYTE2(StaticImmersiveColorPrivForHighContrastState) / 255.0;
    return PacksRGBColor(&Buffer, a1);
  }
  v10 = (float)a2[3] / 255.0;
  v11 = (float)*(unsigned __int8 *)a1 / 255.0;
  v12 = (float)a2[2] / 255.0;
  v13 = (float)a2[1] / 255.0;
  v14 = (float)*a2 / 255.0;
  v15 = (float)*((unsigned __int8 *)a1 + 2) / 255.0;
  v16 = (float)*((unsigned __int8 *)a1 + 1) / 255.0;
  if ( (a4 & 4) != 0 )
  {
    v17 = a4 & 1;
    if ( (a4 & 8) != 0 )
    {
      Color = 0;
      v19 = 0;
      v20 = 0;
      v45 = 0;
      v38 = 0;
      if ( (a4 & 0x60) == 0 )
      {
        v21 = (*(int (__fastcall **)(_QWORD, const wchar_t *, unsigned int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                + 7)
                                                                             + 8LL))(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
                L"ColorPrevalence",
                &v38) < 0;
        v19 = v38;
        if ( !v21 && v38 )
        {
          v22 = L"AccentColorInactive";
          if ( v17 )
            v22 = L"AccentColor";
          v21 = (*(int (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                         + 7)
                                                                      + 8LL))(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
                  v22,
                  &v45) < 0;
          v19 = v38;
          v20 = !v21;
        }
        Color = v45;
      }
      if ( (v17 || v20) && v19 )
      {
        if ( !Color )
        {
          if ( v19 <= 2 )
          {
            v29 = 4LL;
          }
          else
          {
            switch ( v19 )
            {
              case 3u:
                v29 = 3LL;
                break;
              case 4u:
                v29 = 2LL;
                break;
              case 5u:
                v29 = 1LL;
                break;
              default:
                v29 = 338LL;
                break;
            }
          }
          Color = ColorCache::GetColor(v29);
        }
        v26 = _mm_cvtsi32_si128((unsigned __int8)Color);
        v27 = _mm_cvtsi32_si128(BYTE1(Color));
        v28 = BYTE2(Color);
        goto LABEL_38;
      }
      v39 = &ColorCache::_lock;
      EnterCriticalSection(&ColorCache::_lock);
      Buffer = 338LL;
      LOBYTE(v43) = 1;
      v23 = RtlLookupElementGenericTable(&ColorCache::_cachedColors, &Buffer);
      v24 = v23;
      if ( v23 )
      {
        if ( !*((_BYTE *)v23 + 8) )
        {
          v23[1] = CImmersiveColor::GetColor(338LL);
          *((_BYTE *)v24 + 8) = 1;
        }
        v25 = v24[1];
        LeaveCriticalSection(&ColorCache::_lock);
      }
      else
      {
        v40 = 338LL;
        v41 = 1;
        HIDWORD(v40) = CImmersiveColor::GetColor(338LL);
        RtlInsertElementGenericTable(&ColorCache::_cachedColors, &v40, 0xCu, 0LL);
        v25 = HIDWORD(v40);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v39);
      }
      v26 = _mm_cvtsi32_si128((unsigned __int8)v25);
      v27 = _mm_cvtsi32_si128(BYTE1(v25));
      v28 = BYTE2(v25);
LABEL_37:
      v10 = FLOAT_1_0;
LABEL_38:
      v12 = _mm_cvtepi32_ps(v26).m128_f32[0] / 255.0;
      v14 = (float)v28 / 255.0;
      v13 = _mm_cvtepi32_ps(v27).m128_f32[0] / 255.0;
      v11 = v14;
      v15 = v12;
      v16 = v13;
      goto LABEL_39;
    }
    if ( (a4 & 1) == 0 )
    {
      v30 = GetStaticImmersiveColorPrivForHighContrastState(
              301LL,
              *((unsigned __int8 *)CDesktopManager::s_pDesktopManagerInstance + 26));
      v26 = _mm_cvtsi32_si128((unsigned __int8)v30);
      v31 = BYTE1(v30);
      v28 = BYTE2(v30);
      v27 = _mm_cvtsi32_si128(v31);
      goto LABEL_37;
    }
  }
LABEL_39:
  v32 = (float)((float)a1[3] / 100.0) * (float)(1.0 - v10);
  v33 = (float)((float)a1[2] / 100.0) * a3;
  v34 = (float)((float)(v12 * v10) * (float)(1.0 - v33)) + (float)(v33 * v15);
  v35 = (float)(v10 * (float)(1.0 - v33)) + v33;
  v36 = (float)((float)(v10 * v13) * (float)(1.0 - v33)) + (float)(v33 * v16);
  v37 = (float)((float)(v14 * v10) * (float)(1.0 - v33)) + (float)(v33 * v11);
  if ( v35 > 0.0 )
  {
    v34 = v34 / v35;
    v36 = v36 / v35;
    v37 = v37 / v35;
  }
  *((_BYTE *)a1 + 2) = (int)fminf(floorf_0((float)(v34 * 255.0) + 0.5), 255.0);
  *((_BYTE *)a1 + 1) = (int)fminf(floorf_0((float)(v36 * 255.0) + 0.5), 255.0);
  *(_BYTE *)a1 = (int)fminf(floorf_0((float)(v37 * 255.0) + 0.5), 255.0);
  *((_BYTE *)a1 + 3) = (int)fminf(floorf_0((float)(v35 * 255.0) + 0.5), 255.0);
  a1[2] = (int)floorf_0((float)(v35 * 100.0) + 0.5);
  a1[3] = (int)floorf_0((float)(v32 * 100.0) + 0.5);
  result = (unsigned int)(int)floorf_0(0.5);
  a1[4] = result;
  return result;
}
