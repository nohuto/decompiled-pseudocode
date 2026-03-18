/*
 * XREFs of ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C021E0B4
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00B534C (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA2C4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00BB648 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00BB6AC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00BC348 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C010DA38 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C021128C (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C021EFE8 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DmmDisableAllFailurePathsOnAdapter(PERESOURCE *a1, int a2, struct DXGDEVICE *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  const struct DMMVIDPN **Address; // r15
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rax
  unsigned int v14; // esi
  VIDPN_MGR **v15; // rbx
  unsigned __int64 *v16; // r13
  int NumPathsFromSource; // eax
  __int64 v18; // rcx
  unsigned __int8 v19; // r9
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  PERESOURCE v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rax
  unsigned int v28; // esi
  PERESOURCE v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v35; // [rsp+20h] [rbp-E0h]
  _BYTE v36[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct DMMVIDPN *v37; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v40[32]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v41[240]; // [rsp+90h] [rbp-70h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a3 && (*((_DWORD *)a3 + 82) != 2 || *((PERESOURCE **)a3 + 211) != a1) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v8);
  }
  Address = (const struct DMMVIDPN **)a1[307]->Address;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v39, (__int64)Address);
  v37 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                             Address,
                                             (__int64 *)&v37);
  v12 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v13[3] = *((int *)a1 + 68);
    v13[4] = *((unsigned int *)a1 + 67);
    v13[5] = v12;
    WdLogEvent5_WdError(v13);
    goto LABEL_34;
  }
  v14 = 0;
  v15 = (VIDPN_MGR **)v37;
  v16 = (unsigned __int64 *)((char *)v37 + 96);
  if ( LODWORD(a1[307]->Reserved2) )
  {
    while ( 1 )
    {
      if ( _bittest(&a2, v14) )
      {
        NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)v16, v14, &v38);
        if ( NumPathsFromSource >= 0 )
          goto LABEL_15;
        if ( NumPathsFromSource != -1071774919 || v38 )
          break;
      }
LABEL_20:
      if ( ++v14 >= LODWORD(a1[307]->Reserved2) )
      {
        v15 = (VIDPN_MGR **)v37;
        goto LABEL_22;
      }
    }
    v20 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v20);
LABEL_15:
    if ( v38 )
    {
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v40,
        (unsigned __int64)(v16 + 7) & -(__int64)(v16 != 0LL),
        2u,
        v19,
        v35,
        v16[5]);
      v21 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v16, v14);
      v22 = v21 + 0x80000000;
      if ( (v22 & 0x80000000) == 0 && v21 != -1071774919 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v23);
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v40);
    }
    goto LABEL_20;
  }
LABEL_22:
  memset(v41, 0, sizeof(v41));
  v36[0] = 0;
  v24 = VIDPN_MGR::SetTimingsFromVidPn(
          (VIDPN_MGR *)Address,
          0,
          2u,
          v15,
          (struct D3DKMT_VIDPN_SOURCE_MASKS *)v41,
          v36,
          0,
          a3,
          0LL);
  v26 = v24;
  if ( v24 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v27 + 24) = v15;
    *(_QWORD *)(v27 + 32) = v26;
    WdLogEvent5_WdError(v27);
    v25 = a1[307];
    v28 = 0;
    if ( LODWORD(v25->Reserved2) )
    {
      do
      {
        v29 = v25;
        if ( _bittest(&a2, v28) )
        {
          ADAPTER_DISPLAY::SetVidPnSourceActive((PERESOURCE **)v25, v28, 0, 0, 0);
          v29 = a1[307];
        }
        ++v28;
        v25 = v29;
      }
      while ( v28 < LODWORD(v29->Reserved2) );
    }
  }
  if ( (v36[0] & 1) != 0 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v25);
    WdLogEvent5_WdAssertion(v30);
  }
  if ( (v36[0] & 2) != 0 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v25);
    WdLogEvent5_WdAssertion(v31);
  }
  if ( (int)VIDPN_MGR::CacheLastClientCommittedVidPnRef((VIDPN_MGR *)Address, (struct DMMVIDPN *const)v15) < 0 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v32);
    WdLogEvent5_WdAssertion(v33);
  }
  LODWORD(v12) = 0;
LABEL_34:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v37, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v39 + 40));
  return (unsigned int)v12;
}
