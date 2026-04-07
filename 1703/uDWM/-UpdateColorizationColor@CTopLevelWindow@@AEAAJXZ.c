/*
 * XREFs of ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180029EF0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180027358 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180027400 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002B290 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C8A0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004D268 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     floorf_0 @ 0x18004DE78 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateColorizationColor(CTopLevelWindow *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  _DWORD *v8; // rax
  __int64 v9; // r9
  float *v10; // rsi
  bool v11; // zf
  __int128 v12; // xmm0
  __int64 v13; // xmm1_8
  int v14; // eax
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm0_4
  __int64 v18; // r8
  float v19; // xmm0_4
  float v20; // xmm1_4
  unsigned int v21; // ebx
  __int128 v22; // xmm0
  float *v23; // rdi
  __int64 v24; // xmm1_8
  int v25; // eax
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  void *(__fastcall *v32)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v33; // rax
  void *(__fastcall *v34)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v35; // rax
  int v36; // [rsp+30h] [rbp-49h] BYREF
  __int128 v37; // [rsp+38h] [rbp-41h] BYREF
  __int64 v38; // [rsp+48h] [rbp-31h]
  int v39; // [rsp+50h] [rbp-29h]

  if ( (*((_DWORD *)this + 146) & 0x40) != 0 || (*(_BYTE *)(*((_QWORD *)this + 90) + 595LL) & 0x20) != 0 )
    v2 = 1;
  else
    v2 = 2;
  v3 = *((_QWORD *)this + 90);
  if ( *(_QWORD *)(v3 + 80) == 0x7FFFFFFF7FFFFFFFLL
    && *(_DWORD *)(v3 + 88) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 92) == 0x7FFFFFFF )
  {
    v2 |= 0x40u;
  }
  IsOpenThemeDataPresent();
  if ( !*((_QWORD *)this + 71) )
  {
    v32 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v32 == WPF::ProcessHeapImpl::Alloc )
      v33 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x28uLL);
    else
      v33 = (_DWORD *)v32(WPF::g_pProcessHeap, 40uLL);
    if ( v33 )
    {
      v33[2] = 1;
      *(_QWORD *)v33 = &CGlassColorizationResources::`vftable';
    }
    *((_QWORD *)this + 71) = v33;
    if ( !v33 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x762u);
      return 2147942414LL;
    }
  }
  if ( !*((_QWORD *)this + 72) )
  {
    v34 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v34 == WPF::ProcessHeapImpl::Alloc )
      v35 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x28uLL);
    else
      v35 = (_DWORD *)v34(WPF::g_pProcessHeap, 40uLL);
    if ( v35 )
    {
      v35[2] = 1;
      *(_QWORD *)v35 = &CGlassColorizationResources::`vftable';
    }
    *((_QWORD *)this + 72) = v35;
    if ( !v35 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x767u);
      return 2147942414LL;
    }
  }
  v7 = *((_QWORD *)this + 90);
  if ( (*(_BYTE *)(v7 + 596) & 0x40) != 0 )
    v2 |= 0x10u;
  if ( (v2 & 1) == 0
    && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 480)
    && !(unsigned int)IsWindowArranged(*(_QWORD *)(v7 + 40), v4, v5, v6)
    && (*((_BYTE *)this + 584) & 0x20) == 0 )
  {
    v8 = (_DWORD *)*((_QWORD *)this + 90);
    if ( v8[20] || v8[22] || v8[21] || v8[23] )
      v2 |= 8u;
  }
  v9 = v2;
  v10 = (float *)*((_QWORD *)this + 71);
  v11 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) == 0;
  v12 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 452);
  v39 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 119);
  v13 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 468);
  v14 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 104);
  v37 = v12;
  v36 = v14;
  v38 = v13;
  if ( !v11 )
    v9 = v2 | 4;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 480) )
    v9 = (unsigned int)v9 | 0x20;
  CGlassColorizationParameters::AdjustWindowColorization(&v37, &v36, v5, v9);
  v15 = (float)BYTE1(v37);
  v16 = (float)(unsigned __int8)v37;
  v17 = (float)((float)((float)BYTE2(v37) / 255.0) * 255.0) + 0.5;
  v10[7] = (float)BYTE3(v37) / 255.0;
  v10[4] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(floorf_0(v17), 255.0)] / 255.0;
  v10[5] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(
                                                          floorf_0((float)((float)(v15 / 255.0) * 255.0) + 0.5),
                                                          255.0)]
         / 255.0;
  v19 = floorf_0((float)((float)(v16 / 255.0) * 255.0) + 0.5);
  v20 = (float)SDWORD2(v37) / 100.0;
  v10[6] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(v19, 255.0)] / 255.0;
  v10[8] = v20;
  v21 = v2 & 0xFFFFFFE7 | 8;
  v11 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) == 0;
  v22 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 452);
  v23 = (float *)*((_QWORD *)this + 72);
  v24 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 468);
  v39 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 119);
  v25 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 104);
  v37 = v22;
  v36 = v25;
  v38 = v24;
  if ( !v11 )
    v21 |= 4u;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 480) )
    v21 |= 0x20u;
  CGlassColorizationParameters::AdjustWindowColorization(&v37, &v36, v18, v21);
  v26 = (float)BYTE1(v37);
  v27 = (float)(unsigned __int8)v37;
  v28 = (float)((float)((float)BYTE2(v37) / 255.0) * 255.0) + 0.5;
  v23[7] = (float)BYTE3(v37) / 255.0;
  v23[4] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(floorf_0(v28), 255.0)] / 255.0;
  v23[5] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(
                                                          floorf_0((float)((float)(v26 / 255.0) * 255.0) + 0.5),
                                                          255.0)]
         / 255.0;
  v29 = floorf_0((float)((float)(v27 / 255.0) * 255.0) + 0.5);
  v30 = (float)SDWORD2(v37) / 100.0;
  v23[6] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(v29, 255.0)] / 255.0;
  v23[8] = v30;
  return 0LL;
}
