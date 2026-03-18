/*
 * XREFs of DmmRemovePathsFromVidPnSource @ 0x1C01D66F0
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C009A370 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0009310 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0009338 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C000B3BC (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E0178 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E01DC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E05D4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E1044 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00E3FA4 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4DBC (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00E8858 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DmmRemovePathsFromVidPnSource(struct DXGDEVICE *a1, unsigned int a2, char a3)
{
  __int64 v3; // r15
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  __int64 v11; // rax
  const struct DMMVIDPN **v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rax
  char *v24; // r8
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v25; // r11d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v26; // eax
  DMMVIDPNTOPOLOGY *v27; // rbx
  char v28; // r13
  unsigned int i; // r12d
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // esi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v48; // eax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r13
  _QWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  struct DMMVIDPN *v65; // rbx
  struct DXGDEVICE *v66; // r13
  VIDPN_MGR *v67; // r12
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rsi
  _QWORD *v74; // rax
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  int ClientCommittedVidPnRef; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rsi
  _QWORD *v85; // rax
  int v86; // eax
  __int64 v87; // rcx
  __int64 v88; // rbx
  _QWORD *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v94; // [rsp+20h] [rbp-E0h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v95; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v96[4]; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v97; // [rsp+48h] [rbp-B8h] BYREF
  struct DMMVIDPN *v98; // [rsp+50h] [rbp-B0h] BYREF
  VIDPN_MGR *v99; // [rsp+58h] [rbp-A8h]
  struct DXGDEVICE *v100; // [rsp+60h] [rbp-A0h]
  _BYTE v101[8]; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNTOPOLOGY *v102; // [rsp+70h] [rbp-90h]
  ADAPTER_DISPLAY *v103; // [rsp+80h] [rbp-80h]
  __int64 v104; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v105[32]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v106[36]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = *((_QWORD *)a1 + 225);
  v100 = a1;
  v5 = a2;
  v10 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v3) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v11);
  }
  v103 = *(ADAPTER_DISPLAY **)(v3 + 2280);
  v99 = (VIDPN_MGR *)*((_QWORD *)v103 + 11);
  v12 = (const struct DMMVIDPN **)v99;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v104, (__int64)v99, v8, v9);
  v17 = WdLogNewEntry5_WdDmmEvent(v14, v13, v15, v16);
  *(_QWORD *)(v17 + 24) = v5;
  *(_QWORD *)(v17 + 32) = v12;
  WdLogEvent5_WdDmmEvent(v17);
  v98 = 0LL;
  if ( (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v12, (__int64 *)&v98, v18, v19) >= 0 )
  {
    v24 = (char *)v98 + 96;
    v102 = (struct DMMVIDPN *)((char *)v98 + 96);
    LOBYTE(v24) = 2;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v105,
      ((unsigned __int64)v98 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v98 + 96) != 0LL),
      (__int64)v24,
      v22,
      v94,
      *((_QWORD *)v98 + 17));
    v25 = -1;
    v97 = -1;
    v95 = -1;
    if ( a3 )
    {
      ADAPTER_DISPLAY::GetPrimaryPath(
        *(ADAPTER_DISPLAY **)(v3 + 2280),
        &v97,
        (unsigned int *)&v95,
        (enum _DXGK_PRIMARY_TARGET_TYPE *)v101);
      v26 = v95;
      if ( v97 != (_DWORD)v5 )
        v26 = v25;
      v97 = v26;
    }
    v27 = v102;
    v28 = 0;
    for ( i = 0; ; ++i )
    {
      v95 = v25;
      v30 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v27, (unsigned int)v5, i, (unsigned int *)&v95);
      v35 = v30;
      if ( v30 < 0 )
      {
        if ( v30 == -1071774919 )
          break;
        v36 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
        WdLogEvent5_WdAssertion(v36);
      }
      if ( v35 == -1071774919 || v95 == -1 )
        break;
      if ( v95 == v97 )
      {
        Path = DMMVIDPNTOPOLOGY::FindPath(v27, v5, v95);
        if ( !Path )
        {
          v47 = WdLogNewEntry5_WdAssertion(v43, v42, v45, v46);
          WdLogEvent5_WdAssertion(v47);
        }
        v48 = *((_DWORD *)Path + 28);
        v95 = v48;
        if ( v48 == D3DKMDT_VPPS_UNPINNED )
        {
          v49 = WdLogNewEntry5_WdAssertion(v43, v42, v45, v46);
          *(_QWORD *)(v49 + 24) = 13343LL;
          WdLogEvent5_WdAssertion(v49);
          v48 = v95;
        }
        if ( ((v48 - 1) & 0xFFFFFFFD) != 0 && (*((_DWORD *)Path + 30) & 4) != 0 )
        {
          if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path) < 0 )
          {
            v54 = WdLogNewEntry5_WdAssertion(v51, v50, v52, v53);
            WdLogEvent5_WdAssertion(v54);
          }
          v55 = DMMVIDPNPRESENTPATH::PinContentScaling(Path, 3LL);
          v58 = v55;
          if ( v55 < 0 )
          {
            v59 = (_QWORD *)WdLogNewEntry5_WdError(v57, v56);
            v59[3] = v5;
            v59[4] = v3;
            v59[5] = v58;
            WdLogEvent5_WdError(v59);
            if ( (int)DMMVIDPNPRESENTPATH::PinContentScaling(Path, (unsigned int)v95) < 0 )
            {
              v64 = WdLogNewEntry5_WdAssertion(v61, v60, v62, v63);
              WdLogEvent5_WdAssertion(v64);
            }
          }
          v28 = 1;
        }
        v25 = -1;
      }
      else
      {
        if ( (int)DMMVIDPNTOPOLOGY::RemovePath((char **)v27, (char *)(unsigned int)v5, (unsigned int)v95, 0LL) < 0 )
        {
          v41 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
          WdLogEvent5_WdAssertion(v41);
        }
        v25 = -1;
        v28 = 1;
        --i;
      }
    }
    v65 = v98;
    if ( v28 )
    {
      memset(v106, 0, 0x8CuLL);
      v66 = v100;
      v67 = v99;
      v96[0] = 0;
      v68 = VIDPN_MGR::SetTimingsFromVidPn(
              v99,
              0LL,
              1LL,
              (__int64)v98,
              (struct _D3DKMT_VIDPN_SOURCE_MASKS *)v106,
              v96,
              v100,
              0LL);
      v73 = v68;
      if ( v68 < 0 )
      {
        v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v70, v69, v71, v72);
        v74[4] = v73;
LABEL_38:
        v74[3] = v65;
        WdLogEvent5_WdWarning(v74);
        v10 = v73;
LABEL_44:
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
          (ApplyPermissionWithinThisScope *)v105,
          v76,
          v77,
          v78);
        goto LABEL_45;
      }
      v75 = v106[17];
      if ( _bittest(&v75, v5) )
      {
        v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v70, v69, v71, v72);
        LODWORD(v73) = -1071774970;
        v74[4] = v5;
        v74[5] = -1071774970LL;
        goto LABEL_38;
      }
    }
    else
    {
      v67 = v99;
      v66 = v100;
    }
    ClientCommittedVidPnRef = VIDPN_MGR::CacheLastClientCommittedVidPnRef(v67, v65);
    v84 = ClientCommittedVidPnRef;
    if ( ClientCommittedVidPnRef < 0 )
    {
      v85 = (_QWORD *)WdLogNewEntry5_WdTrace(v81, v80, v82, v83);
      v85[3] = v65;
      v85[4] = v3;
      v85[5] = v84;
    }
    v86 = ADAPTER_DISPLAY::DestroyCddAllocations(v103, v66, v5);
    v88 = v86;
    if ( v86 < 0 )
    {
      v89 = (_QWORD *)WdLogNewEntry5_WdError(v87, v76);
      v89[3] = v5;
      v89[4] = v3;
      v89[5] = v88;
      WdLogEvent5_WdError(v89);
    }
    goto LABEL_44;
  }
  v23 = WdLogNewEntry5_WdError(v21, v20);
  *(_QWORD *)(v23 + 24) = v12;
  WdLogEvent5_WdError(v23);
LABEL_45:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v98, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v104 + 40), v90, v91, v92);
  return v10;
}
