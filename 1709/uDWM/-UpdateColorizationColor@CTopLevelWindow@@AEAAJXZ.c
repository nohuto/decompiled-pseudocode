/*
 * XREFs of ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001E690
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A860 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18001BF28 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001BFD0 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001F690 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020DE0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x180045BAC (IsOpenThemeDataPresent.c)
 *     floorf_0 @ 0x180046748 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateColorizationColor(CTopLevelWindow *this)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _DWORD *v9; // rax
  __int64 v10; // r9
  float *v11; // rdi
  bool v12; // zf
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  int v15; // eax
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm0_4
  __int64 v19; // r8
  float v20; // xmm0_4
  float v21; // xmm1_4
  unsigned int v22; // ebx
  __int128 v23; // xmm0
  float *v24; // rdi
  __int64 v25; // xmm1_8
  int v26; // eax
  float v27; // xmm6_4
  float v28; // xmm7_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  void *(__fastcall *v33)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v34; // rax
  void *(__fastcall *v35)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v36; // rax
  int v37; // [rsp+30h] [rbp-39h] BYREF
  __int128 v38; // [rsp+38h] [rbp-31h] BYREF
  __int64 v39; // [rsp+48h] [rbp-21h]
  int v40; // [rsp+50h] [rbp-19h]

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
    v33 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v33 == WPF::ProcessHeapImpl::Alloc )
      v34 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x28uLL);
    else
      v34 = (_DWORD *)v33(WPF::g_pProcessHeap, 40uLL);
    if ( v34 )
    {
      v34[2] = 1;
      *(_QWORD *)v34 = &CGlassColorizationResources::`vftable';
    }
    *((_QWORD *)this + 71) = v34;
    if ( !v34 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x75Bu);
      return 2147942414LL;
    }
  }
  if ( !*((_QWORD *)this + 72) )
  {
    v35 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v35 == WPF::ProcessHeapImpl::Alloc )
      v36 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x28uLL);
    else
      v36 = (_DWORD *)v35(WPF::g_pProcessHeap, 40uLL);
    if ( v36 )
    {
      v36[2] = 1;
      *(_QWORD *)v36 = &CGlassColorizationResources::`vftable';
    }
    *((_QWORD *)this + 72) = v36;
    if ( !v36 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x760u);
      return 2147942414LL;
    }
  }
  v7 = *((_QWORD *)this + 90);
  v8 = v2 | 0x10;
  if ( (*(_BYTE *)(v7 + 596) & 0x40) == 0 )
    v8 = v2;
  if ( (v8 & 1) == 0
    && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 528)
    && !(unsigned int)IsWindowArranged(*(_QWORD *)(v7 + 40), v4, v5, v6)
    && (*((_BYTE *)this + 584) & 0x20) == 0 )
  {
    v9 = (_DWORD *)*((_QWORD *)this + 90);
    if ( v9[20] || v9[22] || v9[21] || v9[23] )
      v8 |= 8u;
  }
  v10 = v8;
  v11 = (float *)*((_QWORD *)this + 71);
  v12 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) == 0;
  v13 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 500);
  v40 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 131);
  v14 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 516);
  v15 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 116);
  v38 = v13;
  v37 = v15;
  v39 = v14;
  if ( !v12 )
    v10 = v8 | 4;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 528) )
    v10 = (unsigned int)v10 | 0x20;
  CGlassColorizationParameters::AdjustWindowColorization(&v38, &v37, v5, v10);
  v16 = (float)BYTE1(v38);
  v17 = (float)(unsigned __int8)v38;
  v18 = (float)((float)((float)BYTE2(v38) / 255.0) * 255.0) + 0.5;
  v11[7] = (float)BYTE3(v38) / 255.0;
  v11[4] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(floorf_0(v18), 255.0)] / 255.0;
  v11[5] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(
                                                          floorf_0((float)((float)(v16 / 255.0) * 255.0) + 0.5),
                                                          255.0)]
         / 255.0;
  v20 = floorf_0((float)((float)(v17 / 255.0) * 255.0) + 0.5);
  v21 = (float)SDWORD2(v38) / 100.0;
  v11[6] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(v20, 255.0)] / 255.0;
  v11[8] = v21;
  v22 = v8 & 0xFFFFFFE7 | 8;
  v12 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) == 0;
  v23 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 500);
  v24 = (float *)*((_QWORD *)this + 72);
  v25 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 516);
  v40 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 131);
  v26 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 116);
  v38 = v23;
  v37 = v26;
  v39 = v25;
  if ( !v12 )
    v22 |= 4u;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 528) )
    v22 |= 0x20u;
  CGlassColorizationParameters::AdjustWindowColorization(&v38, &v37, v19, v22);
  v27 = (float)BYTE1(v38);
  v28 = (float)(unsigned __int8)v38;
  v29 = (float)((float)((float)BYTE2(v38) / 255.0) * 255.0) + 0.5;
  v24[7] = (float)BYTE3(v38) / 255.0;
  v24[4] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(floorf_0(v29), 255.0)] / 255.0;
  v24[5] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(
                                                          floorf_0((float)((float)(v27 / 255.0) * 255.0) + 0.5),
                                                          255.0)]
         / 255.0;
  v30 = floorf_0((float)((float)(v28 / 255.0) * 255.0) + 0.5);
  v31 = (float)SDWORD2(v38) / 100.0;
  v24[6] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(v30, 255.0)] / 255.0;
  v24[8] = v31;
  return 0LL;
}
