/*
 * XREFs of ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00B6F48
 * Callers:
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00B6E84 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00DBD90 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C00059D4 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006864 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C00143D0 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00AB090 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00B6B4C (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1W4_D3DK.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00B81F0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C00E1C30 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E21E8 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        ADAPTER_DISPLAY **a2,
        struct DMMVIDPNPRESENTPATH *a3,
        char a4,
        bool a5)
{
  char v6; // r13
  __int64 v7; // rdx
  __int64 v10; // rax
  unsigned __int16 v11; // di
  int v12; // eax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  bool IsCoreResourceSharedOwner; // al
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // rcx
  ADAPTER_DISPLAY *v19; // r13
  __int64 v20; // rax
  int IsVirtualizationDisabledForTarget; // ebx
  _QWORD *v22; // r12
  __int64 v23; // rcx
  ADAPTER_DISPLAY *v24; // rax
  __int64 v25; // rax
  MONITOR_MGR *v26; // rcx
  __int64 v27; // rax
  int MonitorInstance; // eax
  __int64 v29; // rax
  bool IsVirtualModeSuportDisabled; // r12
  __int64 v31; // rax
  DXGMONITOR *v32; // r13
  __int64 v33; // rax
  __int64 v34; // rax
  bool v35; // al
  _QWORD *v36; // rax
  char v38; // dl
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD *v42; // r8
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  DMMVIDPNSOURCEMODE *v52; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v53; // edx
  struct SESSION_VIEW *SessionViewOwner; // rax
  struct SESSION_VIEW *v55; // r15
  const struct tagRECT *DwmClipBox; // rax
  int v57; // ecx
  bool v58[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v59; // [rsp+58h] [rbp-28h] BYREF
  DXGMONITOR *v60; // [rsp+60h] [rbp-20h] BYREF
  __int64 v61; // [rsp+68h] [rbp-18h] BYREF
  __int64 v62; // [rsp+70h] [rbp-10h] BYREF
  bool v63; // [rsp+C0h] [rbp+40h]
  ADAPTER_DISPLAY *v64; // [rsp+D0h] [rbp+50h] BYREF
  char v65; // [rsp+D8h] [rbp+58h]

  v65 = a4;
  v6 = a4;
  v7 = *(_QWORD *)this;
  if ( (*(_BYTE *)(*(_QWORD *)this + 84LL) & 5) == 5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
    v7 = *(_QWORD *)this;
  }
  v11 = 0;
  v12 = *(_DWORD *)(v7 + 84);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 88LL) )
  {
    if ( (v12 & 5) == 0 )
      return 0LL;
  }
  else if ( (v12 & 4) != 0 )
  {
    return 0LL;
  }
  if ( v6 && !DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(a3) )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdAssertion(v13);
    v14[3] = *((int *)a2 + 68);
    v14[4] = *((unsigned int *)a2 + 67);
    v14[5] = *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL);
    v14[6] = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
    v14[7] = *(_QWORD *)(*(_QWORD *)this + 64LL);
    WdLogEvent5_WdAssertion(v14);
    return 0LL;
  }
  ++*((_WORD *)this + 4);
  IsCoreResourceSharedOwner = DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2);
  v16 = *((_QWORD *)a3 + 12);
  if ( !IsCoreResourceSharedOwner )
  {
    v22 = (ADAPTER_DISPLAY **)((char *)a2 + 268);
    IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                          *(struct _LUID *)((char *)a2 + 268),
                                          *(_DWORD *)(v16 + 24),
                                          (__int64)&v64,
                                          (__int64)v58,
                                          0LL,
                                          0LL,
                                          0LL);
    goto LABEL_41;
  }
  if ( !a2 )
    goto LABEL_15;
  v17 = *(unsigned int *)(v16 + 24);
  if ( (_DWORD)v17 == -1 )
    goto LABEL_15;
  DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2);
  v19 = a2[307];
  v64 = v19;
  if ( v19 )
  {
    DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2);
    v24 = a2[307];
    if ( !v24 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v23);
      WdLogEvent5_WdAssertion(v25);
      v24 = a2[307];
    }
    v26 = (MONITOR_MGR *)*((_QWORD *)v24 + 12);
    if ( !v26 )
    {
      v27 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v27 + 24) = a2;
      WdLogEvent5_WdError(v27);
      IsVirtualizationDisabledForTarget = -1073741811;
LABEL_28:
      v31 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v31 + 24) = IsVirtualizationDisabledForTarget;
      WdLogEvent5_WdAssertion(v31);
LABEL_39:
      v6 = v65;
      goto LABEL_16;
    }
    v60 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v26, v17, 1u, &v60);
    IsVirtualizationDisabledForTarget = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v29 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v29 + 24) = v17;
      *(_QWORD *)(v29 + 32) = a2;
      WdLogEvent5_WdDmmEvent(v29);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v32 = v60;
        if ( !v60 || *((_DWORD *)v60 + 108) != 1 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v16);
          WdLogEvent5_WdAssertion(v33);
        }
        if ( !v32 )
        {
          v34 = WdLogNewEntry5_WdAssertion(v16);
          WdLogEvent5_WdAssertion(v34);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v32 + 296), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v32);
        ExReleaseResourceLite((PERESOURCE)((char *)v32 + 296));
        KeLeaveCriticalRegion();
        v19 = v64;
        IsVirtualizationDisabledForTarget = 0;
        goto LABEL_35;
      }
      if ( MonitorInstance != -1073741632 )
      {
        IsVirtualModeSuportDisabled = v63;
LABEL_27:
        if ( IsVirtualizationDisabledForTarget < 0 )
          goto LABEL_28;
LABEL_35:
        if ( IsVirtualModeSuportDisabled )
        {
          v35 = 1;
          LOBYTE(v16) = 1;
        }
        else
        {
          v35 = *((_BYTE *)v19 + 133) == 0;
          LOBYTE(v16) = *((_BYTE *)v19 + 132) == 0;
        }
        LOBYTE(v64) = v16;
        v58[0] = v35;
        goto LABEL_39;
      }
    }
    IsVirtualModeSuportDisabled = 0;
    IsVirtualizationDisabledForTarget = 0;
    goto LABEL_27;
  }
  v20 = WdLogNewEntry5_WdError(v18);
  *(_QWORD *)(v20 + 24) = 8138LL;
  WdLogEvent5_WdError(v20);
  v6 = v65;
LABEL_15:
  IsVirtualizationDisabledForTarget = -1073741811;
LABEL_16:
  v22 = (ADAPTER_DISPLAY **)((char *)a2 + 268);
LABEL_41:
  if ( IsVirtualizationDisabledForTarget < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v36[3] = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
    v36[4] = *((int *)a2 + 68);
    v36[5] = *(unsigned int *)v22;
    WdLogEvent5_WdError(v36);
    return (unsigned int)IsVirtualizationDisabledForTarget;
  }
  v59 = 0LL;
  if ( !(_BYTE)v64 || (v38 = 0, !v58[0]) )
    v38 = 1;
  if ( (unsigned int)CCD_TOPOLOGY::AddPathDescriptor(
                       *(_QWORD *)this,
                       v22,
                       *(_DWORD *)(*((_QWORD *)a3 + 11) + 24LL),
                       *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL),
                       v38,
                       *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 80LL),
                       *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 84LL),
                       *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 88LL),
                       &v59) == -1073741789 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v41);
    v42[3] = this;
    v42[4] = *(_QWORD *)this;
    v42[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
    v43 = *(_QWORD *)(*(_QWORD *)this + 64LL);
    if ( v43 )
      v11 = *(_WORD *)(v43 + 22);
    v42[6] = v11;
    v42[7] = *((unsigned __int16 *)this + 4);
    WdLogEvent5_WdWarning(v42);
  }
  else
  {
    v44 = v59;
    *(_DWORD *)(v59 + 252) = *((unsigned __int16 *)a3 + 54);
    *(_DWORD *)(v44 + 88) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 80LL);
    *(_DWORD *)(v44 + 92) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 84LL);
    *(_QWORD *)v44 |= 0x800000000000uLL;
    if ( v6 )
    {
      *(_QWORD *)v44 |= 0x8000000000000000uLL;
      v45 = *((_QWORD *)a3 + 12);
      v46 = *(_QWORD *)(v45 + 104);
      if ( v46 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v46 + 96));
        v47 = *(_QWORD *)(v45 + 104);
        v44 = v59;
      }
      else
      {
        v47 = 0LL;
      }
      v62 = v47;
      v48 = *(_QWORD *)(v47 + 144);
      if ( v48 )
      {
        *(_OWORD *)(v44 + 32) = *(_OWORD *)(v48 + 72);
        *(_OWORD *)(v44 + 48) = *(_OWORD *)(v48 + 88);
        *(_OWORD *)(v44 + 64) = *(_OWORD *)(v48 + 104);
        *(_QWORD *)(v44 + 80) = *(_QWORD *)(v48 + 120);
        *(_QWORD *)v44 |= 0x87uLL;
        *(_DWORD *)(v44 + 204) = *(_DWORD *)(v48 + 132);
        *(_DWORD *)(v44 + 208) = *(_DWORD *)(v48 + 136);
        *(_QWORD *)v44 |= 8uLL;
      }
      else
      {
        *(_DWORD *)(v44 + 204) = 0;
        *(_DWORD *)(v44 + 208) = 4;
      }
      v49 = *((_QWORD *)a3 + 11);
      v50 = *(_QWORD *)(v49 + 104);
      if ( v50 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v50 + 96));
        v51 = *(_QWORD *)(v49 + 104);
        v44 = v59;
      }
      else
      {
        v51 = 0LL;
      }
      v52 = *(DMMVIDPNSOURCEMODE **)(v51 + 144);
      v61 = v51;
      if ( v52 )
      {
        *(_BYTE *)(v44 + 128) = (unsigned int)(*((_DWORD *)v52 + 18) - 3) <= 1;
        *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)(v44 + 96) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v52);
        *(_QWORD *)v44 |= 0x100uLL;
        v53 = *((_DWORD *)a3 + 29);
        *(_DWORD *)(v44 + 132) = v53;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 64LL) + 24LL) & 2) != 0 )
          *(_DWORD *)(v44 + 132) = ADAPTER_DISPLAY::AddingMonitorOrientation(
                                     a2[307],
                                     v53,
                                     *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL));
        *(_DWORD *)(v44 + 136) = *((_DWORD *)a3 + 28);
        *(_QWORD *)v44 |= 0x40000000200uLL;
        if ( a5 )
        {
          SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(a2[307], *(_DWORD *)(v44 + 24));
          *(_QWORD *)(v44 + 256) = SessionViewOwner;
          v55 = SessionViewOwner;
          if ( SessionViewOwner )
          {
            DwmClipBox = ADAPTER_DISPLAY::GetDwmClipBox((DXGADAPTER **)a2[307], *(_DWORD *)(v44 + 24));
            *(_DWORD *)(v44 + 152) = *((_DWORD *)v55 + 8) - *((_DWORD *)v55 + 6);
            *(_DWORD *)(v44 + 156) = *((_DWORD *)v55 + 9) - *((_DWORD *)v55 + 7);
            *(_DWORD *)(v44 + 144) = *((_DWORD *)v55 + 6);
            *(_DWORD *)(v44 + 148) = *((_DWORD *)v55 + 7);
            *(struct tagRECT *)(v44 + 168) = *DwmClipBox;
            *(_QWORD *)v44 |= 0x820800uLL;
            *(_QWORD *)(v44 + 196) = *((_QWORD *)v55 + 8);
          }
          *(_DWORD *)(v44 + 216) = *(_DWORD *)(3760LL * *(unsigned int *)(v44 + 24) + *((_QWORD *)a2[307] + 14) + 3756);
          *(_QWORD *)v44 |= 0x1000000000000uLL;
          v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 512LL) + 24LL);
          if ( v57 == 12 )
          {
            *(_DWORD *)(v44 + 192) = 259;
          }
          else if ( v57 == 13 )
          {
            *(_DWORD *)(v44 + 192) = -1073741437;
          }
        }
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v61, 0LL);
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v62, 0LL);
    }
  }
  return 0LL;
}
