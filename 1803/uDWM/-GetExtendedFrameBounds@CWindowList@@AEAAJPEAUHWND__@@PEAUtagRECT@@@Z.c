/*
 * XREFs of ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18003B0AC
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18003B144 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x180019220 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18001FA0C (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180027044 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x1800817C0 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
 */

__int64 __fastcall CWindowList::GetExtendedFrameBounds(CWindowList *this, HWND a2, struct tagRECT *a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v5; // esi
  struct CWindowData *v6; // rdi
  struct tagRECT v7; // xmm0
  CTopLevelWindow *v8; // rcx
  unsigned int CurrentStyle; // eax
  struct _MARGINS v11; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v12);
  v5 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0x10ADu);
  }
  else
  {
    v6 = v12;
    if ( v12 )
    {
      v7 = (struct tagRECT)*((_OWORD *)v12 + 3);
      *(_QWORD *)&v11.cxLeftWidth = 0LL;
      *a3 = v7;
      v8 = (CTopLevelWindow *)*((_QWORD *)v6 + 49);
      *(_QWORD *)&v11.cyTopHeight = 0LL;
      if ( v8 )
      {
        CTopLevelWindow::GetOutsideMargins(v8, &v11);
      }
      else
      {
        CurrentStyle = CTopLevelWindow::GetCurrentStyle((__int64)v6);
        CTopLevelWindow::CalculateOutsideMargins(v6, CurrentStyle, &v11);
      }
      a3->left += v11.cxLeftWidth;
      a3->top += v11.cyTopHeight;
      a3->right -= v11.cxRightWidth;
      a3->bottom -= v11.cyBottomHeight;
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  return v5;
}
