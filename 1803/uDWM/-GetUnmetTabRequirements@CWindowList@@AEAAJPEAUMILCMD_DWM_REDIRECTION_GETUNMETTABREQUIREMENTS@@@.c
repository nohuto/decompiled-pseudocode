/*
 * XREFs of ?GetUnmetTabRequirements@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETUNMETTABREQUIREMENTS@@@Z @ 0x180084BF8
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002AC30 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18002BA44 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x1800395B8 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180085D84 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 */

__int64 __fastcall CWindowList::GetUnmetTabRequirements(
        CWindowList *this,
        struct MILCMD_DWM_REDIRECTION_GETUNMETTABREQUIREMENTS *a2)
{
  HWND v2; // rdi
  struct MILCMD_DWM_REDIRECTION_GETUNMETTABREQUIREMENTS *v3; // r15
  int v5; // ebx
  int v6; // esi
  LONG WindowLongW; // r14d
  char v8; // r13
  struct CWindowData *WindowDataByHwnd; // rax
  const struct _MARGINS *v10; // rbp
  int SystemMetricsForDpi; // r12d
  int v12; // eax
  __int64 cxRightWidth; // rdx
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int WindowRgnBox; // eax
  _DWORD v19[2]; // [rsp+20h] [rbp-78h] BYREF
  int v20; // [rsp+28h] [rbp-70h] BYREF
  _DWORD *v21; // [rsp+30h] [rbp-68h]
  int v22; // [rsp+38h] [rbp-60h]
  struct tagRECT rc; // [rsp+40h] [rbp-58h] BYREF

  v2 = *(HWND *)((char *)a2 + 4);
  v3 = a2;
  LOBYTE(a2) = 3;
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(this, a2);
  if ( v2 )
  {
    v6 = 1;
    WindowLongW = GetWindowLongW(v2, -16);
    v8 = GetWindowLongW(v2, -20);
    if ( (WindowLongW & 0x20000000) == 0 )
    {
      *(_QWORD *)&rc.left = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, v2);
      v10 = (const struct _MARGINS *)WindowDataByHwnd;
      if ( WindowDataByHwnd )
      {
        SystemMetricsForDpi = GetSystemMetricsForDpi(92LL, *((unsigned int *)WindowDataByHwnd + 81));
        GetSystemMetricsForDpi(32LL, (unsigned int)v10[20].cxRightWidth);
        v12 = GetSystemMetricsForDpi(33LL, (unsigned int)v10[20].cxRightWidth);
        cxRightWidth = (unsigned int)v10[20].cxRightWidth;
        v19[1] = v12;
        GetSystemMetricsForDpi(4LL, cxRightWidth);
        if ( !AreAllMarginsZero(v10 + 5)
          || v10[4].cyTopHeight != v15
          || v10[4].cxLeftWidth != v14
          || v10[4].cxRightWidth != v14
          || v10[4].cyBottomHeight != v16 + SystemMetricsForDpi )
        {
          v6 = 33;
        }
      }
      CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)&rc);
    }
    if ( (WindowLongW & 0xCF0000) != 0xCF0000 || (WindowLongW & 0xC0000000) != 0 || (v8 & 0x88) != 0 )
      v6 |= 4u;
    if ( GetParent(v2) )
      v6 |= 2u;
    WindowRgnBox = GetWindowRgnBox(v2, &rc);
    v20 = 2;
    v22 = 4;
    v5 = v6 | 8;
    v21 = v19;
    if ( !WindowRgnBox )
      v5 = v6;
    v19[0] = 0;
    if ( (unsigned int)GetWindowCompositionAttribute(v2, &v20) && v19[0] == 1 )
      v5 |= 0x10u;
    if ( GetPropW(v2, L"TabbingDisabled") )
      v5 |= 0x40u;
  }
  else
  {
    v5 = 1;
  }
  *((_DWORD *)v3 + 3) = v5;
  return 0LL;
}
