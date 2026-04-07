/*
 * XREFs of ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001E820
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18001BD78 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001BE20 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800210D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180032750 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x1800494F0 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     floorf_0 @ 0x18004B348 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateColorizationColor(CTopLevelWindow *this)
{
  int v1; // r14d
  __int64 v3; // rax
  int v4; // edi
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _DWORD *v8; // rax
  __int64 v9; // r9
  float *v10; // rdi
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
  int v36; // [rsp+30h] [rbp-39h] BYREF
  __int128 v37; // [rsp+38h] [rbp-31h] BYREF
  __int64 v38; // [rsp+48h] [rbp-21h]
  int v39; // [rsp+50h] [rbp-19h]

  v1 = *((_DWORD *)this + 146);
  v3 = *((_QWORD *)this + 90);
  if ( (v1 & 0x40) != 0 || (*(_BYTE *)(v3 + 595) & 0x10) != 0 )
    v4 = 1;
  else
    v4 = 2;
  if ( *(_DWORD *)(v3 + 80) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 84) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 88) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 92) == 0x7FFFFFFF )
  {
    v4 |= 0x40u;
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x798u);
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x79Du);
      return 2147942414LL;
    }
  }
  v6 = *((_QWORD *)this + 90);
  v7 = v4 | 0x10;
  if ( (*(_BYTE *)(v6 + 596) & 0x20) == 0 )
    v7 = v4;
  if ( (v7 & 1) == 0
    && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 520)
    && !(unsigned int)IsWindowArranged(*(_QWORD *)(v6 + 40))
    && (*((_BYTE *)this + 584) & 0x20) == 0 )
  {
    v8 = (_DWORD *)*((_QWORD *)this + 90);
    if ( v8[20] || v8[22] || v8[21] || v8[23] )
      v7 |= 8u;
  }
  v9 = v7;
  v10 = (float *)*((_QWORD *)this + 71);
  v11 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 25) == 0;
  v12 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 492);
  v39 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 129);
  v13 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 508);
  v14 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 114);
  v37 = v12;
  v36 = v14;
  v38 = v13;
  if ( !v11 )
    v9 = v7 | 4;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 520) )
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
  v21 = v7 & 0xFFFFFFE7 | 8;
  v11 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 25) == 0;
  v22 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 492);
  v23 = (float *)*((_QWORD *)this + 72);
  v24 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 508);
  v39 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 129);
  v25 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 114);
  v37 = v22;
  v36 = v25;
  v38 = v24;
  if ( !v11 )
    v21 |= 4u;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 520) )
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
