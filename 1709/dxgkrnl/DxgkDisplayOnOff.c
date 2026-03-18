/*
 * XREFs of DxgkDisplayOnOff @ 0x1C00BA9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001CA0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00086F0 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00087FC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008830 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00AC394 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00ACB60 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00B2DB4 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00B5194 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00B51B0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BB5F0 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C00BBD0C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E1C1C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0102554 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01CB260 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkDisplayOnOff(struct _LUID *a1, unsigned int a2, char a3, unsigned __int8 a4)
{
  __int64 v4; // r15
  struct DXGDEVICE *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v11; // r8
  PRKPROCESS *SessionDataForSpecifiedSession; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v17; // rcx
  struct DXGPROCESS *v18; // r13
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v23; // rcx
  SESSION_VIEW *v24; // r13
  __int64 v25; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v27; // r14
  __int64 v28; // rdi
  unsigned int *v29; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r15
  __int64 v37; // rcx
  unsigned __int8 v38; // r15
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r15
  __int64 v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  char v51; // [rsp+30h] [rbp-D0h] BYREF
  char v52; // [rsp+31h] [rbp-CFh]
  unsigned __int8 v53; // [rsp+32h] [rbp-CEh]
  struct DXGDEVICE *v54; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v55[8]; // [rsp+40h] [rbp-C0h] BYREF
  char v56; // [rsp+48h] [rbp-B8h]
  struct DXGPROCESS *v57; // [rsp+50h] [rbp-B0h]
  _BYTE v58[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v59[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v60[32]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v61[56]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v62[10]; // [rsp+D0h] [rbp-30h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+120h] [rbp+20h] BYREF
  char v64; // [rsp+150h] [rbp+50h]

  v4 = a2;
  v52 = a3;
  v53 = a4;
  memset(v62, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v62[1]);
  v6 = 0LL;
  v62[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v62[3]) = 53;
  LOBYTE(v62[6]) = -1;
  v64 = 0;
  v54 = 0LL;
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v7) + 73);
  if ( v9 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                     v9,
                                                     CurrentProcessSessionId,
                                                     v11);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  LODWORD(v13) = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v43 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v43 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v44);
    v45 = v43;
    *(_QWORD *)(v43 + 32) = -1073741811LL;
LABEL_39:
    WdLogEvent5_WdError(v45);
    goto LABEL_32;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2324]);
  Current = DXGPROCESS::GetCurrent(v15, v14);
  v57 = Current;
  v18 = Current;
  if ( !Current )
  {
    v45 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v45 + 24) = 7787LL;
    goto LABEL_39;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 12) + 224LL))(0LL) )
  {
    v46 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v46 + 24) = v18;
    WdLogEvent5_WdError(v46);
    LODWORD(v13) = -1073741790;
  }
  else
  {
    v51 = 0;
    v20 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v51, 1);
    v13 = v20;
    if ( v20 < 0 )
    {
      v47 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v47 + 24) = v13;
      WdLogEvent5_WdError(v47);
    }
    else
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                (DXGSESSIONDATA *)SessionDataForSpecifiedSession,
                                a1,
                                v4);
      v24 = (SESSION_VIEW *)SessionViewFromSource;
      if ( SessionViewFromSource )
      {
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
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
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
              v54 = 0LL;
            }
            v29 = (unsigned int *)(v28 + 268);
            CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                     (struct _LUID *)(v28 + 268),
                                                     &v54,
                                                     0LL);
            v32 = CddDeviceAndContextForCurrentSession;
            if ( CddDeviceAndContextForCurrentSession < 0 )
            {
              v49 = (_QWORD *)WdLogNewEntry5_WdError(v31);
              v49[3] = *(int *)(v28 + 272);
              v49[4] = *v29;
              v49[5] = v32;
              WdLogEvent5_WdError(v49);
              goto LABEL_26;
            }
            v6 = v54;
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
              (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v58,
              v54);
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v55, *((struct DXGFASTMUTEX *const *)v57 + 37));
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v55);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v59, (__int64)v6, 1, v33, 0);
            v34 = COREDEVICEACCESS::AcquireExclusive((__int64)v59, 2LL);
            v36 = v34;
            if ( v34 == -1073741130 )
            {
              COREACCESS::~COREACCESS((COREACCESS *)v61);
              COREACCESS::~COREACCESS((COREACCESS *)v60);
              if ( v56 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v55);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v58);
              goto LABEL_28;
            }
            if ( v34 < 0 )
              break;
            v37 = *(_QWORD *)(v28 + 2312);
            if ( v37 )
              ADAPTER_RENDER::FlushScheduler(v37, 8, v27, 0);
            if ( v52 )
            {
              v38 = v53;
              if ( v53 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(DXGADAPTER ***)(v28 + 2304)) )
                ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
                  *(ADAPTER_DISPLAY **)(v28 + 2304),
                  *((struct ADAPTER_RENDER **)v6 + 2));
              if ( (int)DmmEnablePathsFromVidPnSource(
                          v6,
                          v27,
                          v38,
                          (struct COREDEVICEACCESS *)v59,
                          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v62) < 0 )
                goto LABEL_21;
              v39 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*(DXGADAPTER ***)(v28 + 2304), v27);
              v41 = v39;
              if ( v39 >= 0 )
                goto LABEL_21;
              v50 = (_QWORD *)WdLogNewEntry5_WdError(v40);
              v50[3] = v27;
              v50[4] = *(int *)(v28 + 272);
              v50[5] = *v29;
              v50[6] = v41;
              goto LABEL_52;
            }
            DmmDisablePathsFromVidPnSource(v6, v27);
LABEL_21:
            COREACCESS::~COREACCESS((COREACCESS *)v61);
            COREACCESS::~COREACCESS((COREACCESS *)v60);
            if ( v56 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v55);
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v58);
            if ( !v6 )
              goto LABEL_27;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
LABEL_26:
            v6 = 0LL;
            v54 = 0LL;
LABEL_27:
            PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v24, PrimaryDisplaySource);
LABEL_28:
            if ( !PrimaryDisplaySource )
              goto LABEL_29;
          }
          v50 = (_QWORD *)WdLogNewEntry5_WdError(v35);
          v50[3] = *(int *)(v28 + 272);
          v50[4] = *v29;
          v50[5] = v36;
LABEL_52:
          WdLogEvent5_WdError(v50);
          goto LABEL_21;
        }
LABEL_29:
        LODWORD(v13) = 0;
      }
      else
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdError(v23);
        v48[3] = v4;
        v48[4] = a1->HighPart;
        v48[5] = a1->LowPart;
        WdLogEvent5_WdError(v48);
        LODWORD(v13) = -1073741811;
      }
    }
    if ( v51 )
      DxgkReleaseSessionModeChangeLock(v25);
  }
LABEL_32:
  if ( v64 )
    KeUnstackDetachProcess(&ApcState);
  return (unsigned int)v13;
}
