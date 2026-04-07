/*
 * XREFs of ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001B440
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z @ 0x180019564 (-GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x1800199A8 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x180023B44 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z @ 0x180032D10 (-SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x1800494F0 (IsOpenThemeDataPresent.c)
 *     ceil_0 @ 0x18004B330 (ceil_0.c)
 *     floor_0 @ 0x18004B342 (floor_0.c)
 */

_BOOL8 __fastcall CTopLevelWindow::UpdateMarginsDependentOnStyle(CTopLevelWindow *this)
{
  int v1; // esi
  __int64 v2; // rbx
  char v4; // r13
  __int64 v5; // r14
  __int64 v6; // r15
  LONG bottom; // ecx
  LONG right; // r9d
  LONG top; // r8d
  LONG left; // edx
  bool v11; // bl
  const struct _MARGINS *v12; // rsi
  bool v13; // bl
  __int64 v15; // rdx
  LONG SystemMetricsForDpi; // r12d
  double v17; // xmm6_8
  double v18; // xmm0_8
  int v19; // esi
  double v20; // xmm0_8
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // r8d
  int v25; // r8d
  int v26; // r9d
  int v27; // ecx
  CAtlasedRectsVisual *v28; // rcx
  char v29; // al
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  __int64 v33; // r11
  int v34; // r9d
  int v35; // r10d
  int v36; // edx
  int v37; // r8d
  int v38; // ecx
  struct tagRECT v39; // [rsp+38h] [rbp-39h]
  struct tagRECT v40; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT v41; // [rsp+58h] [rbp-19h] BYREF

  v1 = *((_DWORD *)this + 146);
  v2 = *((_QWORD *)this + 90);
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  *(_QWORD *)&v41.left = 0LL;
  *(_QWORD *)&v41.right = 0LL;
  if ( (unsigned __int8)IsOpenThemeDataPresent()
    && (v1 & 6) != 0
    && *(_DWORD *)(v2 + 64) >= CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth
    && *(_DWORD *)(v2 + 68) >= dword_1800C9E2C
    && *(_DWORD *)(v2 + 72) >= dword_1800C9E30
    && *(_DWORD *)(v2 + 76) >= dword_1800C9E34
    && (*(_DWORD *)(v2 + 104) & 0x800000) == 0
    && (int)GetSystemMetricsForDpi(92LL, *(unsigned int *)(v2 + 324)) > 0 )
  {
    *(_QWORD *)&v40.left = 0LL;
    *(_QWORD *)&v40.right = 0LL;
    if ( (*(_BYTE *)(v2 + 102) & 0xC0) == 0xC0 )
    {
      v15 = *(unsigned int *)(v2 + 324);
      if ( *(char *)(v2 + 104) < 0 )
        SystemMetricsForDpi = GetSystemMetricsForDpi(51LL, v15);
      else
        SystemMetricsForDpi = GetSystemMetricsForDpi(4LL, v15);
    }
    else
    {
      SystemMetricsForDpi = v40.right;
    }
    v17 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 55);
    if ( v17 < 0.0 )
      v18 = ceil_0(v17 - 0.5);
    else
      v18 = floor_0(v17 + 0.5);
    v19 = (int)v18;
    if ( v17 < 0.0 )
      v20 = ceil_0(v17 - 0.5);
    else
      v20 = floor_0(v17 + 0.5);
    v21 = *(_DWORD *)(v2 + 64);
    v22 = v19 + SystemMetricsForDpi;
    v23 = (int)v20;
    if ( v21 <= (int)v20 )
      v24 = (int)v20;
    else
      v24 = *(_DWORD *)(v2 + 64);
    left = v21 - v24;
    v25 = *(_DWORD *)(v2 + 68);
    if ( v25 > v23 )
      v23 = *(_DWORD *)(v2 + 68);
    v26 = *(_DWORD *)(v2 + 72);
    top = v25 - v23;
    if ( v26 > v22 )
      v22 = *(_DWORD *)(v2 + 72);
    right = v26 - v22;
    v27 = *(_DWORD *)(v2 + 76);
    if ( v27 > v19 )
      v19 = *(_DWORD *)(v2 + 76);
    bottom = v27 - v19;
  }
  else
  {
    bottom = v41.bottom;
    right = v41.right;
    top = v41.top;
    left = v41.left;
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
    v30 = *((_QWORD *)this + 90);
    v41 = *(struct tagRECT *)(v30 + 48);
    v31 = *(_DWORD *)(v30 + 188) - *(_DWORD *)(v30 + 180);
    if ( v31 < 0 )
      v31 = 0;
    v41.right = v41.left + (int)((double)v31 * *(double *)(v30 + 296));
    v32 = *(_DWORD *)(v30 + 192) - *(_DWORD *)(v30 + 184);
    if ( v32 < 0 )
      v32 = 0;
    v41.bottom = v41.top + (int)((double)v32 * *(double *)(v30 + 296));
    if ( !CTopLevelWindow::GetMonitorRect((CTopLevelWindow *)(unsigned int)v41.bottom, &v41, &v40) )
      v40 = v41;
    v33 = *((_QWORD *)this + 90);
    v34 = v40.left - v41.left;
    if ( v40.left - v41.left < 0 )
    {
      v34 = 0;
      v39.left = 0;
    }
    else
    {
      v39.left = v40.left - v41.left;
    }
    v35 = v41.right - v40.right;
    if ( v41.right - v40.right < 0 )
    {
      v35 = 0;
      v39.top = 0;
    }
    else
    {
      v39.top = v41.right - v40.right;
    }
    v36 = v40.top - v41.top;
    if ( v40.top - v41.top < 0 )
      v36 = 0;
    v37 = v41.bottom - v40.bottom;
    v39.right = v36;
    if ( v41.bottom - v40.bottom < 0 )
    {
      v37 = 0;
      v39.bottom = 0;
    }
    else
    {
      v39.bottom = v41.bottom - v40.bottom;
    }
    v38 = *(_DWORD *)(v33 + 96);
    if ( v34 > v38 - *((_DWORD *)this + 155) )
      v39.left = 0;
    if ( v35 > v38 - *((_DWORD *)this + 156) )
      v39.top = 0;
    if ( v36 > v38 - *((_DWORD *)this + 157) )
      v39.right = 0;
    if ( v37 > v38 - *((_DWORD *)this + 158) )
      v39.bottom = 0;
    if ( (*((_DWORD *)this + 146) & 0x200020) != 0 )
    {
      v4 = 1;
      v40 = v39;
      v6 = *(_QWORD *)&v39.right;
      v5 = *(_QWORD *)&v39.left;
      *(struct tagRECT *)(v33 + 280) = v39;
    }
  }
  v12 = (const struct _MARGINS *)((char *)this + 636);
  v13 = SetMargin((struct _MARGINS *)((char *)this + 636), v5, SHIDWORD(v5), v6, SHIDWORD(v6), 0LL) || v11;
  if ( v4 || (*((_BYTE *)this + 240) & 8) != 0 )
  {
    v28 = (CAtlasedRectsVisual *)*((_QWORD *)this + 34);
    v29 = (8 * v4) | *((_BYTE *)this + 240) & 0xF7;
    *((_BYTE *)this + 240) = v29;
    if ( (v29 & 8) == 0 )
      v12 = 0LL;
    CAtlasedRectsVisual::SetClipMargins(v28, v12);
    CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
  }
  return v13;
}
