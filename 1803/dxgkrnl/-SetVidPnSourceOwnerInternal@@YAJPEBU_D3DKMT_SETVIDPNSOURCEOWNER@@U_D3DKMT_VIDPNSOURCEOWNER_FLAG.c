/*
 * XREFs of ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010A57C
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C0109F00 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0014AA4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0014AF8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0014B58 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0014BAC (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001569C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0019AFC (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C001A370 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001A400 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C001A76C (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C001A77C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C009EDEC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkStatusChangeNotify @ 0x1C00D7140 (DxgkStatusChangeNotify.c)
 *     DxgkShutdownBootGraphics @ 0x1C00DC830 (DxgkShutdownBootGraphics.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00E8670 (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C0108FF0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1C010B190 (-RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C010B838 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C010B90C (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C010B938 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C010B9D4 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C010BB20 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C010CF28 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D05C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C010D30C (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C010DFB4 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C01566FC (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
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
  __int64 v16; // rsi
  __int64 v17; // rcx
  DXGDEVICE *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r13
  int v21; // eax
  DISPLAY_SOURCE *v22; // rcx
  __int64 v23; // rsi
  unsigned int i; // esi
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // r15d
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rsi
  struct DXGDEVICE *v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rcx
  int DeviceExecutionState; // r14d
  ADAPTER_DISPLAY *v37; // r15
  char v38; // cl
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // edx
  int v44; // edx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rcx
  unsigned int v49; // edx
  __int64 v50; // rax
  unsigned int v51; // ebx
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  char v70; // [rsp+30h] [rbp-3F8h] BYREF
  unsigned __int8 v71; // [rsp+31h] [rbp-3F7h] BYREF
  unsigned __int8 v72[6]; // [rsp+32h] [rbp-3F6h] BYREF
  struct DXGDEVICE *v73; // [rsp+38h] [rbp-3F0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v74; // [rsp+40h] [rbp-3E8h]
  struct DXGPROCESS *v75; // [rsp+48h] [rbp-3E0h]
  _QWORD v76[2]; // [rsp+50h] [rbp-3D8h] BYREF
  struct DXGDEVICE *v77; // [rsp+60h] [rbp-3C8h] BYREF
  _BYTE v78[16]; // [rsp+68h] [rbp-3C0h] BYREF
  enum _D3DKMT_DEVICEEXECUTION_STATE v79; // [rsp+78h] [rbp-3B0h] BYREF
  DXGDEVICE *v80; // [rsp+80h] [rbp-3A8h] BYREF
  _BYTE v81[24]; // [rsp+88h] [rbp-3A0h] BYREF
  void *Src[2]; // [rsp+A0h] [rbp-388h]
  void *v83[2]; // [rsp+B0h] [rbp-378h]
  int v84; // [rsp+C0h] [rbp-368h] BYREF
  __int64 v85; // [rsp+C8h] [rbp-360h]
  _BYTE v86[96]; // [rsp+D0h] [rbp-358h] BYREF
  _BYTE v87[432]; // [rsp+130h] [rbp-2F8h] BYREF
  unsigned int v88[16]; // [rsp+2E0h] [rbp-148h] BYREF
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v89[16]; // [rsp+320h] [rbp-108h] BYREF
  HANDLE Handle[16]; // [rsp+360h] [rbp-C8h] BYREF

  v74 = a4;
  v5.0 = (struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057)a2;
  v6 = a1;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  v75 = Current;
  if ( !Current )
  {
    v50 = WdLogNewEntry5_WdError(v7);
    v51 = -1073741811;
    *(_QWORD *)(v50 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v50);
    return v51;
  }
  memset(Handle, 0, sizeof(Handle));
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v78,
    (struct DXGFASTMUTEX *const *)Current);
  v88[0] = 0;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (const struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)&v6->hDevice;
  *(_OWORD *)v83 = *(_OWORD *)&v6->pVidPnSourceId;
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v83, 8));
  if ( v9 )
  {
    if ( v9 > 0x10 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
      v12[3] = LODWORD(Src[0]);
      v12[4] = v9;
      v12[5] = -1073741811LL;
      WdLogEvent5_WdError(v12);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v78);
      return 3221225485LL;
    }
    v10 = Src[1];
    if ( !Src[1] || !v83[0] )
    {
      v15 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      *(_QWORD *)(v15 + 24) = LODWORD(Src[0]);
      *(_QWORD *)(v15 + 32) = v9;
      *(_QWORD *)(v15 + 40) = v10;
      *(void **)(v15 + 48) = v83[0];
      *(_QWORD *)(v15 + 56) = -1073741811LL;
      WdLogEvent5_WdError(v15);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v78);
      return 3221225485LL;
    }
    v11 = 4LL * v9;
    if ( (char *)Src[1] + v11 < Src[1] || (char *)Src[1] + v11 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v89, v10, 4LL * v9);
    if ( (char *)v83[0] + v11 < v83[0] || (char *)v83[0] + v11 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v88, v83[0], 4LL * v9);
    if ( (*(_BYTE *)&v5.0 & 4) != 0 )
    {
      v14 = &a3[v9];
      if ( v14 < a3 || (unsigned __int64)v14 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Handle, a3, 8LL * v9);
    }
    Current = v75;
  }
  v16 = LODWORD(Src[0]);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v73,
    (unsigned int)Src[0],
    (struct _KTHREAD **)Current,
    &v80);
  v18 = v80;
  if ( !v80 )
  {
    v52 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v52 + 24) = v16;
    v51 = -1073741811;
    *(_QWORD *)(v52 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v52);
LABEL_98:
    if ( v73 && _InterlockedExchangeAdd64((volatile signed __int64 *)v73 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v73 + 2), v73);
LABEL_91:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v78);
    return v51;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v76, v80);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v81, (struct _KTHREAD **)v18 + 14);
  v20 = *((_QWORD *)v18 + 211);
  if ( !v20 )
  {
    v53 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v53 + 24) = v16;
    v51 = -1073741637;
    *(_QWORD *)(v53 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v53);
LABEL_96:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v81);
    if ( v76[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v76);
    goto LABEL_98;
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v87,
    *(struct ADAPTER_DISPLAY **)(v20 + 2456),
    Current);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v87);
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v70);
  v21 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v70, 1);
  v23 = v21;
  if ( v21 < 0 )
  {
    v55 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v55 + 24) = v23;
    WdLogEvent5_WdError(v55);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v70);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v87);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v81);
    if ( v76[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v76);
    if ( v73 && _InterlockedExchangeAdd64((volatile signed __int64 *)v73 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v73 + 2), v73);
    v51 = v23;
    goto LABEL_91;
  }
  for ( i = 0; i < v9; ++i )
  {
    v25 = *(_QWORD *)(v20 + 2456);
    v26 = v88[i];
    if ( (unsigned int)v26 >= *(_DWORD *)(v25 + 80) )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v54[3] = v88[i];
      v54[4] = i;
      v51 = -1073741811;
      v54[5] = -1073741811LL;
      WdLogEvent5_WdError(v54);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v70);
      MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v87);
      goto LABEL_96;
    }
    v22 = (DISPLAY_SOURCE *)(*(_QWORD *)(v25 + 112) + 3760 * v26);
    if ( v89[i] )
    {
      if ( !v22 || !DISPLAY_SOURCE::CheckSessionOwnership(v22) )
      {
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v70);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v87);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v81);
        if ( v76[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v76);
        if ( v73 && _InterlockedExchangeAdd64((volatile signed __int64 *)v73 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v73 + 2), v73);
        v51 = -1071774910;
        goto LABEL_91;
      }
      v27 = DXGDISPLAYMANAGEROBJECT::CheckOwnership(*(struct _LUID *)(v20 + 268), v88[i], Handle[i]);
      if ( v27 < 0 )
      {
        v56 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v56 + 24) = v88[i];
        WdLogEvent5_WdError(v56);
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v70);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v87);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v81);
        if ( v76[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v76);
        if ( v73 && _InterlockedExchangeAdd64((volatile signed __int64 *)v73 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v73 + 2), v73);
        v51 = v27;
        goto LABEL_91;
      }
    }
  }
  v77 = 0LL;
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                           (struct _LUID *)(v20 + 268),
                                           &v77,
                                           0LL,
                                           0LL);
  v32 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v57 = WdLogNewEntry5_WdEvent(v30, v29);
    *(_QWORD *)(v57 + 24) = v32;
    WdLogEvent5_WdEvent(v57);
  }
  v33 = v77;
  if ( v77 )
  {
    DxgkShutdownBootGraphics(v77, 0);
    if ( *((_BYTE *)v33 + 1744) )
    {
      v58 = WdLogNewEntry5_WdAssertion(v34);
      *(_QWORD *)(v58 + 24) = 2942LL;
      WdLogEvent5_WdAssertion(v58);
    }
    if ( v33 )
    {
      if ( *((_QWORD *)v33 + 2) != *((_QWORD *)v18 + 2)
        && ((*((_BYTE *)v33 + 1709) & 1) != 0 || (*((_BYTE *)v18 + 1709) & 1) != 0) )
      {
        v33 = 0LL;
        v77 = 0LL;
      }
      if ( v33 )
      {
        if ( *((_QWORD *)v33 + 2) != *((_QWORD *)v18 + 2) || *((_QWORD *)v33 + 211) != *((_QWORD *)v18 + 211) )
        {
          v59 = WdLogNewEntry5_WdAssertion(v34);
          *(_QWORD *)(v59 + 24) = 2959LL;
          WdLogEvent5_WdAssertion(v59);
        }
        *((_BYTE *)v33 + 1745) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v78);
      }
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v86, (__int64)v18, 1, v31, 0);
  DeviceExecutionState = COREDEVICEACCESS::AcquireExclusive((__int64)v86);
  if ( DeviceExecutionState < 0 )
  {
    if ( v33 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v78);
      *((_BYTE *)v33 + 1745) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v77 + 2), v77);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v86);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v70);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v87);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v81);
    if ( v76[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v76);
    if ( v73 && _InterlockedExchangeAdd64((volatile signed __int64 *)v73 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v73 + 2), v73);
    v51 = DeviceExecutionState;
    goto LABEL_91;
  }
  v37 = *(ADAPTER_DISPLAY **)(v20 + 2456);
  if ( !v37 )
  {
    v60 = WdLogNewEntry5_WdAssertion(v35);
    *(_QWORD *)(v60 + 24) = 2995LL;
    WdLogEvent5_WdAssertion(v60);
    v37 = *(ADAPTER_DISPLAY **)(v20 + 2456);
  }
  v38 = 0;
  if ( !v9 || v89[0] == D3DKMT_VIDPNSOURCEOWNER_UNOWNED && v9 == 1 && v88[0] < *((_DWORD *)v37 + 20) )
    v38 = 1;
  if ( v38 )
  {
    if ( !v9 && (ADAPTER_DISPLAY::IsVidPnSourceOwner(v37, v18) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v37, v18))
      || v9 == 1
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)v37, v18, v88[0])
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((DXGADAPTER **)v37, v18, v88[0])) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v87, v18, 0xFFFFFFFF);
      if ( v9 )
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v37, v18, v88[0]);
        v49 = 1;
      }
      else
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v37, v18);
        v49 = *((_DWORD *)v18 + 425);
      }
      DXGDEVICE::RemoveVidPnOwnership(v18, v49);
      DXGDEVICE::SetSchedulingPriorityAdjustment(v18, 0);
    }
    goto LABEL_62;
  }
  if ( g_OSTestSigningEnabled && (*(_BYTE *)(*((_QWORD *)v18 + 5) + 323LL) & 0x40) != 0 )
  {
    v61 = v89[0];
    if ( v89[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
      v61 = D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE;
    v89[0] = v61;
  }
  v39 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
  if ( (*(_DWORD *)(v39 + 300) & 0x10) != 0 )
  {
    v62 = *((_QWORD *)DXGGLOBAL::GetGlobal(v39) + 77);
    if ( v62 )
    {
      if ( (*(_DWORD *)(v62 + 300) & 0x4000) != 0 )
      {
        DeviceExecutionState = DXGDEVICE::GetDeviceExecutionState(v18, &v79);
        if ( DeviceExecutionState < 0 || v79 != D3DKMT_DEVICEEXECUTION_ACTIVE )
        {
          v66 = WdLogNewEntry5_WdWarning(v64, v63, v65);
          *(_QWORD *)(v66 + 24) = 3045LL;
          WdLogEvent5_WdWarning(v66);
          DeviceExecutionState = -1073741130;
        }
      }
    }
  }
  if ( DeviceExecutionState >= 0 )
  {
    if ( (unsigned int)_guard_dispatch_icall_fptr()
      && (v89[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED && v89[0] != D3DKMT_VIDPNSOURCEOWNER_SHARED
       || (unsigned int)_guard_dispatch_icall_fptr()) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v87, 0LL, 0xFFFFFFFF);
      DeviceExecutionState = ADAPTER_DISPLAY::AcquireVidPnSourceOwner(v37, v18, v89, v88, v9, v5);
      if ( DeviceExecutionState < 0 )
        goto LABEL_62;
      if ( v89[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
      {
        v43 = 3;
        goto LABEL_61;
      }
      if ( v89[0] > D3DKMT_VIDPNSOURCEOWNER_SHARED )
      {
        v43 = 3;
        if ( v89[0] <= D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI )
        {
          v43 = 7;
          goto LABEL_61;
        }
        if ( v89[0] == D3DKMT_VIDPNSOURCEOWNER_EMULATED )
        {
LABEL_61:
          DXGDEVICE::SetSchedulingPriorityAdjustment(v18, v43);
          *((_DWORD *)v18 + 425) += v9;
          goto LABEL_62;
        }
      }
      v67 = WdLogNewEntry5_WdAssertion(v42);
      *(_QWORD *)(v67 + 24) = 3100LL;
      WdLogEvent5_WdAssertion(v67);
      v43 = 0;
      goto LABEL_61;
    }
    v68 = WdLogNewEntry5_WdEvent(v41, v40);
    DeviceExecutionState = -1073741790;
    *(_QWORD *)(v68 + 24) = -1073741790LL;
    WdLogEvent5_WdEvent(v68);
  }
LABEL_62:
  v71 = 0;
  v72[0] = 0;
  if ( DeviceExecutionState < 0 )
    goto LABEL_154;
  if ( v33 )
    ADAPTER_DISPLAY::EnsureGdiOutput(v37, v33, (struct COREDEVICEACCESS *)v86, &v71, v72, v74);
  v44 = 1;
  if ( !v71 )
LABEL_154:
    v44 = 0;
  MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v87, v44);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v86);
  if ( v33 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v78);
    *((_BYTE *)v33 + 1745) = 0;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v77 + 2), v77);
  }
  if ( v70 )
  {
    v70 = 0;
    DxgkReleaseSessionModeChangeLock(v45);
  }
  if ( DeviceExecutionState >= 0 )
  {
    if ( v72[0] && v71 )
      _guard_dispatch_icall_fptr();
    _guard_dispatch_icall_fptr();
    v84 = 1;
    v85 = 0LL;
    if ( (int)DxgkStatusChangeNotify(&v84, v46, v47) < 0 )
    {
      v69 = WdLogNewEntry5_WdAssertion(v48);
      *(_QWORD *)(v69 + 24) = 3214LL;
      WdLogEvent5_WdAssertion(v69);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v86);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v70);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v87);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v81);
  if ( v76[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v76);
  if ( v73 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v73 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v73 + 2), v73);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v78);
  return (unsigned int)DeviceExecutionState;
}
