/*
 * XREFs of ?CreateMonitorSetId@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00AD730
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00AD690 (-AllocateMonitorSetIdFromAdapterSource@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CD1C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?AppendMonitorId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C00ADA0C (-AppendMonitorId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E05D4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00F8DD4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00FB0E0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 */

__int64 __fastcall CreateMonitorSetId(const struct _LUID *a1, unsigned int a2, struct _UNICODE_STRING *a3)
{
  __int64 v4; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGPROCESS *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  SESSION_VIEW *SessionViewFromSource; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int16 v28; // si
  unsigned __int16 v29; // r12
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  struct DISPLAY_SOURCE *v34; // r15
  __int64 v35; // rcx
  _QWORD *v36; // r14
  struct _LUID v37; // rbx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  unsigned int v44; // edi
  struct VIDPN_MGR *v45; // r14
  __int64 v46; // rax
  unsigned __int64 v47; // r15
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  DMMVIDPNTOPOLOGY *v51; // rbx
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v59; // rdx
  const wchar_t *psz; // rbx
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  STRSAFE_PCNZWCH v75; // rbx
  __int64 v76; // rcx
  wchar_t *v77; // rdx
  int v78; // edi
  signed __int64 v79; // r9
  wchar_t v80; // ax
  _QWORD *v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  unsigned __int16 v91[2]; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v92; // [rsp+34h] [rbp-55h] BYREF
  STRSAFE_PCNZWCH Buffer; // [rsp+38h] [rbp-51h]
  unsigned int v94; // [rsp+40h] [rbp-49h]
  struct _LUID v95; // [rsp+48h] [rbp-41h] BYREF
  __int64 v96; // [rsp+50h] [rbp-39h] BYREF
  __int64 v97; // [rsp+58h] [rbp-31h] BYREF
  DMMVIDPNTOPOLOGY *v98; // [rsp+60h] [rbp-29h]
  _BYTE v99[8]; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v100[32]; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v101[40]; // [rsp+98h] [rbp+Fh] BYREF
  char v102; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = a2;
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 73);
  if ( !v8
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6, v9, v10),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, CurrentProcessSessionId)) == 0LL) )
  {
    v86 = WdLogNewEntry5_WdError(v7, v6);
    LODWORD(v22) = -1073741811;
    *(_QWORD *)(v86 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v88, v87, v89, v90);
    *(_QWORD *)(v86 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v86);
    return (unsigned int)v22;
  }
  Current = DXGPROCESS::GetCurrent();
  v16 = Current;
  if ( Current )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 9) + 224LL))(0LL) )
    {
      v102 = 0;
      v19 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v102, 0);
      v22 = v19;
      if ( v19 < 0 )
      {
        v67 = WdLogNewEntry5_WdError(v21, v20);
        *(_QWORD *)(v67 + 24) = v22;
        WdLogEvent5_WdError(v67);
      }
      else
      {
        SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionDataForSpecifiedSession, a1, v4);
        if ( SessionViewFromSource )
        {
          if ( (a3->MaximumLength & 1) != 0 )
          {
            v69 = WdLogNewEntry5_WdAssertion(v24, v23, v26, v27);
            *(_QWORD *)(v69 + 24) = 379LL;
            WdLogEvent5_WdAssertion(v69);
          }
          v28 = a3->MaximumLength >> 1;
          v29 = v28;
          Buffer = a3->Buffer;
          PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
          v34 = PrimaryDisplaySource;
          if ( PrimaryDisplaySource )
          {
            v35 = *((_QWORD *)PrimaryDisplaySource + 1);
            v36 = *(_QWORD **)(v35 + 16);
            if ( !v36 )
            {
              v70 = WdLogNewEntry5_WdAssertion(v35, v31, v32, v33);
              *(_QWORD *)(v70 + 24) = 394LL;
              WdLogEvent5_WdAssertion(v70);
            }
            if ( !v36[285] )
            {
              v71 = WdLogNewEntry5_WdAssertion(v35, v31, v32, v33);
              *(_QWORD *)(v71 + 24) = 395LL;
              WdLogEvent5_WdAssertion(v71);
            }
            v37 = *(struct _LUID *)((char *)v36 + 268);
            v95 = v37;
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v99, (struct DXGADAPTER *const)v36, 0LL);
            v38 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v99);
            v22 = v38;
            if ( v38 < 0 )
            {
              v72 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
              v72[4] = v95.HighPart;
              v72[5] = v37.LowPart;
              v72[3] = v22;
              WdLogEvent5_WdError(v72);
            }
            else
            {
              v43 = v36[285];
              v44 = *((_DWORD *)v34 + 4);
              v94 = v44;
              v45 = *(struct VIDPN_MGR **)(v43 + 88);
              if ( v45 )
              {
                EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v97, *(_QWORD *)(v43 + 88), v41, v42);
                v46 = *((_QWORD *)v45 + 11);
                v47 = 0LL;
                v96 = 0LL;
                if ( v46 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v46 + 32));
                  v48 = *((_QWORD *)v45 + 11);
                  v37.LowPart = v95.LowPart;
                }
                else
                {
                  v48 = 0LL;
                }
                auto_rc<DMMVIDPN const>::reset(&v96, v48);
                if ( v96 )
                {
                  v51 = (DMMVIDPNTOPOLOGY *)(v96 + 96);
                  v98 = (DMMVIDPNTOPOLOGY *)(v96 + 96);
                  while ( 1 )
                  {
                    v92 = -1;
                    v52 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v51, v44, v47, &v92);
                    v22 = v52;
                    if ( v52 < 0 )
                      break;
                    if ( v92 == -1 )
                    {
                      auto_rc<DMMVIDPN const>::reset(&v96, 0LL);
                      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v97 + 40), v61, v62, v63);
                      COREACCESS::~COREACCESS((COREACCESS *)v101);
                      COREACCESS::~COREACCESS((COREACCESS *)v100);
                      goto LABEL_33;
                    }
                    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v45 + 10) + 72LL));
                    v57 = *((_QWORD *)v45 + 10);
                    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v57, v92, v55, v56);
                    if ( TargetById && *((_BYTE *)TargetById + 404) )
                    {
                      if ( v57 )
                        ReferenceCounted::Release((ReferenceCounted *)(v57 + 64), v59);
                    }
                    else
                    {
                      if ( v57 )
                        ReferenceCounted::Release((ReferenceCounted *)(v57 + 64), v59);
                      v91[0] = 0;
                      if ( v29 && v29 != v28 )
                      {
                        v75 = Buffer;
                        v76 = v29;
                        v77 = (wchar_t *)Buffer;
                        v78 = 0;
                        v79 = (char *)L"^" - (char *)Buffer;
                        while ( v76 + 2147483646LL - v29 )
                        {
                          v80 = *(wchar_t *)((char *)v77 + v79);
                          if ( !v80 )
                            break;
                          *v77++ = v80;
                          if ( !--v76 )
                          {
                            --v77;
                            v78 = -2147483643;
                            break;
                          }
                        }
                        *v77 = 0;
                        if ( v78 == -2147483643 )
                        {
                          LODWORD(v22) = -1073741789;
                          goto LABEL_56;
                        }
                        --v29;
                        psz = v75 + 1;
                      }
                      else
                      {
                        psz = Buffer;
                      }
                      LODWORD(v22) = AppendMonitorId(v92, &v95, v45, v29, v91, psz);
                      if ( (int)v22 < 0 )
                        goto LABEL_56;
                      v29 -= v91[0];
                      Buffer = &psz[v91[0]];
                    }
                    v51 = v98;
                    ++v47;
                    v44 = v94;
                  }
                  v81 = (_QWORD *)WdLogNewEntry5_WdTrace(v54, v53, v55, v56);
                  v82 = v94;
                  v81[3] = v47;
                  v81[4] = v82;
                  v81[5] = v51;
                  v81[6] = v22;
                }
                else
                {
                  v74 = WdLogNewEntry5_WdError(v50, v49);
                  *(_QWORD *)(v74 + 24) = v95.HighPart;
                  *(_QWORD *)(v74 + 32) = v37.LowPart;
                  WdLogEvent5_WdError(v74);
                  LODWORD(v22) = -1071774884;
                }
