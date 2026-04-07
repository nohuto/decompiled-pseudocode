/*
 * XREFs of ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180083810
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180083D50 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z @ 0x180014170 (-GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x1800164CC (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180034FE0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?GetSystemMetrics@CWindowData@@QEBAHH@Z @ 0x180035A24 (-GetSystemMetrics@CWindowData@@QEBAHH@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18004DE72 (floor_0.c)
 */

__int64 __fastcall CWindowList::GetCaptionButtonBounds(CWindowList *this, HWND a2, struct tagRECT *a3)
{
  int v4; // edi
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // ebx
  CWindowData *v7; // rsi
  int CurrentStyle; // ebp
  int v9; // edx
  int v10; // r14d
  int v11; // ecx
  int v12; // r12d
  unsigned int v13; // edx
  int SystemMetrics; // eax
  int v15; // r15d
  float v16; // xmm0_4
  float v17; // xmm0_4
  int v18; // r8d
  LONG v19; // r8d
  int v20; // ecx
  LONG v21; // ecx
  CWindowData *v23; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v23 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v23);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    v7 = v23;
    if ( v23 && (CurrentStyle = CTopLevelWindow::GetCurrentStyle(v23), CTopLevelWindow::HasRenderedBorder(CurrentStyle)) )
    {
      v9 = *((_DWORD *)v7 + 24);
      v10 = 0;
      v11 = v9 - 1;
      v12 = v9 + 1;
      v13 = 53;
      if ( (CurrentStyle & 0x20) == 0 )
        v12 = v11;
      if ( (CurrentStyle & 2) == 0 )
        v13 = 31;
      SystemMetrics = CWindowData::GetSystemMetrics(v7, v13);
      v15 = SystemMetrics;
      if ( (CurrentStyle & 0x400) != 0 )
        v10 = (int)floor_0((float)((float)SystemMetrics * 2.2272727) + 0.5);
      if ( (CurrentStyle & 0x200) != 0 )
        v10 += (int)floor_0((float)((float)v15 * 2.1818182) + 0.5);
      if ( (CurrentStyle & 0x100) != 0 )
      {
        v16 = (float)v15;
        if ( (CurrentStyle & 0x800) != 0 )
          v17 = v16 * 2.1818182;
        else
          v17 = v16 * 2.2272727;
        v10 += (int)floor_0(v17 + 0.5);
      }
      if ( (CurrentStyle & 0x800) != 0 )
        v10 += (int)floor_0((float)((float)v15 * 2.2272727) + 0.5);
      a3->top = 0;
      v18 = 0;
      a3->bottom = v15 + *((_DWORD *)v7 + 24);
      if ( *((_DWORD *)v7 + 49) - *((_DWORD *)v7 + 47) >= 0 )
        v18 = *((_DWORD *)v7 + 49) - *((_DWORD *)v7 + 47);
      v19 = v18 - v12;
      a3->right = v19;
      a3->left = v19 - v10;
      if ( (CurrentStyle & 0x20000) != 0 && (*((_DWORD *)v7 + 26) & 0x400000) == 0 )
      {
        v20 = 0;
        if ( *((_DWORD *)v7 + 49) - *((_DWORD *)v7 + 47) >= 0 )
          v20 = *((_DWORD *)v7 + 49) - *((_DWORD *)v7 + 47);
        v21 = v20 - v19;
        a3->left = v21;
        if ( v10 >= 0 )
          v4 = v10;
        a3->right = v21 + v4;
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0xF1Eu);
  }
  return v6;
}
