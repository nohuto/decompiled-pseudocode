/*
 * XREFs of ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00E1E38
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00E1D98 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000BF64 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     RtlStringCchCopyW @ 0x1C000E754 (RtlStringCchCopyW.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00A4154 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00B2DB4 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00B5194 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C00E211C (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 */

__int64 __fastcall DpiPersistence::CreateMonitorSetId(
        struct _LUID *this,
        const struct _LUID *a2,
        __int64 a3,
        struct _UNICODE_STRING *a4)
{
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v11; // r8
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v14; // rcx
  struct DXGPROCESS *v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rbx
  unsigned __int16 v22; // si
  unsigned __int16 v23; // r15
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v25; // rcx
  struct DISPLAY_SOURCE *v26; // r13
  __int64 v27; // rcx
  __int64 v28; // r12
  _QWORD *v29; // r14
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // edi
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  DMMVIDPNTOPOLOGY *v39; // r13
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  volatile signed __int32 *v43; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  void (__fastcall ***v45)(_QWORD, __int64); // rcx
  int v46; // ebx
  const wchar_t *psz; // rbx
  __int64 v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  void (__fastcall ***v61)(_QWORD, __int64); // rcx
  int v62; // ebx
  __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rcx
  unsigned __int16 *v67; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v68; // [rsp+38h] [rbp-51h]
  unsigned int v69[2]; // [rsp+40h] [rbp-49h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+48h] [rbp-41h]
  __int64 v71; // [rsp+50h] [rbp-39h] BYREF
  __int64 v72; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v73[8]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v74[32]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v75[88]; // [rsp+88h] [rbp-1h] BYREF
  char v77; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = a3;
  v5 = (unsigned int)a2;
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 73);
  if ( v9 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, CurrentProcessSessionId, v11);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v49 = WdLogNewEntry5_WdError(v8);
    LODWORD(v19) = -1073741811;
    *(_QWORD *)(v49 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v50);
    *(_QWORD *)(v49 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v49);
    return (unsigned int)v19;
  }
  Current = DXGPROCESS::GetCurrent(v8, v7);
  v15 = Current;
  if ( Current )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 12) + 224LL))(0LL) )
    {
      v77 = 0;
      v17 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v77, 0);
      v19 = v17;
      if ( v17 < 0 )
      {
        v53 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v53 + 24) = v19;
        WdLogEvent5_WdError(v53);
      }
      else
      {
        SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionDataForSpecifiedSession, this, v5);
        if ( SessionViewFromSource )
        {
          if ( (*(_BYTE *)(v4 + 2) & 1) != 0 )
          {
            v55 = WdLogNewEntry5_WdAssertion(v20);
            *(_QWORD *)(v55 + 24) = 382LL;
            WdLogEvent5_WdAssertion(v55);
          }
          v22 = *(_WORD *)(v4 + 2) >> 1;
          v23 = v22;
          pszDest = *(NTSTRSAFE_PWSTR *)(v4 + 8);
          PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
          v26 = PrimaryDisplaySource;
          if ( PrimaryDisplaySource )
          {
            v27 = *((_QWORD *)PrimaryDisplaySource + 1);
            v28 = 0LL;
            v29 = *(_QWORD **)(v27 + 16);
            if ( !v29 )
            {
              v56 = WdLogNewEntry5_WdAssertion(v27);
              *(_QWORD *)(v56 + 24) = 397LL;
              WdLogEvent5_WdAssertion(v56);
            }
            if ( !v29[288] )
            {
              v57 = WdLogNewEntry5_WdAssertion(v27);
              *(_QWORD *)(v57 + 24) = 398LL;
              WdLogEvent5_WdAssertion(v57);
            }
            v30 = *(_QWORD *)((char *)v29 + 268);
            *(_QWORD *)v69 = v30;
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v73, (struct DXGADAPTER *const)v29, 0LL);
            v31 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v73);
            v19 = v31;
            if ( v31 < 0 )
            {
              v58 = (_QWORD *)WdLogNewEntry5_WdError(v32);
              v58[4] = (int)v69[1];
              v58[5] = (unsigned int)v30;
              v58[3] = v19;
              WdLogEvent5_WdError(v58);
            }
            else
            {
              v33 = v29[288];
              v34 = *((_DWORD *)v26 + 4);
              v68 = v34;
              v35 = *(_QWORD *)(v33 + 88);
              if ( v35 )
              {
                EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v72, *(_QWORD *)(v33 + 88));
                v36 = *(_QWORD *)(v35 + 88);
                v71 = 0LL;
                if ( v36 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v36 + 32));
                  v37 = *(_QWORD *)(v35 + 88);
                  LODWORD(v30) = v69[0];
                }
                else
                {
                  v37 = 0LL;
                }
                auto_rc<DMMVIDPN const>::reset(&v71, v37);
                if ( v71 )
                {
                  v39 = (DMMVIDPNTOPOLOGY *)(v71 + 96);
                  while ( 1 )
                  {
                    HIDWORD(v67) = -1;
                    v40 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v39, (_QWORD *)v34, v28, (unsigned int *)&v67 + 1);
                    v19 = v40;
                    if ( v40 < 0 )
                      break;
                    if ( HIDWORD(v67) == -1 )
                    {
                      auto_rc<DMMVIDPN const>::reset(&v71, 0LL);
                      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v72 + 40));
                      COREACCESS::~COREACCESS((COREACCESS *)v75);
                      COREACCESS::~COREACCESS((COREACCESS *)v74);
                      v4 = a3;
                      goto LABEL_35;
                    }
                    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v35 + 80) + 72LL));
                    v43 = *(volatile signed __int32 **)(v35 + 80);
                    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v43, SHIDWORD(v67));
                    if ( TargetById && *((_BYTE *)TargetById + 404) )
                    {
                      if ( v43 )
                      {
                        v61 = (void (__fastcall ***)(_QWORD, __int64))(v43 + 16);
                        v62 = _InterlockedDecrement(v43 + 18);
                        if ( v62 )
                        {
                          if ( v62 < 0 )
                          {
                            v63 = WdLogNewEntry5_WdError(v61);
                            *(_QWORD *)(v63 + 24) = v62;
                            WdLogEvent5_WdError(v63);
                          }
                        }
                        else if ( v61 )
                        {
                          (**v61)(v61, 1LL);
                        }
                      }
                    }
                    else
                    {
                      if ( v43 )
                      {
                        v45 = (void (__fastcall ***)(_QWORD, __int64))(v43 + 16);
                        v46 = _InterlockedDecrement(v43 + 18);
                        if ( v46 )
                        {
                          if ( v46 < 0 )
                          {
                            v64 = WdLogNewEntry5_WdError(v45);
                            *(_QWORD *)(v64 + 24) = v46;
                            WdLogEvent5_WdError(v64);
                          }
                        }
                        else if ( v45 )
                        {
                          (**v45)(v45, 1LL);
                        }
                      }
                      psz = pszDest;
                      LOWORD(v67) = 0;
                      if ( v23 && v23 != v22 )
                      {
                        LODWORD(v19) = RtlStringCchCopyW(pszDest, v23, L"^");
                        if ( (_DWORD)v19 == -2147483643 )
                          LODWORD(v19) = -1073741789;
                        if ( (int)v19 < 0 )
                          goto LABEL_62;
                        --v23;
                        ++psz;
                      }
                      LODWORD(v19) = DpiPersistence::AppendMonitorId(
                                       (DpiPersistence *)HIDWORD(v67),
                                       (unsigned int)v69,
                                       (const struct _LUID *)v35,
                                       (struct VIDPN_MGR *)v23,
                                       (unsigned __int16)&v67,
                                       psz,
                                       v67);
                      if ( (int)v19 < 0 )
                        goto LABEL_62;
                      v23 -= (unsigned __int16)v67;
                      pszDest = (NTSTRSAFE_PWSTR)&psz[(unsigned __int16)v67];
                    }
                    v34 = v68;
                    ++v28;
                  }
                  v65 = (_QWORD *)WdLogNewEntry5_WdTrace(v42, v41);
                  v66 = v68;
                  v65[3] = v28;
                  v65[4] = v66;
                  v65[5] = v39;
                  v65[6] = v19;
                }
                else
                {
                  v60 = WdLogNewEntry5_WdError(v38);
                  *(_QWORD *)(v60 + 24) = (int)v69[1];
                  *(_QWORD *)(v60 + 32) = (unsigned int)v30;
                  WdLogEvent5_WdError(v60);
                  LODWORD(v19) = -1071774884;
                }
