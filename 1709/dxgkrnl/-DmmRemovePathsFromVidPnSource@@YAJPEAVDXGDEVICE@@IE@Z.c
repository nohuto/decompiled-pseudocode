/*
 * XREFs of ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C01EDC70
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00BB7E0 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0006578 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00065A0 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C0007470 (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00A4154 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00A45F0 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A56CC (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5730 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00A7D74 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8A58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00ADA40 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00ADF10 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DmmRemovePathsFromVidPnSource(struct DXGDEVICE *a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  const struct DMMVIDPN **v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v14; // r11d
  unsigned int v15; // eax
  unsigned int v16; // ebx
  char v17; // r13
  unsigned int i; // r12d
  int v19; // eax
  __int64 v20; // rcx
  int v21; // r14d
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v27; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v28; // eax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r13
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  struct DMMVIDPN *v38; // rbx
  struct DXGDEVICE *v39; // r13
  VIDPN_MGR *v40; // r12
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r14
  _QWORD *v46; // rax
  ADAPTER_DISPLAY *v47; // r14
  int v48; // eax
  int ClientCommittedVidPnRef; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r14
  _QWORD *v53; // rax
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rbx
  _QWORD *v57; // rax
  __int64 v58; // r8
  __int64 v59; // r8
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rbx
  _QWORD *v63; // rax
  __int64 v65; // [rsp+20h] [rbp-E0h]
  _BYTE v66[4]; // [rsp+50h] [rbp-B0h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v67; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v68; // [rsp+58h] [rbp-A8h] BYREF
  struct DMMVIDPN *v69; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v70; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNTOPOLOGY *v71; // [rsp+70h] [rbp-90h]
  ADAPTER_DISPLAY *v72; // [rsp+78h] [rbp-88h]
  VIDPN_MGR *v73; // [rsp+80h] [rbp-80h]
  struct DXGDEVICE *v74; // [rsp+88h] [rbp-78h]
  _BYTE v75[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v76; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v77[32]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v78[40]; // [rsp+C0h] [rbp-40h] BYREF

  v3 = *((_QWORD *)a1 + 209);
  v74 = a1;
  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v3) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v7);
  }
  v72 = *(ADAPTER_DISPLAY **)(v3 + 2304);
  v73 = (VIDPN_MGR *)*((_QWORD *)v72 + 11);
  v8 = (const struct DMMVIDPN **)v73;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v76, (__int64)v73);
  v10 = WdLogNewEntry5_WdDmmEvent(v9);
  *(_QWORD *)(v10 + 24) = v5;
  *(_QWORD *)(v10 + 32) = v8;
  WdLogEvent5_WdDmmEvent(v10);
  v69 = 0LL;
  if ( (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v8, (__int64 *)&v69) < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = v8;
    WdLogEvent5_WdError(v13);
    goto LABEL_51;
  }
  v71 = (struct DMMVIDPN *)((char *)v69 + 96);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v77,
    (__int64)v69 + 152,
    2u,
    v12,
    v65,
    *((_QWORD *)v69 + 17));
  v14 = -1;
  v68 = -1;
  if ( a3 )
  {
    ADAPTER_DISPLAY::GetPrimaryPath(*(ADAPTER_DISPLAY **)(v3 + 2304), &v70, &v68, (enum _DXGK_PRIMARY_TARGET_TYPE *)v75);
    v15 = v68;
    if ( v70 != (_DWORD)v5 )
      v15 = v14;
    v68 = v15;
  }
  v16 = v68;
  v17 = 0;
  for ( i = 0; ; ++i )
  {
    v67 = v14;
    v19 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v71, (_QWORD *)(unsigned int)v5, i, (unsigned int *)&v67);
    v21 = v19;
    if ( v19 < 0 )
    {
      if ( v19 == -1071774919 )
        break;
      v22 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v22);
    }
    if ( v21 == -1071774919 || v67 == -1 )
      break;
    if ( v67 == v16 )
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v71, v5, v67);
      if ( !Path )
      {
        v27 = WdLogNewEntry5_WdAssertion(v25);
        WdLogEvent5_WdAssertion(v27);
      }
      v28 = *((_DWORD *)Path + 28);
      v67 = v28;
      if ( v28 == D3DKMDT_VPPS_UNPINNED )
      {
        v29 = WdLogNewEntry5_WdAssertion(v25);
        *(_QWORD *)(v29 + 24) = 13700LL;
        WdLogEvent5_WdAssertion(v29);
        v28 = v67;
      }
      if ( ((v28 - 1) & 0xFFFFFFFD) != 0 && (*((_DWORD *)Path + 30) & 4) != 0 )
      {
        if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path) < 0 )
        {
          v31 = WdLogNewEntry5_WdAssertion(v30);
          WdLogEvent5_WdAssertion(v31);
        }
        v32 = DMMVIDPNPRESENTPATH::PinContentScaling(Path, D3DKMDT_VPPS_STRETCHED);
        v34 = v32;
        if ( v32 < 0 )
        {
          v35 = (_QWORD *)WdLogNewEntry5_WdError(v33);
          v35[3] = v5;
          v35[4] = v3;
          v35[5] = v34;
          WdLogEvent5_WdError(v35);
          if ( (int)DMMVIDPNPRESENTPATH::PinContentScaling(Path, v67) < 0 )
          {
            v37 = WdLogNewEntry5_WdAssertion(v36);
            WdLogEvent5_WdAssertion(v37);
          }
        }
        v17 = 1;
      }
      v14 = -1;
    }
    else
    {
      if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v71, v5, v67, 0LL) < 0 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v24);
      }
      v14 = -1;
      v17 = 1;
      --i;
    }
  }
  v38 = v69;
  if ( !v17 )
  {
    v40 = v73;
    v39 = v74;
    goto LABEL_40;
  }
  memset(v78, 0, 0x94uLL);
  v39 = v74;
  v40 = v73;
  v66[0] = 0;
  v41 = VIDPN_MGR::SetTimingsFromVidPn(
          (__int64 *)v73,
          0,
          1,
          (__int64 *)v69,
          (struct D3DKMT_VIDPN_SOURCE_MASKS *)v78,
          v66,
          0,
          v74,
          0LL);
  v45 = v41;
  if ( v41 >= 0 )
  {
    v48 = v78[19];
    if ( _bittest(&v48, v5) )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44);
      v46[4] = v5;
      v46[5] = -1071774970LL;
      goto LABEL_36;
    }
LABEL_40:
    ClientCommittedVidPnRef = VIDPN_MGR::CacheLastClientCommittedVidPnRef(v40, v38);
    v52 = ClientCommittedVidPnRef;
    if ( ClientCommittedVidPnRef < 0 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdTrace(v51, v50);
      v53[3] = v38;
      v53[4] = v3;
      v53[5] = v52;
    }
    v47 = v72;
    v54 = ADAPTER_DISPLAY::DestroyCddAllocations(v72, v39, v5);
    v56 = v54;
    if ( v54 < 0 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdError(v55);
      v57[3] = v5;
      v57[4] = v3;
      v57[5] = v56;
      WdLogEvent5_WdError(v57);
    }
    goto LABEL_44;
  }
  v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44);
  v46[4] = v45;
LABEL_36:
  v46[3] = v38;
  WdLogEvent5_WdWarning(v46);
  v47 = v72;
LABEL_44:
  v58 = *(_QWORD *)(v3 + 2312);
  if ( v58 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v58 + 504) + 8LL) + 776LL))(
      *(_QWORD *)(v58 + 512),
      (unsigned int)v5);
  }
  else
  {
    v59 = *((_QWORD *)v47 + 33);
    if ( v59 )
      _InterlockedExchange((volatile __int32 *)(2704 * v5 + *(_QWORD *)(v59 + 8) + 856), 0);
  }
  v60 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(v47, v5, 0LL, 256, 0);
  v62 = v60;
  if ( v60 < 0 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v61);
    v63[3] = v5;
    v63[4] = v3;
    v63[5] = v62;
    WdLogEvent5_WdError(v63);
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v77);
LABEL_51:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v69, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v76 + 40));
  return 0LL;
}
