/*
 * XREFs of ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00EF8B8
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00A2E80 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00EF7F4 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 * Callees:
 *     ?IsWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEBAEXZ @ 0x1C00061A0 (-IsWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEBAEXZ.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0007400 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0009544 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C000AEB4 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00AAF40 (DxgkIsVirtualizationDisabledForTarget.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00DFF30 (IsVirtualizationDisabledForTarget.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C00E6BB0 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E90A4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@E@Z @ 0x1C00EA3F8 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DXGADAPTER *a2,
        struct DMMVIDPNPRESENTPATH *a3,
        char a4,
        bool a5)
{
  unsigned __int16 v5; // di
  char v10; // r12
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rbx
  _QWORD *v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  DMMVIDPNSOURCEMODE *v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v37; // edx
  int **SessionViewOwner; // rax
  int **v39; // rsi
  const struct tagRECT *DwmClipBox; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  bool v43[8]; // [rsp+50h] [rbp-20h] BYREF
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v44; // [rsp+58h] [rbp-18h] BYREF
  __int64 v45; // [rsp+60h] [rbp-10h] BYREF
  __int64 v46; // [rsp+68h] [rbp-8h] BYREF
  bool v47; // [rsp+A0h] [rbp+30h] BYREF

  v5 = 0;
  v10 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 404LL) )
    return 0LL;
  if ( a4 && !DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(a3, (__int64)a2) )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
    v41[3] = *((int *)a2 + 68);
    v41[4] = *((unsigned int *)a2 + 67);
    v41[5] = *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL);
    v41[6] = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
    v41[7] = *(_QWORD *)(*(_QWORD *)this + 64LL);
    WdLogEvent5_WdAssertion(v41);
    return 0LL;
  }
  ++*((_WORD *)this + 4);
  if ( DXGADAPTER::IsWorkerThreadOfExclusiveOwner((struct _KTHREAD **)a2)
    || ExIsResourceAcquiredSharedLite(*((PERESOURCE *)a2 + 18)) )
  {
    IsVirtualizationDisabledForTarget = ::IsVirtualizationDisabledForTarget(
                                          (__int64)a2,
                                          *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL),
                                          &v47,
                                          v43);
  }
  else
  {
    IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                          *(struct _LUID *)((char *)a2 + 268),
                                          *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL),
                                          (__int64)&v47,
                                          (__int64)v43,
                                          0LL,
                                          0LL);
  }
  v14 = IsVirtualizationDisabledForTarget;
  if ( IsVirtualizationDisabledForTarget >= 0 )
  {
    v44 = 0LL;
    if ( v47 && v43[0] )
      v10 = 0;
    if ( (unsigned int)CCD_TOPOLOGY::AddPathDescriptor(
                         *(CCD_TOPOLOGY **)this,
                         (const struct _LUID *)((char *)a2 + 268),
                         *(_DWORD *)(*((_QWORD *)a3 + 11) + 24LL),
                         *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL),
                         v10,
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL)
                                                                          + 80LL),
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL)
                                                                          + 84LL),
                         &v44,
                         *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 404LL)) == -1073741789 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
      v21[3] = this;
      v21[4] = *(_QWORD *)this;
      v21[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v22 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      if ( v22 )
        v5 = *(_WORD *)(v22 + 22);
      v21[6] = v5;
      v21[7] = *((unsigned __int16 *)this + 4);
      WdLogEvent5_WdWarning(v21);
    }
    else
    {
      v19 = v44;
      *((_DWORD *)v44 + 53) = *((unsigned __int16 *)a3 + 54);
      *((_DWORD *)v19 + 22) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 80LL);
      *((_DWORD *)v19 + 23) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 84LL);
      *(_QWORD *)v19 |= 0x800000000000uLL;
      if ( a4 )
      {
        *(_QWORD *)v19 |= 0x8000000000000000uLL;
        v27 = *((_QWORD *)a3 + 12);
        v28 = *(_QWORD *)(v27 + 104);
        if ( v28 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v28 + 96));
          v29 = *(_QWORD *)(v27 + 104);
          v19 = v44;
        }
        else
        {
          v29 = 0LL;
        }
        v46 = v29;
        v30 = *(_QWORD *)(v29 + 144);
        if ( v30 )
        {
          *((_OWORD *)v19 + 2) = *(_OWORD *)(v30 + 72);
          *((_OWORD *)v19 + 3) = *(_OWORD *)(v30 + 88);
          *((_OWORD *)v19 + 4) = *(_OWORD *)(v30 + 104);
          *((_QWORD *)v19 + 10) = *(_QWORD *)(v30 + 120);
          *(_QWORD *)v19 |= 0x87uLL;
          *((_DWORD *)v19 + 63) = *(_DWORD *)(v30 + 132);
          *((_DWORD *)v19 + 64) = *(_DWORD *)(v30 + 136);
          *(_QWORD *)v19 |= 8uLL;
        }
        else
        {
          *((_DWORD *)v19 + 63) = 0;
          *((_DWORD *)v19 + 64) = 4;
        }
        v31 = *((_QWORD *)a3 + 11);
        v32 = *(_QWORD *)(v31 + 104);
        if ( v32 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v32 + 96));
          v33 = *(_QWORD *)(v31 + 104);
          v19 = v44;
        }
        else
        {
          v33 = 0LL;
        }
        v34 = *(DMMVIDPNSOURCEMODE **)(v33 + 144);
        v45 = v33;
        if ( v34 )
        {
          *((_BYTE *)v19 + 128) = (unsigned int)(*((_DWORD *)v34 + 18) - 3) <= 1;
          *((struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)v19 + 3) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(
                                                                       v34,
                                                                       v15,
                                                                       v17,
                                                                       v18);
          *(_QWORD *)v19 |= 0x100uLL;
          v37 = *((_DWORD *)a3 + 29);
          *((_DWORD *)v19 + 33) = v37;
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 64LL) + 24LL) & 2) != 0 )
            *((_DWORD *)v19 + 33) = ADAPTER_DISPLAY::AddingMonitorOrientation(
                                      *((DXGADAPTER ***)a2 + 285),
                                      v37,
                                      *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL));
          *((_DWORD *)v19 + 34) = *((_DWORD *)a3 + 28);
          *(_QWORD *)v19 |= 0x40000000200uLL;
          if ( a5 )
          {
            SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(
                                 *((ADAPTER_DISPLAY **)a2 + 285),
                                 *((unsigned int *)v19 + 6),
                                 v35,
                                 v36);
            *((_QWORD *)v19 + 27) = SessionViewOwner;
            v39 = SessionViewOwner;
            if ( SessionViewOwner )
            {
              DwmClipBox = ADAPTER_DISPLAY::GetDwmClipBox(*((DXGADAPTER ***)a2 + 285), *((_DWORD *)v19 + 6));
              *((_DWORD *)v19 + 38) = *((_DWORD *)v39 + 8) - *((_DWORD *)v39 + 6);
              *((_DWORD *)v19 + 39) = *((_DWORD *)v39 + 9) - *((_DWORD *)v39 + 7);
              *((_DWORD *)v19 + 36) = *((_DWORD *)v39 + 6);
              *((_DWORD *)v19 + 37) = *((_DWORD *)v39 + 7);
              *(struct tagRECT *)((char *)v19 + 168) = *DwmClipBox;
              *(_QWORD *)v19 |= 0x820800uLL;
              *(_QWORD *)((char *)v19 + 244) = v39[8];
            }
          }
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v45, 0LL);
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v46, 0LL);
      }
    }
    return 0LL;
  }
  v42 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
  v42[3] = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
  v42[4] = *((int *)a2 + 68);
  v42[5] = *((unsigned int *)a2 + 67);
  WdLogEvent5_WdError(v42);
  return v14;
}
