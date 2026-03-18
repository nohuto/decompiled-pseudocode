/*
 * XREFs of ?DxgkCddDisable@@YAJIII@Z @ 0x1C00BB7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001AC4 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0002030 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0006E34 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0006E8C (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C0006FEC (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007718 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00087FC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008830 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00ABA0C (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00AC394 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00B2DB4 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00B5194 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00B51B0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C00BBC7C (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C00BBD0C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E1C1C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0102554 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01774BC (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C01EDC70 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 */

__int64 __fastcall DxgkCddDisable(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  __int64 v4; // r12
  __int64 v5; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rsi
  char *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdx
  _BYTE *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // edi
  __int64 v29; // rcx
  DXGSESSIONMGR *v30; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v32; // r8
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  int v34; // eax
  __int64 v35; // rcx
  struct _LUID *v36; // r13
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v38; // rcx
  SESSION_VIEW *v39; // r8
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r14
  unsigned int v41; // r12d
  __int64 v42; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v44; // rcx
  __int64 v45; // r9
  ADAPTER_RENDER *v46; // r10
  struct DXGDEVICE *v47; // r13
  int v48; // eax
  ADAPTER_DISPLAY *v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  _QWORD *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  unsigned __int8 v60; // r8
  struct DXGDEVICE *v61; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v62; // [rsp+38h] [rbp-C8h]
  DXGSESSIONDATA **v63; // [rsp+40h] [rbp-C0h]
  _BYTE v64[16]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v65[16]; // [rsp+58h] [rbp-A8h] BYREF
  struct tagRECT v66; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v67[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v68[32]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v69[56]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v70[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v71[32]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v72[56]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v73[112]; // [rsp+140h] [rbp+40h] BYREF
  int v74; // [rsp+1D0h] [rbp+D0h]
  __int64 v75; // [rsp+1D8h] [rbp+D8h] BYREF

  v74 = a3;
  v3 = a2;
  v4 = (unsigned int)a3;
  v5 = (unsigned int)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 3003);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v8 = Current;
  if ( !Current )
  {
    v27 = -1073741811;
    v50 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v50 + 24) = -1073741811LL;
    *(_QWORD *)(v50 + 32) = PsGetCurrentProcess(v52, v51);
LABEL_62:
    v53 = (_QWORD *)v50;
    goto LABEL_63;
  }
  v9 = (char *)Current + 200;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 200));
  v10 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 < *((_DWORD *)v8 + 60)
    && (v11 = *((_QWORD *)v8 + 28),
        v12 = *(_DWORD *)(v11 + 16 * v10 + 8),
        (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16 * v10 + 8) & 0x60))
    && (v12 & 0x2000) == 0
    && (v12 & 0x1F) != 0
    && (*(_BYTE *)(v11 + 16LL * (unsigned int)v10 + 8) & 0x1F) == 3 )
  {
    v13 = *(_QWORD *)(v11 + 16LL * (unsigned int)v10);
  }
  else
  {
    v13 = 0LL;
  }
  ExReleasePushLockSharedEx(v9, 0LL);
  KeLeaveCriticalRegion();
  v61 = (struct DXGDEVICE *)v13;
  if ( !v13 )
  {
    v27 = -1073741811;
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v53[3] = -1073741811LL;
    v53[4] = v5;
    v53[5] = v8;
LABEL_63:
    WdLogEvent5_WdError(v53);
    goto LABEL_25;
  }
  v16 = *(_QWORD *)(v13 + 1672);
  if ( !v16 || !*(_QWORD *)(v16 + 2304) )
  {
    v54 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v54 + 24) = 556LL;
    WdLogEvent5_WdAssertion(v54);
  }
  if ( (v3 & 0x40000000) == 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v70, v13, 1, v15, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v70);
    if ( v3 == 1 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(DXGADAPTER ***)(v16 + 2304)) )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
        *(ADAPTER_DISPLAY **)(v16 + 2304),
        *(struct ADAPTER_RENDER **)(v13 + 16));
    if ( *(_DWORD *)(v16 + 176) == 1 )
      ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v16 + 2304), v4, 0LL);
    LODWORD(v17) = 0;
    COREACCESS::~COREACCESS((COREACCESS *)v72);
    COREACCESS::~COREACCESS((COREACCESS *)v71);