LABEL_62:
                auto_rc<DMMVIDPN const>::reset(&v71, 0LL);
                DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v72 + 40));
              }
              else
              {
                v59 = WdLogNewEntry5_WdError(v32);
                *(_QWORD *)(v59 + 24) = (int)v69[1];
                *(_QWORD *)(v59 + 32) = (unsigned int)v30;
                WdLogEvent5_WdError(v59);
                LODWORD(v19) = -1071774923;
              }
            }
            COREACCESS::~COREACCESS((COREACCESS *)v75);
            COREACCESS::~COREACCESS((COREACCESS *)v74);
          }
          else
          {
LABEL_35:
            *(_WORD *)v4 = 2 * (v22 - v23);
          }
        }
        else
        {
          v54 = (_QWORD *)WdLogNewEntry5_WdError(v20);
          v54[3] = v5;
          v54[4] = this->HighPart;
          v54[5] = this->LowPart;
          WdLogEvent5_WdError(v54);
          LODWORD(v19) = -1073741811;
        }
      }
      if ( v77 )
        DxgkReleaseSessionModeChangeLock(v25);
      return (unsigned int)v19;
    }
    v52 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v52 + 24) = v15;
    WdLogEvent5_WdError(v52);
    return 3221225506LL;
  }
  else
  {
    v51 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v51 + 24) = 337LL;
    WdLogEvent5_WdError(v51);
    return -1073741811LL;
  }
}
