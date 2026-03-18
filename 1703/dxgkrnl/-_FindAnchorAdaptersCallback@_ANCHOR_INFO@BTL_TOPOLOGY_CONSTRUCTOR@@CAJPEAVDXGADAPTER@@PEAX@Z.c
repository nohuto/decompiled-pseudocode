/*
 * XREFs of ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F00F4
 * Callers:
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_1_ @ 0x1C00F0040 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_ANCHOR_INFO--_FindAnchorAdaptersCallback_.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00DFF30 (IsVirtualizationDisabledForTarget.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E0178 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E01DC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E0D48 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E1044 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E42D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4CB4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4DBC (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     MonitorGetMonitorType @ 0x1C00F0468 (MonitorGetMonitorType.c)
 *     ?_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_POST_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C00F051C (-_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_POST_ADAPTER_PREFERENCE.c)
 *     ?_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C00F05F0 (-_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_ADAPTER_PREFERENCE@12@AEBVD.c)
 *     ?_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01E17F4 (-_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@.c)
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C01E1838 (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(
        struct DXGADAPTER *a1,
        _BYTE *a2)
{
  _BYTE *v2; // r14
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct HDXGMONITOR__ *v20; // r15
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v28; // r12
  DXGADAPTER *v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // edx
  unsigned int PathSourceFromTarget; // r12d
  struct DMMVIDPNTOPOLOGY *v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  bool v38; // zf
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  int VmtPreference; // eax
  unsigned int v50; // eax
  unsigned int v51; // ecx
  bool v52; // al
  int VotPreference; // eax
  __int64 v54; // r9
  int v55; // r15d
  int v56; // eax
  int v57; // r10d
  int v58; // r11d
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // [rsp+20h] [rbp-59h]
  DMMVIDPNTOPOLOGY *v62; // [rsp+48h] [rbp-31h]
  int MonitorType; // [rsp+50h] [rbp-29h]
  int v64; // [rsp+54h] [rbp-25h]
  __int64 v65; // [rsp+58h] [rbp-21h] BYREF
  __int64 v66; // [rsp+60h] [rbp-19h] BYREF
  DMMVIDPNTOPOLOGY *v67; // [rsp+68h] [rbp-11h]
  __int64 v68; // [rsp+70h] [rbp-9h]
  __int64 v69; // [rsp+78h] [rbp-1h] BYREF
  _BYTE v70[80]; // [rsp+80h] [rbp+7h] BYREF
  bool v72; // [rsp+F0h] [rbp+77h] BYREF
  bool v73; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = a2;
  v64 = ((__int64 (*)(void))BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference)();
  if ( v64 < *(_DWORD *)(v7 + 36) )
    return 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)(v4 + 2280) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v69, v8, v5, v6);
  v11 = *((_QWORD *)a1 + 285);
  v66 = 0LL;
  v67 = 0LL;
  if ( *(_BYTE *)(v11 + 134)
    && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn((const struct DMMVIDPN **)v8, &v66, v9, v10) >= 0 )
  {
    v14 = v66;
    if ( !v66 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v13, v12, v9, v10);
      WdLogEvent5_WdAssertion(v44);
    }
    v67 = (DMMVIDPNTOPOLOGY *)(v14 + 96);
  }
  v65 = 0LL;
  v15 = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)v8, &v65, v9, v10);
  v20 = (struct HDXGMONITOR__ *)v15;
  if ( v15 < 0 || (v62 = (DMMVIDPNTOPOLOGY *)(v65 + 96), v65 == -96) )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v45[3] = v20;
    v45[4] = a1;
    v45[5] = *((int *)a1 + 68);
    v45[6] = *((unsigned int *)a1 + 67);
    v45[7] = v2;
    WdLogEvent5_WdError(v45);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 80) + 72LL));
    v21 = *(_QWORD *)(v8 + 80);
    LODWORD(v20) = 0;
    v68 = v21;
    v22 = *(_QWORD *)(v21 + 24);
    if ( v22 != v21 + 24 )
    {
      v23 = v22 - 8;
      while ( v23 )
      {
        v20 = *(struct HDXGMONITOR__ **)(v23 + 104);
        if ( !v20 )
        {
LABEL_12:
          LODWORD(v20) = 0;
          goto LABEL_13;
        }
        if ( !*(_QWORD *)(v23 + 40) )
        {
          v46 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
          WdLogEvent5_WdAssertion(v46);
        }
        v28 = *(_QWORD *)(*(_QWORD *)(v23 + 40) + 88LL);
        if ( !*(_QWORD *)(v28 + 8) )
        {
          v47 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
          WdLogEvent5_WdAssertion(v47);
        }
        v29 = *(DXGADAPTER **)(*(_QWORD *)(v28 + 8) + 16LL);
        MonitorType = MonitorGetMonitorType(v29, v20);
        if ( MonitorType < 0 )
        {
          v48 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
          v48[5] = MonitorType;
          v48[3] = v20;
          v48[4] = v29;
          WdLogEvent5_WdError(v48);
          LODWORD(v20) = 0;
          v16 = 0LL;
        }
        else
        {
          v16 = 0LL;
          LODWORD(v20) = 0;
        }
        if ( *(_BYTE *)(v23 + 404) )
          goto LABEL_13;
        if ( *((_DWORD *)v2 + 9) >= (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference(a1) )
        {
          BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(v32);
          VmtPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(*((unsigned int *)v2 + 8));
          if ( (_DWORD)v16 != VmtPreference )
          {
            if ( (int)v16 >= VmtPreference )
              goto LABEL_13;
            goto LABEL_27;
          }
          if ( *(_BYTE *)(v23 + 405) )
          {
            if ( !v2[49] )
              goto LABEL_13;
          }
          else if ( v2[49] )
          {
            goto LABEL_27;
          }
          if ( *(_DWORD *)v2 == *((_DWORD *)a1 + 67) && *((_DWORD *)v2 + 1) == *((_DWORD *)a1 + 68) )
          {
            v50 = *(_DWORD *)(v23 + 116);
            v51 = *((_DWORD *)v2 + 7);
            if ( v50 != v51 )
            {
              v52 = v50 < v51;
              goto LABEL_58;
            }
          }
          LOBYTE(v19) = 1;
          VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                            a1,
                            *(unsigned int *)(v23 + 84),
                            *(unsigned int *)(v23 + 88),
                            v19);
          LOBYTE(v54) = 1;
          v55 = VotPreference;
          v56 = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                  a1,
                  *((unsigned int *)v2 + 5),
                  *((unsigned int *)v2 + 6),
                  v54);
          if ( v55 != v56 )
          {
            v52 = v55 < v56;
            LODWORD(v20) = 0;
            goto LABEL_58;
          }
          if ( v57 == v58 && *((_DWORD *)v2 + 1) == *((_DWORD *)a1 + 68) )
            goto LABEL_12;
          LODWORD(v20) = 0;
          if ( (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(a1) >= *((_DWORD *)v2 + 11) )
          {
            v52 = 0;
LABEL_58:
            if ( !v52 )
              goto LABEL_13;
          }
        }
LABEL_27:
        if ( !v67
          || (PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v67, *(_DWORD *)(v23 + 24), v18, v19),
              PathSourceFromTarget == -1) )
        {
          v34 = v62;
LABEL_35:
          PathSourceFromTarget = 0;
          if ( *(_DWORD *)(*((_QWORD *)a1 + 285) + 80LL) )
          {
            do
            {
              if ( (int)VIDPN_MGR::AddPathToVidPnTopology(
                          (VIDPN_MGR *)v8,
                          v34,
                          PathSourceFromTarget,
                          *(unsigned int *)(v23 + 24),
                          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                          0xFFFFu,
                          0,
                          D3DKMDT_MCC_IGNORE) >= 0 )
                break;
              ++PathSourceFromTarget;
            }
            while ( PathSourceFromTarget < *(_DWORD *)(*((_QWORD *)a1 + 285) + 80LL) );
            v21 = v68;
            v2 = a2;
          }
          goto LABEL_30;
        }
        v34 = v62;
        if ( (int)VIDPN_MGR::AddPathToVidPnTopology(
                    (VIDPN_MGR *)v8,
                    v62,
                    PathSourceFromTarget,
                    *(unsigned int *)(v23 + 24),
                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                    0xFFFFu,
                    0,
                    D3DKMDT_MCC_IGNORE) < 0 )
          goto LABEL_35;
LABEL_30:
        LODWORD(v20) = IsVirtualizationDisabledForTarget((__int64)a1, *(unsigned int *)(v23 + 24), &v72, &v73);
        if ( (int)v20 < 0 )
        {
          v60 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
          v60[3] = *(unsigned int *)(v23 + 24);
          v60[4] = *((int *)a1 + 68);
          v60[5] = *((unsigned int *)a1 + 67);
          WdLogEvent5_WdError(v60);
          break;
        }
        *(_QWORD *)v2 = *(_QWORD *)((char *)a1 + 268);
        *((_DWORD *)v2 + 2) = PathSourceFromTarget;
        *((_DWORD *)v2 + 3) = *(_DWORD *)(v23 + 24);
        *((_DWORD *)v2 + 4) = *(_DWORD *)(v23 + 80);
        *((_DWORD *)v2 + 5) = *(_DWORD *)(v23 + 84);
        *((_DWORD *)v2 + 6) = *(_DWORD *)(v23 + 88);
        *((_DWORD *)v2 + 7) = *(_DWORD *)(v23 + 116);
        *((_DWORD *)v2 + 8) = 0;
        *((_DWORD *)v2 + 9) = v64;
        v2[40] = *(_BYTE *)(v23 + 397);
        *((_DWORD *)v2 + 11) = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(a1);
        LODWORD(v20) = 0;
        LOBYTE(v37) = 2;
        v38 = !v73;
        v2[41] = !v72;
        v2[48] = v38;
        v2[49] = *(_BYTE *)(v23 + 405);
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v70,
          (__int64)v62 + 56,
          v37,
          v39,
          v61,
          255LL);
        if ( (int)DMMVIDPNTOPOLOGY::RemovePath(
                    (char **)v62,
                    (char *)PathSourceFromTarget,
                    *(unsigned int *)(v23 + 24),
                    0LL) < 0
          || *((_QWORD *)v62 + 5) )
        {
          v59 = WdLogNewEntry5_WdAssertion(v41, v40, v42, v43);
          WdLogEvent5_WdAssertion(v59);
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
          (ApplyPermissionWithinThisScope *)v70,
          v40,
          v42,
          v43);
LABEL_13:
        v17 = *(_QWORD *)(v23 + 8);
        v23 = v17 - 8;
        if ( v17 == v21 + 24 )
          v23 = 0LL;
      }
    }
    if ( v21 )
      ReferenceCounted::Release((ReferenceCounted *)(v21 + 64), v16);
  }
  auto_rc<DMMVIDPN>::reset(&v65, 0LL);
  auto_rc<DMMVIDPN>::reset(&v66, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v69 + 40), v24, v25, v26);
  return (unsigned int)v20;
}
