/*
 * XREFs of ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800384CC
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180038564 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800196FC (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800276A0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z @ 0x18002F8F0 (-GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z.c)
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x1800783B0 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0xFABu);
  }
  else
  {
    v6 = v12;
    if ( v12 )
    {
      v7 = (struct tagRECT)*((_OWORD *)v12 + 3);
      *(_QWORD *)&v11.cxLeftWidth = 0LL;
      *a3 = v7;
      v8 = (CTopLevelWindow *)*((_QWORD *)v6 + 50);
      *(_QWORD *)&v11.cyTopHeight = 0LL;
      if ( v8 )
      {
        CTopLevelWindow::GetOutsideMargins(v8, &v11);
      }
      else
      {
        CurrentStyle = CTopLevelWindow::GetCurrentStyle(v6);
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
