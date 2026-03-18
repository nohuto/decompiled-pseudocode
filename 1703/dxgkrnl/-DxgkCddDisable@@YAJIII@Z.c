/*
 * XREFs of ?DxgkCddDisable@@YAJIII@Z @ 0x1C009A370
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00058DC (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C000AF30 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C000AF88 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C000B06C (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000B558 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000D830 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D864 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0098DC4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DmmDisablePathsFromVidPnSource @ 0x1C009A290 (DmmDisablePathsFromVidPnSource.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C009A800 (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00E6420 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00E6BEC (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00F8DD4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00F8DF0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00FB0E0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0104CEC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DmmRemovePathsFromVidPnSource @ 0x1C01D66F0 (DmmRemovePathsFromVidPnSource.c)
 */

__int64 __fastcall DxgkCddDisable(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rsi
  char *v10; // rdi
  unsigned int v11; // edx
  __int64 v12; // r9
  int v13; // r8d
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _BYTE *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // edi
  __int64 v37; // rdx
  __int64 v38; // rcx
  DXGSESSIONMGR *v39; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  struct _LUID *v45; // r12
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r14
  SESSION_VIEW *v50; // r13
  unsigned int v51; // r12d
  __int64 v52; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r9
  __int64 v57; // r8
  __int64 v58; // rcx
  unsigned int v59; // edx
  struct DXGDEVICE *v60; // r12
  int v61; // eax
  ADAPTER_DISPLAY *v62; // rcx
  __int64 v63; // rbx
  _QWORD *v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdx
  SESSION_VIEW *v71; // [rsp+30h] [rbp-D0h]
  unsigned int v72; // [rsp+30h] [rbp-D0h]
  struct DXGDEVICE *v73; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGDEVICE *v74; // [rsp+40h] [rbp-C0h]
  _BYTE v75[16]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v76[16]; // [rsp+58h] [rbp-A8h] BYREF
  struct tagRECT v77; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v78[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v79[32]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v80[56]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v81[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v82[32]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v83[56]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v84[112]; // [rsp+140h] [rbp+40h] BYREF
  int v85; // [rsp+1D0h] [rbp+D0h]
  __int64 v86; // [rsp+1D8h] [rbp+D8h] BYREF

  v85 = a3;
  v4 = (unsigned int)a3;
  v5 = (unsigned int)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3003);
  Current = DXGPROCESS::GetCurrent();
  v9 = Current;
  if ( !Current )
  {
    v35 = -1073741811;
    v63 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v63 + 24) = -1073741811LL;
    *(_QWORD *)(v63 + 32) = PsGetCurrentProcess();
LABEL_62:
    v64 = (_QWORD *)v63;
    goto LABEL_63;
  }
  v10 = (char *)Current + 168;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 168));
  v11 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( v11 < *((_DWORD *)v9 + 52)
    && (v12 = *((_QWORD *)v9 + 24),
        v13 = *(_DWORD *)(v12 + 16LL * v11 + 8),
        (((unsigned int)v5 >> 26) & 0x30) == (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x30))
    && (v13 & 0x1000) == 0
    && (v13 & 0xF) != 0
    && (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0xF) == 3 )
  {
    v14 = *(_QWORD *)(v12 + 16LL * v11);
  }
  else
  {
    v14 = 0LL;
  }
  ExReleasePushLockSharedEx(v10, 0LL);
  KeLeaveCriticalRegion();
  v73 = (struct DXGDEVICE *)v14;
  if ( !v14 )
  {
    v35 = -1073741811;
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v64[3] = -1073741811LL;
    v64[4] = v5;
    v64[5] = v9;
LABEL_63:
    WdLogEvent5_WdError(v64);
    goto LABEL_25;
  }
  v19 = *(_QWORD *)(v14 + 1800);
  if ( !v19 || !*(_QWORD *)(v19 + 2280) )
  {
    v65 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v65 + 24) = 561LL;
    WdLogEvent5_WdAssertion(v65);
  }
  if ( (a2 & 0x40000000) == 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v81, v14, 1LL, v18, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v81);
    if ( a2 == 1 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v19 + 2280)) )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
        *(ADAPTER_DISPLAY **)(v19 + 2280),
        *(struct ADAPTER_RENDER **)(v14 + 16));
    if ( *(_DWORD *)(v19 + 176) == 1 )
      ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v19 + 2280), v4, 0LL);
    LODWORD(v20) = 0;
    COREACCESS::~COREACCESS((COREACCESS *)v83);
    COREACCESS::~COREACCESS((COREACCESS *)v82);
