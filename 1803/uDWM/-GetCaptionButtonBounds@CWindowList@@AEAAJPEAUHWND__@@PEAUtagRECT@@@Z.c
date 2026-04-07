/*
 * XREFs of ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180084680
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18003B144 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180004688 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x180019220 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180027044 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18004B342 (floor_0.c)
 */

__int64 __fastcall CWindowList::GetCaptionButtonBounds(CWindowList *this, HWND a2, struct tagRECT *a3)
{
  int v4; // ebx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // edi
  struct CWindowData *v7; // rsi
  int CurrentStyle; // ebp
  int v9; // edx
  int v10; // r14d
  int v11; // r12d
  __int64 v12; // rcx
  int SystemMetricsForDpi; // r15d
  float v14; // xmm7_4
  float v15; // xmm6_4
  double v16; // xmm0_8
  int v17; // edx
  LONG v18; // edx
  int v19; // ecx
  LONG v20; // ecx
  struct CWindowData *v22; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  v22 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v22);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    v7 = v22;
    if ( v22
      && (CurrentStyle = CTopLevelWindow::GetCurrentStyle((__int64)v22), CTopLevelWindow::HasRenderedBorder(CurrentStyle)) )
    {
      v9 = *((_DWORD *)v7 + 24);
      v10 = 0;
      v11 = v9 + 1;
      if ( (CurrentStyle & 0x20) == 0 )
        v11 = v9 - 1;
      v12 = 53LL;
      if ( (CurrentStyle & 2) == 0 )
        v12 = 31LL;
      SystemMetricsForDpi = GetSystemMetricsForDpi(v12, *((unsigned int *)v7 + 81));
      v14 = (float)SystemMetricsForDpi;
      if ( (CurrentStyle & 0x400) != 0 )
        v10 = (int)floor_0((float)(v14 * 2.2272727) + 0.5);
      v15 = v14 * 2.1818182;
      if ( (CurrentStyle & 0x200) != 0 )
        v10 += (int)floor_0(v15 + 0.5);
      if ( (CurrentStyle & 0x100) != 0 )
      {
        if ( (CurrentStyle & 0x800) != 0 )
          v16 = v15;
        else
          v16 = (float)(v14 * 2.2272727);
        v10 += (int)floor_0(v16 + 0.5);
      }
      if ( (CurrentStyle & 0x800) != 0 )
        v10 += (int)floor_0((float)(v14 * 2.2272727) + 0.5);
      a3->top = 0;
      v17 = 0;
      a3->bottom = SystemMetricsForDpi + *((_DWORD *)v7 + 24);
      if ( *((_DWORD *)v7 + 47) - *((_DWORD *)v7 + 45) >= 0 )
        v17 = *((_DWORD *)v7 + 47) - *((_DWORD *)v7 + 45);
      v18 = v17 - v11;
      a3->right = v18;
      a3->left = v18 - v10;
      if ( (CurrentStyle & 0x20000) != 0 && (*((_DWORD *)v7 + 26) & 0x400000) == 0 )
      {
        v19 = 0;
        if ( *((_DWORD *)v7 + 47) - *((_DWORD *)v7 + 45) >= 0 )
          v19 = *((_DWORD *)v7 + 47) - *((_DWORD *)v7 + 45);
        v20 = v19 - v18;
        a3->left = v20;
        if ( v10 >= 0 )
          v4 = v10;
        a3->right = v20 + v4;
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x1054u);
  }
  return v6;
}
