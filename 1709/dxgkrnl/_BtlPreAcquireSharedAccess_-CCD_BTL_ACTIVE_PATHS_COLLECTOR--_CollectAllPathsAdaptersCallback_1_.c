/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00F6230
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0002870 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0014EF0 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C0014F0C (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C002E870 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00A45F0 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A56CC (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5730 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A80A8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8950 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8A58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00DB150 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00DB214 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rsi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r12
  struct DMMVIDPN *v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  DMMVIDPNTOPOLOGY *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rbx
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // r13
  char *v26; // r10
  _QWORD *v27; // rax
  unsigned int v28; // r9d
  char *v29; // rdx
  char *v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  DMMVIDPNTOPOLOGY *v33; // r12
  DMMVIDPNTOPOLOGY *v34; // r8
  struct DMMVIDPNPRESENTPATH *v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rcx
  bool v39; // zf
  void (__fastcall ***v40)(_QWORD, __int64, __int64); // rcx
  int v41; // ebx
  _QWORD *v43; // rax
  _QWORD *v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  _QWORD *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rcx
  _QWORD *v53; // r14
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  _QWORD *v58; // r14
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  _QWORD *v62; // rbx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  _QWORD *v66; // r14
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  DMMVIDPNTOPOLOGY *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // [rsp+20h] [rbp-99h]
  struct DMMVIDPN *v78; // [rsp+40h] [rbp-79h] BYREF
  __int64 v79; // [rsp+48h] [rbp-71h] BYREF
  DMMVIDPNTOPOLOGY *v80; // [rsp+50h] [rbp-69h]
  __int64 v81; // [rsp+58h] [rbp-61h] BYREF
  char *v82; // [rsp+60h] [rbp-59h]
  __int64 v83; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v84[32]; // [rsp+70h] [rbp-49h] BYREF
  char v85[8]; // [rsp+90h] [rbp-29h] BYREF
  char v86[32]; // [rsp+98h] [rbp-21h] BYREF
  char v87[88]; // [rsp+B8h] [rbp-1h] BYREF
  unsigned int v88; // [rsp+130h] [rbp+77h]
  unsigned int v89; // [rsp+138h] [rbp+7Fh]

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v85, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v85);
  v7 = 0;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741130 )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
      v43[3] = a1;
      v43[4] = *((int *)a1 + 68);
      v43[5] = *((unsigned int *)a1 + 67);
      v43[6] = this;
    }
    else
    {
      v7 = v4;
    }
    goto LABEL_51;
  }
  if ( !*((_BYTE *)a1 + 2229) && (!DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled()) )
  {
    v8 = *((_QWORD *)a1 + 288);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 88);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v79, v9);
      v78 = 0LL;
      ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                 (const struct DMMVIDPN **)v9,
                                                 (__int64 *)&v78);
      v14 = ClientVidPnFromLastClientCommitedVidPn;
      if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
      {
        v44 = (_QWORD *)WdLogNewEntry5_WdError(v12);
        v44[3] = v14;
        v44[4] = v9;
        v45 = *(_QWORD *)this;
        v44[5] = *(_QWORD *)this;
        if ( !*(_QWORD *)(v9 + 8) )
        {
          v46 = WdLogNewEntry5_WdAssertion(v45);
          WdLogEvent5_WdAssertion(v46);
        }
        v47 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
        v44[6] = *(int *)(v47 + 272);
        if ( !*(_QWORD *)(v9 + 8) )
        {
          v48 = WdLogNewEntry5_WdAssertion(v47);
          WdLogEvent5_WdAssertion(v48);
        }
        v49 = v44;
        v44[7] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL) + 268LL);
      }
      else
      {
        v15 = v78;
        v82 = (char *)v78 + 96;
        if ( v78 == (struct DMMVIDPN *)-96LL )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
          v53[3] = -96LL;
          v53[4] = this;
          v54 = *(_QWORD *)this;
          v53[5] = *(_QWORD *)this;
          if ( !*(_QWORD *)(v9 + 8) )
          {
            v55 = WdLogNewEntry5_WdAssertion(v54);
            WdLogEvent5_WdAssertion(v55);
          }
          v56 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
          v53[6] = *(int *)(v56 + 272);
          if ( !*(_QWORD *)(v9 + 8) )
          {
            v57 = WdLogNewEntry5_WdAssertion(v56);
            WdLogEvent5_WdAssertion(v57);
          }
          v53[7] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL) + 268LL);
          WdLogEvent5_WdWarning(v53);
          goto LABEL_68;
        }
        LODWORD(v14) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v78, 1);
        if ( (int)v14 >= 0 )
        {
          v81 = 0LL;
          v17 = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)v9, &v81);
          v14 = v17;
          if ( v17 < 0 )
          {
            v62 = (_QWORD *)WdLogNewEntry5_WdError(v18);
            v62[3] = v14;
            v62[4] = v9;
            v63 = *(_QWORD *)this;
            v62[5] = *(_QWORD *)this;
            if ( !*(_QWORD *)(v9 + 8) )
            {
              v64 = WdLogNewEntry5_WdAssertion(v63);
              WdLogEvent5_WdAssertion(v64);
            }
            v65 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
            v62[6] = *(int *)(v65 + 272);
            if ( !*(_QWORD *)(v9 + 8) )
            {
              v51 = WdLogNewEntry5_WdAssertion(v65);
              WdLogEvent5_WdAssertion(v51);
            }
            v52 = v62;
            v62[7] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL) + 268LL);
          }
          else
          {
            v19 = (DMMVIDPNTOPOLOGY *)(v81 + 96);
            v80 = (DMMVIDPNTOPOLOGY *)(v81 + 96);
            if ( v81 != -96 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 80) + 72LL));
              v20 = *((_QWORD *)a1 + 288);
              v21 = 0LL;
              v22 = *(_QWORD *)(v9 + 80);
              v83 = v22;
              v88 = 0;
              if ( !*(_DWORD *)(v20 + 80) )
              {
LABEL_45:
                if ( v22 )
                {
                  v40 = (void (__fastcall ***)(_QWORD, __int64, __int64))(v22 + 64);
                  v41 = _InterlockedDecrement((volatile signed __int32 *)(v22 + 72));
                  if ( v41 )
                  {
                    if ( v41 < 0 )
                    {
                      v76 = WdLogNewEntry5_WdError(v40);
                      *(_QWORD *)(v76 + 24) = v41;
                      WdLogEvent5_WdError(v76);
                    }
                  }
                  else if ( v40 )
                  {
                    (**v40)(v40, 1LL, v21);
                  }
                }
                auto_rc<DMMVIDPN>::reset(&v81, 0LL);
                auto_rc<DMMVIDPN>::reset((__int64 *)&v78, 0LL);
                DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v79 + 40));
                goto LABEL_50;
              }
              v23 = (_QWORD *)(v22 + 24);
              while ( 1 )
              {
                v24 = (_QWORD *)*v23;
                if ( (_QWORD *)*v23 != v23 )
                {
                  v25 = v24 - 1;
                  if ( v24 != (_QWORD *)8 )
                    break;
                }
LABEL_44:
                v21 = (unsigned int)(v21 + 1);
                v88 = v21;
                if ( (unsigned int)v21 >= *(_DWORD *)(*((_QWORD *)a1 + 288) + 80LL) )
                  goto LABEL_45;
              }
              v26 = v82;
              v27 = v82 + 24;
              while ( 1 )
              {
                v28 = *((_DWORD *)v25 + 6);
                v89 = v28;
                if ( (_QWORD *)*v27 != v27 )
                {
                  v29 = (char *)(*v27 - 8LL);
                  if ( *v27 != 8LL )
                  {
                    do
                    {
                      if ( *(_DWORD *)(*((_QWORD *)v29 + 11) + 24LL) == (_DWORD)v21
                        && *(_DWORD *)(*((_QWORD *)v29 + 12) + 24LL) == v28 )
                      {
                        break;
                      }
                      v30 = (char *)*((_QWORD *)v29 + 1);
                      v29 = v30 - 8;
                      if ( v30 == v26 + 24 )
                        v29 = 0LL;
                    }
                    while ( v29 );
                    if ( v29 )
                      goto LABEL_40;
                    v19 = v80;
                  }
                }
                if ( *((_DWORD *)v25 + 21) != 15 || v25[13] )
                {
                  if ( *((_QWORD *)v19 + 5) )
                  {
                    v71 = WdLogNewEntry5_WdAssertion(v19);
                    *(_QWORD *)(v71 + 24) = 882LL;
                    WdLogEvent5_WdAssertion(v71);
                    v19 = v80;
                    LODWORD(v21) = v88;
                    v28 = v89;
                  }
                  v31 = VIDPN_MGR::AddPathToVidPnTopology(
                          (VIDPN_MGR *)v9,
                          v19,
                          v21,
                          v28,
                          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                          0xFFFFu,
                          0,
                          D3DKMDT_MCC_IGNORE);
                  v14 = v31;
                  if ( v31 == -1071774975 )
                  {
                    LODWORD(v14) = 0;
                  }
                  else
                  {
                    if ( v31 < 0 )
                    {
                      v75 = WdLogNewEntry5_WdError(v32);
                      *(_QWORD *)(v75 + 24) = v14;
                      WdLogEvent5_WdError(v75);
LABEL_95:
                      auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v83);
LABEL_67:
                      auto_rc<DMMVIDPN>::reset(&v81, 0LL);
LABEL_68:
                      auto_rc<DMMVIDPN>::reset((__int64 *)&v78, 0LL);
                      EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v79);
LABEL_50:
                      v7 = v14;
                      goto LABEL_51;
                    }
                    v33 = v80;
                    if ( *((_QWORD *)v80 + 5) != 1LL )
                    {
                      v72 = WdLogNewEntry5_WdAssertion(v32);
                      *(_QWORD *)(v72 + 24) = 913LL;
                      WdLogEvent5_WdAssertion(v72);
                    }
                    v34 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v33 + 3);
                    if ( v34 == (DMMVIDPNTOPOLOGY *)((char *)v33 + 24) )
                    {
                      v35 = 0LL;
                    }
                    else
                    {
                      v35 = (DMMVIDPNTOPOLOGY *)((char *)v34 - 8);
                      while ( v35 )
                      {
                        if ( *(_DWORD *)(*((_QWORD *)v35 + 11) + 24LL) == v88
                          && *(_DWORD *)(*((_QWORD *)v35 + 12) + 24LL) == v89 )
                        {
                          break;
                        }
                        v73 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v35 + 1);
                        v35 = (DMMVIDPNTOPOLOGY *)((char *)v73 - 8);
                        if ( v73 == (DMMVIDPNTOPOLOGY *)((char *)v33 + 24) )
                          v35 = 0LL;
                      }
                    }
                    LODWORD(v14) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(this, a1, v35, 0, 0);
                    if ( (int)v14 < 0 )
                      goto LABEL_95;
                    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                      (__int64)v84,
                      (__int64)v80 + 56,
                      2u,
                      v36,
                      v77,
                      255LL);
                    DMMVIDPNTOPOLOGY::RemovePath(v80, v88, v89, 0LL);
                    if ( *((_QWORD *)v80 + 5) )
                    {
                      v74 = WdLogNewEntry5_WdAssertion(v37);
                      *(_QWORD *)(v74 + 24) = 937LL;
                      WdLogEvent5_WdAssertion(v74);
                    }
                    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v84);
                  }
                  v26 = v82;
                  LODWORD(v21) = v88;
                }