LABEL_56:
                auto_rc<DMMVIDPN const>::reset(&v96, 0LL);
                DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v97 + 40), v83, v84, v85);
              }
              else
              {
                v73 = WdLogNewEntry5_WdError(v40, v39);
                *(_QWORD *)(v73 + 24) = v95.HighPart;
                *(_QWORD *)(v73 + 32) = v37.LowPart;
                WdLogEvent5_WdError(v73);
                LODWORD(v22) = -1071774923;
              }
            }
            COREACCESS::~COREACCESS((COREACCESS *)v101);
            COREACCESS::~COREACCESS((COREACCESS *)v100);
          }
          else
          {
LABEL_33:
            a3->Length = 2 * (v28 - v29);
          }
        }
        else
        {
          v68 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
          v68[3] = v4;
          v68[4] = a1->HighPart;
          v68[5] = a1->LowPart;
          WdLogEvent5_WdError(v68);
          LODWORD(v22) = -1073741811;
        }
      }
      if ( v102 )
        DxgkReleaseSessionModeChangeLock();
      return (unsigned int)v22;
    }
    v66 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v66 + 24) = v16;
    WdLogEvent5_WdError(v66);
    return 3221225506LL;
  }
  else
  {
    v65 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v65 + 24) = 334LL;
    WdLogEvent5_WdError(v65);
    return 3221225485LL;
  }
}
