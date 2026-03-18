/*
 * XREFs of ?DxgkCddDisable@@YAJIII@Z @ 0x1C00DC9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0009964 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009998 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C001444C (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00144A4 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00154FC (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0019C48 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0019D28 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C002C6C8 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C009EDEC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00A25B0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00AA3F4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00AA410 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00C3DF8 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00E1694 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C010F350 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C015505C (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01564E8 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C0159E20 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C01D123C (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C0214AB0 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 */

__int64 __fastcall DxgkCddDisable(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r12
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
  SESSION_VIEW *v18; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // edi
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  DXGSESSIONMGR *v34; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r13
  SESSION_VIEW *v46; // rdi
  unsigned int v47; // r12d
  __int64 v48; // r14
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // r9
  ADAPTER_RENDER *v53; // r10
  int v54; // eax
  unsigned __int8 v55; // r8
  ADAPTER_DISPLAY *v56; // rcx
  struct DXGDEVICE *v57; // [rsp+30h] [rbp-D0h] BYREF
  SESSION_VIEW *v58; // [rsp+38h] [rbp-C8h]
  int v59; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+48h] [rbp-B8h]
  struct DXGDEVICE *v61; // [rsp+50h] [rbp-B0h]
  __int64 v62; // [rsp+58h] [rbp-A8h]
  _BYTE v63[16]; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v64; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v65[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v66[32]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v67[56]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v68[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v69[32]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v70[56]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v71[112]; // [rsp+140h] [rbp+40h] BYREF
  int v72; // [rsp+1D0h] [rbp+D0h]
  __int64 v73; // [rsp+1D8h] [rbp+D8h] BYREF

  v72 = a3;
  v3 = (unsigned int)a3;
  v5 = (unsigned int)a1;
  v60 = 0LL;
  v59 = 3003;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 3003);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v59, 3003);
  Current = DXGPROCESS::GetCurrent();
  v8 = Current;
  if ( !Current )
  {
    v23 = -1073741811;
    v27 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    *(_QWORD *)(v27 + 32) = PsGetCurrentProcess(v29, v28);
LABEL_36:
    v30 = (_QWORD *)v27;
    goto LABEL_37;
  }
  v9 = (char *)Current + 208;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v10 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 < *((_DWORD *)v8 + 62)
    && (v11 = *((_QWORD *)v8 + 29),
        v12 = *(_DWORD *)(v11 + 16 * v10 + 8),
        (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16 * v10 + 8) & 0x60))
    && (v12 & 0x2000) == 0
    && (v12 & 0x1F) == 3 )
  {
    v13 = *(_QWORD *)(v11 + 16LL * (unsigned int)v10);
  }
  else
  {
    v13 = 0LL;
  }
  ExReleasePushLockSharedEx(v9, 0LL);
  KeLeaveCriticalRegion();
  v57 = (struct DXGDEVICE *)v13;
  if ( !v13 )
  {
    v23 = -1073741811;
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v30[3] = -1073741811LL;
    v30[4] = v5;
    v30[5] = v8;
LABEL_37:
    WdLogEvent5_WdError(v30);
    goto LABEL_19;
  }
  v16 = *(_QWORD *)(v13 + 1688);
  v62 = v16;
  if ( !v16 || !*(_QWORD *)(v16 + 2456) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v31 + 24) = 595LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( (a2 & 0x40000000) == 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v68, v13, 1, v15, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v68);
    if ( a2 == 1 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v16 + 2456)) )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
        *(ADAPTER_DISPLAY **)(v16 + 2456),
        *(struct ADAPTER_RENDER **)(v13 + 16));
    if ( *(_DWORD *)(v16 + 176) == 1 )
      ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v16 + 2456), v3, 0LL);
    LODWORD(v17) = 0;
    COREACCESS::~COREACCESS((COREACCESS *)v70);
    COREACCESS::~COREACCESS((COREACCESS *)v69);
