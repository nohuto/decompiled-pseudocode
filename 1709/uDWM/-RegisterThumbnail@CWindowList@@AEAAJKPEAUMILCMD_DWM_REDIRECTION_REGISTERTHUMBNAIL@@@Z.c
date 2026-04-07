/*
 * XREFs of ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x180007C38
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002B020 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180009CDC (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x18002614C (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800276A0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
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
  __int64 v15; // rcx
  DWORD v16; // edx
  unsigned int v17; // eax
  DWORD v18; // edx
  __int64 v19; // rcx
  unsigned int v20; // eax
  DWORD v21; // edx
  __int64 v22; // rcx
  unsigned int v23; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // r9d
  int v29; // eax
  unsigned int v30; // [rsp+20h] [rbp-20h]
  struct CWindowData *v31; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v32; // [rsp+38h] [rbp-8h] BYREF
  DWORD dwProcessId; // [rsp+90h] [rbp+50h] BYREF
  struct CWindowData *v34; // [rsp+98h] [rbp+58h] BYREF

  v32 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = *(HWND *)((char *)a3 + 12);
  v34 = 0LL;
  v31 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v6, &v34);
  v8 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v30 = 2934;
LABEL_40:
    v28 = SyncedWindowDataByHwnd;
LABEL_44:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, v30);
    goto LABEL_31;
  }
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a3 + 20), &v31);
  v8 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v30 = 2935;
    goto LABEL_40;
  }
  v9 = v34;
  dwProcessId = 0;
  if ( !GetWindowThreadProcessId(*((HWND *)v34 + 5), &dwProcessId)
    || (v10 = v31) == 0LL
    || a2 != dwProcessId
    || *((_DWORD *)a3 + 7) && a2 != GetCurrentProcessId()
    || (*((_QWORD *)this + 49) = v9,
        IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(this, v10),
        *((_QWORD *)this + 49) = 0LL,
        IsBaseThumbnailDestinationReachable) )
  {
    v8 = -2147024809;
    goto LABEL_31;
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
  v34 = v13;
  if ( !v13 )
  {
    v8 = -2147024882;
    v30 = 2972;
    v28 = -2147024882;
    goto LABEL_44;
  }
  v14 = (_QWORD *)((char *)this + 352);
  *((_QWORD *)v13 + 1) = *(_QWORD *)((char *)a3 + 4);
  *((_QWORD *)v34 + 2) = v9;
  *((_QWORD *)v34 + 3) = v10;
  *((_BYTE *)v34 + 32) = *((_DWORD *)a3 + 7) != 0;
  *((_BYTE *)v34 + 33) = *((_DWORD *)a3 + 8) != 0;
  *((_BYTE *)v34 + 34) = 0;
  v15 = *((unsigned int *)this + 94);
  v16 = dwProcessId;
  v17 = v15 + 1;
  if ( (int)v15 + 1 >= (unsigned int)v15 )
    v16 = v15 + 1;
  v8 = v17 < (unsigned int)v15 ? 0x80070216 : 0;
  if ( v17 < (unsigned int)v15 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
  }
  else if ( v16 > *((_DWORD *)this + 93) )
  {
    v25 = DynArrayImpl<0>::AddMultipleAndSet(v14, 8LL, 1LL, &v34);
    v8 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*v14 + 8 * v15) = v34;
    *((_DWORD *)this + 94) = v16;
  }
  if ( v8 < 0 )
  {
    v30 = 2981;
LABEL_43:
    v28 = v8;
    goto LABEL_44;
  }
  v18 = dwProcessId;
  v19 = *((unsigned int *)v9 + 126);
  v20 = v19 + 1;
  if ( (int)v19 + 1 >= (unsigned int)v19 )
    v18 = v19 + 1;
  v8 = v20 < (unsigned int)v19 ? 0x80070216 : 0;
  if ( v20 < (unsigned int)v19 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
  }
  else if ( v18 > *((_DWORD *)v9 + 125) )
  {
    v26 = DynArrayImpl<0>::AddMultipleAndSet((char *)v9 + 480, 8LL, 1LL, &v34);
    v8 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v9 + 60) + 8 * v19) = v34;
    *((_DWORD *)v9 + 126) = v18;
  }
  if ( v8 < 0 )
  {
    v30 = 2988;
    goto LABEL_43;
  }
  v21 = dwProcessId;
  v22 = *((unsigned int *)v10 + 134);
  v23 = v22 + 1;
  if ( (int)v22 + 1 >= (unsigned int)v22 )
    v21 = v22 + 1;
  v8 = v23 < (unsigned int)v22 ? 0x80070216 : 0;
  if ( v23 < (unsigned int)v22 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
  }
  else if ( v21 > *((_DWORD *)v10 + 133) )
  {
    v27 = DynArrayImpl<0>::AddMultipleAndSet((char *)v10 + 512, 8LL, 1LL, &v34);
    v8 = v27;
    if ( v27 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v10 + 64) + 8 * v22) = v34;
    *((_DWORD *)v10 + 134) = v21;
  }
  if ( v8 < 0 )
  {
    v30 = 2989;
    goto LABEL_43;
  }
  if ( *((_QWORD *)v9 + 50) )
  {
    v29 = (*(__int64 (__fastcall **)(struct CWindowData *))(*(_QWORD *)v34 + 8LL))(v34);
    v8 = v29;
    if ( v29 >= 0 )
    {
      v29 = CTopLevelWindow::OnThumbnailAdded(*((CTopLevelWindow **)v9 + 50), *((struct CVisual **)v34 + 11));
      v8 = v29;
      if ( v29 >= 0 )
        goto LABEL_31;
      v30 = 2999;
    }
    else
    {
      v30 = 2997;
    }
    v28 = v29;
    goto LABEL_44;
  }
LABEL_31:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v32);
  return (unsigned int)v8;
}
