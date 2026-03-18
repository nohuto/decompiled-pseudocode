/*
 * XREFs of ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C0165270
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0001070 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0009964 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009998 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000BC94 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014394 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001569C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0016D90 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0019B40 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0019C0C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C001A76C (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C001A77C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0023E74 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C009EDEC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00F48DC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C0152708 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0154690 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01560D4 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkGetSharedPrimaryHandle(struct _D3DKMT_GETSHAREDPRIMARYHANDLE *a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_GETSHAREDPRIMARYHANDLE *v3; // r13
  __int64 v4; // rdx
  ULONG64 v5; // rax
  struct _KTHREAD **Current; // rax
  DXGPROCESS *v7; // r12
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGADAPTER *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  int PairingAdapters; // esi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGADAPTER *v22; // rdi
  __int64 v23; // rax
  bool v24; // r15
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  int VidPnSourceOwnerType; // eax
  __int64 v29; // rcx
  volatile signed __int64 *v30; // rsi
  __int64 v31; // rcx
  PRKPROCESS *SessionDataForSpecifiedSession; // r15
  unsigned int CurrentProcessSessionId; // eax
  __int64 v34; // rbx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rcx
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // r15
  _QWORD *v54; // rax
  int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // r15
  _DWORD *p_hSharedPrimary; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  _BYTE v63[8]; // [rsp+30h] [rbp-1E8h] BYREF
  int v64; // [rsp+38h] [rbp-1E0h] BYREF
  __int64 v65; // [rsp+40h] [rbp-1D8h]
  struct _D3DKMT_GETSHAREDPRIMARYHANDLE *v66; // [rsp+48h] [rbp-1D0h]
  unsigned int v67[2]; // [rsp+50h] [rbp-1C8h]
  int CddPrimaryShareResourceHandle; // [rsp+58h] [rbp-1C0h]
  struct DXGCONTEXT *v69; // [rsp+60h] [rbp-1B8h] BYREF
  struct DXGDEVICE *v70; // [rsp+68h] [rbp-1B0h] BYREF
  _BYTE v71[8]; // [rsp+70h] [rbp-1A8h] BYREF
  struct DXGADAPTER *v72; // [rsp+78h] [rbp-1A0h]
  char v73; // [rsp+80h] [rbp-198h]
  DXGADAPTER *v74; // [rsp+88h] [rbp-190h] BYREF
  _BYTE v75[16]; // [rsp+98h] [rbp-180h] BYREF
  unsigned int v76; // [rsp+A8h] [rbp-170h] BYREF
  unsigned int v77; // [rsp+ACh] [rbp-16Ch] BYREF
  struct DXGADAPTER *v78; // [rsp+B0h] [rbp-168h] BYREF
  struct DXGADAPTER *v79; // [rsp+B8h] [rbp-160h] BYREF
  unsigned __int64 v80; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v81[7]; // [rsp+C8h] [rbp-150h] BYREF
  _BYTE v82[96]; // [rsp+100h] [rbp-118h] BYREF
  _BYTE v83[80]; // [rsp+160h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1B0h] [rbp-68h] BYREF
  char v85; // [rsp+1E0h] [rbp-38h]

  v3 = a1;
  v66 = a1;
  v65 = 0LL;
  v64 = 2021;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2021);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v64, 2021);
  v5 = (ULONG64)v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_QWORD *)v67 = *(_QWORD *)v5;
  CddPrimaryShareResourceHandle = *(_DWORD *)(v5 + 8);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress, v4);
  v7 = (DXGPROCESS *)Current;
  if ( !Current )
    goto LABEL_7;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v74, v67[0], Current, &v78);
  v14 = v78;
  if ( !v78 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = v67[0];
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
    if ( v74 )
      DXGADAPTER::ReleaseReferenceNoTracking(v74);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v8, &EventProfilerExit, v9, v64);
    return 3221225485LL;
  }
  v16 = v67[1];
  PairingAdapters = DxgkpGetPairingAdapters(v78, v67[1], 0LL, 0LL, &v79, &v80);
  if ( PairingAdapters < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v19 + 24) = v14;
    *(_QWORD *)(v19 + 32) = v16;
    WdLogEvent5_WdError(v19);
    if ( v74 )
      DXGADAPTER::ReleaseReferenceNoTracking(v74);
LABEL_17:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v20, &EventProfilerExit, v21, v64);
    return (unsigned int)PairingAdapters;
  }
  v22 = v79;
  if ( !v79 || !*((_QWORD *)v79 + 307) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v23 + 24) = 4331LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = 0;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v83, v22, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v83);
  if ( PairingAdapters < 0 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v22);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v83);
    if ( v74 )
      DXGADAPTER::ReleaseReferenceNoTracking(v74);
    goto LABEL_17;
  }
  v25 = *((_QWORD *)v22 + 307);
  if ( (unsigned int)v16 >= *(_DWORD *)(v25 + 80) )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v22);
    v27 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v27 + 24) = v16;
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v83);
    if ( v74 )
      DXGADAPTER::ReleaseReferenceNoTracking(v74);
    goto LABEL_7;
  }
  CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle((DXGADAPTER **)v25, v16);
  if ( !CddPrimaryShareResourceHandle
    && !DXGPROCESS::IsRemoteConnection(v7)
    && DXGADAPTER::UsingSetTimingsFromVidPn(v22) )
  {
    VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((DXGADAPTER ***)v22 + 307), v16);
    v24 = !VidPnSourceOwnerType || VidPnSourceOwnerType == 3;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v83);
  v30 = 0LL;
  v70 = 0LL;
  v69 = 0LL;
  if ( v24 )
  {
    SessionDataForSpecifiedSession = (PRKPROCESS *)*((_QWORD *)DXGGLOBAL::GetGlobal(v29) + 74);
    if ( SessionDataForSpecifiedSession )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v31);
      SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                       (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                       CurrentProcessSessionId);
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v34 = WdLogNewEntry5_WdError(v31);
      *(_QWORD *)(v34 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v35);
      *(_QWORD *)(v34 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v34);
      goto LABEL_72;
    }
    DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v63);
    v36 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v63, 0);
    v38 = v36;
    if ( v36 < 0 )
    {
      v39 = WdLogNewEntry5_WdError(v37);
      *(_QWORD *)(v39 + 24) = v38;
      v40 = v39;
LABEL_46:
      WdLogEvent5_WdError(v40);
LABEL_70:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v63);
LABEL_71:
      v3 = v66;
      goto LABEL_72;
    }
    if ( DXGPROCESS::IsRemoteConnection(v7) )
    {
      v42 = WdLogNewEntry5_WdError(v41);
      *(_QWORD *)(v42 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v43);
      *(_QWORD *)(v42 + 32) = -1073741811LL;
      v40 = v42;
      goto LABEL_46;
    }
    v85 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2324]);
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)((char *)v22 + 268),
                                             &v70,
                                             &v69,
                                             0LL);
    v46 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v47 = WdLogNewEntry5_WdError(v45);
      *(_QWORD *)(v47 + 24) = v22;
      *(_QWORD *)(v47 + 32) = v46;
      WdLogEvent5_WdError(v47);
      if ( v85 )
      {
        KeUnstackDetachProcess(&ApcState);
        v85 = 0;
      }
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v63);
      v30 = (volatile signed __int64 *)v70;
      goto LABEL_71;
    }
    v30 = (volatile signed __int64 *)v70;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v75, v70);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v81,
      &v69,
      1u);
    v72 = v22;
    v73 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v71);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v82, (__int64)v30, 1, v48, 0);
    if ( !v81[0] )
    {
      v50 = WdLogNewEntry5_WdLowResource(v49);
      *(_QWORD *)(v50 + 24) = 4460LL;
      WdLogEvent5_WdLowResource(v50);
LABEL_66:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
      if ( v73 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v71);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v81);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v75);
      if ( v85 )
      {
        KeUnstackDetachProcess(&ApcState);
        v85 = 0;
      }
      goto LABEL_70;
    }
    v51 = COREDEVICEACCESS::AcquireExclusive((__int64)v82);
    v53 = v51;
    if ( v51 >= 0 )
    {
      CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                        *((DXGADAPTER ***)v22 + 307),
                                        v16);
      if ( CddPrimaryShareResourceHandle )
        goto LABEL_66;
      v55 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
              *((DXGADAPTER ***)v22 + 307),
              (struct DXGDEVICE *)v30,
              v16,
              &v77,
              &v76,
              (struct COREDEVICEACCESS *)v82);
      v53 = v55;
      if ( v55 >= 0 )
      {
        CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                          *((DXGADAPTER ***)v22 + 307),
                                          v16);
        if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v22 + 307), v16) )
          goto LABEL_66;
        if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(*((ADAPTER_DISPLAY **)v22 + 307), v16) )
          goto LABEL_66;
        v57 = ADAPTER_DISPLAY::PresentCddPrimary(
                *((ADAPTER_DISPLAY **)v22 + 307),
                v69,
                v16,
                (struct COREDEVICEACCESS *)v82);
        v59 = v57;
        if ( v57 >= 0 )
          goto LABEL_66;
        v54 = (_QWORD *)WdLogNewEntry5_WdError(v58);
        v54[3] = v16;
        v54[4] = v22;
        v54[5] = v59;
        goto LABEL_65;
      }
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v56);
      v54[3] = v22;
    }
    else
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v52);
      v54[3] = v30;
    }
    v54[4] = v53;
LABEL_65:
    WdLogEvent5_WdError(v54);
    goto LABEL_66;
  }
LABEL_72:
  DXGADAPTER::ReleaseReferenceNoTracking(v22);
  if ( v69 )
    DXGCONTEXT::ReleaseReference(v69);
  if ( v30 && _InterlockedExchangeAdd64(v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v70 + 2), v70);
  p_hSharedPrimary = &v3->hSharedPrimary;
  if ( (unsigned __int64)&v3->hSharedPrimary >= MmUserProbeAddress )
    p_hSharedPrimary = (_DWORD *)MmUserProbeAddress;
  *p_hSharedPrimary = CddPrimaryShareResourceHandle;
  if ( v74 )
    DXGADAPTER::ReleaseReferenceNoTracking(v74);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v61, &EventProfilerExit, v62, v64);
  return 0LL;
}
