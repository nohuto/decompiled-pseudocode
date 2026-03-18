/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00DBD90
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0002E20 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00161A0 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C001AF80 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C001AF9C (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C003C950 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00B6E84 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00B6F48 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00B9938 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA1BC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA2C4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00BB648 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00BB6AC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BBE98 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // rsi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  DMMVIDPNTOPOLOGY *v16; // r12
  struct DMMVIDPN *v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rbx
  _QWORD *v24; // r8
  __int64 v25; // r13
  unsigned int v26; // edx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  unsigned __int8 v31; // r9
  __int64 v32; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rcx
  _QWORD *v47; // r14
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // r14
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  _QWORD *v60; // rbx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  _QWORD *v66; // r14
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned int v77; // ebx
  __int64 v78; // [rsp+20h] [rbp-99h]
  struct DMMVIDPN *v79; // [rsp+40h] [rbp-79h] BYREF
  __int64 v80; // [rsp+48h] [rbp-71h] BYREF
  __int64 v81; // [rsp+50h] [rbp-69h] BYREF
  DMMVIDPNTOPOLOGY *v82; // [rsp+58h] [rbp-61h]
  int v83; // [rsp+60h] [rbp-59h]
  __int64 v84; // [rsp+68h] [rbp-51h] BYREF
  DMMVIDPNTOPOLOGY *v85; // [rsp+70h] [rbp-49h]
  _BYTE v86[24]; // [rsp+78h] [rbp-41h] BYREF
  char v87[8]; // [rsp+90h] [rbp-29h] BYREF
  char v88[32]; // [rsp+98h] [rbp-21h] BYREF
  char v89[88]; // [rsp+B8h] [rbp-1h] BYREF
  unsigned int v90; // [rsp+130h] [rbp+77h]
  unsigned int v91; // [rsp+138h] [rbp+7Fh]

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v87, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v87);
  v9 = 0;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741130 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
      v35[3] = a1;
      v35[4] = *((int *)a1 + 68);
      v35[5] = *((unsigned int *)a1 + 67);
      v35[6] = this;
    }
    else
    {
      v9 = v4;
    }
  }
  else if ( !*((_BYTE *)a1 + 2373) && (!DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled()) )
  {
    v10 = *((_QWORD *)a1 + 307);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 88);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v80, v11);
      v79 = 0LL;
      ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                 (const struct DMMVIDPN **)v11,
                                                 (__int64 *)&v79);
      v16 = (DMMVIDPNTOPOLOGY *)ClientVidPnFromLastClientCommitedVidPn;
      if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v14);
        v36[3] = v16;
        v36[4] = v11;
        v37 = *(_QWORD *)this;
        v36[5] = *(_QWORD *)this;
        v38 = *(_QWORD *)(v11 + 8);
        if ( !v38 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v37);
          WdLogEvent5_WdAssertion(v39);
          v38 = *(_QWORD *)(v11 + 8);
        }
        v40 = *(int *)(*(_QWORD *)(v38 + 16) + 272LL);
        v36[6] = v40;
        v41 = *(_QWORD *)(v11 + 8);
        if ( !v41 )
        {
          v42 = WdLogNewEntry5_WdAssertion(v40);
          WdLogEvent5_WdAssertion(v42);
          v41 = *(_QWORD *)(v11 + 8);
        }
        v36[7] = *(unsigned int *)(*(_QWORD *)(v41 + 16) + 268LL);
        v43 = v36;
      }
      else
      {
        v17 = v79;
        v85 = (struct DMMVIDPN *)((char *)v79 + 96);
        if ( v79 == (struct DMMVIDPN *)-96LL )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
          v47[3] = -96LL;
          v47[4] = this;
          v48 = *(_QWORD *)this;
          v47[5] = *(_QWORD *)this;
          v49 = *(_QWORD *)(v11 + 8);
          if ( !v49 )
          {
            v50 = WdLogNewEntry5_WdAssertion(v48);
            WdLogEvent5_WdAssertion(v50);
            v49 = *(_QWORD *)(v11 + 8);
          }
          v51 = *(int *)(*(_QWORD *)(v49 + 16) + 272LL);
          v47[6] = v51;
          v52 = *(_QWORD *)(v11 + 8);
          if ( !v52 )
          {
            v53 = WdLogNewEntry5_WdAssertion(v51);
            WdLogEvent5_WdAssertion(v53);
            v52 = *(_QWORD *)(v11 + 8);
          }
          v47[7] = *(unsigned int *)(*(_QWORD *)(v52 + 16) + 268LL);
          WdLogEvent5_WdWarning(v47);
          goto LABEL_53;
        }
        LODWORD(v16) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v79, 1);
        if ( (int)v16 >= 0 )
        {
          v81 = 0LL;
          v19 = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)v11, &v81);
          v16 = (DMMVIDPNTOPOLOGY *)v19;
          if ( v19 < 0 )
          {
            v60 = (_QWORD *)WdLogNewEntry5_WdError(v20);
            v60[3] = v16;
            v60[4] = v11;
            v61 = *(_QWORD *)this;
            v60[5] = *(_QWORD *)this;
            v62 = *(_QWORD *)(v11 + 8);
            if ( !v62 )
            {
              v63 = WdLogNewEntry5_WdAssertion(v61);
              WdLogEvent5_WdAssertion(v63);
              v62 = *(_QWORD *)(v11 + 8);
            }
            v64 = *(int *)(*(_QWORD *)(v62 + 16) + 272LL);
            v60[6] = v64;
            v65 = *(_QWORD *)(v11 + 8);
            if ( !v65 )
            {
              v45 = WdLogNewEntry5_WdAssertion(v64);
              WdLogEvent5_WdAssertion(v45);
              v65 = *(_QWORD *)(v11 + 8);
            }
            v60[7] = *(unsigned int *)(*(_QWORD *)(v65 + 16) + 268LL);
            v46 = v60;
          }
          else
          {
            v82 = (DMMVIDPNTOPOLOGY *)(v81 + 96);
            if ( v81 != -96 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 80) + 72LL));
              v21 = *((_QWORD *)a1 + 307);
              v22 = 0;
              v23 = *(_QWORD *)(v11 + 80);
              v84 = v23;
              v90 = 0;
              if ( *(_DWORD *)(v21 + 80) )
              {
                v24 = (_QWORD *)(v23 + 24);
                do
                {
                  v25 = 0LL;
                  if ( (_QWORD *)*v24 != v24 )
                    v25 = *v24 - 8LL;
                  if ( v25 )
                  {
                    while ( 1 )
                    {
                      v91 = *(_DWORD *)(v25 + 24);
                      if ( !DMMVIDPNTOPOLOGY::FindPath(v85, v22, v91)
                        && (*(_DWORD *)(v25 + 84) != 15 || *(_QWORD *)(v25 + 104)) )
                      {
                        v16 = v82;
                        if ( *((_QWORD *)v82 + 5) )
                        {
                          v73 = WdLogNewEntry5_WdAssertion(v27);
                          *(_QWORD *)(v73 + 24) = 908LL;
                          WdLogEvent5_WdAssertion(v73);
                          v26 = v90;
                        }
                        v28 = VIDPN_MGR::AddPathToVidPnTopology(
                                (VIDPN_MGR *)v11,
                                v16,
                                v26,
                                v91,
                                (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                                0xFFFFu,
                                0,
                                D3DKMDT_MCC_IGNORE);
                        v83 = v28;
                        if ( v28 == -1071774975 )
                        {
                          LODWORD(v16) = 0;
                        }
                        else
                        {
                          if ( v28 < 0 )
                          {
                            v76 = WdLogNewEntry5_WdError(v29);
                            v77 = v83;
                            *(_QWORD *)(v76 + 24) = v83;
                            WdLogEvent5_WdError(v76);
                            auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v84);
                            auto_rc<DMMVIDPN>::reset(&v81, 0LL);
                            auto_rc<DMMVIDPN>::reset((__int64 *)&v79, 0LL);
                            EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v80);
                            v9 = v77;
                            goto LABEL_34;
                          }
                          if ( *((_QWORD *)v16 + 5) != 1LL )
                          {
                            v74 = WdLogNewEntry5_WdAssertion(v29);
                            *(_QWORD *)(v74 + 24) = 939LL;
                            WdLogEvent5_WdAssertion(v74);
                          }
                          Path = DMMVIDPNTOPOLOGY::FindPath(v16, v90, v91);
                          LODWORD(v16) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(
                                           this,
                                           (ADAPTER_DISPLAY **)a1,
                                           Path,
                                           0,
                                           0);
                          if ( (int)v16 < 0 )
                          {
                            auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v84);
                            goto LABEL_52;
                          }
                          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                            (__int64)v86,
                            (__int64)v82 + 56,
                            2u,
                            v31,
                            v78,
                            0xFFuLL);
                          DMMVIDPNTOPOLOGY::RemovePath(v82, v90, v91, 0LL);
                          if ( *((_QWORD *)v82 + 5) )
                          {
                            v75 = WdLogNewEntry5_WdAssertion(v32);
                            *(_QWORD *)(v75 + 24) = 963LL;
                            WdLogEvent5_WdAssertion(v75);
                          }
                          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v86);
                        }
                      }
                      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                     (DMMVIDEOPRESENTTARGETSET *)v23,
                                     (const struct DMMVIDEOPRESENTTARGET *const)v25);
                      v22 = v90;
                      v25 = (__int64)NextTarget;
                      if ( !NextTarget )
                      {
                        v24 = (_QWORD *)(v23 + 24);
                        break;
                      }
                    }
                  }
                  v90 = ++v22;
                }
                while ( v22 < *(_DWORD *)(*((_QWORD *)a1 + 307) + 80LL) );
              }
              if ( v23 )
                ReferenceCounted::Release((ReferenceCounted *)(v23 + 64));
              auto_rc<DMMVIDPN>::reset(&v81, 0LL);
              auto_rc<DMMVIDPN>::reset((__int64 *)&v79, 0LL);
              DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v80 + 40));
              goto LABEL_33;
            }
            v66 = (_QWORD *)WdLogNewEntry5_WdError(v20);
            v66[3] = -96LL;
            v66[4] = this;
            v67 = *(_QWORD *)this;
            v66[5] = *(_QWORD *)this;
            v68 = *(_QWORD *)(v11 + 8);
            if ( !v68 )
            {
              v69 = WdLogNewEntry5_WdAssertion(v67);
              WdLogEvent5_WdAssertion(v69);
              v68 = *(_QWORD *)(v11 + 8);
            }
            v70 = *(int *)(*(_QWORD *)(v68 + 16) + 272LL);
            v66[6] = v70;
            v71 = *(_QWORD *)(v11 + 8);
            if ( !v71 )
            {
              v72 = WdLogNewEntry5_WdAssertion(v70);
              WdLogEvent5_WdAssertion(v72);
              v71 = *(_QWORD *)(v11 + 8);
            }
            v66[7] = *(unsigned int *)(*(_QWORD *)(v71 + 16) + 268LL);
            v46 = v66;
          }
          WdLogEvent5_WdError(v46);
