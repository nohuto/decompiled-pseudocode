/*
 * XREFs of ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3B00
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3450 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00154FC (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0019AB4 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0019C0C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0019CE0 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C001A370 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001A400 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C001A76C (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C001A77C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C002C154 (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C009EDEC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C00E4A90 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C00E95A0 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EFB40 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00F263C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C010B8A8 (-ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C010B90C (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C010B938 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C010B9D4 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C010BB20 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D05C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C010D5A4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0152D80 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0153370 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0153734 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01539FC (-DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@P.c)
 *     ?ForcePlanesOff@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0154430 (-ForcePlanesOff@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C016C1CC (DxgkDestroyClientAllocation.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0182B40 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C018B050 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B1460 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocationInternal(
        struct DXGPROCESS *a1,
        struct DXGDEVICE *this,
        char *a3,
        struct DXGALLOCATION **a4,
        unsigned int a5,
        const unsigned int **a6,
        unsigned int a7,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a8,
        char *a9,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a10,
        unsigned __int8 a11)
{
  unsigned int *v12; // r9
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v15; // ebx
  unsigned int v16; // r10d
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
  const struct DXGALLOCATION *v28; // rdi
  unsigned int v29; // edx
  __int64 v30; // rax
  int v31; // eax
  volatile signed __int64 *v32; // rdi
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // r13d
  ADAPTER_DISPLAY *v44; // rcx
  __int64 v45; // r14
  struct DXGRESOURCE *v46; // rdi
  __int64 v47; // rax
  struct DXGALLOCATION *v48; // rdi
  char v49; // r12
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned int v53; // r8d
  unsigned int v54; // r8d
  ADAPTER_DISPLAY *v55; // rcx
  __int64 v56; // rax
  bool v57; // r14
  unsigned int v58; // r12d
  struct DXGALLOCATION **v59; // r14
  struct DXGALLOCATION *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned int v63; // edx
  unsigned int v64; // r8d
  unsigned int v65; // r8d
  __int64 v66; // r9
  int v67; // r12d
  __int64 v68; // rax
  int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  unsigned int v79; // edi
  __int64 v80; // rcx
  struct ADAPTER_RENDER *v81; // rdx
  __int64 v82; // r14
  __int64 v83; // rax
  struct DXGALLOCATION *v84; // rdi
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rcx
  struct DXGDEVICE *v91; // rbx
  __int64 v92; // rax
  int v93; // eax
  __int64 v94; // rcx
  __int64 v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // r13
  struct DXGRESOURCE *v101; // r14
  unsigned int v102; // r12d
  unsigned int v103; // edi
  struct DXGPROCESS *Current; // rax
  DXG_GUEST_VIRTUALGPU_VMBUS *v105; // rcx
  unsigned int v106; // r13d
  struct DXGALLOCATION **v107; // r10
  struct DXGALLOCATION **v108; // rcx
  __int64 v109; // rdx
  struct DXGALLOCATION *v110; // rdi
  struct DXGRESOURCE *v111; // r14
  struct DXGALLOCATION *v112; // r9
  _QWORD *v113; // rax
  struct DXGALLOCATION *v114; // r9
  _QWORD *v115; // rax
  unsigned __int8 v116; // al
  struct DXGDEVICE *v117; // rbx
  __int64 v118; // rcx
  __int64 v119; // rcx
  struct DXGADAPTER *v120; // rbx
  char v121; // bl
  __int64 v122; // rax
  char v123; // [rsp+40h] [rbp-348h] BYREF
  unsigned __int8 v124; // [rsp+41h] [rbp-347h]
  char i; // [rsp+42h] [rbp-346h]
  bool v126; // [rsp+43h] [rbp-345h]
  char v127; // [rsp+44h] [rbp-344h]
  unsigned __int8 v128; // [rsp+45h] [rbp-343h] BYREF
  char v129; // [rsp+46h] [rbp-342h]
  char v130; // [rsp+47h] [rbp-341h]
  unsigned __int8 v131[4]; // [rsp+48h] [rbp-340h] BYREF
  unsigned int v132; // [rsp+4Ch] [rbp-33Ch]
  __int64 v133; // [rsp+50h] [rbp-338h]
  struct DXGRESOURCE *v134; // [rsp+58h] [rbp-330h] BYREF
  struct DXGDEVICE *v135; // [rsp+60h] [rbp-328h] BYREF
  struct DXGALLOCATION *v136; // [rsp+68h] [rbp-320h]
  struct DXGALLOCATION **v137; // [rsp+70h] [rbp-318h]
  __int64 v138; // [rsp+78h] [rbp-310h]
  struct DXGALLOCATION *v139; // [rsp+80h] [rbp-308h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v140; // [rsp+88h] [rbp-300h]
  __int64 v141; // [rsp+90h] [rbp-2F8h] BYREF
  struct DXGADAPTER *v142; // [rsp+98h] [rbp-2F0h]
  char v143; // [rsp+A0h] [rbp-2E8h]
  unsigned int v144; // [rsp+A8h] [rbp-2E0h]
  _BYTE v145[16]; // [rsp+B0h] [rbp-2D8h] BYREF
  _BYTE v146[8]; // [rsp+C0h] [rbp-2C8h] BYREF
  char v147; // [rsp+C8h] [rbp-2C0h] BYREF
  DXGADAPTER *v148; // [rsp+D8h] [rbp-2B0h]
  char v149; // [rsp+E0h] [rbp-2A8h]
  DXGADAPTER *v150; // [rsp+E8h] [rbp-2A0h] BYREF
  char v151; // [rsp+110h] [rbp-278h]
  struct DXGPROCESS *v152; // [rsp+120h] [rbp-268h]
  _BYTE v153[96]; // [rsp+130h] [rbp-258h] BYREF
  _QWORD v154[2]; // [rsp+190h] [rbp-1F8h] BYREF
  int v155; // [rsp+1A0h] [rbp-1E8h]
  _BYTE v156[400]; // [rsp+1A8h] [rbp-1E0h] BYREF

  v137 = a4;
  v12 = (unsigned int *)a3;
  v152 = a1;
  v15.0 = a8.0;
  v140 = a10;
  if ( a11 )
  {
    v16 = 0;
    v144 = 0;
    v17 = a7;
    while ( v16 < a7 )
    {
      v18 = (const unsigned int *)&a9[4 * v16];
      if ( (unsigned __int64)v18 >= MmUserProbeAddress )
        v18 = (const unsigned int *)MmUserProbeAddress;
      v12[v16++] = *v18;
      v144 = v16;
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
  v134 = 0LL;
  v20 = ValidateDestroyAllocation(a1, this, a5, *a6, v17, a4, &v134);
  if ( v20 == 255 )
    return 0LL;
  if ( v20 < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = this;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
    return 3221225485LL;
  }
  v27 = *((_QWORD *)this + 211);
  v133 = v27;
  i = 0;
  if ( (a8.Value & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v153, (__int64)this, 2, v24, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v153);
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL))
      && *((_DWORD *)this + 82) == 1
      && *((_BYTE *)DXGPROCESS::GetCurrent() + 322) )
    {
      if ( v134 )
      {
        v28 = (const struct DXGALLOCATION *)*((_QWORD *)v134 + 3);
        for ( i = 1; v28; v28 = (const struct DXGALLOCATION *)*((_QWORD *)v28 + 8) )
        {
          v29 = *(_DWORD *)(*((_QWORD *)v28 + 6) + 4LL);
          if ( (v29 & 1) == 0
            || *((_QWORD *)this + 211) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
            || v28 == DXGDEVICE::GetDisplayedPrimary(this, (v29 >> 6) & 0xF) )
          {
            i = 0;
          }
        }
      }
      v27 = v133;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v153);
  }
  if ( v27 )
    v30 = *(_QWORD *)(v27 + 2456);
  else
    v30 = 0LL;
  v154[0] = v30;
  v154[1] = a1;
  if ( v30 )
    v31 = *(_DWORD *)(v30 + 80);
  else
    v31 = 0;
  v155 = 4 * v31;
  memset(v156, 0, sizeof(v156));
  v32 = *(volatile signed __int64 **)(*((_QWORD *)this + 2) + 16LL);
  v142 = (struct DXGADAPTER *)v32;
  _InterlockedIncrement64(v32 + 3);
  v141 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v32 + 15, 0LL);
  v143 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v146, (__int64)this, 2, v33, 0);
  if ( v149 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35);
    v36[3] = 275LL;
    v36[4] = 4LL;
    v36[5] = &v147;
    v36[6] = 0LL;
    v36[7] = 0LL;
    WdLogEvent5_WdCriticalError(v36);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v148 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v148 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v37, &EventBlockThread, v38, 72);
      KeWaitForSingleObject((char *)v148 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v148);
  }
  v149 = 1;
  if ( v151 )
    COREACCESS::AcquireShared(&v150);
  v39 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_DWORD *)(v39 + 176) == 4 )
  {
    v40 = WdLogNewEntry5_WdEvent(v39, v34);
    *(_QWORD *)(v40 + 24) = this;
    WdLogEvent5_WdEvent(v40);
LABEL_46:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v146);
LABEL_47:
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v141);
LABEL_48:
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v154);
    return 0LL;
  }
  if ( *((_DWORD *)this + 106) == 4 )
  {
    v41 = WdLogNewEntry5_WdEvent(v39, v34);
    *(_QWORD *)(v41 + 24) = this;
    WdLogEvent5_WdEvent(v41);
    DxgkDestroyClientAllocation(v42, this, v17, a4, v134);
    goto LABEL_46;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 192LL) + 64LL) + 40LL)
                 + 28LL) < 0x5015u )
    v15.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value & 0xFFFFFFFE);
  v129 = 0;
  v130 = 0;
  v124 = 0;
  v127 = 0;
  v126 = 0;
  v132 = 0;
  v136 = 0LL;
  v43 = -1;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v123);
  v135 = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v145,
    (struct DXGFASTMUTEX *const *)a1);
  v45 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v138 = v45;
  v46 = v134;
  if ( v134 )
  {
    if ( *((struct DXGDEVICE **)v134 + 1) != this )
    {
      v47 = WdLogNewEntry5_WdAssertion(v44);
      *(_QWORD *)(v47 + 24) = 9102LL;
      WdLogEvent5_WdAssertion(v47);
    }
    v48 = (struct DXGALLOCATION *)*((_QWORD *)v46 + 3);
    if ( v48 )
    {
      v49 = i;
      while ( 1 )
      {
        v50 = *((_QWORD *)v48 + 6);
        v51 = (*(_DWORD *)(v50 + 4) & 1) + ((*(_DWORD *)(v50 + 4) >> 1) & 1) + ((*(_DWORD *)(v50 + 4) >> 13) & 1u);
        if ( (unsigned int)v51 > 1 )
        {
          v52 = WdLogNewEntry5_WdAssertion(v51);
          *(_QWORD *)(v52 + 24) = 9111LL;
          WdLogEvent5_WdAssertion(v52);
          v50 = *((_QWORD *)v48 + 6);
        }
        v53 = *(_DWORD *)(v50 + 4);
        if ( (v53 & 1) != 0
          && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, (v53 >> 6) & 0xF)
           || v45
           && (v55 = *(ADAPTER_DISPLAY **)(v45 + 2456)) != 0LL
           && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v55, v54))
          && !v49 )
        {
          v124 = 1;
          v136 = v48;
          v56 = *((_QWORD *)v48 + 6);
          v43 = (*(_DWORD *)(v56 + 4) >> 6) & 0xF;
          v44 = (ADAPTER_DISPLAY *)v43;
          v132 = 1 << ((*(_DWORD *)(v56 + 4) >> 6) & 0xF);
          v57 = 0;
          goto LABEL_87;
        }
        v44 = (ADAPTER_DISPLAY *)*(unsigned int *)(*((_QWORD *)v48 + 6) + 4LL);
        if ( ((unsigned __int8)v44 & 2) != 0 )
          break;
        v48 = (struct DXGALLOCATION *)*((_QWORD *)v48 + 8);
        if ( !v48 )
          goto LABEL_71;
      }
      v127 = 1;
    }
LABEL_71:
    v57 = 0;
LABEL_87:
    v46 = v134;
    goto LABEL_88;
  }
  if ( v17 )
  {
    v58 = 0;
    v59 = v137;
    while ( 1 )
    {
      v60 = *v59;
      if ( !*v59 )
      {
        v61 = WdLogNewEntry5_WdAssertion(v44);
        *(_QWORD *)(v61 + 24) = 9141LL;
        WdLogEvent5_WdAssertion(v61);
      }
      if ( *((struct DXGDEVICE **)v60 + 1) != this )
      {
        v62 = WdLogNewEntry5_WdAssertion(v44);
        *(_QWORD *)(v62 + 24) = 9142LL;
        WdLogEvent5_WdAssertion(v62);
      }
      if ( *(_DWORD *)(v138 + 276) == 1297040209 )
      {
        v63 = *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL);
        if ( (v63 & 8) != 0 )
          break;
      }
      v64 = *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL);
      if ( (v64 & 1) != 0
        && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, (v64 >> 6) & 0xF)
         || (v44 = *(ADAPTER_DISPLAY **)(v66 + 2456)) != 0LL && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v44, v65)) )
      {
        v124 = 1;
        v126 = v136 != 0LL;
        v136 = v60;
        v43 = (*(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) >> 6) & 0xF;
        v44 = (ADAPTER_DISPLAY *)v43;
        v132 |= 1 << ((*(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) >> 6) & 0xF);
      }
      ++v58;
      ++v59;
      if ( v58 >= a7 )
        goto LABEL_86;
    }
    v129 = 1;
    if ( !DXGDEVICE::IsDisplayedPrimary((struct _KTHREAD **)this, (v63 >> 6) & 0xF, v60) )
    {
LABEL_86:
      v57 = v126;
      goto LABEL_87;
    }
    v130 = 1;
    v124 = 1;
    v57 = v136 != 0LL;
    v136 = v60;
    v43 = (*(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) >> 6) & 0xF;
    v44 = (ADAPTER_DISPLAY *)v43;
    v132 |= 1 << ((*(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) >> 6) & 0xF);
    goto LABEL_87;
  }
  v57 = 0;
LABEL_88:
  v67 = 0;
  if ( (*((_BYTE *)v152 + 323) & 8) == 0 )
    v67 = v124;
  LODWORD(v138) = v67;
  if ( !(_BYTE)v67 )
  {
    v82 = v133;
    if ( i )
      ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
        *(ADAPTER_DISPLAY **)(v133 + 2456),
        this,
        *((struct DXGALLOCATION **)v46 + 3),
        (struct COREDEVICEACCESS *)v146);
    goto LABEL_131;
  }
  if ( !v133 || !*(_QWORD *)(v133 + 2456) )
  {
    v68 = WdLogNewEntry5_WdAssertion(v44);
    *(_QWORD *)(v68 + 24) = 9194LL;
    WdLogEvent5_WdAssertion(v68);
  }
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v146);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v141);
  DXGDEVICE::FlushScheduler(this, 5LL);
  v15.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(v15.Value | 1);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v154);
  v69 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v123, 1);
  v71 = v69;
  if ( v69 >= 0 )
  {
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v133 + 268),
                                             &v135,
                                             0LL,
                                             0LL);
    v75 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v76 = WdLogNewEntry5_WdEvent(v74, v73);
      *(_QWORD *)(v76 + 24) = v75;
      WdLogEvent5_WdEvent(v76);
    }
    if ( v135 )
    {
      if ( *((_QWORD *)v135 + 2) == *((_QWORD *)this + 2) )
      {
        *((_BYTE *)v135 + 1745) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v145);
      }
      else
      {
        v135 = 0LL;
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v141);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v146);
    if ( *((_DWORD *)this + 106) == 4 )
    {
      v89 = WdLogNewEntry5_WdEvent(v78, v77);
      *(_QWORD *)(v89 + 24) = this;
      WdLogEvent5_WdEvent(v89);
      v91 = v135;
      if ( v135 )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v145);
        *((_BYTE *)v91 + 1745) = 0;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v91 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v135 + 2), v135);
      }
      DxgkDestroyClientAllocation(v90, this, a7, v137, v134);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v145);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v123);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v146);
      if ( !v143 )
        goto LABEL_48;
      goto LABEL_47;
    }
    v79 = v132;
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v154, this, v132);
    v81 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 2);
    if ( *((_QWORD *)this + 211) == *((_QWORD *)v81 + 2) )
    {
      if ( ((v79 - 1) & v79) != 0 )
      {
        v82 = v133;
        ADAPTER_DISPLAY::DisableAllPrimaries(*(ADAPTER_DISPLAY **)(v133 + 2456), v81);
      }
      else if ( v57 )
      {
        if ( v43 == -1 )
        {
          v83 = WdLogNewEntry5_WdAssertion(v80);
          *(_QWORD *)(v83 + 24) = 9344LL;
          WdLogEvent5_WdAssertion(v83);
        }
        v82 = v133;
        ADAPTER_DISPLAY::DisablePrimaryOnDevice(*(ADAPTER_DISPLAY **)(v133 + 2456), this, v43, 0);
      }
      else
      {
        v82 = v133;
        v84 = v136;
        VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                             *(DXGADAPTER ***)(v133 + 2456),
                             (*(_DWORD *)(*((_QWORD *)v136 + 6) + 4LL) >> 6) & 0xF);
        if ( !VidPnSourceOwner || VidPnSourceOwner == this )
          ADAPTER_DISPLAY::ForcePlanesOff(
            *(ADAPTER_DISPLAY **)(v82 + 2456),
            (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF);
        v86 = *((_QWORD *)v84 + 6);
        if ( (*(_DWORD *)(v86 + 4) & 1) == 0 )
        {
          v87 = WdLogNewEntry5_WdAssertion(v86);
          *(_QWORD *)(v87 + 24) = 9371LL;
          WdLogEvent5_WdAssertion(v87);
          v86 = *((_QWORD *)v84 + 6);
        }
        if ( ((*(_DWORD *)(v86 + 4) >> 6) & 0xF) != v43 )
        {
          v88 = WdLogNewEntry5_WdAssertion(v86);
          *(_QWORD *)(v88 + 24) = 9372LL;
          WdLogEvent5_WdAssertion(v88);
        }
        ADAPTER_DISPLAY::DisablePrimaryAllocation(*(ADAPTER_DISPLAY **)(v82 + 2456), this, v84);
      }
    }
    else
    {
      v82 = v133;
    }
LABEL_131:
    if ( v127 || v129 )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v148) )
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v146);
      if ( v130 )
      {
        v93 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v82 + 2456), v43, 0, 0x10u, 0);
        v95 = v93;
        if ( v93 < 0 )
        {
          v96 = WdLogNewEntry5_WdError(v94);
          *(_QWORD *)(v96 + 24) = v43;
          *(_QWORD *)(v96 + 32) = v95;
          WdLogEvent5_WdError(v96);
        }
      }
      DXGDEVICE::FlushScheduler(this, 6LL);
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v148) )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v146);
    }
    v97 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v97 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v97 + 144)) )
    {
      v99 = WdLogNewEntry5_WdAssertion(v98);
      *(_QWORD *)(v99 + 24) = 6027LL;
      WdLogEvent5_WdAssertion(v99);
    }
    if ( !*((_DWORD *)this + 18) )
      ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
    v100 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v101 = v134;
    if ( *(_BYTE *)(v100 + 185) )
    {
      if ( v134 )
        v102 = *((_DWORD *)v134 + 5);
      else
        v102 = 0;
      v103 = *((_DWORD *)this + 84);
      Current = DXGPROCESS::GetCurrent();
      v105 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v100 + 4080);
      v106 = a7;
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(v105, *((_DWORD *)Current + 98), v103, v102, a7, v137, v15);
      if ( v101 )
        *((_DWORD *)v101 + 5) = 0;
      v107 = v137;
      if ( a7 )
      {
        v108 = v137;
        v109 = a7;
        do
        {
          *((_DWORD *)*v108++ + 24) = 0;
          --v109;
        }
        while ( v109 );
      }
      LOBYTE(v67) = v138;
    }
    else
    {
      v106 = a7;
      v107 = v137;
    }
    if ( v101 )
    {
      DXGDEVICE::TerminateAllocations(
        this,
        v101,
        1,
        *((struct DXGALLOCATION **)v101 + 3),
        (struct COREDEVICEACCESS *)v146,
        v15);
    }
    else
    {
      v139 = 0LL;
      DXGDEVICE::RemoveAllocationsAndTransferToList(this, v107, v106, &v139);
      v110 = v139;
      if ( v139 )
      {
        v111 = (struct DXGRESOURCE *)*((_QWORD *)v139 + 5);
        if ( v111 )
        {
          do
          {
            v112 = v110;
            v113 = (_QWORD *)((char *)v110 + 64);
            v110 = (struct DXGALLOCATION *)*((_QWORD *)v110 + 8);
            *v113 = 0LL;
            DXGDEVICE::TerminateAllocations(this, v111, 0, v112, (struct COREDEVICEACCESS *)v146, v15);
          }
          while ( v110 );
        }
        else
        {
          do
          {
            v114 = v110;
            v115 = (_QWORD *)((char *)v110 + 64);
            v110 = (struct DXGALLOCATION *)*((_QWORD *)v110 + 8);
            *v115 = 0LL;
            DXGDEVICE::TerminateAllocations(this, 0LL, 0, v114, (struct COREDEVICEACCESS *)v146, v15);
          }
          while ( v110 );
        }
        v139 = v110;
      }
    }
    if ( v127 )
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, (struct COREDEVICEACCESS *)v146);
    v116 = 0;
    v128 = 0;
    v131[0] = 0;
    if ( (_BYTE)v67 )
    {
      v117 = v135;
      if ( v135 )
      {
        ADAPTER_DISPLAY::EnsureGdiOutput(
          *(ADAPTER_DISPLAY **)(v133 + 2456),
          v135,
          (struct COREDEVICEACCESS *)v146,
          &v128,
          v131,
          v140);
        v116 = v128;
      }
      MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v154, v116);
      if ( v117 )
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v146);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v141);
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v145);
        *((_BYTE *)v117 + 1745) = 0;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v117 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v135 + 2), v135);
        if ( v123 )
        {
          v123 = 0;
          DxgkReleaseSessionModeChangeLock(v118);
        }
        if ( v128 && v131[0] )
          (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 104LL) + 192LL))();
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v145);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v123);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v146);
    if ( v143 )
    {
      v120 = v142;
      ExReleasePushLockSharedEx((char *)v142 + 120, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v120 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v142 + 2), v142);
    }
    v121 = v155;
    if ( (v155 & 2) != 0 )
    {
      v122 = WdLogNewEntry5_WdAssertion(v119);
      *(_QWORD *)(v122 + 24) = 216LL;
      WdLogEvent5_WdAssertion(v122);
    }
    if ( (v121 & 1) != 0 )
      MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v154);
    return 0LL;
  }
  v92 = WdLogNewEntry5_WdError(v70);
  *(_QWORD *)(v92 + 24) = v71;
  WdLogEvent5_WdError(v92);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v145);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v123);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v146);
  if ( v143 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v141);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v154);
  return (unsigned int)v71;
}
