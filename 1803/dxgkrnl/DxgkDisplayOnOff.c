/*
 * XREFs of DxgkDisplayOnOff @ 0x1C010F5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0009964 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009998 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000BC94 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001569C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C009EDEC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00A25B0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00AA3F4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00AA410 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E2018 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C010F350 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010F42C (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C015505C (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01564E8 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01D0E8C (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkDisplayOnOff(struct _LUID *a1, unsigned int a2, char a3, unsigned __int8 a4)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGDEVICE *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  DXGSESSIONMGR *v11; // rdi
  unsigned int CurrentProcessSessionId; // eax
  PRKPROCESS *SessionDataForSpecifiedSession; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v18; // rcx
  struct DXGPROCESS *v19; // r12
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v24; // rcx
  SESSION_VIEW *v25; // r13
  __int64 v26; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v28; // r14
  __int64 v29; // rdi
  unsigned int *v30; // r15
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r12
  __int64 v38; // rcx
  char v39; // r12
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r12
  struct DISPLAY_SOURCE *NextDisplaySource; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  char v55; // [rsp+30h] [rbp-D0h] BYREF
  char v56; // [rsp+31h] [rbp-CFh]
  unsigned __int8 v57; // [rsp+32h] [rbp-CEh]
  struct DXGDEVICE *v58; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGPROCESS *v59; // [rsp+40h] [rbp-C0h]
  _BYTE v60[8]; // [rsp+48h] [rbp-B8h] BYREF
  char v61; // [rsp+50h] [rbp-B0h]
  int v62; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+60h] [rbp-A0h]
  _BYTE v64[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v65[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v66[32]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v67[56]; // [rsp+A8h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-20h] BYREF
  char v69; // [rsp+110h] [rbp+10h]
  _QWORD v70[10]; // [rsp+120h] [rbp+20h] BYREF

  v4 = a2;
  v56 = a3;
  v57 = a4;
  memset(v70, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v70[1]);
  v63 = 0LL;
  v70[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v70[3]) = 53;
  LOBYTE(v70[6]) = -1;
  v62 = 2183;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerEnter, v7, 2183);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v62, 2183);
  v8 = 0LL;
  v69 = 0;
  v58 = 0LL;
  v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v9) + 74);
  if ( v11 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
    SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                     v11,
                                                     CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  LODWORD(v14) = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v47 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v47 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v48);
    v49 = v47;
    *(_QWORD *)(v47 + 32) = -1073741811LL;
LABEL_42:
    WdLogEvent5_WdError(v49);
    goto LABEL_32;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2324]);
  Current = DXGPROCESS::GetCurrent(v16, v15);
  v59 = Current;
  v19 = Current;
  if ( !Current )
  {
    v49 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v49 + 24) = 8530LL;
    goto LABEL_42;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 13) + 224LL))(0LL) )
  {
    v50 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v50 + 24) = v19;
    WdLogEvent5_WdError(v50);
    LODWORD(v14) = -1073741790;
  }
  else
  {
    v55 = 0;
    v21 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v55, 1);
    v14 = v21;
    if ( v21 < 0 )
    {
      v51 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v51 + 24) = v14;
      WdLogEvent5_WdError(v51);
    }
    else
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                (DXGSESSIONDATA *)SessionDataForSpecifiedSession,
                                a1,
                                v4);
      v25 = (SESSION_VIEW *)SessionViewFromSource;
      if ( SessionViewFromSource )
      {
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
        if ( PrimaryDisplaySource )
        {
          while ( 1 )
          {
            v28 = *((unsigned int *)PrimaryDisplaySource + 4);
            v29 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
            v30 = (unsigned int *)(v29 + 268);
            if ( v8 )
            {
              DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(v29 + 268), v8);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
              v58 = 0LL;
            }
            CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                     (struct _LUID *)(v29 + 268),
                                                     &v58,
                                                     0LL,
                                                     0LL);
            v33 = CddDeviceAndContextForCurrentSession;
            if ( CddDeviceAndContextForCurrentSession >= 0 )
              break;
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v32);
            v53[3] = *(int *)(v29 + 272);
            v53[4] = *v30;
            v53[5] = v33;
            WdLogEvent5_WdError(v53);
            v8 = 0LL;
            v58 = 0LL;
            NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v25, PrimaryDisplaySource);
LABEL_27:
            PrimaryDisplaySource = NextDisplaySource;
LABEL_28:
            if ( !PrimaryDisplaySource )
              goto LABEL_29;
          }
          v8 = v58;
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v64, v58);
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v60, *((struct DXGFASTMUTEX *const *)v19 + 39), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v60);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, (__int64)v8, 1, v34, 0);
          v35 = COREDEVICEACCESS::AcquireExclusive((__int64)v65);
          v37 = v35;
          if ( v35 == -1073741130 )
          {
            COREACCESS::~COREACCESS((COREACCESS *)v67);
            COREACCESS::~COREACCESS((COREACCESS *)v66);
            if ( v61 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v60);
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v64);
            v19 = v59;
            goto LABEL_28;
          }
          if ( v35 < 0 )
          {
            v54 = (_QWORD *)WdLogNewEntry5_WdError(v36);
            v54[3] = *(int *)(v29 + 272);
            v54[4] = *v30;
            v54[5] = v37;
          }
          else
          {
            v38 = *(_QWORD *)(v29 + 2464);
            if ( v38 )
              ADAPTER_RENDER::FlushScheduler(v38, 8, v28, 0);
            if ( !v56 )
            {
              DmmDisablePathsFromVidPnSource(v8, v28);
LABEL_20:
              COREACCESS::~COREACCESS((COREACCESS *)v67);
              COREACCESS::~COREACCESS((COREACCESS *)v66);
              if ( v61 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v60);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v64);
              if ( v8 )
              {
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
                v8 = 0LL;
                v58 = 0LL;
              }
              NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v25, PrimaryDisplaySource);
              v19 = v59;
              goto LABEL_27;
            }
            v39 = v57;
            if ( v57 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v29 + 2456)) )
              ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
                *(ADAPTER_DISPLAY **)(v29 + 2456),
                *((struct ADAPTER_RENDER **)v8 + 2));
            if ( (int)DmmEnablePathsFromVidPnSource(
                        v8,
                        v28,
                        v39,
                        (struct COREDEVICEACCESS *)v65,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v70) < 0 )
              goto LABEL_20;
            v40 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*(DXGADAPTER ***)(v29 + 2456), v28);
            v42 = v40;
            if ( v40 >= 0 )
              goto LABEL_20;
            v54 = (_QWORD *)WdLogNewEntry5_WdError(v41);
            v54[3] = v28;
            v54[4] = *(int *)(v29 + 272);
            v54[5] = *v30;
            v54[6] = v42;
          }
          WdLogEvent5_WdError(v54);
          goto LABEL_20;
        }
LABEL_29:
        LODWORD(v14) = 0;
      }
      else
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdError(v24);
        v52[3] = v4;
        v52[4] = a1->HighPart;
        v52[5] = a1->LowPart;
        WdLogEvent5_WdError(v52);
        LODWORD(v14) = -1073741811;
      }
    }
    if ( v55 )
      DxgkReleaseSessionModeChangeLock(v26);
  }
LABEL_32:
  if ( v69 )
  {
    KeUnstackDetachProcess(&ApcState);
    v69 = 0;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v44, &EventProfilerExit, v45, v62);
  return (unsigned int)v14;
}
