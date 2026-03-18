/*
 * XREFs of ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB900
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB320 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00058DC (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005B1C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000B644 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000CC20 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000F5E0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0013688 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0013A04 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C002587C (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendDestroyAllocation@DXGADAPTER@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C002FD6C (-VmBusSendDestroyAllocation@DXGADAPTER@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCAT.c)
 *     ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00988C4 (-ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0098928 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0098958 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00989F4 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C0098B40 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0098DC4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C00C1B98 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C7DC0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00CA330 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C00CA428 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C00DC860 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00E763C (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E7C6C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00E8438 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01016C0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0104BA4 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0170BD4 (-DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PE.c)
 *     DxgkDestroyClientAllocation @ 0x1C017FFCC (DxgkDestroyClientAllocation.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C019ECA4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocationInternal(
        struct DXGPROCESS *a1,
        struct DXGDEVICE *this,
        char *a3,
        struct DXGALLOCATION **a4,
        unsigned int a5,
        const unsigned int **a6,
        UINT a7,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a8,
        char *a9,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a10,
        unsigned __int8 a11)
{
  struct DXGALLOCATION **v11; // r14
  unsigned int *v12; // r9
  struct DXGPROCESS *v14; // r13
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v15; // ebx
  UINT v16; // r10d
  unsigned int v17; // r12d
  const unsigned int *v18; // r8
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v27; // rdi
  __int64 v28; // rcx
  bool v29; // r8
  const struct DXGALLOCATION *v30; // rdi
  unsigned int v31; // edx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned int v48; // r14d
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  ADAPTER_DISPLAY *v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r13
  struct DXGRESOURCE *v56; // rax
  __int64 v57; // rax
  struct DXGALLOCATION *v58; // rdi
  bool v59; // r12
  __int64 v60; // rcx
  __int64 v61; // rax
  ADAPTER_DISPLAY *v62; // rcx
  __int64 v63; // rax
  UINT v64; // r12d
  struct DXGALLOCATION **v65; // r14
  struct DXGALLOCATION *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rax
  bool v69; // r13
  unsigned int v70; // r12d
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v80; // rcx
  __int64 v81; // rdi
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r9
  unsigned int v85; // edi
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  struct ADAPTER_RENDER *v89; // rdx
  __int64 v90; // rdi
  __int64 v91; // rax
  struct DXGALLOCATION *v92; // rdi
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  struct DXGALLOCATION *v97; // r8
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  struct DXGDEVICE *v103; // rbx
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // r9
  int v108; // eax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rdi
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rax
  __int64 v118; // r13
  struct DXGRESOURCE *v119; // r14
  UINT v120; // r12d
  UINT v121; // edi
  struct DXGPROCESS *Current; // rax
  struct DXGALLOCATION **v123; // r10
  UINT v124; // eax
  struct DXGALLOCATION **v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  struct DXGALLOCATION *v129; // rdi
  struct DXGRESOURCE *v130; // r14
  struct DXGALLOCATION *v131; // r9
  _QWORD *v132; // rax
  struct DXGALLOCATION *v133; // r9
  _QWORD *v134; // rax
  unsigned __int8 v135; // al
  struct DXGDEVICE *v136; // rbx
  __int64 v137; // rdx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  struct DXGADAPTER *v144; // rbx
  char v145; // bl
  __int64 v146; // rax
  char v147; // [rsp+40h] [rbp-348h] BYREF
  unsigned __int8 v148; // [rsp+41h] [rbp-347h]
  bool v149; // [rsp+42h] [rbp-346h]
  char v150; // [rsp+43h] [rbp-345h]
  unsigned __int8 v151; // [rsp+44h] [rbp-344h] BYREF
  char v152; // [rsp+45h] [rbp-343h]
  char v153; // [rsp+46h] [rbp-342h]
  unsigned __int8 v154; // [rsp+47h] [rbp-341h] BYREF
  unsigned int v155; // [rsp+48h] [rbp-340h]
  unsigned int v156; // [rsp+4Ch] [rbp-33Ch]
  __int64 v157; // [rsp+50h] [rbp-338h]
  struct DXGRESOURCE *v158; // [rsp+58h] [rbp-330h] BYREF
  struct DXGALLOCATION **v159; // [rsp+60h] [rbp-328h]
  BOOL v160; // [rsp+68h] [rbp-320h]
  struct DXGDEVICE *v161; // [rsp+70h] [rbp-318h] BYREF
  struct DXGALLOCATION *v162; // [rsp+78h] [rbp-310h]
  __int64 v163; // [rsp+80h] [rbp-308h] BYREF
  struct DXGADAPTER *v164; // [rsp+88h] [rbp-300h]
  char v165; // [rsp+90h] [rbp-2F8h]
  struct DXGALLOCATION *v166; // [rsp+98h] [rbp-2F0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v167; // [rsp+A0h] [rbp-2E8h]
  UINT v168; // [rsp+A8h] [rbp-2E0h]
  _BYTE v169[16]; // [rsp+B0h] [rbp-2D8h] BYREF
  struct DXGPROCESS *v170; // [rsp+C0h] [rbp-2C8h]
  PERESOURCE *v171; // [rsp+D0h] [rbp-2B8h] BYREF
  char v172; // [rsp+D8h] [rbp-2B0h] BYREF
  DXGADAPTER *v173; // [rsp+E8h] [rbp-2A0h]
  char v174; // [rsp+F0h] [rbp-298h]
  _BYTE v175[56]; // [rsp+F8h] [rbp-290h] BYREF
  _BYTE v176[96]; // [rsp+130h] [rbp-258h] BYREF
  _QWORD v177[2]; // [rsp+190h] [rbp-1F8h] BYREF
  int v178; // [rsp+1A0h] [rbp-1E8h]
  _BYTE v179[400]; // [rsp+1A8h] [rbp-1E0h] BYREF

  v11 = a4;
  v159 = a4;
  v12 = (unsigned int *)a3;
  v14 = a1;
  v170 = a1;
  v15.0 = a8.0;
  v167 = a10;
  if ( a11 )
  {
    v16 = 0;
    v168 = 0;
    v17 = a7;
    while ( v16 < a7 )
    {
      v18 = (const unsigned int *)&a9[4 * v16];
      if ( (unsigned __int64)v18 >= MmUserProbeAddress )
        v18 = (const unsigned int *)MmUserProbeAddress;
      v12[v16++] = *v18;
      v168 = v16;
    }
    *a6 = v12;
  }
  else
  {
    v17 = a7;
    if ( a7 )
    {
      v19 = a7;
      do
      {
        *v12 = *(unsigned int *)((char *)v12 + a9 - a3);
        ++v12;
        --v19;
      }
      while ( v19 );
    }
  }
  v158 = 0LL;
  v20 = ValidateDestroyAllocation(v14, this, a5, *a6, v17, v11, &v158);
  if ( v20 == 255 )
    return 0LL;
  if ( v20 < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
    *(_QWORD *)(v25 + 24) = this;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
    return 3221225485LL;
  }
  v27 = *((_QWORD *)this + 225);
  v157 = v27;
  LOBYTE(v11) = 0;
  v160 = (int)v11;
  if ( a8.Value >= 0x80000000 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v176, (__int64)this, 2LL, v24, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v176);
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
    {
      if ( *((_DWORD *)this + 82) == 1 )
      {
        if ( *((_BYTE *)DXGPROCESS::GetCurrent(v28) + 274) )
        {
          if ( v158 )
          {
            v30 = (const struct DXGALLOCATION *)*((_QWORD *)v158 + 3);
            v31 = *(_DWORD *)(*((_QWORD *)v30 + 6) + 4LL);
            if ( (v31 & 1) != 0
              && *((_QWORD *)this + 225) == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
              && !*((_QWORD *)v30 + 8) )
            {
              v160 = v30 != DXGDEVICE::GetDisplayedPrimary(this, (v31 >> 6) & 0xF, v29);
              v14 = v170;
            }
          }
        }
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v176);
    v27 = v157;
  }
  if ( v27 )
    v32 = *(_QWORD *)(v27 + 2280);
  else
    v32 = 0LL;
  v177[0] = v32;
  v177[1] = v14;
  if ( v32 )
    v33 = *(_DWORD *)(v32 + 80);
  else
    v33 = 0;
  v178 = 4 * v33;
  memset(v179, 0, sizeof(v179));
  v164 = *(struct DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v164 + 3);
  v163 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v164 + 120, 0LL);
  v165 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v171, (__int64)this, 2LL, v34, 0);
  if ( v174 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v35, v37);
    v38[3] = 275LL;
    v38[4] = 4LL;
    v38[5] = &v172;
    v38[6] = 0LL;
    v38[7] = 0LL;
    WdLogEvent5_WdCriticalError(v38);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v173 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v173 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v39, &EventBlockThread, v40, 72);
      KeWaitForSingleObject((char *)v173 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v173);
  }
  v174 = 1;
  if ( v175[40] )
    COREACCESS::AcquireShared((COREACCESS *)v175);
  v41 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_DWORD *)(v41 + 176) == 4 )
  {
    v42 = WdLogNewEntry5_WdEvent(v41);
    *(_QWORD *)(v42 + 24) = this;
    WdLogEvent5_WdEvent(v42);
LABEL_43:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v171);
LABEL_44:
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v163);
LABEL_45:
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v177, v43, v44, v45);
    return 0LL;
  }
  if ( *((_DWORD *)this + 102) == 4 )
  {
    v46 = WdLogNewEntry5_WdEvent(v41);
    *(_QWORD *)(v46 + 24) = this;
    WdLogEvent5_WdEvent(v46);
    DxgkDestroyClientAllocation(v47, this, v17, v159, v158);
    goto LABEL_43;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 192LL) + 64LL) + 40LL)
                 + 28LL) < 0x5015u )
    v15.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value & 0xFFFFFFFE);
  v152 = 0;
  v153 = 0;
  v148 = 0;
  v150 = 0;
  v149 = 0;
  v156 = 0;
  v162 = 0LL;
  v48 = -1;
  v155 = -1;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v147);
  v161 = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v169,
    (struct DXGFASTMUTEX *const *)v14,
    v49,
    v50);
  v55 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v56 = v158;
  if ( v158 )
  {
    if ( *((struct DXGDEVICE **)v158 + 1) != this )
    {
      v57 = WdLogNewEntry5_WdAssertion(v52, v51, v53, v54);
      *(_QWORD *)(v57 + 24) = 8114LL;
      WdLogEvent5_WdAssertion(v57);
      v56 = v158;
    }
    v58 = (struct DXGALLOCATION *)*((_QWORD *)v56 + 3);
    if ( v58 )
    {
      v59 = v160;
      while ( 1 )
      {
        v60 = *(_DWORD *)(*((_QWORD *)v58 + 6) + 4LL) & 1;
        v51 = (unsigned int)v60
            + ((*(_DWORD *)(*((_QWORD *)v58 + 6) + 4LL) >> 1) & 1)
            + ((*(_DWORD *)(*((_QWORD *)v58 + 6) + 4LL) >> 13) & 1);
        if ( (unsigned int)v51 > 1 )
        {
          v61 = WdLogNewEntry5_WdAssertion(v60, v51, v53, v54);
          *(_QWORD *)(v61 + 24) = 8123LL;
          WdLogEvent5_WdAssertion(v61);
        }
        v53 = *(unsigned int *)(*((_QWORD *)v58 + 6) + 4LL);
        if ( (v53 & 1) != 0
          && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, ((unsigned int)v53 >> 6) & 0xF)
           || v55
           && (v62 = *(ADAPTER_DISPLAY **)(v55 + 2280)) != 0LL
           && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v62, (unsigned int)v53, v53, v54))
          && !v59 )
        {
          v148 = 1;
          v162 = v58;
          v63 = *((_QWORD *)v58 + 6);
          v48 = (*(_DWORD *)(v63 + 4) >> 6) & 0xF;
          v52 = (ADAPTER_DISPLAY *)v48;
          v156 = 1 << ((*(_DWORD *)(v63 + 4) >> 6) & 0xF);
          goto LABEL_68;
        }
        v52 = (ADAPTER_DISPLAY *)*(unsigned int *)(*((_QWORD *)v58 + 6) + 4LL);
        if ( ((unsigned __int8)v52 & 2) != 0 )
          break;
        v58 = (struct DXGALLOCATION *)*((_QWORD *)v58 + 8);
        if ( !v58 )
          goto LABEL_68;
      }
      v150 = 1;
    }
LABEL_68:
    v27 = v157;
    goto LABEL_89;
  }
  if ( !v17 || (v64 = 0, !a7) )
  {
LABEL_89:
    v69 = 0;
    goto LABEL_90;
  }
  v65 = v159;
  while ( 1 )
  {
    v66 = *v65;
    if ( !*v65 )
    {
      v67 = WdLogNewEntry5_WdAssertion(v52, v51, v53, v54);
      *(_QWORD *)(v67 + 24) = 8153LL;
      WdLogEvent5_WdAssertion(v67);
    }
    if ( *((struct DXGDEVICE **)v66 + 1) != this )
    {
      v68 = WdLogNewEntry5_WdAssertion(v52, v51, v53, v54);
      *(_QWORD *)(v68 + 24) = 8154LL;
      WdLogEvent5_WdAssertion(v68);
    }
    if ( g_IsMobileCore || *(_DWORD *)(v55 + 276) == 1297040209 )
    {
      v52 = (ADAPTER_DISPLAY *)*(unsigned int *)(*((_QWORD *)v66 + 6) + 4LL);
      if ( ((unsigned __int8)v52 & 8) != 0 )
        break;
    }
    v53 = *(unsigned int *)(*((_QWORD *)v66 + 6) + 4LL);
    if ( (v53 & 1) != 0
      && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, ((unsigned int)v53 >> 6) & 0xF)
       || v55
       && (v52 = *(ADAPTER_DISPLAY **)(v55 + 2280)) != 0LL
       && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v52, (unsigned int)v53, v53, v54)) )
    {
      v148 = 1;
      v149 = v162 != 0LL;
      v162 = v66;
      v155 = (*(_DWORD *)(*((_QWORD *)v66 + 6) + 4LL) >> 6) & 0xF;
      v52 = (ADAPTER_DISPLAY *)v155;
      v156 |= 1 << v155;
    }
    ++v64;
    ++v65;
    if ( v64 >= a7 )
      goto LABEL_86;
  }
  v152 = 1;
  if ( !DXGDEVICE::IsDisplayedPrimary((struct _KTHREAD **)this, ((unsigned int)v52 >> 6) & 0xF, v66, v54) )
  {
LABEL_86:
    v48 = v155;
    v69 = v149;
    v27 = v157;
    goto LABEL_90;
  }
  v153 = 1;
  v148 = 1;
  v69 = v162 != 0LL;
  v162 = v66;
  v48 = (*(_DWORD *)(*((_QWORD *)v66 + 6) + 4LL) >> 6) & 0xF;
  v52 = (ADAPTER_DISPLAY *)v48;
  v156 |= 1 << ((*(_DWORD *)(*((_QWORD *)v66 + 6) + 4LL) >> 6) & 0xF);
  v27 = v157;
LABEL_90:
  v70 = 0;
  if ( (*((_BYTE *)v170 + 275) & 4) == 0 )
    v70 = v148;
  v155 = v70;
  if ( !(_BYTE)v70 )
  {
    if ( v160 )
      ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocation(
        *(ADAPTER_DISPLAY **)(v27 + 2280),
        this,
        *((struct DXGALLOCATION **)v158 + 3),
        (struct COREDEVICEACCESS *)&v171);
    goto LABEL_126;
  }
  if ( !v27 || !*(_QWORD *)(v27 + 2280) )
  {
    v71 = WdLogNewEntry5_WdAssertion(v52, v51, v53, v54);
    *(_QWORD *)(v71 + 24) = 8202LL;
    WdLogEvent5_WdAssertion(v71);
  }
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)&v171);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v163);
  DXGDEVICE::FlushScheduler(this, 5);
  v15.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(v15.Value | 1);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v177, v72, v73, v74);
  v75 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v147, 1);
  v78 = v75;
  if ( v75 >= 0 )
  {
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v157 + 268),
                                             &v161,
                                             0LL);
    v81 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v82 = WdLogNewEntry5_WdEvent(v80);
      *(_QWORD *)(v82 + 24) = v81;
      WdLogEvent5_WdEvent(v82);
    }
    if ( v161 )
    {
      if ( *((_QWORD *)v161 + 2) == *((_QWORD *)this + 2) )
      {
        *((_BYTE *)v161 + 1857) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v169);
      }
      else
      {
        v161 = 0LL;
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v163);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)&v171);
    if ( *((_DWORD *)this + 102) == 4 )
    {
      v98 = WdLogNewEntry5_WdEvent(v83);
      *(_QWORD *)(v98 + 24) = this;
      WdLogEvent5_WdEvent(v98);
      v103 = v161;
      if ( v161 )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v169, v99, v101, v102);
        *((_BYTE *)v103 + 1857) = 0;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v103 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v161 + 2), v161);
      }
      DxgkDestroyClientAllocation(v100, this, a7, v159, v158);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v169);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v147);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v171);
      if ( !v165 )
        goto LABEL_45;
      goto LABEL_44;
    }
    v85 = v156;
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v177, this, v156, v84);
    v89 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 2);
    if ( *((_QWORD *)this + 225) == *((_QWORD *)v89 + 2) )
    {
      if ( ((v85 - 1) & v85) != 0 )
      {
        v90 = v157;
        ADAPTER_DISPLAY::DisableAllPrimaries(*(ADAPTER_DISPLAY **)(v157 + 2280), v89);
      }
      else if ( v69 )
      {
        if ( v48 == -1 )
        {
          v91 = WdLogNewEntry5_WdAssertion(v86, v89, v87, v88);
          *(_QWORD *)(v91 + 24) = 8351LL;
          WdLogEvent5_WdAssertion(v91);
        }
        v90 = v157;
        ADAPTER_DISPLAY::DisablePrimaryOnDevice(*(ADAPTER_DISPLAY **)(v157 + 2280), this, v48);
      }
      else
      {
        v92 = v162;
        v93 = *(unsigned int *)(*((_QWORD *)v162 + 6) + 4LL);
        if ( (v93 & 1) == 0 )
        {
          v94 = WdLogNewEntry5_WdAssertion(v93, v89, v87, v88);
          *(_QWORD *)(v94 + 24) = 8359LL;
          WdLogEvent5_WdAssertion(v94);
        }
        v95 = (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF;
        if ( (_DWORD)v95 != v48 )
        {
          v96 = WdLogNewEntry5_WdAssertion(v95, v89, v87, v88);
          *(_QWORD *)(v96 + 24) = 8360LL;
          WdLogEvent5_WdAssertion(v96);
        }
        v97 = v92;
        v90 = v157;
        ADAPTER_DISPLAY::DisablePrimaryAllocation(*(ADAPTER_DISPLAY **)(v157 + 2280), this, v97);
      }
LABEL_127:
      if ( v150 || v152 )
      {
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v173) )
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)&v171);
        if ( v153 )
        {
          v108 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v90 + 2280), v48, 0, 0x10u, 0);
          v111 = v108;
          if ( v108 < 0 )
          {
            v112 = WdLogNewEntry5_WdError(v110, v109);
            *(_QWORD *)(v112 + 24) = v48;
            *(_QWORD *)(v112 + 32) = v111;
            WdLogEvent5_WdError(v112);
          }
        }
        DXGDEVICE::FlushScheduler(this, 6);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v173) )
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)&v171);
      }
      v113 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v113 + 160)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v113 + 144)) )
      {
        v117 = WdLogNewEntry5_WdAssertion(v113, v114, v115, v116);
        *(_QWORD *)(v117 + 24) = 5370LL;
        WdLogEvent5_WdAssertion(v117);
      }
      if ( !*((_DWORD *)this + 18) )
        ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
      v118 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v119 = v158;
      if ( *(_BYTE *)(v118 + 186) )
      {
        if ( v158 )
          v120 = *((_DWORD *)v158 + 5);
        else
          v120 = 0;
        v121 = *((_DWORD *)this + 84);
        Current = DXGPROCESS::GetCurrent(v113);
        DXGADAPTER::VmBusSendDestroyAllocation(
          (struct VMBCHANNEL__ **)v118,
          *((_DWORD *)Current + 96),
          v121,
          v120,
          a7,
          v159,
          v15);
        v123 = v159;
        if ( v119 )
        {
          *((_DWORD *)v119 + 5) = 0;
          v124 = a7;
          if ( !a7 )
          {
            LOBYTE(v70) = v155;
LABEL_154:
            if ( v119 )
            {
              DXGDEVICE::TerminateAllocations(this, v119, 1LL, *((struct DXGALLOCATION **)v119 + 3), &v171, v15);
            }
            else
            {
              v166 = 0LL;
              DXGDEVICE::RemoveAllocationsAndTransferToList((struct _KTHREAD **)this, v123, v124, &v166);
              v129 = v166;
              if ( v166 )
              {
                v130 = (struct DXGRESOURCE *)*((_QWORD *)v166 + 5);
                if ( v130 )
                {
                  do
                  {
                    v131 = v129;
                    v132 = (_QWORD *)((char *)v129 + 64);
                    v129 = (struct DXGALLOCATION *)*((_QWORD *)v129 + 8);
                    *v132 = 0LL;
                    DXGDEVICE::TerminateAllocations(this, v130, 0LL, v131, &v171, v15);
                  }
                  while ( v129 );
                }
                else
                {
                  do
                  {
                    v133 = v129;
                    v134 = (_QWORD *)((char *)v129 + 64);
                    v129 = (struct DXGALLOCATION *)*((_QWORD *)v129 + 8);
                    *v134 = 0LL;
                    DXGDEVICE::TerminateAllocations(this, 0LL, 0LL, v133, &v171, v15);
                  }
                  while ( v129 );
                }
                v166 = v129;
              }
            }
            if ( v150 )
              DXGDEVICE::CloseInternalCddPrimaryHandle(this, (struct COREDEVICEACCESS *)&v171);
            v135 = 0;
            v151 = 0;
            v154 = 0;
            if ( (_BYTE)v70 )
            {
              v136 = v161;
              if ( v161 )
              {
                ADAPTER_DISPLAY::EnsureGdiOutput(
                  *(ADAPTER_DISPLAY **)(v157 + 2280),
                  v161,
                  (struct COREDEVICEACCESS *)&v171,
                  &v151,
                  &v154,
                  v167);
                v135 = v151;
              }
              MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v177, v135, v127, v128);
              if ( v136 )
              {
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)&v171);
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v163);
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v169, v137, v138, v139);
                *((_BYTE *)v136 + 1857) = 0;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v136 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v161 + 2), v161);
                if ( v147 )
                {
                  v147 = 0;
                  DxgkReleaseSessionModeChangeLock();
                }
                if ( v151 && v154 )
                  (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 72LL) + 192LL))();
              }
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v169);
            DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v147);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v171);
            if ( v165 )
            {
              v144 = v164;
              ExReleasePushLockSharedEx((char *)v164 + 120, 0LL);
              KeLeaveCriticalRegion();
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v144 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v164 + 2), v164);
            }
            v145 = v178;
            if ( (v178 & 2) != 0 )
            {
              v146 = WdLogNewEntry5_WdAssertion(v141, v140, v142, v143);
              *(_QWORD *)(v146 + 24) = 217LL;
              WdLogEvent5_WdAssertion(v146);
            }
            if ( (v145 & 1) != 0 )
              MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v177);
            return 0LL;
          }
          v125 = v123;
          v126 = a7;
          do
          {
            *((_DWORD *)*v125++ + 24) = 0;
            --v126;
          }
          while ( v126 );
        }
        LOBYTE(v70) = v155;
      }
      else
      {
        v123 = v159;
      }
      v124 = a7;
      goto LABEL_154;
    }
LABEL_126:
    v90 = v157;
    goto LABEL_127;
  }
  v104 = WdLogNewEntry5_WdError(v77, v76);
  *(_QWORD *)(v104 + 24) = v78;
  WdLogEvent5_WdError(v104);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v169);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v147);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v171);
  if ( v165 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v163);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v177, v105, v106, v107);
  return (unsigned int)v78;
}
