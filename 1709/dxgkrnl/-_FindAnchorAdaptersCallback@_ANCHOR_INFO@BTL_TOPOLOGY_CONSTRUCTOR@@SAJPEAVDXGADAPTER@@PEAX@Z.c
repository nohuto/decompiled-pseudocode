/*
 * XREFs of ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B2160
 * Callers:
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_1_ @ 0x1C00B6960 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_ANCHOR_INFO--_FindAnchorAdaptersCallback_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00A42F8 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00A45F0 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A56CC (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5730 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A80A8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8950 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8A58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00B076C (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ @ 0x1C00D83C0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ.c)
 *     ?_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C00E0E40 (-_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_ADAPTER_PREFERENCE@12@AEBVD.c)
 *     ?_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_POST_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C00F84C0 (-_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_POST_ADAPTER_PREFERENCE.c)
 *     ?_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01FBBD4 (-_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@.c)
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C01FBC18 (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(
        struct DXGADAPTER *this,
        _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rbx
  unsigned int v14; // r12d
  __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // rcx
  void (__fastcall ***v18)(_QWORD, __int64); // rcx
  int v19; // ebx
  __int64 v21; // rcx
  unsigned int PathSourceFromTarget; // eax
  struct DMMVIDPNTOPOLOGY *v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct _FAST_MUTEX *v27; // rcx
  int MonitorInstance; // eax
  struct DXGMONITOR *v29; // r13
  int PostAdapterPreference; // eax
  DMMVIDPNTOPOLOGY *v31; // rdx
  __int64 v32; // r9
  unsigned int v33; // edx
  DMMVIDPNTOPOLOGY *v34; // r12
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  int VmtPreference; // eax
  int v40; // edx
  __int64 v41; // r9
  unsigned int v42; // eax
  bool v43; // al
  int VotPreference; // eax
  __int64 v45; // r9
  int v46; // edi
  int v47; // eax
  int v48; // r10d
  int v49; // r11d
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // [rsp+20h] [rbp-79h]
  unsigned int v61; // [rsp+40h] [rbp-59h] BYREF
  DMMVIDPNTOPOLOGY *v62; // [rsp+48h] [rbp-51h]
  int v63; // [rsp+50h] [rbp-49h]
  __int64 v64; // [rsp+58h] [rbp-41h] BYREF
  __int64 v65; // [rsp+60h] [rbp-39h] BYREF
  DMMVIDPNTOPOLOGY *v66; // [rsp+68h] [rbp-31h]
  struct DXGMONITOR *v67; // [rsp+70h] [rbp-29h] BYREF
  __int64 v68; // [rsp+78h] [rbp-21h]
  __int64 v69; // [rsp+80h] [rbp-19h]
  __int64 v70; // [rsp+88h] [rbp-11h]
  _QWORD v71[2]; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v72[80]; // [rsp+A0h] [rbp+7h] BYREF
  unsigned __int8 IsVirtualModeSuportDisabled; // [rsp+108h] [rbp+6Fh]
  bool v74; // [rsp+110h] [rbp+77h]
  bool v75; // [rsp+118h] [rbp+7Fh]

  v63 = ((__int64 (*)(void))BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference)();
  if ( v63 < *(_DWORD *)(v5 + 36) )
    return 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 2304) + 88LL);
  v69 = v6;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v71, v6);
  v7 = *((_QWORD *)this + 288);
  v65 = 0LL;
  v66 = 0LL;
  if ( *(_BYTE *)(v7 + 133)
    && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn((const struct DMMVIDPN **)v6, &v65) >= 0 )
  {
    v9 = v65;
    if ( !v65 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v37);
    }
    v66 = (DMMVIDPNTOPOLOGY *)(v9 + 96);
  }
  v64 = 0LL;
  v10 = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)v6, &v64);
  v12 = v10;
  if ( v10 < 0 || (v62 = (DMMVIDPNTOPOLOGY *)(v64 + 96), v64 == -96) )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v38[3] = v12;
    v38[4] = this;
    v38[5] = *((int *)this + 68);
    v38[6] = *((unsigned int *)this + 67);
    v38[7] = a2;
    goto LABEL_93;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 80) + 72LL));
  v13 = *(_QWORD *)(v6 + 80);
  v14 = 0;
  v68 = v13;
  v71[1] = v13;
  v15 = *(_QWORD *)(v13 + 24);
  if ( v15 == v13 + 24 || (v16 = v15 - 8) == 0 )
  {
LABEL_15:
    LODWORD(v12) = 0;
    goto LABEL_16;
  }
  while ( 1 )
  {
    if ( !DMMVIDEOPRESENTTARGET::IsMonitorConnected((DMMVIDEOPRESENTTARGET *)v16, (enum _DMM_VIDPN_MONITOR_TYPE *)&v61)
      || *(_BYTE *)(v16 + 404) )
    {
      goto LABEL_12;
    }
    if ( a2[9] < (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference(this) )
      goto LABEL_22;
    BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(v61);
    VmtPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference((unsigned int)a2[8]);
    if ( v40 == VmtPreference )
    {
      if ( *(_BYTE *)(v16 + 405) )
      {
        if ( !*((_BYTE *)a2 + 49) )
          goto LABEL_12;
      }
      else if ( *((_BYTE *)a2 + 49) )
      {
        goto LABEL_22;
      }
      if ( *a2 == *((_DWORD *)this + 67)
        && a2[1] == *((_DWORD *)this + 68)
        && (v42 = *(_DWORD *)(v16 + 116), v21 = (unsigned int)a2[7], v42 != (_DWORD)v21) )
      {
        v43 = v42 < (unsigned int)v21;
      }
      else
      {
        LOBYTE(v41) = 1;
        VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                          this,
                          *(unsigned int *)(v16 + 84),
                          *(unsigned int *)(v16 + 88),
                          v41);
        LOBYTE(v45) = 1;
        v46 = VotPreference;
        v47 = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(this, (unsigned int)a2[5], (unsigned int)a2[6], v45);
        if ( v46 == v47 )
        {
          if ( v48 == v49 && a2[1] == *((_DWORD *)this + 68) )
            goto LABEL_12;
          if ( (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(this) < a2[11] )
            goto LABEL_22;
          v43 = 0;
        }
        else
        {
          v43 = v46 < v47;
        }
      }
      if ( !v43 )
        goto LABEL_12;
    }
    else if ( v40 >= VmtPreference )
    {
      goto LABEL_12;
    }
LABEL_22:
    if ( v66 )
    {
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v66, *(unsigned int *)(v16 + 24));
      v23 = v62;
      v14 = PathSourceFromTarget;
      if ( PathSourceFromTarget != -1
        && (int)VIDPN_MGR::AddPathToVidPnTopology(
                  (VIDPN_MGR *)v6,
                  v62,
                  PathSourceFromTarget,
                  *(_DWORD *)(v16 + 24),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  0xFFFFu,
                  0,
                  D3DKMDT_MCC_IGNORE) >= 0 )
      {
        goto LABEL_25;
      }
      v14 = 0;
    }
    else
    {
      v23 = v62;
    }
    if ( *(_DWORD *)(*((_QWORD *)this + 288) + 80LL) )
    {
      do
      {
        if ( (int)VIDPN_MGR::AddPathToVidPnTopology(
                    (VIDPN_MGR *)v6,
                    v23,
                    v14,
                    *(_DWORD *)(v16 + 24),
                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                    0xFFFFu,
                    0,
                    D3DKMDT_MCC_IGNORE) >= 0 )
          break;
        ++v14;
      }
      while ( v14 < *(_DWORD *)(*((_QWORD *)this + 288) + 80LL) );
      v13 = v68;
    }
LABEL_25:
    v24 = *(unsigned int *)(v16 + 24);
    if ( (_DWORD)v24 != -1 )
      break;
    LODWORD(v12) = -1073741811;
LABEL_48:
    if ( (int)v12 < 0 )
      goto LABEL_89;
    *(_QWORD *)a2 = *(_QWORD *)((char *)this + 268);
    a2[2] = v14;
    a2[3] = *(_DWORD *)(v16 + 24);
    a2[4] = *(_DWORD *)(v16 + 80);
    a2[5] = *(_DWORD *)(v16 + 84);
    a2[6] = *(_DWORD *)(v16 + 88);
    a2[7] = *(_DWORD *)(v16 + 116);
    a2[8] = v61;
    a2[9] = v63;
    *((_BYTE *)a2 + 40) = *(_BYTE *)(v16 + 397);
    PostAdapterPreference = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(this);
    v31 = v62;
    a2[11] = PostAdapterPreference;
    *((_BYTE *)a2 + 41) = !v74;
    *((_BYTE *)a2 + 48) = !v75;
    *((_BYTE *)a2 + 49) = *(_BYTE *)(v16 + 405);
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v72, (__int64)v31 + 56, 2u, v32, v60, 255LL);
    v33 = v14;
    v34 = v62;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v62, v33, *(_DWORD *)(v16 + 24), 0LL) < 0 || *((_QWORD *)v34 + 5) )
    {
      v57 = WdLogNewEntry5_WdAssertion(v35);
      WdLogEvent5_WdAssertion(v57);
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v72);
    v14 = 0;
LABEL_12:
    v17 = *(_QWORD *)(v16 + 8);
    v16 = v17 - 8;
    if ( v17 == v13 + 24 )
      v16 = 0LL;
    if ( !v16 )
      goto LABEL_15;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v50 = WdLogNewEntry5_WdAssertion(v25);
    *(_QWORD *)(v50 + 24) = 7392LL;
    WdLogEvent5_WdAssertion(v50);
  }
  v70 = *((_QWORD *)this + 288);
  if ( v70 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v51 = WdLogNewEntry5_WdAssertion(v26);
      WdLogEvent5_WdAssertion(v51);
    }
    if ( !*((_QWORD *)this + 288) )
    {
      v52 = WdLogNewEntry5_WdAssertion(v26);
      WdLogEvent5_WdAssertion(v52);
    }
    v27 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 288) + 96LL);
    if ( !v27 )
    {
      v53 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v53 + 24) = this;
      WdLogEvent5_WdError(v53);
      MonitorInstance = -1073741811;
      goto LABEL_42;
    }
    v67 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v27, v24, 1, (ULONG **)&v67);
    if ( MonitorInstance == -1073741275 )
    {
      v36 = WdLogNewEntry5_WdDmmEvent(v21);
      *(_QWORD *)(v36 + 24) = v24;
      *(_QWORD *)(v36 + 32) = this;
      WdLogEvent5_WdDmmEvent(v36);
      MonitorInstance = -1073741632;
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v29 = v67;
        if ( !v67 || *((_DWORD *)v67 + 104) != 1 )
        {
          v54 = WdLogNewEntry5_WdAssertion(v21);
          WdLogEvent5_WdAssertion(v54);
        }
        if ( !v29 )
        {
          v55 = WdLogNewEntry5_WdAssertion(v21);
          WdLogEvent5_WdAssertion(v55);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v29 + 280), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v29);
        ExReleaseResourceLite((PERESOURCE)((char *)v29 + 280));
        KeLeaveCriticalRegion();
        v6 = v69;
        MonitorInstance = 0;
      }
      if ( MonitorInstance != -1073741632 )
      {
LABEL_42:
        LOBYTE(v21) = IsVirtualModeSuportDisabled;
LABEL_43:
        LODWORD(v12) = 0;
        if ( MonitorInstance != -1073741632 )
          LODWORD(v12) = MonitorInstance;
        if ( (int)v12 < 0 )
        {
          v56 = WdLogNewEntry5_WdAssertion(v21);
          *(_QWORD *)(v56 + 24) = (int)v12;
          WdLogEvent5_WdAssertion(v56);
        }
        else if ( (_BYTE)v21 )
        {
          v74 = 1;
          v75 = 1;
        }
        else
        {
          v74 = *(_BYTE *)(v70 + 132) == 0;
          v75 = *(_BYTE *)(v70 + 133) == 0;
        }
        goto LABEL_48;
      }
    }
    LOBYTE(v21) = 0;
    IsVirtualModeSuportDisabled = 0;
    goto LABEL_43;
  }
  v58 = WdLogNewEntry5_WdError(v25);
  *(_QWORD *)(v58 + 24) = 7397LL;
  WdLogEvent5_WdError(v58);
  LODWORD(v12) = -1073741811;
LABEL_89:
  v59 = (_QWORD *)WdLogNewEntry5_WdError(v21);
  v59[3] = *(unsigned int *)(v16 + 24);
  v59[4] = *((int *)this + 68);
  v59[5] = *((unsigned int *)this + 67);
  WdLogEvent5_WdError(v59);
LABEL_16:
  if ( v13 )
  {
    v18 = (void (__fastcall ***)(_QWORD, __int64))(v13 + 64);
    v19 = _InterlockedDecrement((volatile signed __int32 *)(v13 + 72));
    if ( v19 )
    {
      if ( v19 >= 0 )
        goto LABEL_19;
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v38[3] = v19;
LABEL_93:
      WdLogEvent5_WdError(v38);
    }
    else if ( v18 )
    {
      (**v18)(v18, 1LL);
    }
  }
LABEL_19:
  auto_rc<DMMVIDPN>::reset(&v64, 0LL);
  auto_rc<DMMVIDPN>::reset(&v65, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v71[0] + 40LL));
  return (unsigned int)v12;
}
