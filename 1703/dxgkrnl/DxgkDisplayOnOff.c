/*
 * XREFs of DxgkDisplayOnOff @ 0x1C0096610
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0001D90 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0005AB8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000D830 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D864 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0098DC4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DmmEnablePathsFromVidPnSource @ 0x1C0099FDC (DmmEnablePathsFromVidPnSource.c)
 *     DmmDisablePathsFromVidPnSource @ 0x1C009A290 (DmmDisablePathsFromVidPnSource.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00E6BEC (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E7474 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00F8DD4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00F8DF0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00FB0E0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0104CEC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01B14A0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkDisplayOnOff(struct _LUID *a1, unsigned int a2, char a3, char a4)
{
  __int64 v4; // r15
  struct DXGDEVICE *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rdi
  unsigned int CurrentProcessSessionId; // eax
  PRKPROCESS *SessionDataForSpecifiedSession; // rsi
  __int64 v12; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGPROCESS *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  SESSION_VIEW *v25; // r13
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v27; // r14
  __int64 v28; // rdi
  unsigned int *v29; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r9
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r15
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r15
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  _QWORD *v59; // rax
  char v60; // [rsp+30h] [rbp-D0h] BYREF
  char v61; // [rsp+31h] [rbp-CFh]
  char v62; // [rsp+32h] [rbp-CEh]
  struct DXGDEVICE *v63; // [rsp+38h] [rbp-C8h]
  _BYTE v64[8]; // [rsp+40h] [rbp-C0h] BYREF
  char v65; // [rsp+48h] [rbp-B8h]
  struct DXGPROCESS *v66; // [rsp+50h] [rbp-B0h]
  _BYTE v67[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v68[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v69[32]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v70[56]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v71[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp+10h] BYREF
  char v73; // [rsp+140h] [rbp+40h]

  v4 = a2;
  v61 = a3;
  v62 = a4;
  memset(v71, 0, sizeof(v71));
  EtwActivityIdControl(3u, (LPGUID)&v71[1]);
  v6 = 0LL;
  v71[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v71[3]) = 53;
  v73 = 0;
  v63 = 0LL;
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 73);
  if ( v9 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                     v9,
                                                     CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  LODWORD(v12) = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v50 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v50 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    v51 = v50;
    *(_QWORD *)(v50 + 32) = -1073741811LL;
LABEL_39:
    WdLogEvent5_WdError(v51);
    goto LABEL_32;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2323]);
  Current = DXGPROCESS::GetCurrent();
  v66 = Current;
  v16 = Current;
  if ( !Current )
  {
    v51 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v51 + 24) = 7479LL;
    goto LABEL_39;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 9) + 224LL))(0LL) )
  {
    v52 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v52 + 24) = v16;
    WdLogEvent5_WdError(v52);
    LODWORD(v12) = -1073741790;
  }
  else
  {
    v60 = 0;
    v19 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v60, 1);
    v12 = v19;
    if ( v19 < 0 )
    {
      v53 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v53 + 24) = v12;
      WdLogEvent5_WdError(v53);
    }
    else
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                (DXGSESSIONDATA *)SessionDataForSpecifiedSession,
                                a1,
                                v4);
      v25 = SessionViewFromSource;
      if ( SessionViewFromSource )
      {
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
        if ( PrimaryDisplaySource )
        {
          while ( 1 )
          {
            v27 = *((unsigned int *)PrimaryDisplaySource + 4);
            v28 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
            if ( v6 )
            {
              DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(v28 + 268), v6);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v63 + 2), v63);
              v63 = 0LL;
            }
            v29 = (unsigned int *)(v28 + 268);
            CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v28 + 268));
            v33 = CddDeviceAndContextForCurrentSession;
            if ( CddDeviceAndContextForCurrentSession < 0 )
            {
              v55 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
              v55[3] = *(int *)(v28 + 272);
              v55[4] = *v29;
              v55[5] = v33;
              WdLogEvent5_WdError(v55);
              goto LABEL_26;
            }
            v6 = v63;
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
              (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v67,
              v63);
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v64, *((struct DXGFASTMUTEX *const *)v66 + 33), v34, v35);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v64);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v68, (__int64)v6, 1LL, v36, 0);
            v37 = COREDEVICEACCESS::AcquireExclusive((__int64)v68, 2LL);
            v40 = v37;
            if ( v37 == -1073741130 )
            {
              COREACCESS::~COREACCESS((COREACCESS *)v70);
              COREACCESS::~COREACCESS((COREACCESS *)v69);
              if ( v65 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v64, v56, v57, v58);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v67);
              goto LABEL_28;
            }
            if ( v37 < 0 )
              break;
            v41 = *(_QWORD *)(v28 + 2288);
            if ( v41 )
              ADAPTER_RENDER::FlushScheduler(v41, 8LL, (unsigned int)v27);
            if ( v61 )
            {
              if ( v62 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v28 + 2280)) )
                ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
                  *(ADAPTER_DISPLAY **)(v28 + 2280),
                  *((struct ADAPTER_RENDER **)v6 + 2));
              if ( (int)DmmEnablePathsFromVidPnSource(v6, v27, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v71) < 0 )
                goto LABEL_21;
              v42 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*(ADAPTER_DISPLAY **)(v28 + 2280), v27);
              v45 = v42;
              if ( v42 >= 0 )
                goto LABEL_21;
              v59 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43);
              v59[3] = v27;
              v59[4] = *(int *)(v28 + 272);
              v59[5] = *v29;
              v59[6] = v45;
              goto LABEL_52;
            }
            DmmDisablePathsFromVidPnSource(v6, v27);
LABEL_21:
            COREACCESS::~COREACCESS((COREACCESS *)v70);
            COREACCESS::~COREACCESS((COREACCESS *)v69);
            if ( v65 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v64, v46, v47, v48);
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v67);
            if ( !v6 )
              goto LABEL_27;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v63 + 2), v63);
LABEL_26:
            v6 = 0LL;
            v63 = 0LL;
LABEL_27:
            PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v25, PrimaryDisplaySource);
LABEL_28:
            if ( !PrimaryDisplaySource )
              goto LABEL_29;
          }
          v59 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
          v59[3] = *(int *)(v28 + 272);
          v59[4] = *v29;
          v59[5] = v40;
LABEL_52:
          WdLogEvent5_WdError(v59);
          goto LABEL_21;
        }
LABEL_29:
        LODWORD(v12) = 0;
      }
      else
      {
        v54 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
        v54[3] = v4;
        v54[4] = a1->HighPart;
        v54[5] = a1->LowPart;
        WdLogEvent5_WdError(v54);
        LODWORD(v12) = -1073741811;
      }
    }
    if ( v60 )
      DxgkReleaseSessionModeChangeLock();
  }
LABEL_32:
  if ( v73 )
    KeUnstackDetachProcess(&ApcState);
  return (unsigned int)v12;
}
