/*
 * XREFs of ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x18003B1AC
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002AC30 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015990 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800210D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180027044 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18002F854 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::QueryWindowThumbnailSourceSize(
        CWindowList *this,
        struct MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE *a2)
{
  HWND v4; // rdx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // esi
  struct CWindowData *v7; // r14
  LPVOID (__fastcall *v8)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  int v11; // eax
  CBaseObject *v12; // rbx
  int v13; // eax
  int v14; // eax
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rcx
  _DWORD *v22; // rcx
  __int64 v23; // r14
  __int64 v24; // rcx
  int v25; // [rsp+34h] [rbp-Ch]
  int v26; // [rsp+3Ch] [rbp-4h]
  CBaseObject *v27; // [rsp+78h] [rbp+38h] BYREF
  struct CWindowData *v28; // [rsp+80h] [rbp+40h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+88h] [rbp+48h] BYREF

  v29 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(HWND *)((char *)a2 + 4);
  v27 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v4, &v28);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0xE5Cu);
    goto LABEL_15;
  }
  v7 = v28;
  if ( !v28 )
  {
    v6 = -2147024809;
    goto LABEL_15;
  }
  v8 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v8 == WPF::ProcessHeapImpl::Alloc )
    v9 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x18uLL);
  else
    v9 = (_QWORD *)v8(WPF::g_pProcessHeap, 24LL);
  v10 = v9;
  if ( !v9 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xE65u);
    goto LABEL_15;
  }
  v9[2] = 0LL;
  *((_DWORD *)v9 + 4) = 1;
  *v9 = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  v9[1] = &CSWRListener::`vftable'{for `CBaseObject'};
  v11 = CSecondaryWindowRepresentation::Create(*((_DWORD *)a2 + 3) != 0 ? 6 : 2, (__int64)v9, (__int64)v7, 0, 100, &v27);
  v12 = v27;
  v6 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xE6Cu);
    goto LABEL_12;
  }
  v25 = *((_DWORD *)v27 + 24);
  v26 = *((_DWORD *)v27 + 21) - *((_DWORD *)v27 + 25);
  v13 = 0;
  if ( *((_DWORD *)v27 + 20) - *((_DWORD *)v27 + 23) - *((_DWORD *)v27 + 22) >= 0 )
    v13 = *((_DWORD *)v27 + 20) - *((_DWORD *)v27 + 23) - *((_DWORD *)v27 + 22);
  *((_DWORD *)a2 + 4) = v13;
  v14 = 0;
  if ( v26 - v25 >= 0 )
    v14 = v26 - v25;
  *((_DWORD *)a2 + 5) = v14;
  if ( (*((_BYTE *)v7 + 596) & 4) == 0 || *((_DWORD *)a2 + 3) || *((_DWORD *)v12 + 18) != 2 )
    goto LABEL_12;
  v16 = 0LL;
  v17 = *((_QWORD *)v12 + 8);
  if ( *((_DWORD *)v12 + 18) != 1 )
  {
    if ( *((_DWORD *)v12 + 18) == 2 )
    {
      v18 = *(_QWORD *)(v17 + 424);
      if ( v18 )
      {
        v16 = *(_QWORD *)(v18 + 32);
        goto LABEL_31;
      }
    }
    else
    {
      if ( *((_DWORD *)v12 + 18) != 3 )
        goto LABEL_31;
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)v12 + 8)) )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v17 + 432) + 80LL);
        goto LABEL_31;
      }
    }
  }
  v16 = v17;
LABEL_31:
  if ( (*(_DWORD *)(v16 + 100) & 0x1000000) != 0 )
    goto LABEL_41;
  v19 = 0LL;
  v20 = *((_QWORD *)v12 + 8);
  if ( *((_DWORD *)v12 + 18) != 1 )
  {
    if ( *((_DWORD *)v12 + 18) == 2 )
    {
      v21 = *(_QWORD *)(v20 + 424);
      if ( v21 )
      {
        v19 = *(_QWORD *)(v21 + 32);
        goto LABEL_40;
      }
    }
    else
    {
      if ( *((_DWORD *)v12 + 18) != 3 )
        goto LABEL_40;
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)v12 + 8)) )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(v20 + 432) + 80LL);
        goto LABEL_40;
      }
    }
  }
  v19 = v20;
LABEL_40:
  if ( *(char *)(v19 + 596) < 0 )
  {
LABEL_41:
    v22 = 0LL;
    v23 = *((_QWORD *)v12 + 8);
    if ( *((_DWORD *)v12 + 18) != 1 )
    {
      if ( *((_DWORD *)v12 + 18) == 2 )
      {
        v24 = *(_QWORD *)(v23 + 424);
        if ( v24 )
        {
          v22 = *(_DWORD **)(v24 + 32);
          goto LABEL_49;
        }
      }
      else
      {
        if ( *((_DWORD *)v12 + 18) != 3 )
        {
LABEL_49:
          *((_DWORD *)a2 + 4) -= v22[70] + v22[71];
          *((_DWORD *)a2 + 5) -= v22[72] + v22[73];
          goto LABEL_12;
        }
        if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)v12 + 8)) )
        {
          v22 = *(_DWORD **)(*(_QWORD *)(v23 + 432) + 80LL);
          goto LABEL_49;
        }
      }
    }
    v22 = (_DWORD *)v23;
    goto LABEL_49;
  }
LABEL_12:
  if ( v12 )
    CBaseObject::Release(v12);
  CBaseObject::Release((CBaseObject *)(v10 + 1));
LABEL_15:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v29);
  return v6;
}
