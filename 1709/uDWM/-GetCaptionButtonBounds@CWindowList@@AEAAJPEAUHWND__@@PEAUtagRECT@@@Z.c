/*
 * XREFs of ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18007B300
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180038564 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800276A0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z @ 0x18002F8F0 (-GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180035770 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     floor_0 @ 0x180046742 (floor_0.c)
 */

__int64 __fastcall CWindowList::GetCaptionButtonBounds(CWindowList *this, HWND a2, struct tagRECT *a3)
{
  int v4; // edi
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // ebx
  struct CWindowData *v7; // rsi
  int CurrentStyle; // ebp
  int v9; // edx
  int v10; // r14d
  int v11; // r12d
  __int64 v12; // rcx
  int SystemMetricsForDpi; // eax
  int v14; // r15d
  float v15; // xmm0_4
  float v16; // xmm0_4
  int v17; // edx
  LONG v18; // edx
  int v19; // ecx
  LONG v20; // ecx
  struct CWindowData *v22; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v22 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v22);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    v7 = v22;
    if ( v22 && (CurrentStyle = CTopLevelWindow::GetCurrentStyle(v22), CTopLevelWindow::HasRenderedBorder(CurrentStyle)) )
    {
      v9 = *((_DWORD *)v7 + 24);
      v10 = 0;
      v11 = v9 + 1;
      if ( (CurrentStyle & 0x20) == 0 )
        v11 = v9 - 1;
      v12 = 53LL;
      if ( (CurrentStyle & 2) == 0 )
        v12 = 31LL;
      SystemMetricsForDpi = GetSystemMetricsForDpi(v12, *((unsigned int *)v7 + 83));
      v14 = SystemMetricsForDpi;
      if ( (CurrentStyle & 0x400) != 0 )
        v10 = (int)floor_0((float)((float)SystemMetricsForDpi * 2.2272727) + 0.5);
      if ( (CurrentStyle & 0x200) != 0 )
        v10 += (int)floor_0((float)((float)v14 * 2.1818182) + 0.5);
      if ( (CurrentStyle & 0x100) != 0 )
      {
        v15 = (float)v14;
        if ( (CurrentStyle & 0x800) != 0 )
          v16 = v15 * 2.1818182;
        else
          v16 = v15 * 2.2272727;
        v10 += (int)floor_0(v16 + 0.5);
      }
      if ( (CurrentStyle & 0x800) != 0 )
        v10 += (int)floor_0((float)((float)v14 * 2.2272727) + 0.5);
      a3->top = 0;
      v17 = 0;
      a3->bottom = v14 + *((_DWORD *)v7 + 24);
      if ( *((_DWORD *)v7 + 49) - *((_DWORD *)v7 + 47) >= 0 )
        v17 = *((_DWORD *)v7 + 49) - *((_DWORD *)v7 + 47);
      v18 = v17 - v11;
      a3->right = v18;
      a3->left = v18 - v10;
      if ( (CurrentStyle & 0x20000) != 0 && (*((_DWORD *)v7 + 26) & 0x400000) == 0 )
      {
        v19 = 0;
        if ( *((_DWORD *)v7 + 49) - *((_DWORD *)v7 + 47) >= 0 )
          v19 = *((_DWORD *)v7 + 49) - *((_DWORD *)v7 + 47);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0xF52u);
  }
  return v6;
}
