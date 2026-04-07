/*
 * XREFs of ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x180084C2C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032100 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x180033980 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180034FE0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180080F98 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CWindowList::RegisterThumbnail(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL *a3)
{
  HWND v6; // rdx
  int SyncedWindowDataByHwnd; // eax
  int v8; // ebx
  int v9; // r9d
  struct CWindowData *v10; // rsi
  struct CWindowData *v11; // r13
  char IsBaseThumbnailDestinationReachable; // al
  __int64 v13; // rax
  struct CWindowData *v14; // rbx
  _QWORD *v15; // r10
  __int64 v16; // rcx
  DWORD v17; // edx
  unsigned int v18; // eax
  int v19; // eax
  DWORD v20; // edx
  __int64 v21; // rcx
  unsigned int v22; // eax
  int v23; // eax
  DWORD v24; // edx
  __int64 v25; // rcx
  unsigned int v26; // eax
  int v27; // eax
  int v28; // eax
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
    v30 = 2882;
LABEL_3:
    v9 = SyncedWindowDataByHwnd;
    goto LABEL_4;
  }
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a3 + 20), &v31);
  v8 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v30 = 2883;
    goto LABEL_3;
  }
  v10 = v34;
  dwProcessId = 0;
  if ( !GetWindowThreadProcessId(*((HWND *)v34 + 5), &dwProcessId)
    || (v11 = v31) == 0LL
    || a2 != dwProcessId
    || *((_DWORD *)a3 + 7) && a2 != GetCurrentProcessId()
    || (*((_QWORD *)this + 49) = v10,
        IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(
                                                (struct CWindowData **)this,
                                                v11),
        *((_QWORD *)this + 49) = 0LL,
        IsBaseThumbnailDestinationReachable) )
  {
    v8 = -2147024809;
    goto LABEL_56;
  }
  v13 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          96LL);
  v14 = (struct CWindowData *)v13;
  if ( v13 )
  {
    *(_QWORD *)v13 = &CThumbnailData::`vftable';
    *(_QWORD *)(v13 + 8) = 0LL;
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_QWORD *)(v13 + 24) = 0LL;
    *(_DWORD *)(v13 + 32) = 0;
    memset_0((void *)(v13 + 36), 0, 0x2DuLL);
    *((_QWORD *)v14 + 11) = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  v34 = v14;
  if ( !v14 )
  {
    v8 = -2147024882;
    v30 = 2920;
    v9 = -2147024882;
    goto LABEL_4;
  }
  v15 = (_QWORD *)((char *)this + 352);
  *((_QWORD *)v14 + 1) = *(_QWORD *)((char *)a3 + 4);
  *((_QWORD *)v34 + 2) = v10;
  *((_QWORD *)v34 + 3) = v11;
  *((_BYTE *)v34 + 32) = *((_DWORD *)a3 + 7) != 0;
  *((_BYTE *)v34 + 33) = *((_DWORD *)a3 + 8) != 0;
  *((_BYTE *)v34 + 34) = 0;
  v16 = *((unsigned int *)this + 94);
  v17 = dwProcessId;
  v18 = v16 + 1;
  if ( (int)v16 + 1 >= (unsigned int)v16 )
    v17 = v16 + 1;
  v8 = v18 < (unsigned int)v16 ? 0x80070216 : 0;
  if ( v18 >= (unsigned int)v16 )
  {
    if ( v17 > *((_DWORD *)this + 93) )
    {
      v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v15, 8u, 1, &v34);
      v8 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*v15 + 8 * v16) = v34;
      *((_DWORD *)this + 94) = v17;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xB5u);
  }
  if ( v8 < 0 )
  {
    v30 = 2929;
LABEL_28:
    v9 = v8;
    goto LABEL_4;
  }
  v20 = dwProcessId;
  v21 = *((unsigned int *)v10 + 126);
  v22 = v21 + 1;
  if ( (int)v21 + 1 >= (unsigned int)v21 )
    v20 = v21 + 1;
  v8 = v22 < (unsigned int)v21 ? 0x80070216 : 0;
  if ( v22 >= (unsigned int)v21 )
  {
    if ( v20 > *((_DWORD *)v10 + 125) )
    {
      v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v10 + 480, 8u, 1, &v34);
      v8 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v10 + 60) + 8 * v21) = v34;
      *((_DWORD *)v10 + 126) = v20;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xB5u);
  }
  if ( v8 < 0 )
  {
    v30 = 2936;
    goto LABEL_28;
  }
  v24 = dwProcessId;
  v25 = *((unsigned int *)v11 + 134);
  v26 = v25 + 1;
  if ( (int)v25 + 1 >= (unsigned int)v25 )
    v24 = v25 + 1;
  v8 = v26 < (unsigned int)v25 ? 0x80070216 : 0;
  if ( v26 >= (unsigned int)v25 )
  {
    if ( v24 > *((_DWORD *)v11 + 133) )
    {
      v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v11 + 512, 8u, 1, &v34);
      v8 = v27;
      if ( v27 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v11 + 64) + 8 * v25) = v34;
      *((_DWORD *)v11 + 134) = v24;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xB5u);
  }
  if ( v8 < 0 )
  {
    v30 = 2937;
    goto LABEL_28;
  }
  if ( !*((_QWORD *)v10 + 50) )
    goto LABEL_56;
  v28 = (*(__int64 (__fastcall **)(struct CWindowData *))(*(_QWORD *)v34 + 8LL))(v34);
  v8 = v28;
  if ( v28 >= 0 )
  {
    v28 = CTopLevelWindow::OnThumbnailAdded(*((CTopLevelWindow **)v10 + 50), *((struct CVisual **)v34 + 11));
    v8 = v28;
    if ( v28 >= 0 )
      goto LABEL_56;
    v30 = 2947;
  }
  else
  {
    v30 = 2945;
  }
  v9 = v28;
LABEL_4:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, v30);
LABEL_56:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v32);
  return (unsigned int)v8;
}