LABEL_52:
          auto_rc<DMMVIDPN>::reset(&v81, 0LL);
LABEL_53:
          auto_rc<DMMVIDPN>::reset((__int64 *)&v79, 0LL);
          EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v80);
LABEL_33:
          v9 = (unsigned int)v16;
          goto LABEL_34;
        }
        v54 = (_QWORD *)WdLogNewEntry5_WdError(v18);
        v54[3] = v17;
        v54[4] = this;
        v55 = *(_QWORD *)this;
        v54[5] = *(_QWORD *)this;
        v56 = *(_QWORD *)(v11 + 8);
        if ( !v56 )
        {
          v57 = WdLogNewEntry5_WdAssertion(v55);
          WdLogEvent5_WdAssertion(v57);
          v56 = *(_QWORD *)(v11 + 8);
        }
        v58 = *(int *)(*(_QWORD *)(v56 + 16) + 272LL);
        v54[6] = v58;
        v59 = *(_QWORD *)(v11 + 8);
        if ( !v59 )
        {
          v44 = WdLogNewEntry5_WdAssertion(v58);
          WdLogEvent5_WdAssertion(v44);
          v59 = *(_QWORD *)(v11 + 8);
        }
        v54[7] = *(unsigned int *)(*(_QWORD *)(v59 + 16) + 268LL);
        v43 = v54;
      }
      WdLogEvent5_WdError(v43);
      goto LABEL_53;
    }
  }
LABEL_34:
  COREACCESS::~COREACCESS((COREACCESS *)v89);
  COREACCESS::~COREACCESS((COREACCESS *)v88);
  return v9;
}
