/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00A2E80
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0006310 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C0013F74 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C003DCE8 (DxgkIsMSBDDFallbackEnabled.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E0178 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E01DC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E1044 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E42D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4CB4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4DBC (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00EF7F4 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00EF8B8 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  struct VIDPN_MGR *v13; // rsi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  int ClientVidPn; // eax
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  DMMVIDPNTOPOLOGY *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rbx
  _QWORD *v27; // rax
  _QWORD *v28; // r13
  char *v29; // r10
  char **v30; // rax
  char *v31; // rdx
  __int64 v32; // r9
  char *v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  DMMVIDPNTOPOLOGY *v39; // r12
  DMMVIDPNTOPOLOGY *v40; // r8
  struct DMMVIDPNPRESENTPATH *v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  bool v49; // zf
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  _QWORD *v54; // rax
  __int64 v55; // rdx
  _QWORD *v56; // rbx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  _QWORD *v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  _QWORD *v68; // r14
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rdx
  _QWORD *v73; // rbx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  _QWORD *v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  _QWORD *v85; // r14
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rax
  DMMVIDPNTOPOLOGY *v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rax
  struct DMMVIDPN *v94; // [rsp+40h] [rbp-79h] BYREF
  __int64 v95; // [rsp+48h] [rbp-71h] BYREF
  DMMVIDPNTOPOLOGY *v96; // [rsp+50h] [rbp-69h]
  __int64 v97; // [rsp+58h] [rbp-61h] BYREF
  char *v98; // [rsp+60h] [rbp-59h]
  __int64 v99; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v100[32]; // [rsp+70h] [rbp-49h] BYREF
  char v101[8]; // [rsp+90h] [rbp-29h] BYREF
  char v102[32]; // [rsp+98h] [rbp-21h] BYREF
  char v103[88]; // [rsp+B8h] [rbp-1h] BYREF
  unsigned int v104; // [rsp+130h] [rbp+77h]
  unsigned int v105; // [rsp+138h] [rbp+7Fh]

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v101, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v101);
  v9 = 0;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741130 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
      v54[3] = a1;
      v54[4] = *((int *)a1 + 68);
      v54[5] = *((unsigned int *)a1 + 67);
      v54[6] = a2;
    }
    else
    {
      v9 = v4;
    }
    goto LABEL_48;
  }
  if ( !*((_BYTE *)a1 + 2205) && (!DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled()) )
  {
    v12 = *((_QWORD *)a1 + 285);
    if ( v12 )
    {
      v13 = *(struct VIDPN_MGR **)(v12 + 88);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v95, (__int64)v13, v10, v11);
      v94 = 0LL;
      ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v13);
      v17 = ClientVidPnFromLastClientCommitedVidPn;
      if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
        v56[3] = v17;
        v56[4] = v13;
        v59 = *(_QWORD *)a2;
        v56[5] = *(_QWORD *)a2;
        if ( !*((_QWORD *)v13 + 1) )
        {
          v60 = WdLogNewEntry5_WdAssertion(v59, v55, v57, v58);
          WdLogEvent5_WdAssertion(v60);
        }
        v61 = *(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL);
        v56[6] = *(int *)(v61 + 272);
        if ( !*((_QWORD *)v13 + 1) )
        {
          v62 = WdLogNewEntry5_WdAssertion(v61, v55, v57, v58);
          WdLogEvent5_WdAssertion(v62);
        }
        v63 = v56;
        v56[7] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 268LL);
      }
      else
      {
        v98 = (char *)v94 + 96;
        LODWORD(v17) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(a2, v94, 1);
        if ( (int)v17 >= 0 )
        {
          v97 = 0LL;
          ClientVidPn = VIDPN_MGR::CreateClientVidPn(v13);
          v17 = ClientVidPn;
          if ( ClientVidPn < 0 )
          {
            v73 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
            v73[3] = v17;
            v73[4] = v13;
            v76 = *(_QWORD *)a2;
            v73[5] = *(_QWORD *)a2;
            if ( !*((_QWORD *)v13 + 1) )
            {
              v77 = WdLogNewEntry5_WdAssertion(v76, v72, v74, v75);
              WdLogEvent5_WdAssertion(v77);
            }
            v78 = *(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL);
            v73[6] = *(int *)(v78 + 272);
            if ( !*((_QWORD *)v13 + 1) )
            {
              v79 = WdLogNewEntry5_WdAssertion(v78, v72, v74, v75);
              WdLogEvent5_WdAssertion(v79);
            }
            v80 = v73;
            v73[7] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 268LL);
          }
          else
          {
            v23 = (DMMVIDPNTOPOLOGY *)(v97 + 96);
            v96 = (DMMVIDPNTOPOLOGY *)(v97 + 96);
            if ( v97 != -96 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v13 + 10) + 72LL));
              v24 = *((_QWORD *)a1 + 285);
              v25 = 0LL;
              v26 = *((_QWORD *)v13 + 10);
              v99 = v26;
              v104 = 0;
              if ( !*(_DWORD *)(v24 + 80) )
              {
LABEL_44:
                if ( v26 )
                  ReferenceCounted::Release((ReferenceCounted *)(v26 + 64), (__int64)v21);
                goto LABEL_46;
              }
              v21 = (_QWORD *)(v26 + 24);
              while ( 1 )
              {
                v27 = (_QWORD *)*v21;
                if ( (_QWORD *)*v21 != v21 )
                {
                  v28 = v27 - 1;
                  if ( v27 != (_QWORD *)8 )
                    break;
                }
LABEL_43:
                v25 = (unsigned int)(v25 + 1);
                v104 = v25;
                if ( (unsigned int)v25 >= *(_DWORD *)(*((_QWORD *)a1 + 285) + 80LL) )
                  goto LABEL_44;
              }
              v29 = v98;
              v30 = (char **)(v98 + 24);
              while ( 1 )
              {
                v31 = *v30;
                v32 = *((unsigned int *)v28 + 6);
                v105 = *((_DWORD *)v28 + 6);
                if ( *v30 != (char *)v30 )
                {
                  v31 -= 8;
                  if ( v31 )
                  {
                    do
                    {
                      if ( *(_DWORD *)(*((_QWORD *)v31 + 11) + 24LL) == (_DWORD)v25
                        && *(_DWORD *)(*((_QWORD *)v31 + 12) + 24LL) == (_DWORD)v32 )
                      {
                        break;
                      }
                      v33 = (char *)*((_QWORD *)v31 + 1);
                      v31 = v33 - 8;
                      if ( v33 == v29 + 24 )
                        v31 = 0LL;
                    }
                    while ( v31 );
                    if ( v31 )
                      goto LABEL_39;
                    v23 = v96;
                  }
                }
                if ( *((_DWORD *)v28 + 21) != 15 || v28[13] )
                {
                  if ( *((_QWORD *)v23 + 5) )
                  {
                    v89 = WdLogNewEntry5_WdAssertion(v23, v31, v25, v32);
                    *(_QWORD *)(v89 + 24) = 861LL;
                    WdLogEvent5_WdAssertion(v89);
                    v23 = v96;
                    LODWORD(v25) = v104;
                    LODWORD(v32) = v105;
                  }
                  v34 = VIDPN_MGR::AddPathToVidPnTopology(
                          v13,
                          v23,
                          v25,
                          v32,
                          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                          0xFFFFu,
                          0,
                          D3DKMDT_MCC_IGNORE);
                  v17 = v34;
                  if ( v34 == -1071774975 )
                  {
                    LODWORD(v17) = 0;
                  }
                  else
                  {
                    if ( v34 < 0 )
                    {
                      v93 = WdLogNewEntry5_WdError(v36, v35);
                      *(_QWORD *)(v93 + 24) = v17;
                      WdLogEvent5_WdError(v93);
LABEL_85:
                      auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v99, v42);
LABEL_46:
                      auto_rc<DMMVIDPN>::reset(&v97, 0LL);
LABEL_47:
                      auto_rc<DMMVIDPN>::reset((__int64 *)&v94, 0LL);
                      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v95 + 40), v50, v51, v52);
                      v9 = v17;
                      goto LABEL_48;
                    }
                    v39 = v96;
                    if ( *((_QWORD *)v96 + 5) != 1LL )
                    {
                      v90 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
                      *(_QWORD *)(v90 + 24) = 892LL;
                      WdLogEvent5_WdAssertion(v90);
                    }
                    v40 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v39 + 3);
                    if ( v40 == (DMMVIDPNTOPOLOGY *)((char *)v39 + 24) )
                    {
                      v41 = 0LL;
                    }
                    else
                    {
                      v41 = (DMMVIDPNTOPOLOGY *)((char *)v40 - 8);
                      while ( v41 )
                      {
                        if ( *(_DWORD *)(*((_QWORD *)v41 + 11) + 24LL) == v104
                          && *(_DWORD *)(*((_QWORD *)v41 + 12) + 24LL) == v105 )
                        {
                          break;
                        }
                        v91 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v41 + 1);
                        v41 = (DMMVIDPNTOPOLOGY *)((char *)v91 - 8);
                        if ( v91 == (DMMVIDPNTOPOLOGY *)((char *)v39 + 24) )
                          v41 = 0LL;
                      }
                    }
                    LODWORD(v17) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(a2, a1, v41, 0, 0);
                    if ( (int)v17 < 0 )
                      goto LABEL_85;
                    LOBYTE(v43) = 2;
                    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v100, (char *)v96 + 56, v43);
                    DMMVIDPNTOPOLOGY::RemovePath(v96, v104, v105, 0LL);
                    if ( *((_QWORD *)v96 + 5) )
                    {
                      v92 = WdLogNewEntry5_WdAssertion(v45, v44, v46, v47);
                      *(_QWORD *)(v92 + 24) = 916LL;
                      WdLogEvent5_WdAssertion(v92);
                    }
                    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v100);
                  }
                  v29 = v98;
                  v25 = v104;
                }
