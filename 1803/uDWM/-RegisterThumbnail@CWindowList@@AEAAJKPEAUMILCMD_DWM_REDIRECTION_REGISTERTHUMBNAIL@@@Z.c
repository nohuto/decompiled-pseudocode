/*
 * XREFs of ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x180002984
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002AC30 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x1800042F0 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180027044 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x18002C700 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::RegisterThumbnail(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL *a3)
{
  HWND v6; // rdx
  int SyncedWindowDataByHwnd; // eax
  int v8; // ebx
  struct CWindowData *v9; // rsi
  struct CWindowData *v10; // r13
  bool IsBaseThumbnailDestinationReachable; // al
  __int64 v12; // rax
  struct CWindowData *v13; // rbx
  _QWORD *v14; // r10
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // r9d
  int v26; // eax
  unsigned int v27; // [rsp+20h] [rbp-20h]
  struct CWindowData *v28; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+38h] [rbp-8h] BYREF
  DWORD dwProcessId; // [rsp+90h] [rbp+50h] BYREF
  struct CWindowData *v31; // [rsp+98h] [rbp+58h] BYREF

  v29 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = *(HWND *)((char *)a3 + 12);
  v31 = 0LL;
  v28 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v6, &v31);
  v8 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v27 = 3192;
LABEL_34:
    v25 = SyncedWindowDataByHwnd;
LABEL_38:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, v27);
    goto LABEL_25;
  }
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a3 + 20), &v28);
  v8 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v27 = 3193;
    goto LABEL_34;
  }
  v9 = v31;
  dwProcessId = 0;
  if ( !GetWindowThreadProcessId(*((HWND *)v31 + 5), &dwProcessId)
    || (v10 = v28) == 0LL
    || a2 != dwProcessId
    || *((_DWORD *)a3 + 7) && a2 != GetCurrentProcessId()
    || (*((_QWORD *)this + 49) = v9,
        IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(this, v10),
        *((_QWORD *)this + 49) = 0LL,
        IsBaseThumbnailDestinationReachable) )
  {
    v8 = -2147024809;
    goto LABEL_25;
  }
  v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          96LL);
  v13 = (struct CWindowData *)v12;
  if ( v12 )
  {
    *(_QWORD *)v12 = &CThumbnailData::`vftable';
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_DWORD *)(v12 + 32) = 0;
    memset_0((void *)(v12 + 36), 0, 0x2DuLL);
    *((_QWORD *)v13 + 11) = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  v31 = v13;
  if ( !v13 )
  {
    v8 = -2147024882;
    v27 = 3230;
    v25 = -2147024882;
    goto LABEL_38;
  }
  v14 = (_QWORD *)((char *)this + 352);
  *((_QWORD *)v13 + 1) = *(_QWORD *)((char *)a3 + 4);
  *((_QWORD *)v31 + 2) = v9;
  *((_QWORD *)v31 + 3) = v10;
  *((_BYTE *)v31 + 32) = *((_DWORD *)a3 + 7) != 0;
  *((_BYTE *)v31 + 33) = *((_DWORD *)a3 + 8) != 0;
  *((_BYTE *)v31 + 34) = 0;
  v15 = *((_DWORD *)this + 94);
  v16 = v15 + 1;
  v8 = v15 + 1 < v15 ? 0x80070216 : 0;
  if ( v15 + 1 < v15 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
  }
  else if ( v16 > *((_DWORD *)this + 93) )
  {
    v22 = DynArrayImpl<0>::AddMultipleAndSet(v14, 8LL, 1LL, &v31);
    v8 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*v14 + 8LL * v15) = v31;
    *((_DWORD *)this + 94) = v16;
  }
  if ( v8 < 0 )
  {
    v27 = 3239;
LABEL_37:
    v25 = v8;
    goto LABEL_38;
  }
  v17 = *((_DWORD *)v9 + 126);
  v18 = v17 + 1;
  v8 = v17 + 1 < v17 ? 0x80070216 : 0;
  if ( v17 + 1 < v17 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
  }
  else if ( v18 > *((_DWORD *)v9 + 125) )
  {
    v23 = DynArrayImpl<0>::AddMultipleAndSet((char *)v9 + 480, 8LL, 1LL, &v31);
    v8 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v9 + 60) + 8LL * v17) = v31;
    *((_DWORD *)v9 + 126) = v18;
  }
  if ( v8 < 0 )
  {
    v27 = 3246;
    goto LABEL_37;
  }
  v19 = *((_DWORD *)v10 + 134);
  v20 = v19 + 1;
  v8 = v19 + 1 < v19 ? 0x80070216 : 0;
  if ( v19 + 1 < v19 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
  }
  else if ( v20 > *((_DWORD *)v10 + 133) )
  {
    v24 = DynArrayImpl<0>::AddMultipleAndSet((char *)v10 + 512, 8LL, 1LL, &v31);
    v8 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v10 + 64) + 8LL * v19) = v31;
    *((_DWORD *)v10 + 134) = v20;
  }
  if ( v8 < 0 )
  {
    v27 = 3247;
    goto LABEL_37;
  }
  if ( *((_QWORD *)v9 + 49) )
  {
    v26 = (*(__int64 (__fastcall **)(struct CWindowData *))(*(_QWORD *)v31 + 8LL))(v31);
    v8 = v26;
    if ( v26 >= 0 )
    {
      v26 = CTopLevelWindow::OnThumbnailAdded(*((CTopLevelWindow **)v9 + 49), *((struct CVisual **)v31 + 11));
      v8 = v26;
      if ( v26 >= 0 )
        goto LABEL_25;
      v27 = 3257;
    }
    else
    {
      v27 = 3255;
    }
    v25 = v26;
    goto LABEL_38;
  }
LABEL_25:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v29);
  return (unsigned int)v8;
}
