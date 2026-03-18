/*
 * XREFs of ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00AF75C
 * Callers:
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_1_ @ 0x1C00ADD70 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_ANCHOR_INFO--_FindAnchorAdaptersCallback_.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0002E20 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_POST_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C00AFA10 (-_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_POST_ADAPTER_PREFERENCE.c)
 *     ?_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C00AFAE4 (-_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_ADAPTER_PREFERENCE@12@AEBVD.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00B7644 (IsVirtualizationDisabledForTarget.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00B9938 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA1BC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA2C4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00BA524 (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00BB648 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00BB6AC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00BBE40 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BBE98 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C022954C (-_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@.c)
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C0229590 (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(
        struct DXGADAPTER *this,
        _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  struct VIDPN_MGR *v6; // r13
  __int64 v7; // rax
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rsi
  __int64 v9; // rcx
  int ClientVidPn; // eax
  __int64 v11; // rcx
  __int64 v12; // r15
  _QWORD *v13; // rbx
  _QWORD *v14; // rcx
  struct DMMVIDPNTOPOLOGY *v16; // r15
  unsigned int PathSourceFromTarget; // r12d
  __int64 v18; // rcx
  int PostAdapterPreference; // eax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rax
  int VmtPreference; // eax
  int v25; // edx
  __int64 v26; // r9
  char v27; // al
  unsigned int v28; // eax
  unsigned int v29; // ecx
  bool v30; // al
  int VotPreference; // eax
  __int64 v32; // r9
  int v33; // r15d
  int v34; // eax
  int v35; // r10d
  int v36; // r11d
  __int64 v37; // rax
  _QWORD *v38; // rax
  DMMVIDPNTOPOLOGY *v39; // [rsp+40h] [rbp-29h]
  int v40; // [rsp+48h] [rbp-21h]
  __int64 v41; // [rsp+50h] [rbp-19h] BYREF
  __int64 v42; // [rsp+58h] [rbp-11h] BYREF
  DMMVIDPNTOPOLOGY *v43; // [rsp+60h] [rbp-9h]
  _QWORD *v44; // [rsp+68h] [rbp-1h]
  __int64 v45; // [rsp+70h] [rbp+7h] BYREF
  _BYTE v46[72]; // [rsp+78h] [rbp+Fh] BYREF
  char v47; // [rsp+D8h] [rbp+6Fh]
  char v48; // [rsp+E0h] [rbp+77h]
  unsigned int v49; // [rsp+E8h] [rbp+7Fh] BYREF

  v40 = ((__int64 (*)(void))BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference)();
  if ( v40 < *(_DWORD *)(v5 + 36) )
    return 0LL;
  v6 = *(struct VIDPN_MGR **)(*(_QWORD *)(v4 + 2456) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v45, (__int64)v6);
  v7 = *((_QWORD *)this + 307);
  NextTarget = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  if ( *(_BYTE *)(v7 + 133) && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v6) >= 0 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v22);
    v43 = (DMMVIDPNTOPOLOGY *)96;
  }
  v41 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v6);
  v12 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v23[3] = v12;
    v23[4] = this;
    v23[5] = *((int *)this + 68);
    v23[6] = *((unsigned int *)this + 67);
    v23[7] = a2;
    WdLogEvent5_WdError(v23);
    goto LABEL_13;
  }
  v39 = (DMMVIDPNTOPOLOGY *)(v41 + 96);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 10) + 72LL));
  v13 = (_QWORD *)*((_QWORD *)v6 + 10);
  v44 = v13;
  v14 = (_QWORD *)v13[3];
  if ( v14 != v13 + 3 )
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v14 - 1);
  if ( !NextTarget )
  {
LABEL_11:
    LODWORD(v12) = 0;
    goto LABEL_12;
  }
  while ( 1 )
  {
    if ( !DMMVIDEOPRESENTTARGET::IsMonitorConnected(NextTarget, (enum _DMM_VIDPN_MONITOR_TYPE *)&v49)
      || *((_DWORD *)NextTarget + 22) )
    {
      goto LABEL_10;
    }
    if ( a2[9] < (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference(this) )
      break;
    BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(v49);
    VmtPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference((unsigned int)a2[8]);
    if ( v25 != VmtPreference )
    {
      if ( v25 < VmtPreference )
        break;
      goto LABEL_10;
    }
    v27 = *((_BYTE *)a2 + 49);
    if ( *((_BYTE *)NextTarget + 404) )
    {
      if ( !v27 )
        goto LABEL_10;
    }
    else if ( v27 )
    {
      break;
    }
    if ( *a2 == *((_DWORD *)this + 67)
      && a2[1] == *((_DWORD *)this + 68)
      && (v28 = *((_DWORD *)NextTarget + 29), v29 = a2[7], v28 != v29) )
    {
      v30 = v28 < v29;
    }
    else
    {
      LOBYTE(v26) = 1;
      VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                        this,
                        *((unsigned int *)NextTarget + 21),
                        *((unsigned int *)NextTarget + 23),
                        v26);
      LOBYTE(v32) = 1;
      v33 = VotPreference;
      v34 = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(this, (unsigned int)a2[5], (unsigned int)a2[6], v32);
      if ( v33 == v34 )
      {
        if ( v35 == v36 && a2[1] == *((_DWORD *)this + 68) )
          goto LABEL_10;
        if ( (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(this) < a2[11] )
          break;
        v30 = 0;
      }
      else
      {
        v30 = v33 < v34;
      }
    }
    if ( v30 )
      break;
LABEL_10:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v13, NextTarget);
    if ( !NextTarget )
      goto LABEL_11;
  }
  if ( v43 )
  {
    v16 = v39;
    PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v43, *((_DWORD *)NextTarget + 6));
    if ( PathSourceFromTarget != -1
      && (int)VIDPN_MGR::AddPathToVidPnTopology(
                v6,
                v39,
                PathSourceFromTarget,
                *((_DWORD *)NextTarget + 6),
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                0xFFFFu,
                0,
                D3DKMDT_MCC_IGNORE) >= 0 )
    {
      goto LABEL_19;
    }
  }
  else
  {
    v16 = v39;
  }
  PathSourceFromTarget = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 307) + 80LL) )
  {
    do
    {
      if ( (int)VIDPN_MGR::AddPathToVidPnTopology(
                  v6,
                  v16,
                  PathSourceFromTarget,
                  *((_DWORD *)NextTarget + 6),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  0xFFFFu,
                  0,
                  D3DKMDT_MCC_IGNORE) >= 0 )
        break;
      ++PathSourceFromTarget;
    }
    while ( PathSourceFromTarget < *(_DWORD *)(*((_QWORD *)this + 307) + 80LL) );
    v13 = v44;
  }
LABEL_19:
  LODWORD(v12) = IsVirtualizationDisabledForTarget(this, *((_DWORD *)NextTarget + 6));
  if ( (int)v12 >= 0 )
  {
    *(_QWORD *)a2 = *(_QWORD *)((char *)this + 268);
    a2[2] = PathSourceFromTarget;
    a2[3] = *((_DWORD *)NextTarget + 6);
    a2[4] = *((_DWORD *)NextTarget + 20);
    a2[5] = *((_DWORD *)NextTarget + 21);
    a2[6] = *((_DWORD *)NextTarget + 23);
    a2[7] = *((_DWORD *)NextTarget + 29);
    a2[8] = v49;
    a2[9] = v40;
    *((_BYTE *)a2 + 40) = *((_BYTE *)NextTarget + 397);
    PostAdapterPreference = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(this);
    LOBYTE(v20) = 2;
    a2[11] = PostAdapterPreference;
    *((_BYTE *)a2 + 41) = v47 == 0;
    *((_BYTE *)a2 + 48) = v48 == 0;
    *((_BYTE *)a2 + 49) = *((_BYTE *)NextTarget + 404);
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v46, (char *)v39 + 56, v20);
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v39, PathSourceFromTarget, *((_DWORD *)NextTarget + 6), 0LL) < 0
      || *((_QWORD *)v39 + 5) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v37);
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v46);
    goto LABEL_10;
  }
  v38 = (_QWORD *)WdLogNewEntry5_WdError(v18);
  v38[3] = *((unsigned int *)NextTarget + 6);
  v38[4] = *((int *)this + 68);
  v38[5] = *((unsigned int *)this + 67);
  WdLogEvent5_WdError(v38);
LABEL_12:
  ReferenceCounted::Release((ReferenceCounted *)(v13 + 8));
LABEL_13:
  auto_rc<DMMVIDPN>::reset(&v41, 0LL);
  auto_rc<DMMVIDPN>::reset(&v42, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v45 + 40));
  return (unsigned int)v12;
}