LABEL_39:
                v48 = v28[1];
                v49 = v48 == v26 + 24;
                v30 = (char **)(v29 + 24);
                v28 = (_QWORD *)(v48 - 8);
                v23 = v96;
                if ( v49 )
                  v28 = 0LL;
                if ( !v28 )
                {
                  v21 = (_QWORD *)(v26 + 24);
                  goto LABEL_43;
                }
              }
            }
            v85 = (_QWORD *)WdLogNewEntry5_WdError(v23, v21);
            v85[3] = -96LL;
            v85[4] = a2;
            v86 = *(_QWORD *)a2;
            v85[5] = *(_QWORD *)a2;
            if ( !*((_QWORD *)v13 + 1) )
            {
              v87 = WdLogNewEntry5_WdAssertion(v86, v82, v83, v84);
              WdLogEvent5_WdAssertion(v87);
            }
            v88 = *(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL);
            v85[6] = *(int *)(v88 + 272);
            if ( !*((_QWORD *)v13 + 1) )
            {
              v81 = WdLogNewEntry5_WdAssertion(v88, v82, v83, v84);
              WdLogEvent5_WdAssertion(v81);
            }
            v80 = v85;
            v85[7] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 268LL);
          }
          WdLogEvent5_WdError(v80);
          goto LABEL_46;
        }
        v68 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
        v68[3] = v94;
        v68[4] = a2;
        v69 = *(_QWORD *)a2;
        v68[5] = *(_QWORD *)a2;
        if ( !*((_QWORD *)v13 + 1) )
        {
          v70 = WdLogNewEntry5_WdAssertion(v69, v65, v66, v67);
          WdLogEvent5_WdAssertion(v70);
        }
        v71 = *(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL);
        v68[6] = *(int *)(v71 + 272);
        if ( !*((_QWORD *)v13 + 1) )
        {
          v64 = WdLogNewEntry5_WdAssertion(v71, v65, v66, v67);
          WdLogEvent5_WdAssertion(v64);
        }
        v63 = v68;
        v68[7] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 268LL);
      }
      WdLogEvent5_WdError(v63);
      goto LABEL_47;
    }
  }
LABEL_48:
  COREACCESS::~COREACCESS((COREACCESS *)v103);
  COREACCESS::~COREACCESS((COREACCESS *)v102);
  return v9;
}
