/*
 * XREFs of ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C017E3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001CA0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000757C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00075C0 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00080F4 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00086F0 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00087FC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008830 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0008E44 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000E084 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000E0EC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0014778 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C001D82C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C007DCE0 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00844BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E1C1C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0174E48 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C0175B20 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkGetSharedPrimaryHandle(struct _D3DKMT_GETSHAREDPRIMARYHANDLE *a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_GETSHAREDPRIMARYHANDLE *v3; // rdx
  ULONG64 v4; // rax
  struct _KTHREAD **Current; // rax
  DXGADAPTER *v6; // rcx
  __int64 v7; // r8
  DXGPROCESS *v8; // r13
  bool v9; // zf
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGADAPTER *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  int PairingAdapters; // r14d
  __int64 v19; // rax
  __int64 v20; // r8
  DXGADAPTER *v21; // rcx
  bool v22; // zf
  struct DXGADAPTER *v23; // rdi
  __int64 v24; // rax
  bool v25; // r12
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  int VidPnSourceOwnerType; // eax
  __int64 v30; // rcx
  volatile signed __int64 *v31; // r14
  __int64 v32; // rcx
  PRKPROCESS *SessionDataForSpecifiedSession; // r12
  unsigned int CurrentProcessSessionId; // eax
  __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rcx
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v45; // rcx
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // r12
  _QWORD *v54; // rax
  int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // r12
  __int64 v60; // r8
  _DWORD *p_hSharedPrimary; // rdx
  DXGADAPTER *v62; // rcx
  _BYTE v63[4]; // [rsp+30h] [rbp-1C8h] BYREF
  unsigned int v64; // [rsp+34h] [rbp-1C4h] BYREF
  unsigned int v65[2]; // [rsp+38h] [rbp-1C0h]
  int CddPrimaryShareResourceHandle; // [rsp+40h] [rbp-1B8h]
  struct DXGCONTEXT *v67; // [rsp+48h] [rbp-1B0h] BYREF
  struct DXGDEVICE *v68; // [rsp+50h] [rbp-1A8h] BYREF
  _BYTE v69[8]; // [rsp+58h] [rbp-1A0h] BYREF
  struct DXGADAPTER *v70; // [rsp+60h] [rbp-198h]
  char v71; // [rsp+68h] [rbp-190h]
  DXGADAPTER *v72; // [rsp+70h] [rbp-188h] BYREF
  struct _D3DKMT_GETSHAREDPRIMARYHANDLE *v73; // [rsp+80h] [rbp-178h]
  _BYTE v74[16]; // [rsp+88h] [rbp-170h] BYREF
  unsigned int v75; // [rsp+98h] [rbp-160h] BYREF
  struct DXGADAPTER *v76; // [rsp+A0h] [rbp-158h] BYREF
  struct DXGADAPTER *v77; // [rsp+A8h] [rbp-150h] BYREF
  unsigned __int64 v78; // [rsp+B0h] [rbp-148h] BYREF
  _QWORD v79[7]; // [rsp+B8h] [rbp-140h] BYREF
  _BYTE v80[96]; // [rsp+F0h] [rbp-108h] BYREF
  _BYTE v81[80]; // [rsp+150h] [rbp-A8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1A0h] [rbp-58h] BYREF
  char v83; // [rsp+1D0h] [rbp-28h]

  v3 = a1;
  v73 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
  {
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2021);
    v3 = v73;
  }
  v4 = (ULONG64)v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_QWORD *)v65 = *(_QWORD *)v4;
  CddPrimaryShareResourceHandle = *(_DWORD *)(v4 + 8);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress, (__int64)v3);
  v8 = (DXGPROCESS *)Current;
  if ( !Current )
    goto LABEL_7;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v72, v65[0], Current, &v76);
  v14 = v76;
  if ( !v76 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = v65[0];
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
    v6 = v72;
    if ( v72 )
      DXGADAPTER::ReleaseReferenceNoTracking(v72);
LABEL_7:
    v9 = (qword_1C005F010 & 2) == 0;
LABEL_8:
    if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v6, &EventProfilerExit, v7, 2021);
    return 3221225485LL;
  }
  v16 = v65[1];
  PairingAdapters = DxgkpGetPairingAdapters(v76, v65[1], 0LL, 0LL, &v77, &v78);
  if ( PairingAdapters < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v19 + 24) = v14;
    *(_QWORD *)(v19 + 32) = v16;
    WdLogEvent5_WdError(v19);
    v21 = v72;
    if ( v72 )
      DXGADAPTER::ReleaseReferenceNoTracking(v72);
    v22 = (qword_1C005F010 & 2) == 0;
LABEL_19:
    if ( !v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v21, &EventProfilerExit, v20, 2021);
    return (unsigned int)PairingAdapters;
  }
  v23 = v77;
  if ( !v77 || !*((_QWORD *)v77 + 288) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v24 + 24) = 3682LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v25 = 0;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v81, v23, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v81);
  if ( PairingAdapters < 0 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v23);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v81);
    v21 = v72;
    if ( v72 )
      DXGADAPTER::ReleaseReferenceNoTracking(v72);
    v22 = (qword_1C005F010 & 2) == 0;
    goto LABEL_19;
  }
  v26 = *((_QWORD *)v23 + 288);
  if ( (unsigned int)v16 >= *(_DWORD *)(v26 + 80) )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v23);
    v28 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v28 + 24) = v16;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v81);
    v6 = v72;
    if ( v72 )
      DXGADAPTER::ReleaseReferenceNoTracking(v72);
    v9 = (qword_1C005F010 & 2) == 0;
    goto LABEL_8;
  }
  CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle((DXGADAPTER **)v26, v16);
  if ( !CddPrimaryShareResourceHandle
    && !DXGPROCESS::IsRemoteConnection(v8)
    && DXGADAPTER::UsingSetTimingsFromVidPn(v23) )
  {
    VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((DXGADAPTER ***)v23 + 288), v16);
    v25 = !VidPnSourceOwnerType || VidPnSourceOwnerType == 3;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v81);
  v31 = 0LL;
  v68 = 0LL;
  v67 = 0LL;
  if ( v25 )
  {
    SessionDataForSpecifiedSession = (PRKPROCESS *)*((_QWORD *)DXGGLOBAL::GetGlobal(v30) + 73);
    if ( SessionDataForSpecifiedSession )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v32);
      SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                       (DXGSESSIONMGR *)SessionDataForSpecifiedSession,
                                                       CurrentProcessSessionId,
                                                       v35);
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v36 = WdLogNewEntry5_WdError(v32);
      *(_QWORD *)(v36 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v37);
      *(_QWORD *)(v36 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v36);
      goto LABEL_73;
    }
    DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v63);
    v64 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v63, 0);
    if ( (v64 & 0x80000000) != 0 )
    {
      v39 = WdLogNewEntry5_WdError(v38);
      *(_QWORD *)(v39 + 24) = (int)v64;
      v40 = v39;
LABEL_48:
      WdLogEvent5_WdError(v40);
LABEL_72:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v63);
      goto LABEL_73;
    }
    if ( DXGPROCESS::IsRemoteConnection(v8) )
    {
      v42 = WdLogNewEntry5_WdError(v41);
      *(_QWORD *)(v42 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v43);
      *(_QWORD *)(v42 + 32) = -1073741811LL;
      v40 = v42;
      goto LABEL_48;
    }
    v83 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2324]);
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)((char *)v23 + 268),
                                             &v68,
                                             &v67);
    v46 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v47 = WdLogNewEntry5_WdError(v45);
      *(_QWORD *)(v47 + 24) = v23;
      *(_QWORD *)(v47 + 32) = v46;
      WdLogEvent5_WdError(v47);
      if ( v83 )
      {
        KeUnstackDetachProcess(&ApcState);
        v83 = 0;
      }
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v63);
      v31 = (volatile signed __int64 *)v68;
      goto LABEL_73;
    }
    v31 = (volatile signed __int64 *)v68;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v74, v68);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v79,
      &v67,
      1u);
    v70 = v23;
    v71 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v69);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v80, (__int64)v31, 1, v48, 0);
    if ( !v79[0] )
    {
      v50 = WdLogNewEntry5_WdLowResource(v49);
      *(_QWORD *)(v50 + 24) = 3810LL;
      WdLogEvent5_WdLowResource(v50);
LABEL_68:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v80);
      if ( v71 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v69);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v79);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v74);
      if ( v83 )
      {
        KeUnstackDetachProcess(&ApcState);
        v83 = 0;
      }
      goto LABEL_72;
    }
    v51 = COREDEVICEACCESS::AcquireExclusive((__int64)v80, 1LL);
    v53 = v51;
    if ( v51 >= 0 )
    {
      CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                        *((DXGADAPTER ***)v23 + 288),
                                        v16);
      if ( CddPrimaryShareResourceHandle )
        goto LABEL_68;
      v55 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
              *((DXGADAPTER ***)v23 + 288),
              (struct DXGDEVICE *)v31,
              v16,
              &v75,
              &v64,
              (struct COREDEVICEACCESS *)v80);
      v53 = v55;
      if ( v55 >= 0 )
      {
        CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                          *((DXGADAPTER ***)v23 + 288),
                                          v16);
        if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v23 + 288), v16) )
          goto LABEL_68;
        if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(*((ADAPTER_DISPLAY **)v23 + 288), v16) )
          goto LABEL_68;
        v57 = ADAPTER_DISPLAY::PresentCddPrimary(
                *((ADAPTER_DISPLAY **)v23 + 288),
                v67,
                v16,
                (struct COREDEVICEACCESS *)v80);
        v59 = v57;
        if ( v57 >= 0 )
          goto LABEL_68;
        v54 = (_QWORD *)WdLogNewEntry5_WdError(v58);
        v54[3] = v16;
        v54[4] = v23;
        v54[5] = v59;
        goto LABEL_67;
      }
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v56);
      v54[3] = v23;
    }
    else
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v52);
      v54[3] = v31;
    }
    v54[4] = v53;
LABEL_67:
    WdLogEvent5_WdError(v54);
    goto LABEL_68;
  }
LABEL_73:
  DXGADAPTER::ReleaseReferenceNoTracking(v23);
  if ( v67 )
    DXGCONTEXT::ReleaseReference(v67);
  if ( v31 && _InterlockedExchangeAdd64(v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
  p_hSharedPrimary = &v73->hSharedPrimary;
  if ( (unsigned __int64)&v73->hSharedPrimary >= MmUserProbeAddress )
    p_hSharedPrimary = (_DWORD *)MmUserProbeAddress;
  *p_hSharedPrimary = CddPrimaryShareResourceHandle;
  v62 = v72;
  if ( v72 )
    DXGADAPTER::ReleaseReferenceNoTracking(v72);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v62, &EventProfilerExit, v60, 2021);
  return 0LL;
}
