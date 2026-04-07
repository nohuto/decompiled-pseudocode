/*
 * XREFs of ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18007CE00
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002B020 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18000CD1C (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020C30 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x180025750 (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800276A0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x18002C250 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x18007AEF0 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x18009C028 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::UpdateSharedVirtualDesktopVisual(
        CWindowList *this,
        unsigned int a2,
        const struct MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL *a3,
        const struct _REMOTE_PORT_VIEW *a4)
{
  struct CThumbnailData *ThumbnailData; // rsi
  _QWORD *ViewBase; // r13
  __int64 i; // r14
  HWND v11; // rbx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v13; // r8d
  unsigned int v14; // ebx
  unsigned int j; // r14d
  HWND v16; // rbx
  unsigned int v17; // r8d
  CDesktopThumbnailBase *v18; // rcx
  int v19; // r9d
  int v20; // eax
  RECT v21; // xmm0
  int v22; // eax
  CVisual *v23; // rcx
  unsigned int v25; // [rsp+20h] [rbp-59h]
  struct CWindowData *v26; // [rsp+30h] [rbp-49h] BYREF
  CWindowList *v27[2]; // [rsp+38h] [rbp-41h]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+48h] [rbp-31h] BYREF
  _DWM_THUMBNAIL_PROPERTIES v29; // [rsp+50h] [rbp-29h] BYREF

  v27[0] = this;
  v28 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  memset_0(&v29, 0, sizeof(v29));
  if ( !ThumbnailData
    || a2 != *((_DWORD *)a3 + 2)
    || *(double *)((char *)a3 + 36) == 0.0
    || *(double *)((char *)a3 + 44) == 0.0
    || !*((_BYTE *)ThumbnailData + 34)
    || *((_DWORD *)ThumbnailData + 28) != 2 )
  {
    v25 = 3247;
    goto LABEL_38;
  }
  if ( a4->ViewSize < 8 * (unsigned __int64)(unsigned int)(*((_DWORD *)a3 + 4) + *((_DWORD *)a3 + 3)) )
  {
    v25 = 3252;
LABEL_38:
    v19 = -2147024809;
    v14 = -2147024809;
    goto LABEL_39;
  }
  ViewBase = a4->ViewBase;
  *((_DWORD *)ThumbnailData + 38) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)ThumbnailData + 128, 8u);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a3 + 3); i = (unsigned int)(i + 1) )
  {
    v11 = (HWND)ViewBase[i];
    if ( (unsigned int)DwmValidateWindow(v11, a2) )
    {
      SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(v27[0], v11, &v26);
      v14 = SyncedWindowDataByHwnd;
      if ( SyncedWindowDataByHwnd < 0 )
      {
        v25 = 3265;
        goto LABEL_25;
      }
      if ( v26 )
      {
        SyncedWindowDataByHwnd = DynArray<CWindowData *,0>::AddMultipleAndSet((__int64)ThumbnailData + 128, &v26, v13);
        v14 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd < 0 )
        {
          v25 = 3268;
          goto LABEL_25;
        }
      }
    }
  }
  *((_DWORD *)ThumbnailData + 46) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)ThumbnailData + 160, 8u);
  for ( j = 0; j < *((_DWORD *)a3 + 4); ++j )
  {
    v16 = (HWND)ViewBase[j + *((_DWORD *)a3 + 3)];
    if ( (unsigned int)DwmValidateWindow(v16, a2) )
    {
      SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(v27[0], v16, &v26);
      v14 = SyncedWindowDataByHwnd;
      if ( SyncedWindowDataByHwnd < 0 )
      {
        v25 = 3280;
        goto LABEL_25;
      }
      if ( v26 )
      {
        SyncedWindowDataByHwnd = DynArray<CWindowData *,0>::AddMultipleAndSet((__int64)ThumbnailData + 160, &v26, v17);
        v14 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd < 0 )
        {
          v25 = 3283;
          goto LABEL_25;
        }
      }
    }
  }
  v18 = (CDesktopThumbnailBase *)*((_QWORD *)ThumbnailData + 15);
  if ( v18 )
  {
    SyncedWindowDataByHwnd = CDesktopThumbnailBase::UpdateWindowClones(v18);
    v14 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v25 = 3292;
      goto LABEL_25;
    }
  }
  v20 = (int)*(double *)((char *)a3 + 36);
  v27[0] = 0LL;
  v29.dwFlags = 3;
  v21 = *(RECT *)((char *)a3 + 20);
  LODWORD(v27[1]) = v20;
  v22 = (int)*(double *)((char *)a3 + 44);
  v29.rcSource = v21;
  HIDWORD(v27[1]) = v22;
  v29.rcDestination = *(RECT *)v27;
  SyncedWindowDataByHwnd = CThumbnailData::UpdateProperties(ThumbnailData, &v29);
  v14 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v25 = 3300;
LABEL_25:
    v19 = SyncedWindowDataByHwnd;
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v25);
    goto LABEL_40;
  }
  SyncedWindowDataByHwnd = CDCompVirtualDesktopThumbnailData::EnsureThumbnailVisual(ThumbnailData);
  v14 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v25 = 3301;
    goto LABEL_25;
  }
  SyncedWindowDataByHwnd = VisualCollection::InsertRelative(
                             (VisualCollection *)(*((_QWORD *)ThumbnailData + 12) + 32LL),
                             *((struct CVisual ***)ThumbnailData + 13),
                             0LL,
                             0,
                             1);
  v14 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v25 = 3302;
    goto LABEL_25;
  }
  v23 = *(CVisual **)(*((_QWORD *)ThumbnailData + 2) + 400LL);
  if ( v23 )
    CVisual::SetDirtyFlags(v23, 0x8000000);
LABEL_40:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v28);
  return v14;
}