LABEL_40:
                v38 = v25[1];
                v39 = v38 == v22 + 24;
                v27 = v26 + 24;
                v25 = (_QWORD *)(v38 - 8);
                v19 = v80;
                if ( v39 )
                  v25 = 0LL;
                if ( !v25 )
                {
                  v23 = (_QWORD *)(v22 + 24);
                  goto LABEL_44;
                }
              }
            }
            v66 = (_QWORD *)WdLogNewEntry5_WdError(v19);
            v66[3] = -96LL;
            v66[4] = this;
            v67 = *(_QWORD *)this;
            v66[5] = *(_QWORD *)this;
            if ( !*(_QWORD *)(v9 + 8) )
            {
              v68 = WdLogNewEntry5_WdAssertion(v67);
              WdLogEvent5_WdAssertion(v68);
            }
            v69 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
            v66[6] = *(int *)(v69 + 272);
            if ( !*(_QWORD *)(v9 + 8) )
            {
              v70 = WdLogNewEntry5_WdAssertion(v69);
              WdLogEvent5_WdAssertion(v70);
            }
            v52 = v66;
            v66[7] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL) + 268LL);
          }
          WdLogEvent5_WdError(v52);
          goto LABEL_67;
        }
        v58 = (_QWORD *)WdLogNewEntry5_WdError(v16);
        v58[3] = v15;
        v58[4] = this;
        v59 = *(_QWORD *)this;
        v58[5] = *(_QWORD *)this;
        if ( !*(_QWORD *)(v9 + 8) )
        {
          v60 = WdLogNewEntry5_WdAssertion(v59);
          WdLogEvent5_WdAssertion(v60);
        }
        v61 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
        v58[6] = *(int *)(v61 + 272);
        if ( !*(_QWORD *)(v9 + 8) )
        {
          v50 = WdLogNewEntry5_WdAssertion(v61);
          WdLogEvent5_WdAssertion(v50);
        }
        v49 = v58;
        v58[7] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL) + 268LL);
      }
      WdLogEvent5_WdError(v49);
      goto LABEL_68;
    }
  }
LABEL_51:
  COREACCESS::~COREACCESS((COREACCESS *)v87);
  COREACCESS::~COREACCESS((COREACCESS *)v86);
  return v7;
}
