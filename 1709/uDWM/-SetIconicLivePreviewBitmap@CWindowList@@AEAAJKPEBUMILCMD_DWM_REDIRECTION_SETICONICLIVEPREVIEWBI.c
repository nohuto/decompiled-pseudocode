/*
 * XREFs of ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18007C858
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002B020 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180010B70 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800276A0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x180070920 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     McTemplateU0p @ 0x180079554 (McTemplateU0p.c)
 */

__int64 __fastcall CWindowList::SetIconicLivePreviewBitmap(
        CWindowList *this,
        int a2,
        const struct MILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP *a3,
        const struct _REMOTE_PORT_VIEW *a4)
{
  __int64 v8; // rcx
  HWND v9; // rdi
  int SyncedWindowDataByHwnd; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp-28h] BYREF
  CWindowData *v15; // [rsp+90h] [rbp+18h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = *(HWND *)((char *)a3 + 4);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p(v8, &UdwmProcessSetIconicLivePreviewBitmap_Start, *(_QWORD *)((char *)a3 + 4));
  v15 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v9, &v15);
  v12 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    if ( v15 && !CWindowData::IsImmersiveWindow(v15) )
      v12 = CIconicBitmapRegistry::LivePreviewBitmapReceived(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 32),
              v15,
              a2,
              *((_DWORD *)a3 + 3),
              *((_DWORD *)a3 + 4),
              (const struct tagPOINT *)((char *)a3 + 20),
              a4->ViewBase,
              a4->ViewSize,
              *((_DWORD *)a3 + 7));
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0p(v11, &UdwmProcessSetIconicLivePreviewBitmap_Stop, (__int64)v9);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0xDFCu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v12;
}