LABEL_16:
    Global = DXGGLOBAL::GetGlobal((__int64)v18);
    QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 127), v20, v21, v22);
    if ( (int)v17 < 0 )
    {
      v73 = 0LL;
      DxgkLogCodePointPacket(0x41u, *(_DWORD *)(v16 + 268), v3, v17, 0LL);
    }
    v23 = 0;
    goto LABEL_19;
  }
  if ( ((a2 - 0x40000000) & 0xFFFFFFFB) != 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v32 + 24) = 636LL;
    WdLogEvent5_WdAssertion(v32);
  }
  v34 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v14) + 74);
  if ( v34 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v33);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v34, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v27 = WdLogNewEntry5_WdError(v33);
    v23 = -1073741811;
    *(_QWORD *)(v27 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v37);
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    goto LABEL_36;
  }
  LOBYTE(v73) = 0;
  v38 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v73, 1);
  v17 = v38;
  if ( v38 >= 0 )
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                              SessionDataForSpecifiedSession,
                              (const struct _LUID *)(v16 + 268),
                              v3);
    v58 = (SESSION_VIEW *)SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
      if ( PrimaryDisplaySource )
      {
        v46 = v58;
        do
        {
          v47 = *((_DWORD *)PrimaryDisplaySource + 4);
          v48 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
          PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v46, PrimaryDisplaySource);
          CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                   (struct _LUID *)(v48 + 268),
                                                   &v57,
                                                   0LL,
                                                   0LL);
          v17 = CddDeviceAndContextForCurrentSession;
          if ( CddDeviceAndContextForCurrentSession >= 0 )
          {
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
              (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v63,
              v57);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, (__int64)v57, 1, v52, 0);
            COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v65);
            if ( *(_DWORD *)(v48 + 176) != 1 && *((_DWORD *)v57 + 106) == 4
              || *(_DWORD *)(v48 + 176) == 4
              || (v61 = v57, *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v57 + 2) + 16LL) + 176LL) == 4) )
            {
              COREACCESS::~COREACCESS((COREACCESS *)v67);
              COREACCESS::~COREACCESS((COREACCESS *)v66);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v63);
            }
            else
            {
              if ( *(_QWORD *)(v48 + 2464) )
              {
                if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(*((_QWORD *)v57 + 2) + 16LL)) )
                  ADAPTER_RENDER::FlushScheduler((__int64)v53, 8, v47, 0);
                else
                  ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(v53, 1 << v47, 0, 1 << v47, 0);
              }
              if ( (a2 & 4) != 0 )
              {
                v58 = v57;
                v54 = DmmDisablePathsFromVidPnSource(v57, v47);
              }
              else
              {
                v55 = *(_BYTE *)(v48 + 2373)
                   && *(_BYTE *)(v48 + 2304)
                   && *(_DWORD *)(v48 + 276) != 1297040209
                   && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v48 + 192) + 64LL) + 1136LL);
                v58 = v57;
                v54 = DmmRemovePathsFromVidPnSource(v57, v47, v55);
              }
              LODWORD(v17) = v54;
              memset(v71, 0, 0x38uLL);
              ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v48 + 2456), v47, 0);
              ADAPTER_DISPLAY::SetDisplayModeInfo(
                *(PERESOURCE ***)(v48 + 2456),
                v47,
                (const struct _DXGK_DISPLAYMODE_INFO *const)v71);
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v48 + 2456), v47, 0);
              v56 = *(ADAPTER_DISPLAY **)(v48 + 2456);
              *(_QWORD *)&v64.left = 0LL;
              *(_QWORD *)&v64.right = 0LL;
              ADAPTER_DISPLAY::SetContentRect(v56, v47, &v64);
              ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v48 + 2456), v47, 0LL);
              COREACCESS::~COREACCESS((COREACCESS *)v67);
              COREACCESS::~COREACCESS((COREACCESS *)v66);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v63);
              v18 = v58;
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v61 + 2), v57);
            }
          }
          else
          {
            v51 = (_QWORD *)WdLogNewEntry5_WdError(v50);
            v51[3] = *(int *)(v48 + 272);
            v51[4] = *(unsigned int *)(v48 + 268);
            v51[5] = v17;
            WdLogEvent5_WdError(v51);
          }
        }
        while ( PrimaryDisplaySource );
        v16 = v62;
        LODWORD(v3) = v72;
      }
      if ( ((a2 - 0x40000000) & 0xFFFFFFFB) == 0 )
        DxgkRemoveSessionViewForCurrentSession((struct _LUID *)(v16 + 268), v3, 1u);
      if ( (_BYTE)v73 )
        DxgkReleaseSessionModeChangeLock((__int64)v18);
      goto LABEL_16;
    }
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v43);
    v44[3] = v3;
    v44[4] = *(int *)(v16 + 272);
    v44[5] = *(unsigned int *)(v16 + 268);
    WdLogEvent5_WdError(v44);
    LODWORD(v17) = 0;
  }
  else
  {
    v40 = WdLogNewEntry5_WdError(v39);
    *(_QWORD *)(v40 + 24) = v17;
    WdLogEvent5_WdError(v40);
  }
  if ( (_BYTE)v73 )
    DxgkReleaseSessionModeChangeLock(v41);
  v23 = v17;
LABEL_19:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v59);
  return v23;
}