LABEL_17:
    v23 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 117);
    if ( *(_BYTE *)v23 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v22, v21, v24, v25) + 24) = 206LL;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v76, *(struct DXGFASTMUTEX *const *)(v23 + 8), v24, v25);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v76);
      v29 = (_BYTE *)(v23 + 16);
      v30 = 18LL;
      do
      {
        *v29 = 0;
        v29 += 48;
        --v30;
      }
      while ( v30 );
      ++*(_DWORD *)(v23 + 880);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v26, v27, v28) + 24) = 228LL;
      if ( v76[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v76, v31, v33, v34);
    }
    if ( (int)v20 < 0 )
    {
      v86 = 0LL;
      DxgkLogCodePointPacket(0x41u, *(_DWORD *)(v19 + 268), v4, v20, 0LL);
    }
    v35 = 0;
    goto LABEL_25;
  }
  if ( ((a2 - 0x40000000) & 0xFFFFFFFB) != 0 )
  {
    v66 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v66 + 24) = 602LL;
    WdLogEvent5_WdAssertion(v66);
  }
  v39 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 73);
  if ( v39 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v39, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v63 = WdLogNewEntry5_WdError(v38, v37);
    v35 = -1073741811;
    *(_QWORD *)(v63 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v63 + 32) = -1073741811LL;
    goto LABEL_62;
  }
  LOBYTE(v86) = 0;
  v42 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v86, 1);
  v20 = v42;
  if ( v42 < 0 )
  {
    v67 = WdLogNewEntry5_WdError(v44, v43);
    *(_QWORD *)(v67 + 24) = v20;
    WdLogEvent5_WdError(v67);
  }
  else
  {
    v45 = (struct _LUID *)(v19 + 268);
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                              SessionDataForSpecifiedSession,
                              (const struct _LUID *)(v19 + 268),
                              v4);
    v71 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
      if ( PrimaryDisplaySource )
      {
        v50 = v71;
        do
        {
          v51 = *((_DWORD *)PrimaryDisplaySource + 4);
          v72 = v51;
          v52 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
          PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v50, PrimaryDisplaySource);
          CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                   (struct _LUID *)(v52 + 268),
                                                   &v73,
                                                   0LL);
          v20 = CddDeviceAndContextForCurrentSession;
          if ( CddDeviceAndContextForCurrentSession < 0 )
          {
            v69 = (_QWORD *)WdLogNewEntry5_WdError(v55, v54);
            v69[3] = *(int *)(v52 + 272);
            v69[4] = *(unsigned int *)(v52 + 268);
            v69[5] = v20;
            WdLogEvent5_WdError(v69);
          }
          else
          {
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
              (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v75,
              v73);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v78, (__int64)v73, 1LL, v56, 0);
            COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v78);
            if ( *(_DWORD *)(v52 + 176) != 1 && *((_DWORD *)v73 + 102) == 4
              || *(_DWORD *)(v52 + 176) == 4
              || (v74 = v73, *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v73 + 2) + 16LL) + 176LL) == 4) )
            {
              COREACCESS::~COREACCESS((COREACCESS *)v80);
              COREACCESS::~COREACCESS((COREACCESS *)v79);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v75);
            }
            else
            {
              v58 = *(_QWORD *)(v52 + 2288);
              if ( v58 )
                ADAPTER_RENDER::FlushScheduler(v58, 8LL, v51);
              if ( (a2 & 4) != 0 )
              {
                v59 = v51;
                v60 = v73;
                v61 = DmmDisablePathsFromVidPnSource(v73, v59);
              }
              else
              {
                if ( *(_BYTE *)(v52 + 2205)
                  && *(_BYTE *)(v52 + 2144)
                  && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v52 + 192) + 64LL) + 1136LL) )
                {
                  LOBYTE(v57) = 1;
                }
                else
                {
                  v57 = 0LL;
                }
                v70 = v51;
                v60 = v73;
                v61 = DmmRemovePathsFromVidPnSource(v73, v70, v57);
              }
              LODWORD(v20) = v61;
              memset(v84, 0, 0x38uLL);
              ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v52 + 2280), v72, 0);
              ADAPTER_DISPLAY::SetDisplayModeInfo(
                *(PERESOURCE ***)(v52 + 2280),
                v72,
                (const struct _DXGK_DISPLAYMODE_INFO *const)v84);
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v52 + 2280), v72, 0);
              v62 = *(ADAPTER_DISPLAY **)(v52 + 2280);
              *(_QWORD *)&v77.left = 0LL;
              *(_QWORD *)&v77.right = 0LL;
              ADAPTER_DISPLAY::SetContentRect(v62, v72, &v77);
              ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v52 + 2280), v72, 0LL);
              COREACCESS::~COREACCESS((COREACCESS *)v80);
              COREACCESS::~COREACCESS((COREACCESS *)v79);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v75);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v60 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v73);
            }
          }
        }
        while ( PrimaryDisplaySource );
        LODWORD(v4) = v85;
        v45 = (struct _LUID *)(v19 + 268);
      }
      if ( ((a2 - 0x40000000) & 0xFFFFFFFB) == 0 )
        DxgkRemoveSessionViewForCurrentSession(v45, v4, 1u);
      if ( (_BYTE)v86 )
        DxgkReleaseSessionModeChangeLock();
      goto LABEL_17;
    }
    v68 = (_QWORD *)WdLogNewEntry5_WdError(v48, v47);
    v68[3] = v4;
    v68[4] = *(int *)(v19 + 272);
    v68[5] = v45->LowPart;
    WdLogEvent5_WdError(v68);
    LODWORD(v20) = 0;
  }
  if ( (_BYTE)v86 )
    DxgkReleaseSessionModeChangeLock();
  v35 = v20;
LABEL_25:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v32, &EventProfilerExit, v33, 3003);
  return v35;
}