LABEL_17:
    v21 = *((_QWORD *)DXGGLOBAL::GetGlobal(v18) + 117);
    if ( *(_BYTE *)v21 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19) + 24) = 201LL;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v65, *(struct DXGFASTMUTEX *const *)(v21 + 8));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v65);
      v23 = (_BYTE *)(v21 + 16);
      v24 = 18LL;
      do
      {
        *v23 = 0;
        v23 += 32;
        --v24;
      }
      while ( v24 );
      ++*(_DWORD *)(v21 + 592);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v22) + 24) = 223LL;
      if ( v65[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v65);
    }
    if ( (int)v17 < 0 )
    {
      v75 = 0LL;
      DxgkLogCodePointPacket(0x41u, *(_DWORD *)(v16 + 268), v4, v17, 0LL);
    }
    v27 = 0;
    goto LABEL_25;
  }
  if ( ((v3 - 0x40000000) & 0xFFFFFFFB) != 0 )
  {
    v55 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v55 + 24) = 597LL;
    WdLogEvent5_WdAssertion(v55);
  }
  v30 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v14) + 73);
  if ( v30 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v29);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v30, CurrentProcessSessionId, v32);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v50 = WdLogNewEntry5_WdError(v29);
    v27 = -1073741811;
    *(_QWORD *)(v50 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v56);
    *(_QWORD *)(v50 + 32) = -1073741811LL;
    goto LABEL_62;
  }
  LOBYTE(v75) = 0;
  v34 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v75, 1);
  v17 = v34;
  if ( v34 < 0 )
  {
    v57 = WdLogNewEntry5_WdError(v35);
    *(_QWORD *)(v57 + 24) = v17;
    WdLogEvent5_WdError(v57);
  }
  else
  {
    v36 = (struct _LUID *)(v16 + 268);
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                              SessionDataForSpecifiedSession,
                              (const struct _LUID *)(v16 + 268),
                              v4);
    v63 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
      if ( PrimaryDisplaySource )
      {
        do
        {
          v41 = *((_DWORD *)PrimaryDisplaySource + 4);
          v42 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
          PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v39, PrimaryDisplaySource);
          CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                   (struct _LUID *)(v42 + 268),
                                                   &v61,
                                                   0LL);
          v17 = CddDeviceAndContextForCurrentSession;
          if ( CddDeviceAndContextForCurrentSession < 0 )
          {
            v59 = (_QWORD *)WdLogNewEntry5_WdError(v44);
            v59[3] = *(int *)(v42 + 272);
            v59[4] = *(unsigned int *)(v42 + 268);
            v59[5] = v17;
            WdLogEvent5_WdError(v59);
          }
          else
          {
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
              (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v64,
              v61);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v67, (__int64)v61, 1, v45, 0);
            COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v67);
            if ( *(_DWORD *)(v42 + 176) != 1 && *((_DWORD *)v61 + 102) == 4
              || *(_DWORD *)(v42 + 176) == 4
              || (v62 = v61, *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v61 + 2) + 16LL) + 176LL) == 4) )
            {
              COREACCESS::~COREACCESS((COREACCESS *)v69);
              COREACCESS::~COREACCESS((COREACCESS *)v68);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v64);
            }
            else
            {
              if ( *(_QWORD *)(v42 + 2312) )
              {
                if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(*((_QWORD *)v61 + 2) + 16LL)) )
                  ADAPTER_RENDER::FlushScheduler((__int64)v46, 8, v41, 0);
                else
                  ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(v46, 1 << v41, 0, 1 << v41, 0);
              }
              if ( (v3 & 4) != 0 )
              {
                v47 = v61;
                v48 = DmmDisablePathsFromVidPnSource(v61, v41);
              }
              else
              {
                v60 = *(_BYTE *)(v42 + 2229)
                   && *(_BYTE *)(v42 + 2168)
                   && *(_DWORD *)(v42 + 276) != 1297040209
                   && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v42 + 192) + 64LL) + 1136LL);
                v47 = v61;
                v48 = DmmRemovePathsFromVidPnSource(v61, v41, v60);
              }
              LODWORD(v17) = v48;
              memset(v73, 0, 0x38uLL);
              ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v42 + 2304), v41, 0);
              ADAPTER_DISPLAY::SetDisplayModeInfo(
                *(PERESOURCE ***)(v42 + 2304),
                v41,
                (const struct _DXGK_DISPLAYMODE_INFO *const)v73);
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v42 + 2304), v41, 0);
              v49 = *(ADAPTER_DISPLAY **)(v42 + 2304);
              *(_QWORD *)&v66.left = 0LL;
              *(_QWORD *)&v66.right = 0LL;
              ADAPTER_DISPLAY::SetContentRect(v49, v41, &v66);
              ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v42 + 2304), v41, 0LL);
              COREACCESS::~COREACCESS((COREACCESS *)v69);
              COREACCESS::~COREACCESS((COREACCESS *)v68);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v64);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v61);
            }
          }
          v39 = (SESSION_VIEW *)v63;
        }
        while ( PrimaryDisplaySource );
        LODWORD(v4) = v74;
        v36 = (struct _LUID *)(v16 + 268);
      }
      if ( ((v3 - 0x40000000) & 0xFFFFFFFB) == 0 )
        DxgkRemoveSessionViewForCurrentSession(v36, v4, 1u);
      if ( (_BYTE)v75 )
        DxgkReleaseSessionModeChangeLock(v18);
      goto LABEL_17;
    }
    v58 = (_QWORD *)WdLogNewEntry5_WdError(v38);
    v58[3] = v4;
    v58[4] = *(int *)(v16 + 272);
    v58[5] = v36->LowPart;
    WdLogEvent5_WdError(v58);
    LODWORD(v17) = 0;
  }
  if ( (_BYTE)v75 )
    DxgkReleaseSessionModeChangeLock(v25);
  v27 = v17;
LABEL_25:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, 3003);
  return v27;
}
