/*
 * XREFs of ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C009E200
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C009D66C (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000459C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0016DDC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C009E4D8 (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00A25B0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00AA3F4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00BC204 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DpiPersistence::CreateMonitorSetId(
        struct _LUID *this,
        const struct _LUID *a2,
        __int64 a3,
        struct _UNICODE_STRING *a4)
{
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v12; // rcx
  struct DXGPROCESS *v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  SESSION_VIEW *SessionViewFromSource; // rbx
  unsigned __int16 v20; // si
  unsigned __int16 v21; // si
  unsigned __int16 v22; // r14
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DISPLAY_SOURCE *v27; // r13
  __int64 v28; // rcx
  _QWORD *v29; // rbx
  unsigned int v30; // r15d
  signed int v31; // r12d
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // edi
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  DMMVIDPNTOPOLOGY *v40; // r12
  unsigned __int64 i; // r15
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  unsigned __int16 *v49; // rbx
  __int16 v50; // si
  __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  unsigned __int16 *v67; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v68; // [rsp+38h] [rbp-51h]
  unsigned __int16 *v69; // [rsp+40h] [rbp-49h]
  __int64 v70; // [rsp+48h] [rbp-41h] BYREF
  __int64 v71; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v72[2]; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v73[8]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v74[32]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v75[88]; // [rsp+88h] [rbp-1h] BYREF
  char v77; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = a3;
  v5 = (unsigned int)a2;
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 74);
  if ( v8 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v52 = WdLogNewEntry5_WdError(v7);
    LODWORD(v17) = -1073741811;
    *(_QWORD *)(v52 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v53);
    *(_QWORD *)(v52 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v52);
    return (unsigned int)v17;
  }
  Current = DXGPROCESS::GetCurrent();
  v13 = Current;
  if ( Current )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 13) + 224LL))(0LL) )
    {
      v77 = 0;
      v15 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v77, 0);
      v17 = v15;
      if ( v15 < 0 )
      {
        v56 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v56 + 24) = v17;
        WdLogEvent5_WdError(v56);
      }
      else
      {
        SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionDataForSpecifiedSession, this, v5);
        if ( SessionViewFromSource )
        {
          v20 = *(_WORD *)(v4 + 2);
          if ( (v20 & 1) != 0 )
          {
            v58 = WdLogNewEntry5_WdAssertion(v18);
            *(_QWORD *)(v58 + 24) = 264LL;
            WdLogEvent5_WdAssertion(v58);
            v20 = *(_WORD *)(v4 + 2);
          }
          v21 = v20 >> 1;
          v22 = v21;
          v69 = *(unsigned __int16 **)(v4 + 8);
          PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
          v27 = PrimaryDisplaySource;
          if ( PrimaryDisplaySource )
          {
            v28 = *((_QWORD *)PrimaryDisplaySource + 1);
            v29 = *(_QWORD **)(v28 + 16);
            if ( !v29 )
            {
              v59 = WdLogNewEntry5_WdAssertion(v28);
              *(_QWORD *)(v59 + 24) = 279LL;
              WdLogEvent5_WdAssertion(v59);
            }
            if ( !v29[307] )
            {
              v60 = WdLogNewEntry5_WdAssertion(v28);
              *(_QWORD *)(v60 + 24) = 280LL;
              WdLogEvent5_WdAssertion(v60);
            }
            *(_QWORD *)v72 = *(_QWORD *)((char *)v29 + 268);
            v30 = v72[0];
            v31 = v72[1];
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v73, (struct DXGADAPTER *const)v29, 0LL);
            v32 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v73);
            v17 = v32;
            if ( v32 < 0 )
            {
              v61 = (_QWORD *)WdLogNewEntry5_WdError(v33);
              v61[4] = (int)v72[1];
              v61[5] = v30;
              v61[3] = v17;
              WdLogEvent5_WdError(v61);
            }
            else
            {
              v34 = v29[307];
              v35 = *((_DWORD *)v27 + 4);
              v68 = v35;
              v36 = *(_QWORD *)(v34 + 88);
              if ( v36 )
              {
                EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v71, *(_QWORD *)(v34 + 88));
                v37 = *(_QWORD *)(v36 + 88);
                v70 = 0LL;
                if ( v37 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v37 + 32));
                  v38 = *(_QWORD *)(v36 + 88);
                }
                else
                {
                  v38 = 0LL;
                }
                auto_rc<DMMVIDPN const>::reset(&v70, v38);
                if ( v70 )
                {
                  v40 = (DMMVIDPNTOPOLOGY *)(v70 + 96);
                  for ( i = 0LL; ; ++i )
                  {
                    HIDWORD(v67) = -1;
                    v42 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v40, v35, i, (unsigned int *)&v67 + 1);
                    v17 = v42;
                    if ( v42 < 0 )
                      break;
                    if ( HIDWORD(v67) == -1 )
                    {
                      auto_rc<DMMVIDPN const>::reset(&v70, 0LL);
                      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v71 + 40));
                      COREACCESS::~COREACCESS((COREACCESS *)v75);
                      COREACCESS::~COREACCESS((COREACCESS *)v74);
                      v4 = a3;
                      goto LABEL_33;
                    }
                    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v36 + 80) + 72LL));
                    v47 = *(_QWORD *)(v36 + 80);
                    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v47, HIDWORD(v67));
                    if ( TargetById && *((_DWORD *)TargetById + 22) )
                    {
                      if ( v47 )
                        ReferenceCounted::Release((ReferenceCounted *)(v47 + 64));
                    }
                    else
                    {
                      if ( v47 )
                        ReferenceCounted::Release((ReferenceCounted *)(v47 + 64));
                      v49 = v69;
                      LOWORD(v67) = 0;
                      if ( v22 && v22 != v21 )
                      {
                        LODWORD(v17) = RtlStringCchCopyW(v69, v22, L"^");
                        if ( (_DWORD)v17 == -2147483643 )
                          LODWORD(v17) = -1073741789;
                        if ( (int)v17 < 0 )
                          goto LABEL_55;
                        --v22;
                        ++v49;
                      }
                      LODWORD(v17) = DpiPersistence::AppendMonitorId(
                                       (DpiPersistence *)HIDWORD(v67),
                                       (unsigned int)v72,
                                       (const struct _LUID *)v36,
                                       (struct VIDPN_MGR *)v22,
                                       (unsigned __int16)&v67,
                                       v49,
                                       v67);
                      if ( (int)v17 < 0 )
                        goto LABEL_55;
                      v22 -= (unsigned __int16)v67;
                      v69 = &v49[(unsigned __int16)v67];
                    }
                    v35 = v68;
                  }
                  v64 = (_QWORD *)WdLogNewEntry5_WdTrace(v44, v43, v45, v46);
                  v65 = v68;
                  v64[3] = i;
                  v64[4] = v65;
                  v64[5] = v40;
                  v64[6] = v17;
                }
                else
                {
                  v63 = WdLogNewEntry5_WdError(v39);
                  *(_QWORD *)(v63 + 24) = v31;
                  *(_QWORD *)(v63 + 32) = v30;
                  WdLogEvent5_WdError(v63);
                  LODWORD(v17) = -1071774884;
                }
LABEL_55:
                auto_rc<DMMVIDPN const>::reset(&v70, 0LL);
                DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v71 + 40));
              }
              else
              {
                v62 = WdLogNewEntry5_WdError(v33);
                *(_QWORD *)(v62 + 24) = (int)v72[1];
                *(_QWORD *)(v62 + 32) = v30;
                WdLogEvent5_WdError(v62);
                LODWORD(v17) = -1071774923;
              }
            }
            COREACCESS::~COREACCESS((COREACCESS *)v75);
            COREACCESS::~COREACCESS((COREACCESS *)v74);
          }
          else
          {
LABEL_33:
            v50 = v21 - v22;
            *(_WORD *)v4 = 2 * v50;
            if ( !(2 * v50) )
            {
              LODWORD(v17) = -1073741637;
              v66 = WdLogNewEntry5_WdWarning(v25, v24, v26);
              *(_QWORD *)(v66 + 24) = 413LL;
              WdLogEvent5_WdWarning(v66);
            }
          }
        }
        else
        {
          v57 = (_QWORD *)WdLogNewEntry5_WdError(v18);
          v57[3] = v5;
          v57[4] = this->HighPart;
          v57[5] = this->LowPart;
          WdLogEvent5_WdError(v57);
          LODWORD(v17) = -1073741811;
        }
      }
      if ( v77 )
        DxgkReleaseSessionModeChangeLock();
      return (unsigned int)v17;
    }
    v55 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v55 + 24) = v13;
    WdLogEvent5_WdError(v55);
    return 3221225506LL;
  }
  else
  {
    v54 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v54 + 24) = 219LL;
    WdLogEvent5_WdError(v54);
    return -1073741811LL;
  }
}
