/*
 * XREFs of ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E795C
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C00E7770 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001CA0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007804 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007858 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00078B8 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000790C (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00080F4 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C000D658 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001441C (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0014778 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1C00929FC (-RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z @ 0x1C0093518 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z.c)
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00941C8 (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00AD01C (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00AD3B8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00AD6AC (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C00AF5B8 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E1C1C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00E8224 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00E8254 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00E8314 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00E8460 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C00E85B0 (DxgkStatusChangeNotify.c)
 *     DxgkShutdownBootGraphics @ 0x1C00E87C0 (DxgkShutdownBootGraphics.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C00E89D0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C00FE870 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall SetVidPnSourceOwnerInternal(
        const struct _D3DKMT_SETVIDPNSOURCEOWNER *a1,
        __int64 a2,
        void *const *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS v5; // ebx
  const struct _D3DKMT_SETVIDPNSOURCEOWNER *v6; // rdi
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r14
  unsigned int v9; // r12d
  const void *v10; // rdi
  __int64 v11; // rsi
  _QWORD *v12; // rax
  void *const *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  struct DXGDEVICE *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r13
  int v21; // eax
  DISPLAY_SOURCE *v22; // rcx
  __int64 v23; // rdi
  unsigned int i; // edi
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // r15d
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdi
  struct DXGDEVICE *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // r14d
  __int64 v38; // r15
  char v39; // cl
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  int v46; // edx
  int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // rcx
  unsigned int v50; // edx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v54; // ebx
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  int DeviceExecutionState; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  char v71; // [rsp+30h] [rbp-3F8h] BYREF
  unsigned __int8 v72; // [rsp+31h] [rbp-3F7h] BYREF
  unsigned __int8 v73[6]; // [rsp+32h] [rbp-3F6h] BYREF
  struct DXGDEVICE *v74; // [rsp+38h] [rbp-3F0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v75; // [rsp+40h] [rbp-3E8h]
  struct DXGPROCESS *v76; // [rsp+48h] [rbp-3E0h]
  _QWORD v77[2]; // [rsp+50h] [rbp-3D8h] BYREF
  struct DXGDEVICE *v78; // [rsp+60h] [rbp-3C8h] BYREF
  _BYTE v79[16]; // [rsp+68h] [rbp-3C0h] BYREF
  enum _D3DKMT_DEVICEEXECUTION_STATE v80; // [rsp+78h] [rbp-3B0h] BYREF
  struct DXGDEVICE *v81; // [rsp+80h] [rbp-3A8h] BYREF
  _BYTE v82[24]; // [rsp+88h] [rbp-3A0h] BYREF
  void *Src[2]; // [rsp+A0h] [rbp-388h]
  void *v84[2]; // [rsp+B0h] [rbp-378h]
  int v85; // [rsp+C0h] [rbp-368h] BYREF
  __int64 v86; // [rsp+C8h] [rbp-360h]
  _BYTE v87[96]; // [rsp+D0h] [rbp-358h] BYREF
  _BYTE v88[432]; // [rsp+130h] [rbp-2F8h] BYREF
  unsigned int v89[16]; // [rsp+2E0h] [rbp-148h] BYREF
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v90[16]; // [rsp+320h] [rbp-108h] BYREF
  HANDLE Handle[16]; // [rsp+360h] [rbp-C8h] BYREF

  v75 = a4;
  v5.0 = (struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057)a2;
  v6 = a1;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  v76 = Current;
  if ( !Current )
  {
    v53 = WdLogNewEntry5_WdError(v7);
    v54 = -1073741811;
    *(_QWORD *)(v53 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v53);
    return v54;
  }
  memset(Handle, 0, sizeof(Handle));
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v79,
    (struct DXGFASTMUTEX *const *)Current);
  v89[0] = 0;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (const struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)&v6->hDevice;
  *(_OWORD *)v84 = *(_OWORD *)&v6->pVidPnSourceId;
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v84, 8));
  if ( v9 )
  {
    if ( v9 > 0x10 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
      v12[3] = LODWORD(Src[0]);
      v12[4] = v9;
      v12[5] = -1073741811LL;
      WdLogEvent5_WdError(v12);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v79);
      return 3221225485LL;
    }
    v10 = Src[1];
    if ( !Src[1] || !v84[0] )
    {
      v15 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      *(_QWORD *)(v15 + 24) = LODWORD(Src[0]);
      *(_QWORD *)(v15 + 32) = v9;
      *(_QWORD *)(v15 + 40) = v10;
      *(void **)(v15 + 48) = v84[0];
      *(_QWORD *)(v15 + 56) = -1073741811LL;
      WdLogEvent5_WdError(v15);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v79);
      return 3221225485LL;
    }
    v11 = 4LL * v9;
    if ( (char *)Src[1] + v11 < Src[1] || (char *)Src[1] + v11 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v90, v10, 4LL * v9);
    if ( (char *)v84[0] + v11 < v84[0] || (char *)v84[0] + v11 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v89, v84[0], 4LL * v9);
    if ( (*(_BYTE *)&v5.0 & 4) != 0 )
    {
      v14 = &a3[v9];
      if ( v14 < a3 || (unsigned __int64)v14 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Handle, a3, 8LL * v9);
    }
    Current = v76;
  }
  v16 = LODWORD(Src[0]);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v74,
    (unsigned int)Src[0],
    (struct _KTHREAD **)Current,
    &v81);
  v18 = v81;
  if ( !v81 )
  {
    v55 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v55 + 24) = v16;
    v54 = -1073741811;
    *(_QWORD *)(v55 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v55);
LABEL_112:
    if ( v74 && _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v74);
LABEL_105:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v79);
    return v54;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77, v81);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v82, (struct _KTHREAD **)v18 + 14);
  v20 = *((_QWORD *)v18 + 209);
  if ( !v20 )
  {
    v56 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v56 + 24) = v16;
    v54 = -1073741637;
    *(_QWORD *)(v56 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v56);
LABEL_110:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v82);
    if ( v77[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77);
    goto LABEL_112;
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v88,
    *(struct ADAPTER_DISPLAY **)(v20 + 2304),
    Current);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v88);
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v71);
  v21 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v71, 1);
  v23 = v21;
  if ( v21 < 0 )
  {
    v58 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v58 + 24) = v23;
    WdLogEvent5_WdError(v58);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v71);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v88);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v82);
    if ( v77[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77);
    if ( v74 && _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v74);
    v54 = v23;
    goto LABEL_105;
  }
  for ( i = 0; i < v9; ++i )
  {
    v25 = *(_QWORD *)(v20 + 2304);
    v26 = v89[i];
    if ( (unsigned int)v26 >= *(_DWORD *)(v25 + 80) )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v57[3] = v89[i];
      v57[4] = i;
      v54 = -1073741811;
      v57[5] = -1073741811LL;
      WdLogEvent5_WdError(v57);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v71);
      MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v88);
      goto LABEL_110;
    }
    v22 = (DISPLAY_SOURCE *)(*(_QWORD *)(v25 + 112) + 3760 * v26);
    if ( v90[i] )
    {
      if ( !v22 || !DISPLAY_SOURCE::CheckSessionOwnership(v22) )
      {
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v71);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v88);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v82);
        if ( v77[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77);
        if ( v74 && _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v74);
        v54 = -1071774910;
        goto LABEL_105;
      }
      v27 = DXGDISPLAYMANAGEROBJECT::CheckOwnership(*(struct _LUID *)(v20 + 268), v89[i], Handle[i]);
      if ( v27 < 0 )
      {
        v59 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v59 + 24) = v89[i];
        WdLogEvent5_WdError(v59);
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v71);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v88);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v82);
        if ( v77[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77);
        if ( v74 && _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v74);
        v54 = v27;
        goto LABEL_105;
      }
    }
  }
  v78 = 0LL;
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                           (struct _LUID *)(v20 + 268),
                                           &v78,
                                           0LL);
  v33 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v52 = WdLogNewEntry5_WdEvent(v30, v29, v31, v32);
    *(_QWORD *)(v52 + 24) = v33;
    WdLogEvent5_WdEvent(v52);
  }
  v34 = v78;
  if ( v78 )
  {
    DxgkShutdownBootGraphics(v78, 0LL);
    if ( *((_BYTE *)v34 + 1728) )
    {
      v60 = WdLogNewEntry5_WdAssertion(v35);
      *(_QWORD *)(v60 + 24) = 2828LL;
      WdLogEvent5_WdAssertion(v60);
    }
    if ( v34 )
    {
      if ( *((_QWORD *)v34 + 2) != *((_QWORD *)v18 + 2) && (*((_BYTE *)v34 + 1693) || *((_BYTE *)v18 + 1693)) )
      {
        v34 = 0LL;
        v78 = 0LL;
      }
      if ( v34 )
      {
        if ( *((_QWORD *)v34 + 2) != *((_QWORD *)v18 + 2) || *((_QWORD *)v34 + 209) != *((_QWORD *)v18 + 209) )
        {
          v61 = WdLogNewEntry5_WdAssertion(v35);
          *(_QWORD *)(v61 + 24) = 2845LL;
          WdLogEvent5_WdAssertion(v61);
        }
        *((_BYTE *)v34 + 1729) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v79);
      }
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v87, (__int64)v18, 1, v32, 0);
  v37 = COREDEVICEACCESS::AcquireExclusive((__int64)v87, 2LL);
  if ( v37 < 0 )
  {
    if ( v34 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v79);
      *((_BYTE *)v34 + 1729) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v78 + 2), v78);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v87);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v71);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v88);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v82);
    if ( v77[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77);
    if ( v74 && _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v74);
    v54 = v37;
    goto LABEL_105;
  }
  if ( !*(_QWORD *)(v20 + 2304) )
  {
    v62 = WdLogNewEntry5_WdAssertion(v36);
    *(_QWORD *)(v62 + 24) = 2881LL;
    WdLogEvent5_WdAssertion(v62);
  }
  v38 = *(_QWORD *)(v20 + 2304);
  v39 = 0;
  if ( !v9 || v90[0] == D3DKMT_VIDPNSOURCEOWNER_UNOWNED && v9 == 1 && v89[0] < *(_DWORD *)(v38 + 80) )
    v39 = 1;
  if ( v39 )
  {
    if ( !v9
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v20 + 2304), v18)
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((ADAPTER_DISPLAY *)v38, v18))
      || v9 == 1
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)v38, v18, v89[0])
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((DXGADAPTER **)v38, v18, v89[0])) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v88, v18, 0xFFFFFFFF);
      if ( v9 )
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner((PERESOURCE **)v38, v18, v89[0]);
        v50 = 1;
      }
      else
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner((ADAPTER_DISPLAY *)v38, v18);
        v50 = *((_DWORD *)v18 + 421);
      }
      DXGDEVICE::RemoveVidPnOwnership(v18, v50);
      DXGDEVICE::SetSchedulingPriorityAdjustment(v18, 0);
    }
    goto LABEL_58;
  }
  v40 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
  if ( (*(_DWORD *)(v40 + 300) & 0x10) != 0 )
  {
    v51 = *((_QWORD *)DXGGLOBAL::GetGlobal(v40) + 76);
    if ( v51 )
    {
      if ( (*(_DWORD *)(v51 + 300) & 0x4000) != 0 )
      {
        DeviceExecutionState = DXGDEVICE::GetDeviceExecutionState(v18, &v80);
        v37 = DeviceExecutionState;
        if ( DeviceExecutionState < 0 || v80 != D3DKMT_DEVICEEXECUTION_ACTIVE )
        {
          v67 = WdLogNewEntry5_WdWarning(v65, v64, v66);
          *(_QWORD *)(v67 + 24) = 2917LL;
          WdLogEvent5_WdWarning(v67);
          v37 = -1073741130;
        }
      }
    }
  }
  if ( v37 >= 0 )
  {
    if ( (unsigned int)_guard_dispatch_icall_fptr()
      && (v90[0] != D3DKMT_VIDPNSOURCEOWNER_SHARED && v90[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED
       || (unsigned int)_guard_dispatch_icall_fptr()) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v88, 0LL, 0xFFFFFFFF);
      v37 = ADAPTER_DISPLAY::AcquireVidPnSourceOwner((ADAPTER_DISPLAY *)v38, v18, v90, (char *)v89, v9, v5);
      if ( v37 < 0 )
        goto LABEL_58;
      if ( v90[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
      {
        v46 = 3;
      }
      else
      {
        if ( v90[0] <= D3DKMT_VIDPNSOURCEOWNER_SHARED )
          goto LABEL_149;
        v46 = 3;
        if ( v90[0] <= D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI )
        {
          v46 = 7;
          goto LABEL_57;
        }
        if ( v90[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED )
        {
LABEL_149:
          v68 = WdLogNewEntry5_WdAssertion(v45);
          *(_QWORD *)(v68 + 24) = 2972LL;
          WdLogEvent5_WdAssertion(v68);
          v46 = 0;
        }
      }
LABEL_57:
      DXGDEVICE::SetSchedulingPriorityAdjustment(v18, v46);
      *((_DWORD *)v18 + 421) += v9;
      goto LABEL_58;
    }
    v69 = WdLogNewEntry5_WdEvent(v42, v41, v43, v44);
    v37 = -1073741790;
    *(_QWORD *)(v69 + 24) = -1073741790LL;
    WdLogEvent5_WdEvent(v69);
  }
LABEL_58:
  v72 = 0;
  v73[0] = 0;
  if ( v37 < 0 )
    goto LABEL_100;
  if ( v34 )
    ADAPTER_DISPLAY::EnsureGdiOutput((ADAPTER_DISPLAY *)v38, v34, (struct COREDEVICEACCESS *)v87, &v72, v73, v75);
  v47 = 1;
  if ( !v72 )
LABEL_100:
    v47 = 0;
  MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v88, v47);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v87);
  if ( v34 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v79);
    *((_BYTE *)v34 + 1729) = 0;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v78 + 2), v78);
  }
  if ( v71 )
  {
    v71 = 0;
    DxgkReleaseSessionModeChangeLock(v48);
  }
  if ( v37 >= 0 )
  {
    if ( v73[0] && v72 )
      _guard_dispatch_icall_fptr();
    _guard_dispatch_icall_fptr();
    v85 = 1;
    v86 = 0LL;
    if ( (int)DxgkStatusChangeNotify(&v85) < 0 )
    {
      v70 = WdLogNewEntry5_WdAssertion(v49);
      *(_QWORD *)(v70 + 24) = 3086LL;
      WdLogEvent5_WdAssertion(v70);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v87);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v71);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v88);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v82);
  if ( v77[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77);
  if ( v74 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v74);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v79);
  return (unsigned int)v37;
}
