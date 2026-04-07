/*
 * XREFs of ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x18003D30C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032100 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C8A0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180034FE0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035C98 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18003B07C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rdi
  int v11; // eax
  CBaseObject *v12; // rbx
  int v13; // edx
  int v14; // ecx
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rcx
  _DWORD *v22; // rcx
  __int64 v23; // r14
  __int64 v24; // rcx
  int v25; // [rsp+34h] [rbp-1Ch]
  int v26; // [rsp+3Ch] [rbp-14h]
  CBaseObject *v27; // [rsp+98h] [rbp+48h] BYREF
  struct CWindowData *v28; // [rsp+A0h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+A8h] [rbp+58h] BYREF

  v29 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(HWND *)((char *)a2 + 4);
  v27 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v4, &v28);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0xD26u);
    goto LABEL_17;
  }
  v7 = v28;
  if ( !v28 )
  {
    v6 = -2147024809;
    goto LABEL_17;
  }
  v8 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v8 == WPF::ProcessHeapImpl::Alloc )
    v9 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x18uLL);
  else
    v9 = (_QWORD *)v8(WPF::g_pProcessHeap, 24LL);
  v10 = (__int64)v9;
  if ( v9 )
  {
    v9[2] = 0LL;
    *((_DWORD *)v9 + 4) = 1;
    *v9 = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
    v9[1] = &CSWRListener::`vftable'{for `CBaseObject'};
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xD2Fu);
    goto LABEL_17;
  }
  v11 = CSecondaryWindowRepresentation::Create(*((_DWORD *)a2 + 3) != 0 ? 6 : 2, v10, (__int64)v7, 0, 100, &v27);
  v12 = v27;
  v6 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xD36u);
    goto LABEL_14;
  }
  v25 = *((_DWORD *)v27 + 24);
  v13 = *((_DWORD *)v27 + 20) - *((_DWORD *)v27 + 23) - *((_DWORD *)v27 + 22);
  v26 = *((_DWORD *)v27 + 21) - *((_DWORD *)v27 + 25);
  if ( v13 < 0 )
    v13 = 0;
  v14 = v26 - *((_DWORD *)v27 + 24);
  *((_DWORD *)a2 + 4) = v13;
  if ( v26 - v25 < 0 )
    v14 = 0;
  *((_DWORD *)a2 + 5) = v14;
  if ( (*((_BYTE *)v7 + 596) & 8) == 0 || *((_DWORD *)a2 + 3) || *((_DWORD *)v12 + 18) != 2 )
    goto LABEL_14;
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
        goto LABEL_35;
      }
    }
    else
    {
      if ( *((_DWORD *)v12 + 18) != 3 )
        goto LABEL_35;
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)v12 + 8)) )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v17 + 432) + 80LL);
        goto LABEL_35;
      }
    }
  }
  v16 = v17;
LABEL_35:
  if ( (*(_DWORD *)(v16 + 100) & 0x1000000) != 0 )
    goto LABEL_45;
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
        goto LABEL_44;
      }
    }
    else
    {
      if ( *((_DWORD *)v12 + 18) != 3 )
        goto LABEL_44;
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)v12 + 8)) )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(v20 + 432) + 80LL);
        goto LABEL_44;
      }
    }
  }
  v19 = v20;
LABEL_44:
  if ( (*(_BYTE *)(v19 + 597) & 1) != 0 )
  {
LABEL_45:
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
          goto LABEL_53;
        }
      }
      else
      {
        if ( *((_DWORD *)v12 + 18) != 3 )
        {
LABEL_53:
          *((_DWORD *)a2 + 4) -= v22[72] + v22[73];
          *((_DWORD *)a2 + 5) -= v22[74] + v22[75];
          goto LABEL_14;
        }
        if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)v12 + 8)) )
        {
          v22 = *(_DWORD **)(*(_QWORD *)(v23 + 432) + 80LL);
          goto LABEL_53;
        }
      }
    }
    v22 = (_DWORD *)v23;
    goto LABEL_53;
  }
LABEL_14:
  if ( v12 )
    CBaseObject::Release(v12);
  CBaseObject::Release((CBaseObject *)(v10 + 8));
LABEL_17:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v29);
  return v6;
}
