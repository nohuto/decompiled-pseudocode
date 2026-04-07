/*
 * XREFs of ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x1800268E0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z @ 0x1800143D0 (-SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x18002115C (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z @ 0x18002497C (-GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x180024DB8 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetSystemMetrics@CWindowData@@QEBAHH@Z @ 0x180035A24 (-GetSystemMetrics@CWindowData@@QEBAHH@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004D268 (IsOpenThemeDataPresent.c)
 *     ceil_0 @ 0x18004DE60 (ceil_0.c)
 *     floor_0 @ 0x18004DE72 (floor_0.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18007F038 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
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
  unsigned int v14; // eax
  unsigned int DpiForSystem; // eax
  LONG SystemMetrics; // esi
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
  const struct _MARGINS *v32; // rdx
  CAtlasedRectsVisual *v33; // rcx
  char v34; // al
  __int64 v35; // rcx
  int v36; // eax
  int v37; // eax
  struct tagRECT *v38; // r11
  int v39; // r8d
  int v40; // r10d
  int v41; // edx
  int v42; // r9d
  LONG v43; // ecx
  struct tagRECT v44; // [rsp+38h] [rbp-29h]
  struct tagRECT v45; // [rsp+48h] [rbp-19h] BYREF
  struct tagRECT v46; // [rsp+58h] [rbp-9h] BYREF

  v1 = *((_QWORD *)this + 90);
  v3 = *((_DWORD *)this + 146);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  *(_QWORD *)&v46.left = 0LL;
  *(_QWORD *)&v46.right = 0LL;
  if ( (unsigned __int8)IsOpenThemeDataPresent()
    && (v3 & 6) != 0
    && *(_DWORD *)(v1 + 64) >= CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth
    && *(_DWORD *)(v1 + 68) >= dword_1800C0E2C
    && *(_DWORD *)(v1 + 72) >= dword_1800C0E30
    && *(_DWORD *)(v1 + 76) >= dword_1800C0E34
    && (*(_DWORD *)(v1 + 104) & 0x800000) == 0
    && (!*(_DWORD *)(v1 + 348) ? (v14 = GetDpiForSystem()) : (v14 = *(_DWORD *)(v1 + 328)),
        (int)GetSystemMetricsForDpi(92LL, v14) > 0) )
  {
    *(_QWORD *)&v45.top = 0LL;
    v45.bottom = 0;
    if ( (*(_BYTE *)(v1 + 102) & 0xC0) == 0xC0 )
    {
      if ( *(char *)(v1 + 104) < 0 )
      {
        SystemMetrics = CWindowData::GetSystemMetrics((CWindowData *)v1, 51);
      }
      else
      {
        if ( *(_DWORD *)(v1 + 348) )
          DpiForSystem = *(_DWORD *)(v1 + 328);
        else
          DpiForSystem = GetDpiForSystem();
        SystemMetrics = GetSystemMetricsForDpi(4LL, DpiForSystem);
      }
    }
    else
    {
      SystemMetrics = v45.right;
    }
    v17 = CDesktopManager::s_pDesktopManagerInstance;
    v18 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 49);
    if ( v18 < 0.0 )
      v19 = ceil_0(v18 - 0.5);
    else
      v19 = floor_0(v18 + 0.5);
    v20 = (int)v19;
    v21 = *((double *)v17 + 50);
    if ( v21 < 0.0 )
      v22 = ceil_0(v21 - 0.5);
    else
      v22 = floor_0(v21 + 0.5);
    v23 = *(_DWORD *)(v1 + 64);
    v24 = v20 + SystemMetrics;
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
    bottom = v46.bottom;
    right = v46.right;
    top = v46.top;
    left = v46.left;
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
    v35 = *((_QWORD *)this + 90);
    v46 = *(struct tagRECT *)(v35 + 48);
    v36 = *(_DWORD *)(v35 + 196) - *(_DWORD *)(v35 + 188);
    if ( v36 < 0 )
      v36 = 0;
    v46.right = v46.left + (int)((double)v36 * *(double *)(v35 + 304));
    v37 = *(_DWORD *)(v35 + 200) - *(_DWORD *)(v35 + 192);
    if ( v37 < 0 )
      v37 = 0;
    v46.bottom = v46.top + (int)((double)v37 * *(double *)(v35 + 312));
    if ( !CTopLevelWindow::GetMonitorRect((CTopLevelWindow *)(unsigned int)v46.bottom, &v46, &v45) )
      v45 = v46;
    v38 = (struct tagRECT *)*((_QWORD *)this + 90);
    v39 = v45.left - v46.left;
    if ( v45.left - v46.left < 0 )
    {
      v39 = 0;
      v44.left = 0;
    }
    else
    {
      v44.left = v45.left - v46.left;
    }
    v40 = v46.right - v45.right;
    if ( v46.right - v45.right < 0 )
    {
      v40 = 0;
      v44.top = 0;
    }
    else
    {
      v44.top = v46.right - v45.right;
    }
    v41 = v45.top - v46.top;
    if ( v45.top - v46.top < 0 )
      v41 = 0;
    v42 = v46.bottom - v45.bottom;
    v44.right = v41;
    if ( v46.bottom - v45.bottom < 0 )
    {
      v42 = 0;
      v44.bottom = 0;
    }
    else
    {
      v44.bottom = v46.bottom - v45.bottom;
    }
    v43 = v38[6].left;
    if ( v39 > v43 - *((_DWORD *)this + 155) )
      v44.left = 0;
    if ( v40 > v43 - *((_DWORD *)this + 156) )
      v44.top = 0;
    if ( v41 > v43 - *((_DWORD *)this + 157) )
      v44.right = 0;
    if ( v42 > v43 - *((_DWORD *)this + 158) )
      v44.bottom = 0;
    if ( (*((_DWORD *)this + 146) & 0x200020) != 0 )
    {
      v6 = 1;
      v45 = v44;
      v5 = *(_QWORD *)&v44.right;
      v4 = *(_QWORD *)&v44.left;
      v38[18] = v44;
    }
  }
  v12 = SetMargin((struct _MARGINS *)((char *)this + 636), v4, SHIDWORD(v4), v5, SHIDWORD(v5), 0LL) || v11;
  if ( v6 || (*((_BYTE *)this + 240) & 8) != 0 )
  {
    v32 = (const struct _MARGINS *)((char *)this + 636);
    v33 = (CAtlasedRectsVisual *)*((_QWORD *)this + 34);
    v34 = (8 * v6) | *((_BYTE *)this + 240) & 0xF7;
    *((_BYTE *)this + 240) = v34;
    if ( (v34 & 8) == 0 )
      v32 = 0LL;
    CAtlasedRectsVisual::SetClipMargins(v33, v32);
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
