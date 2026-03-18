/*
 * XREFs of ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0098158
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C0096570 (DxgkSetVidPnSourceOwner.c)
 *     DxgkSetVidPnSourceOwner1 @ 0x1C0096D40 (DxgkSetVidPnSourceOwner1.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0001C5C (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0005AB8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000B680 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000B6D4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000B734 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000B788 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000CC20 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0013688 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0013A04 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0098928 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0098958 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00989F4 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C0098B40 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C0098C20 (DxgkStatusChangeNotify.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0098DC4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkShutdownBootGraphics @ 0x1C0098E90 (DxgkShutdownBootGraphics.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00BF56C (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 *     ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1C00BFB98 (-RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z @ 0x1C00C0690 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00E78D4 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E7C6C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00E801C (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C00E96E0 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0101970 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall SetVidPnSourceOwnerInternal(
        const struct _D3DKMT_SETVIDPNSOURCEOWNER *a1,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  struct DXGFASTMUTEX *const *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD **v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r15d
  const void *v14; // rsi
  __int64 v15; // rdi
  _QWORD *v16; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct DXGDEVICE *v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rdx
  DISPLAY_SOURCE *v34; // rcx
  __int64 v35; // rsi
  unsigned int v36; // esi
  __int64 v37; // r8
  __int64 v38; // rax
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rsi
  struct DXGDEVICE *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // r14d
  ADAPTER_DISPLAY *v51; // r13
  char v52; // cl
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // edx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned int v65; // edx
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned int v68; // ebx
  __int64 v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  char v79; // [rsp+30h] [rbp-378h] BYREF
  unsigned __int8 v80; // [rsp+31h] [rbp-377h] BYREF
  unsigned __int8 v81[6]; // [rsp+32h] [rbp-376h] BYREF
  struct DXGDEVICE *v82; // [rsp+38h] [rbp-370h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v83; // [rsp+40h] [rbp-368h]
  _QWORD v84[2]; // [rsp+48h] [rbp-360h] BYREF
  struct DXGDEVICE *v85; // [rsp+58h] [rbp-350h]
  _BYTE v86[16]; // [rsp+60h] [rbp-348h] BYREF
  enum _D3DKMT_DEVICEEXECUTION_STATE v87; // [rsp+70h] [rbp-338h] BYREF
  struct DXGDEVICE *v88; // [rsp+78h] [rbp-330h] BYREF
  _BYTE v89[24]; // [rsp+80h] [rbp-328h] BYREF
  void *Src[2]; // [rsp+98h] [rbp-310h]
  void *v91[2]; // [rsp+A8h] [rbp-300h]
  int v92; // [rsp+B8h] [rbp-2F0h] BYREF
  __int64 v93; // [rsp+C0h] [rbp-2E8h]
  _BYTE v94[96]; // [rsp+D0h] [rbp-2D8h] BYREF
  _BYTE v95[432]; // [rsp+130h] [rbp-278h] BYREF
  unsigned int v96[16]; // [rsp+2E0h] [rbp-C8h] BYREF
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v97[16]; // [rsp+320h] [rbp-88h] BYREF

  v83 = a3;
  Current = (struct DXGFASTMUTEX *const *)DXGPROCESS::GetCurrent();
  v10 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v67 = WdLogNewEntry5_WdError(v7, v6);
    v68 = -1073741811;
    *(_QWORD *)(v67 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v67);
    return v68;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v86, Current, v8, v9);
  v96[0] = 0;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)&a1->hDevice;
  *(_OWORD *)v91 = *(_OWORD *)&a1->pVidPnSourceId;
  v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v91, 8));
  if ( v13 )
  {
    if ( v13 > 0x10 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
      v16[3] = LODWORD(Src[0]);
      v16[4] = v13;
      v16[5] = -1073741811LL;
      WdLogEvent5_WdError(v16);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v86);
      return 3221225485LL;
    }
    v14 = Src[1];
    if ( !Src[1] || !v91[0] )
    {
      v18 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v18 + 24) = LODWORD(Src[0]);
      *(_QWORD *)(v18 + 32) = v13;
      *(_QWORD *)(v18 + 40) = v14;
      *(void **)(v18 + 48) = v91[0];
      *(_QWORD *)(v18 + 56) = -1073741811LL;
      WdLogEvent5_WdError(v18);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v86);
      return 3221225485LL;
    }
    v15 = 4LL * v13;
    if ( (char *)Src[1] + v15 < Src[1] || (char *)Src[1] + v15 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v97, v14, 4LL * v13);
    if ( (char *)v91[0] + v15 < v91[0] || (char *)v91[0] + v15 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v96, v91[0], 4LL * v13);
  }
  v19 = LODWORD(Src[0]);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v82, LODWORD(Src[0]), v10, &v88);
  v22 = v88;
  if ( !v88 )
  {
    v69 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v69 + 24) = v19;
    v68 = -1073741811;
    *(_QWORD *)(v69 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v69);
LABEL_98:
    if ( v82 && _InterlockedExchangeAdd64((volatile signed __int64 *)v82 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v82 + 2), v82);
    goto LABEL_91;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v84, v88);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v89,
    (struct _KTHREAD **)v22 + 14,
    v23,
    v24);
  v27 = *((_QWORD *)v22 + 225);
  if ( !v27 )
  {
    v70 = WdLogNewEntry5_WdError(v26, v25);
    *(_QWORD *)(v70 + 24) = v19;
    v68 = -1073741637;
    *(_QWORD *)(v70 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v70);
LABEL_96:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89);
    if ( v84[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v84);
    goto LABEL_98;
  }
  DxgkShutdownBootGraphics(*((_QWORD *)v22 + 225), (unsigned int)v19);
  if ( *((_BYTE *)v22 + 1856) )
  {
    v72 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
    *(_QWORD *)(v72 + 24) = 2694LL;
    WdLogEvent5_WdAssertion(v72);
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v95,
    *(struct ADAPTER_DISPLAY **)(v27 + 2280),
    (struct DXGPROCESS *)v10);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v95);
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v79);
  v32 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v79, 1);
  v35 = v32;
  if ( v32 < 0 )
  {
    v73 = WdLogNewEntry5_WdError(v34, v33);
    *(_QWORD *)(v73 + 24) = v35;
    WdLogEvent5_WdError(v73);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v79);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v95);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89);
    if ( v84[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v84);
    if ( v82 && _InterlockedExchangeAdd64((volatile signed __int64 *)v82 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v82 + 2), v82);
    v68 = v35;
    goto LABEL_91;
  }
  v36 = 0;
  if ( v13 )
  {
    while ( 1 )
    {
      v37 = *(_QWORD *)(v27 + 2280);
      v38 = v96[v36];
      if ( (unsigned int)v38 >= *(_DWORD *)(v37 + 80) )
      {
        v71 = (_QWORD *)WdLogNewEntry5_WdError(v34, v36);
        v71[3] = v96[v36];
        v71[4] = v36;
        v68 = -1073741811;
        v71[5] = -1073741811LL;
        WdLogEvent5_WdError(v71);
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v79);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v95);
        goto LABEL_96;
      }
      v34 = (DISPLAY_SOURCE *)(*(_QWORD *)(v37 + 112) + 3208 * v38);
      if ( v97[v36] )
      {
        if ( !v34 || !DISPLAY_SOURCE::CheckSessionOwnership(v34) )
          break;
      }
      if ( ++v36 >= v13 )
        goto LABEL_28;
    }
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v79);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v95);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89);
    if ( v84[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v84);
    if ( v82 && _InterlockedExchangeAdd64((volatile signed __int64 *)v82 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v82 + 2), v82);
    v68 = -1071774910;
    goto LABEL_91;
  }
LABEL_28:
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 2) + 16LL) + 300LL) & 0x10) != 0
    && ((int)DXGDEVICE::GetDeviceExecutionState(v22, &v87) < 0 || v87 != D3DKMT_DEVICEEXECUTION_ACTIVE) )
  {
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v79);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v95);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89);
    if ( v84[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v84);
    if ( v82 && _InterlockedExchangeAdd64((volatile signed __int64 *)v82 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v82 + 2), v82);
    v68 = -1073741130;
LABEL_91:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v86);
    return v68;
  }
  v85 = 0LL;
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v27 + 268));
  v44 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v66 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v66 + 24) = v44;
    WdLogEvent5_WdEvent(v66);
  }
  v45 = v85;
  if ( v85 )
  {
    if ( *((_QWORD *)v85 + 2) != *((_QWORD *)v22 + 2) && (*((_BYTE *)v85 + 1821) || *((_BYTE *)v22 + 1821)) )
    {
      v45 = 0LL;
      v85 = 0LL;
    }
    if ( v45 )
    {
      if ( *((_QWORD *)v45 + 2) != *((_QWORD *)v22 + 2) || *((_QWORD *)v45 + 225) != *((_QWORD *)v22 + 225) )
      {
        v74 = WdLogNewEntry5_WdAssertion(v41, v40, v42, v43);
        *(_QWORD *)(v74 + 24) = 2801LL;
        WdLogEvent5_WdAssertion(v74);
      }
      *((_BYTE *)v45 + 1857) = 1;
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v86);
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v94, (__int64)v22, 1LL, v43, 0);
  v50 = COREDEVICEACCESS::AcquireExclusive((__int64)v94, 2LL);
  if ( v50 < 0 )
  {
    if ( v45 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v86, v46, v48, v49);
      *((_BYTE *)v45 + 1857) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v94);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v79);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v95);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89);
    if ( v84[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v84);
    if ( v82 && _InterlockedExchangeAdd64((volatile signed __int64 *)v82 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v82 + 2), v82);
    v68 = v50;
    goto LABEL_91;
  }
  if ( !*(_QWORD *)(v27 + 2280) )
  {
    v75 = WdLogNewEntry5_WdAssertion(v47, v46, v48, v49);
    *(_QWORD *)(v75 + 24) = 2837LL;
    WdLogEvent5_WdAssertion(v75);
  }
  v51 = *(ADAPTER_DISPLAY **)(v27 + 2280);
  v52 = 0;
  if ( !v13 || v97[0] == D3DKMT_VIDPNSOURCEOWNER_UNOWNED && v13 == 1 && v96[0] < *((_DWORD *)v51 + 20) )
    v52 = 1;
  if ( v52 )
  {
    if ( !v13
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(v51, v22) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v51, v22))
      || v13 == 1
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)v51, v22, v96[0])
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((DXGADAPTER **)v51, v22, v96[0])) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v95, v22, 0xFFFFFFFF);
      if ( v13 )
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v51, v22, v96[0]);
        v65 = 1;
      }
      else
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v51, v22);
        v65 = *((_DWORD *)v22 + 453);
      }
      DXGDEVICE::RemoveVidPnOwnership(v22, v65);
      DXGDEVICE::SetSchedulingPriorityAdjustment(v22, 0);
    }
    goto LABEL_50;
  }
  if ( (unsigned int)_guard_dispatch_icall_fptr()
    && (v97[0] != D3DKMT_VIDPNSOURCEOWNER_SHARED && v97[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED
     || (unsigned int)_guard_dispatch_icall_fptr()) )
  {
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v95, 0LL, 0xFFFFFFFF);
    v50 = ADAPTER_DISPLAY::AcquireVidPnSourceOwner(v51, v22, v97, v96, v13, a2);
    if ( v50 < 0 )
      goto LABEL_50;
    if ( v97[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
    {
      LODWORD(v53) = 3;
LABEL_49:
      DXGDEVICE::SetSchedulingPriorityAdjustment(v22, v53);
      *((_DWORD *)v22 + 453) += v13;
      goto LABEL_50;
    }
    if ( v97[0] > D3DKMT_VIDPNSOURCEOWNER_SHARED )
    {
      v53 = 3LL;
      if ( v97[0] <= D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI )
      {
        LODWORD(v53) = 7;
        goto LABEL_49;
      }
      if ( v97[0] == D3DKMT_VIDPNSOURCEOWNER_EMULATED )
        goto LABEL_49;
    }
    v76 = WdLogNewEntry5_WdAssertion(v54, v53, v55, v56);
    *(_QWORD *)(v76 + 24) = 2905LL;
    WdLogEvent5_WdAssertion(v76);
    LODWORD(v53) = 0;
    goto LABEL_49;
  }
  v77 = WdLogNewEntry5_WdEvent();
  v50 = -1073741790;
  *(_QWORD *)(v77 + 24) = -1073741790LL;
  WdLogEvent5_WdEvent(v77);
LABEL_50:
  v80 = 0;
  v81[0] = 0;
  if ( v50 < 0 )
    goto LABEL_86;
  if ( v45 )
    ADAPTER_DISPLAY::EnsureGdiOutput(v51, v45, (struct COREDEVICEACCESS *)v94, &v80, v81, v83);
  v57 = 1;
  if ( !v80 )
LABEL_86:
    v57 = 0;
  MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v95, v57);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v94);
  if ( v45 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v86, v58, v59, v60);
    *((_BYTE *)v45 + 1857) = 0;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
  }
  if ( v79 )
  {
    v79 = 0;
    DxgkReleaseSessionModeChangeLock();
  }
  if ( v50 >= 0 )
  {
    if ( v81[0] && v80 )
      _guard_dispatch_icall_fptr();
    _guard_dispatch_icall_fptr();
    v92 = 1;
    v93 = 0LL;
    if ( (int)DxgkStatusChangeNotify(&v92) < 0 )
    {
      v78 = WdLogNewEntry5_WdAssertion(v62, v61, v63, v64);
      *(_QWORD *)(v78 + 24) = 3018LL;
      WdLogEvent5_WdAssertion(v78);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v94);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v79);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v95);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89);
  if ( v84[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v84);
  if ( v82 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v82 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v82 + 2), v82);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v86);
  return (unsigned int)v50;
}
