/*
 * XREFs of ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C01D9484
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00ED468 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E0178 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E01DC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00E0C78 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00E15B4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00E3FA4 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4DBC (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00E8F04 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 */

__int64 __fastcall DmmDisableAllFailurePathsOnAdapter(PERESOURCE *a1, int a2, struct DXGDEVICE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  const struct DMMVIDPN **Address; // r15
  __int64 v13; // r8
  __int64 v14; // r9
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  _QWORD *v19; // rax
  unsigned int v20; // esi
  struct DMMVIDPN *v21; // rbx
  __int64 *v22; // r13
  int NumPathsFromSource; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rsi
  __int64 v41; // rax
  PERESOURCE v42; // rax
  unsigned int i; // esi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v55; // [rsp+20h] [rbp-E0h]
  _BYTE v56[8]; // [rsp+40h] [rbp-C0h] BYREF
  struct DMMVIDPN *v57; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v58; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v60[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v61[144]; // [rsp+80h] [rbp-80h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a3 && (*((_DWORD *)a3 + 82) != 2 || *((PERESOURCE **)a3 + 225) != a1) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v11);
  }
  Address = (const struct DMMVIDPN **)a1[285]->Address;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v59, (__int64)Address, v8, v9);
  v57 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                             Address,
                                             (__int64 *)&v57,
                                             v13,
                                             v14);
  v18 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v19[3] = *((int *)a1 + 68);
    v19[4] = *((unsigned int *)a1 + 67);
    v19[5] = v18;
    WdLogEvent5_WdError(v19);
    goto LABEL_34;
  }
  v20 = 0;
  v21 = v57;
  v22 = (__int64 *)((char *)v57 + 96);
  if ( LODWORD(a1[285]->Reserved2) )
  {
    while ( 1 )
    {
      if ( _bittest(&a2, v20) )
      {
        NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)v22, v20, &v58);
        if ( NumPathsFromSource >= 0 )
          goto LABEL_15;
        if ( NumPathsFromSource != -1071774919 || v58 )
          break;
      }
LABEL_20:
      if ( ++v20 >= LODWORD(a1[285]->Reserved2) )
      {
        v21 = v57;
        goto LABEL_22;
      }
    }
    v28 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
    WdLogEvent5_WdAssertion(v28);
LABEL_15:
    if ( v58 )
    {
      LOBYTE(v26) = 2;
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v60,
        (unsigned __int64)(v22 + 7) & -(__int64)(v22 != 0LL),
        v26,
        v27,
        v55,
        v22[5]);
      v29 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v22, v20);
      v33 = v29 + 0x80000000;
      if ( (v33 & 0x80000000) == 0 && v29 != -1071774919 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v33, v30, v31, v32);
        WdLogEvent5_WdAssertion(v34);
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
        (ApplyPermissionWithinThisScope *)v60,
        v30,
        v31,
        v32);
    }
    goto LABEL_20;
  }
LABEL_22:
  memset(v61, 0, 0x8CuLL);
  v56[0] = 0;
  v35 = VIDPN_MGR::SetTimingsFromVidPn(
          (VIDPN_MGR *)Address,
          0LL,
          2LL,
          (__int64)v21,
          (struct _D3DKMT_VIDPN_SOURCE_MASKS *)v61,
          v56,
          a3,
          0LL);
  v40 = v35;
  if ( v35 < 0 )
  {
    v41 = WdLogNewEntry5_WdError(v37, v36);
    *(_QWORD *)(v41 + 24) = v21;
    *(_QWORD *)(v41 + 32) = v40;
    WdLogEvent5_WdError(v41);
    v42 = a1[285];
    for ( i = 0; i < LODWORD(v42->Reserved2); ++i )
    {
      if ( _bittest(&a2, i) )
        ADAPTER_DISPLAY::SetVidPnSourceActive((DXGADAPTER **)v42, i, 0);
      v42 = a1[285];
    }
  }
  if ( (v56[0] & 1) != 0 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v37, v36, v38, v39);
    WdLogEvent5_WdAssertion(v44);
  }
  if ( (v56[0] & 2) != 0 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v37, v36, v38, v39);
    WdLogEvent5_WdAssertion(v45);
  }
  if ( (int)VIDPN_MGR::CacheLastClientCommittedVidPnRef((VIDPN_MGR *)Address, v21) < 0 )
  {
    v50 = WdLogNewEntry5_WdAssertion(v47, v46, v48, v49);
    WdLogEvent5_WdAssertion(v50);
  }
  LODWORD(v18) = 0;
LABEL_34:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v57, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v59 + 40), v51, v52, v53);
  return (unsigned int)v18;
}
