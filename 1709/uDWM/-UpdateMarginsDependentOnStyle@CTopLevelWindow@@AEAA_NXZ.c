/*
 * XREFs of ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001B5D0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A860 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z @ 0x18000985C (-GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x1800098D4 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x18000AE44 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z @ 0x1800308B0 (-SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x180045BAC (IsOpenThemeDataPresent.c)
 *     ceil_0 @ 0x180046730 (ceil_0.c)
 *     floor_0 @ 0x180046742 (floor_0.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x180074D90 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

_BOOL8 __fastcall CTopLevelWindow::UpdateMarginsDependentOnStyle(CTopLevelWindow *this)
{
  __int64 v1; // rbx
  int v3; // esi
  __int64 v4; // r14
  __int64 v5; // r12
  char v6; // r15
  LONG bottom; // ecx
  LONG right; // r9d
  LONG top; // r8d
  LONG left; // edx
  bool v11; // bl
  bool v12; // bl
  const struct _MARGINS *v13; // r11
  __int64 v15; // rdx
  LONG SystemMetricsForDpi; // esi
  CDesktopManager *v17; // r13
  double v18; // xmm0_8
  double v19; // xmm0_8
  int v20; // r15d
  double v21; // xmm0_8
  double v22; // xmm0_8
  int v23; // edx
  int v24; // esi
  int v25; // eax
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  int v29; // ecx
  struct CWindowData *v30; // rdx
  CProjectionBorderVisual *v31; // rcx
  CAtlasedRectsVisual *v32; // rcx
  char v33; // al
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  struct tagRECT *v37; // r11
  int v38; // r10d
  int v39; // r9d
  int v40; // edx
  int v41; // r8d
  LONG v42; // ecx
  struct tagRECT v43; // [rsp+38h] [rbp-29h]
  struct tagRECT v44; // [rsp+48h] [rbp-19h] BYREF
  struct tagRECT v45; // [rsp+58h] [rbp-9h] BYREF

  v1 = *((_QWORD *)this + 90);
  v3 = *((_DWORD *)this + 146);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  *(_QWORD *)&v45.left = 0LL;
  *(_QWORD *)&v45.right = 0LL;
  if ( (unsigned __int8)IsOpenThemeDataPresent()
    && (v3 & 6) != 0
    && *(_DWORD *)(v1 + 64) >= CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth
    && *(_DWORD *)(v1 + 68) >= dword_1800BEE9C
    && *(_DWORD *)(v1 + 72) >= dword_1800BEEA0
    && *(_DWORD *)(v1 + 76) >= dword_1800BEEA4
    && (*(_DWORD *)(v1 + 104) & 0x800000) == 0
    && (int)GetSystemMetricsForDpi(92LL, *(unsigned int *)(v1 + 332)) > 0 )
  {
    *(_QWORD *)&v44.top = 0LL;
    v44.bottom = 0;
    if ( (*(_BYTE *)(v1 + 102) & 0xC0) == 0xC0 )
    {
      v15 = *(unsigned int *)(v1 + 332);
      if ( *(char *)(v1 + 104) < 0 )
        SystemMetricsForDpi = GetSystemMetricsForDpi(51LL, v15);
      else
        SystemMetricsForDpi = GetSystemMetricsForDpi(4LL, v15);
    }
    else
    {
      SystemMetricsForDpi = v44.right;
    }
    v17 = CDesktopManager::s_pDesktopManagerInstance;
    v18 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 55);
    if ( v18 < 0.0 )
      v19 = ceil_0(v18 - 0.5);
    else
      v19 = floor_0(v18 + 0.5);
    v20 = (int)v19;
    v21 = *((double *)v17 + 56);
    if ( v21 < 0.0 )
      v22 = ceil_0(v21 - 0.5);
    else
      v22 = floor_0(v21 + 0.5);
    v23 = *(_DWORD *)(v1 + 64);
    v24 = v20 + SystemMetricsForDpi;
    v25 = (int)v22;
    if ( v23 <= (int)v22 )
      v26 = (int)v22;
    else
      v26 = *(_DWORD *)(v1 + 64);
    v27 = *(_DWORD *)(v1 + 68);
    left = v23 - v26;
    if ( v27 > v25 )
      v25 = *(_DWORD *)(v1 + 68);
    v28 = *(_DWORD *)(v1 + 72);
    top = v27 - v25;
    if ( v28 > v24 )
      v24 = *(_DWORD *)(v1 + 72);
    v29 = *(_DWORD *)(v1 + 76);
    right = v28 - v24;
    if ( v29 > v20 )
      v20 = *(_DWORD *)(v1 + 76);
    bottom = v29 - v20;
    v6 = 0;
  }
  else
  {
    bottom = v45.bottom;
    right = v45.right;
    top = v45.top;
    left = v45.left;
  }
  v11 = SetMargin(
          (struct _MARGINS *)((char *)this + 620),
          left,
          top,
          right,
          bottom,
          (const struct _MARGINS *)((char *)this + 604));
  if ( (*((_DWORD *)this + 146) & 0x200020) != 0 )
  {
    v34 = *((_QWORD *)this + 90);
    v45 = *(struct tagRECT *)(v34 + 48);
    v35 = *(_DWORD *)(v34 + 196) - *(_DWORD *)(v34 + 188);
    if ( v35 < 0 )
      v35 = 0;
    v45.right = v45.left + (int)((double)v35 * *(double *)(v34 + 304));
    v36 = *(_DWORD *)(v34 + 200) - *(_DWORD *)(v34 + 192);
    if ( v36 < 0 )
      v36 = 0;
    v45.bottom = v45.top + (int)((double)v36 * *(double *)(v34 + 312));
    if ( !CTopLevelWindow::GetMonitorRect((CTopLevelWindow *)(unsigned int)v45.bottom, &v45, &v44) )
      v44 = v45;
    v37 = (struct tagRECT *)*((_QWORD *)this + 90);
    v38 = v44.left - v45.left;
    if ( v44.left - v45.left < 0 )
    {
      v38 = 0;
      v43.left = 0;
    }
    else
    {
      v43.left = v44.left - v45.left;
    }
    v39 = v45.right - v44.right;
    if ( v45.right - v44.right < 0 )
    {
      v39 = 0;
      v43.top = 0;
    }
    else
    {
      v43.top = v45.right - v44.right;
    }
    v40 = v44.top - v45.top;
    if ( v44.top - v45.top < 0 )
      v40 = 0;
    v41 = v45.bottom - v44.bottom;
    v43.right = v40;
    if ( v45.bottom - v44.bottom < 0 )
    {
      v41 = 0;
      v43.bottom = 0;
    }
    else
    {
      v43.bottom = v45.bottom - v44.bottom;
    }
    v42 = v37[6].left;
    if ( v38 > v42 - *((_DWORD *)this + 155) )
      v43.left = 0;
    if ( v39 > v42 - *((_DWORD *)this + 156) )
      v43.top = 0;
    if ( v40 > v42 - *((_DWORD *)this + 157) )
      v43.right = 0;
    if ( v41 > v42 - *((_DWORD *)this + 158) )
      v43.bottom = 0;
    if ( (*((_DWORD *)this + 146) & 0x200020) != 0 )
    {
      v6 = 1;
      v44 = v43;
      v5 = *(_QWORD *)&v43.right;
      v4 = *(_QWORD *)&v43.left;
      v37[18] = v43;
    }
  }
  v12 = SetMargin((struct _MARGINS *)((char *)this + 636), v4, SHIDWORD(v4), v5, SHIDWORD(v5), 0LL) || v11;
  if ( v6 || (*((_BYTE *)this + 240) & 8) != 0 )
  {
    v32 = (CAtlasedRectsVisual *)*((_QWORD *)this + 34);
    v33 = (8 * v6) | *((_BYTE *)this + 240) & 0xF7;
    *((_BYTE *)this + 240) = v33;
    if ( (v33 & 8) == 0 )
      v13 = 0LL;
    CAtlasedRectsVisual::SetClipMargins(v32, v13);
    CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
  }
  if ( v12 )
  {
    v30 = (struct CWindowData *)*((_QWORD *)this + 90);
    v31 = (CProjectionBorderVisual *)*((_QWORD *)v30 + 52);
    if ( v31 )
      CProjectionBorderVisual::UpdateRectFromWindow(v31, v30);
  }
  return v12;
}
