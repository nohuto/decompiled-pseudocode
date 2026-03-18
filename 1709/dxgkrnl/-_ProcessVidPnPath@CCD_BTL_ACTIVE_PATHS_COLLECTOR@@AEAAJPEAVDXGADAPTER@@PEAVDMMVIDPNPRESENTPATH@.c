/*
 * XREFs of ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00DB214
 * Callers:
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00DB150 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00F6230 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 * Callees:
 *     ?IsWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEBAEXZ @ 0x1C0002710 (-IsWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C00041C4 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00067AC (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0006DB8 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C00AC358 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00AED34 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00B3A10 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ @ 0x1C00D83C0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@E@Z @ 0x1C00DEE60 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DXGADAPTER *a2,
        struct DMMVIDPNPRESENTPATH *a3,
        char a4,
        bool a5)
{
  char v5; // r13
  unsigned __int16 v9; // di
  int v10; // ecx
  char v11; // r14
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  char v26; // r14
  int IsVirtualizationDisabledForTarget; // ebx
  bool v28; // zf
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v32; // rbx
  _QWORD *v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  DMMVIDPNSOURCEMODE *v44; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v45; // edx
  int **SessionViewOwner; // rax
  int **v47; // r14
  const struct tagRECT *DwmClipBox; // rax
  __int64 v49; // rcx
  char IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v51; // rcx
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  char v65; // [rsp+50h] [rbp-20h]
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v66; // [rsp+58h] [rbp-18h] BYREF
  __int64 v67; // [rsp+60h] [rbp-10h] BYREF
  __int64 v68; // [rsp+68h] [rbp-8h] BYREF
  unsigned int v69; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v70; // [rsp+C0h] [rbp+50h] BYREF
  char v71; // [rsp+C8h] [rbp+58h]

  v71 = a4;
  v5 = a4;
  if ( (*(_BYTE *)(*(_QWORD *)this + 84LL) & 5) == 5 )
  {
    v52 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v52);
  }
  v9 = 0;
  v10 = *(_DWORD *)(*(_QWORD *)this + 84LL);
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 404LL) )
  {
    if ( (v10 & 5) == 0 )
      return 0LL;
  }
  else if ( (v10 & 4) != 0 )
  {
    return 0LL;
  }
  if ( v5 && !DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(a3) )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdAssertion(v36);
    v53[3] = *((int *)a2 + 68);
    v53[4] = *((unsigned int *)a2 + 67);
    v53[5] = *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL);
    v53[6] = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
    v53[7] = *(_QWORD *)(*(_QWORD *)this + 64LL);
    WdLogEvent5_WdAssertion(v53);
    return 0LL;
  }
  v11 = 1;
  ++*((_WORD *)this + 4);
  if ( DXGADAPTER::IsWorkerThreadOfExclusiveOwner((struct _KTHREAD **)a2)
    || ExIsResourceAcquiredSharedLite(*((PERESOURCE *)a2 + 18)) )
  {
    v13 = *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL);
    v69 = v13;
    if ( !a2 || v13 == -1 )
    {
      IsVirtualizationDisabledForTarget = -1073741811;
    }
    else
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
      {
        v54 = WdLogNewEntry5_WdAssertion(v14);
        *(_QWORD *)(v54 + 24) = 7392LL;
        WdLogEvent5_WdAssertion(v54);
      }
      v70 = *((_QWORD *)a2 + 288);
      if ( !v70 )
      {
        v55 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v55 + 24) = 7397LL;
        WdLogEvent5_WdError(v55);
        IsVirtualizationDisabledForTarget = -1073741811;
        goto LABEL_72;
      }
      if ( !DXGADAPTER::IsWorkerThreadOfExclusiveOwner((struct _KTHREAD **)a2)
        && !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)a2 + 18)) )
      {
        v57 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v57);
      }
      if ( !*((_QWORD *)a2 + 288) )
      {
        v58 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v58);
      }
      v16 = *(_QWORD *)(*((_QWORD *)a2 + 288) + 96LL);
      if ( v16 )
      {
        if ( v16 == -168 )
        {
          v60 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v60);
        }
        KeAcquireGuardedMutex((PKGUARDED_MUTEX)(v16 + 168));
        v19 = *(__int64 **)(v16 + 128);
        if ( v19 == (__int64 *)(v16 + 128) || !v19 )
          goto LABEL_26;
        v18 = v69;
        while ( *((_DWORD *)v19 + 7) != v69 )
        {
          v19 = (__int64 *)*v19;
          if ( v19 == (__int64 *)(v16 + 128) || !v19 )
            goto LABEL_26;
        }
        if ( *((_DWORD *)v19 + 104) != 1 )
          v19 = (__int64 *)v19[53];
        if ( v19 )
        {
          if ( v16 == -168 )
          {
            v61 = WdLogNewEntry5_WdAssertion(v69);
            WdLogEvent5_WdAssertion(v61);
          }
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v16 + 168));
          if ( *((_DWORD *)v19 + 104) != 1 )
          {
            v62 = WdLogNewEntry5_WdAssertion(v49);
            WdLogEvent5_WdAssertion(v62);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)(v19 + 35), 1u);
          IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled((DXGMONITOR *)v19);
          v51 = (struct _ERESOURCE *)(v19 + 35);
          v26 = IsVirtualModeSuportDisabled;
          ExReleaseResourceLite(v51);
          KeLeaveCriticalRegion();
          v25 = 0;
        }
        else
        {
LABEL_26:
          v20 = WdLogNewEntry5_WdTrace(v18, v17);
          v22 = v69;
          *(_QWORD *)(v20 + 24) = v69;
          *(_QWORD *)(v20 + 32) = v16;
          if ( v16 == -168 )
          {
            v63 = WdLogNewEntry5_WdAssertion(v21);
            WdLogEvent5_WdAssertion(v63);
          }
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v16 + 168));
          v24 = WdLogNewEntry5_WdDmmEvent(v23);
          *(_QWORD *)(v24 + 24) = v22;
          *(_QWORD *)(v24 + 32) = a2;
          WdLogEvent5_WdDmmEvent(v24);
          v25 = -1073741632;
          v26 = 0;
        }
      }
      else
      {
        v59 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v59 + 24) = a2;
        WdLogEvent5_WdError(v59);
        v26 = v65;
        v25 = -1073741811;
      }
      IsVirtualizationDisabledForTarget = 0;
      if ( v25 != -1073741632 )
        IsVirtualizationDisabledForTarget = v25;
      if ( IsVirtualizationDisabledForTarget < 0 )
      {
        v64 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v64 + 24) = IsVirtualizationDisabledForTarget;
        WdLogEvent5_WdAssertion(v64);
        v11 = 1;
      }
      else
      {
        v28 = v26 == 0;
        v11 = 1;
        if ( v28 )
        {
          LOBYTE(v69) = *(_BYTE *)(v70 + 132) == 0;
          LOBYTE(v70) = *(_BYTE *)(v70 + 133) == 0;
        }
        else
        {
          LOBYTE(v69) = 1;
          LOBYTE(v70) = 1;
        }
      }
      v5 = v71;
    }
  }
  else
  {
    IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                          *(struct _LUID *)((char *)a2 + 268),
                                          *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL),
                                          (bool *)&v69,
                                          (bool *)&v70,
                                          0LL,
                                          0LL);
  }
  if ( IsVirtualizationDisabledForTarget >= 0 )
  {
    v66 = 0LL;
    if ( (_BYTE)v69 && (_BYTE)v70 )
      v11 = 0;
    if ( (unsigned int)CCD_TOPOLOGY::AddPathDescriptor(
                         *(CCD_TOPOLOGY **)this,
                         (const struct _LUID *)((char *)a2 + 268),
                         *(_DWORD *)(*((_QWORD *)a3 + 11) + 24LL),
                         *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL),
                         v11,
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL)
                                                                          + 80LL),
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL)
                                                                          + 84LL),
                         &v66,
                         *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 404LL)) == -1073741789 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
      v34[3] = this;
      v34[4] = *(_QWORD *)this;
      v34[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v35 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      if ( v35 )
        v9 = *(_WORD *)(v35 + 22);
      v34[6] = v9;
      v34[7] = *((unsigned __int16 *)this + 4);
      WdLogEvent5_WdWarning(v34);
    }
    else
    {
      v32 = v66;
      *((_DWORD *)v66 + 61) = *((unsigned __int16 *)a3 + 54);
      *((_DWORD *)v32 + 22) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 80LL);
      *((_DWORD *)v32 + 23) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 84LL);
      *(_QWORD *)v32 |= 0x800000000000uLL;
      if ( v5 )
      {
        *(_QWORD *)v32 |= 0x8000000000000000uLL;
        v37 = *((_QWORD *)a3 + 12);
        v38 = *(_QWORD *)(v37 + 104);
        if ( v38 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v38 + 96));
          v39 = *(_QWORD *)(v37 + 104);
          v32 = v66;
        }
        else
        {
          v39 = 0LL;
        }
        v68 = v39;
        v40 = *(_QWORD *)(v39 + 144);
        if ( v40 )
        {
          *((_OWORD *)v32 + 2) = *(_OWORD *)(v40 + 72);
          *((_OWORD *)v32 + 3) = *(_OWORD *)(v40 + 88);
          *((_OWORD *)v32 + 4) = *(_OWORD *)(v40 + 104);
          *((_QWORD *)v32 + 10) = *(_QWORD *)(v40 + 120);
          *(_QWORD *)v32 |= 0x87uLL;
          *((_DWORD *)v32 + 51) = *(_DWORD *)(v40 + 132);
          *((_DWORD *)v32 + 52) = *(_DWORD *)(v40 + 136);
          *(_QWORD *)v32 |= 8uLL;
        }
        else
        {
          *((_DWORD *)v32 + 51) = 0;
          *((_DWORD *)v32 + 52) = 4;
        }
        v41 = *((_QWORD *)a3 + 11);
        v42 = *(_QWORD *)(v41 + 104);
        if ( v42 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v42 + 96));
          v43 = *(_QWORD *)(v41 + 104);
          v32 = v66;
        }
        else
        {
          v43 = 0LL;
        }
        v44 = *(DMMVIDPNSOURCEMODE **)(v43 + 144);
        v67 = v43;
        if ( v44 )
        {
          *((_BYTE *)v32 + 128) = (unsigned int)(*((_DWORD *)v44 + 18) - 3) <= 1;
          *((struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)v32 + 3) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v44);
          *(_QWORD *)v32 |= 0x100uLL;
          v45 = *((_DWORD *)a3 + 29);
          *((_DWORD *)v32 + 33) = v45;
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 64LL) + 24LL) & 2) != 0 )
            *((_DWORD *)v32 + 33) = ADAPTER_DISPLAY::AddingMonitorOrientation(
                                      *((ADAPTER_DISPLAY **)a2 + 288),
                                      v45,
                                      *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL));
          *((_DWORD *)v32 + 34) = *((_DWORD *)a3 + 28);
          *(_QWORD *)v32 |= 0x40000000200uLL;
          if ( a5 )
          {
            SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(
                                 *((ADAPTER_DISPLAY **)a2 + 288),
                                 *((_DWORD *)v32 + 6));
            *((_QWORD *)v32 + 31) = SessionViewOwner;
            v47 = SessionViewOwner;
            if ( SessionViewOwner )
            {
              DwmClipBox = ADAPTER_DISPLAY::GetDwmClipBox(*((DXGADAPTER ***)a2 + 288), *((_DWORD *)v32 + 6));
              *((_DWORD *)v32 + 38) = *((_DWORD *)v47 + 8) - *((_DWORD *)v47 + 6);
              *((_DWORD *)v32 + 39) = *((_DWORD *)v47 + 9) - *((_DWORD *)v47 + 7);
              *((_DWORD *)v32 + 36) = *((_DWORD *)v47 + 6);
              *((_DWORD *)v32 + 37) = *((_DWORD *)v47 + 7);
              *(struct tagRECT *)((char *)v32 + 168) = *DwmClipBox;
              *(_QWORD *)v32 |= 0x820800uLL;
              *(_QWORD *)((char *)v32 + 196) = v47[8];
            }
          }
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v67, 0LL);
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v68, 0LL);
      }
    }
    return 0LL;
  }
LABEL_72:
  v56 = (_QWORD *)WdLogNewEntry5_WdError(v12);
  v56[3] = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
  v56[4] = *((int *)a2 + 68);
  v56[5] = *((unsigned int *)a2 + 67);
  WdLogEvent5_WdError(v56);
  return (unsigned int)IsVirtualizationDisabledForTarget;
}
