/*
 * XREFs of ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x18003AE78
 * Callers:
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18003A67C (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18002EDF4 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18003E33C (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 */

char __fastcall CSecondaryWindowRepresentation::s_CalculateWindowMetrics(
        __int64 a1,
        __int16 a2,
        char a3,
        int *a4,
        struct _MARGINS *a5)
{
  __int64 v5; // r14
  int v6; // edi
  char v8; // bl
  HWND v10; // r13
  struct CWindowData *WindowDataByHwnd; // rax
  struct _RTL_GENERIC_TABLE *v12; // rcx
  _QWORD *v13; // rax
  HWND v14; // rax
  int v15; // eax
  int v16; // eax
  struct _MARGINS v17; // xmm0
  int v19; // ecx
  HMONITOR v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // ecx
  char v24; // [rsp+20h] [rbp-81h]
  struct _MARGINS v25; // [rsp+28h] [rbp-79h] BYREF
  _QWORD Buffer[2]; // [rsp+40h] [rbp-61h] BYREF
  __int128 v27; // [rsp+50h] [rbp-51h]
  __int128 v28; // [rsp+60h] [rbp-41h]
  __int64 v29; // [rsp+70h] [rbp-31h]
  char v30; // [rsp+78h] [rbp-29h]
  struct tagMONITORINFO mi; // [rsp+90h] [rbp-11h] BYREF

  v5 = *(_QWORD *)(a1 + 400);
  v6 = 0;
  v24 = a3;
  v8 = a2;
  if ( v5 )
  {
    if ( (a2 & 0x100) == 0 )
    {
      v10 = *(HWND *)(a1 + 40);
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                           v10);
      if ( WindowDataByHwnd )
      {
        v29 = -1LL;
        Buffer[1] = 0LL;
        v27 = 0LL;
        v12 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 51) + 8LL);
        Buffer[0] = *((_QWORD *)WindowDataByHwnd + 15);
        v30 = 0;
        v28 = 0LL;
        v13 = RtlLookupElementGenericTable(v12, Buffer);
        v14 = v13 ? (HWND)v13[6] : 0LL;
        if ( v10 == v14 )
        {
          v20 = MonitorFromWindow(0LL, 1u);
          mi.cbSize = 40;
          if ( GetMonitorInfoW(v20, &mi) )
          {
            v21 = mi.rcMonitor.right - mi.rcMonitor.left;
            if ( mi.rcMonitor.right - mi.rcMonitor.left < 0 )
              v21 = 0;
            v22 = HIDWORD(*(_QWORD *)&mi.rcMonitor.right);
            *a4 = v21;
            v23 = v22 - mi.rcMonitor.top;
            if ( v23 < 0 )
              v23 = 0;
            a4[1] = v23;
            goto LABEL_24;
          }
        }
      }
      a3 = v24;
    }
    v15 = 0;
    if ( *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 48) >= 0 )
      v15 = *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 48);
    *a4 = v15;
    v16 = 0;
    if ( *(_DWORD *)(a1 + 60) - *(_DWORD *)(a1 + 52) >= 0 )
      v16 = *(_DWORD *)(a1 + 60) - *(_DWORD *)(a1 + 52);
    a4[1] = v16;
    if ( (v8 & 4) == 0 )
    {
      if ( v8 >= 0 )
      {
        v25 = (struct _MARGINS)0LL;
        CTopLevelWindow::GetOutsideMargins((CTopLevelWindow *)v5, &v25);
        *a5 = v25;
        return 1;
      }
      v25 = *(struct _MARGINS *)(v5 + 620);
      v25.cxLeftWidth = _mm_cvtsi128_si32((__m128i)v25) - *(_DWORD *)(v5 + 652);
      v25.cxRightWidth -= *(_DWORD *)(v5 + 656);
      v25.cyTopHeight -= *(_DWORD *)(v5 + 660);
      v25.cyBottomHeight -= *(_DWORD *)(v5 + 664);
      v17 = v25;
LABEL_15:
      *a5 = v17;
      return 1;
    }
    if ( a3 )
    {
      v17 = *(struct _MARGINS *)(a1 + 64);
      goto LABEL_15;
    }
    v19 = 0;
    if ( *(_DWORD *)(a1 + 196) - *(_DWORD *)(a1 + 188) >= 0 )
      v19 = *(_DWORD *)(a1 + 196) - *(_DWORD *)(a1 + 188);
    *a4 = v19;
    if ( *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192) >= 0 )
      v6 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192);
    a4[1] = v6;
    *a4 = v19 - *(_DWORD *)(a1 + 256) - *(_DWORD *)(a1 + 252);
    a4[1] = v6 - *(_DWORD *)(a1 + 264) - *(_DWORD *)(a1 + 260);
LABEL_24:
    v17 = (struct _MARGINS)xmmword_1800AC2D0;
    goto LABEL_15;
  }
  return 0;
}
