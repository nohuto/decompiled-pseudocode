/*
 * XREFs of ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C008CDD0
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C008DD70 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001AC4 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00075C0 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000796C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00080F4 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000F818 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001441C (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0014778 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C0023FC0 (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 *     ?ForcePlanesOff@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0079424 (-ForcePlanesOff@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C008C690 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C00952C4 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009B620 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C009DF28 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C009E074 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00ACD28 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00AD3B8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00ADA40 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E1C1C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00E81C4 (-ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00E8224 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00E8254 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00E8314 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00E8460 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C010240C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0174158 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0174420 (-DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@P.c)
 *     DxgkDestroyClientAllocation @ 0x1C0184098 (DxgkDestroyClientAllocation.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0196344 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B5610 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocationInternal(
        struct _KTHREAD **a1,
        struct DXGDEVICE *this,
        char *a3,
        struct DXGALLOCATION **a4,
        unsigned int a5,
        unsigned int **a6,
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
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned int v42; // r14d
  ADAPTER_DISPLAY *v43; // rcx
  __int64 v44; // r13
  struct DXGRESOURCE *v45; // rax
  __int64 v46; // rax
  struct DXGALLOCATION *v47; // rdi
  char v48; // r12
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned int v51; // r8d
  unsigned int v52; // r8d
  ADAPTER_DISPLAY *v53; // rcx
  __int64 v54; // rax
  bool v55; // r13
  unsigned int v56; // r12d
  struct DXGALLOCATION **v57; // r14
  struct DXGALLOCATION *v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v61; // edx
  unsigned int v62; // r8d
  unsigned int v63; // r8d
  unsigned int v64; // r12d
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v70; // rdi
  __int64 v71; // rax
  unsigned int v72; // edi
  __int64 v73; // rcx
  struct ADAPTER_RENDER *v74; // rdx
  __int64 v75; // r13
  __int64 v76; // rax
  struct DXGALLOCATION *v77; // rdi
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rcx
  struct DXGDEVICE *v85; // rbx
  __int64 v86; // rax
  int v87; // eax
  __int64 v88; // rcx
  __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // r13
  struct DXGRESOURCE *v95; // r14
  unsigned int v96; // r12d
  unsigned int v97; // edi
  struct DXGPROCESS *Current; // rax
  DXG_GUEST_VIRTUALGPU_VMBUS *v99; // rcx
  unsigned int v100; // r13d
  struct DXGALLOCATION **v101; // r10
  struct DXGALLOCATION **v102; // rcx
  __int64 v103; // rdx
  struct DXGALLOCATION *v104; // rdi
  struct DXGRESOURCE *v105; // r14
  struct DXGALLOCATION *v106; // r9
  _QWORD *v107; // rax
  struct DXGALLOCATION *v108; // r9
  _QWORD *v109; // rax
  unsigned __int8 v110; // al
  struct DXGDEVICE *v111; // rbx
  __int64 v112; // rcx
  struct DXGADAPTER *v113; // rbx
  char v114; // bl
  __int64 v115; // rax
  char v116; // [rsp+40h] [rbp-348h] BYREF
  unsigned __int8 v117; // [rsp+41h] [rbp-347h]
  char i; // [rsp+42h] [rbp-346h]
  bool v119; // [rsp+43h] [rbp-345h]
  char v120; // [rsp+44h] [rbp-344h]
  unsigned __int8 v121; // [rsp+45h] [rbp-343h] BYREF
  char v122; // [rsp+46h] [rbp-342h]
  char v123; // [rsp+47h] [rbp-341h]
  unsigned __int8 v124[8]; // [rsp+48h] [rbp-340h] BYREF
  __int64 v125; // [rsp+50h] [rbp-338h]
  unsigned int v126; // [rsp+58h] [rbp-330h]
  unsigned int v127; // [rsp+5Ch] [rbp-32Ch]
  struct DXGRESOURCE *v128; // [rsp+60h] [rbp-328h] BYREF
  struct DXGDEVICE *v129; // [rsp+68h] [rbp-320h] BYREF
  struct DXGALLOCATION *v130; // [rsp+70h] [rbp-318h]
  struct DXGALLOCATION **v131; // [rsp+78h] [rbp-310h]
  __int64 v132; // [rsp+80h] [rbp-308h] BYREF
  struct DXGADAPTER *v133; // [rsp+88h] [rbp-300h]
  char v134; // [rsp+90h] [rbp-2F8h]
  struct DXGALLOCATION *v135; // [rsp+98h] [rbp-2F0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v136; // [rsp+A0h] [rbp-2E8h]
  unsigned int v137; // [rsp+A8h] [rbp-2E0h]
  _BYTE v138[16]; // [rsp+B0h] [rbp-2D8h] BYREF
  _BYTE v139[8]; // [rsp+C0h] [rbp-2C8h] BYREF
  char v140; // [rsp+C8h] [rbp-2C0h] BYREF
  DXGADAPTER *v141; // [rsp+D8h] [rbp-2B0h]
  char v142; // [rsp+E0h] [rbp-2A8h]
  _BYTE v143[56]; // [rsp+E8h] [rbp-2A0h] BYREF
  struct _KTHREAD **v144; // [rsp+120h] [rbp-268h]
  _BYTE v145[96]; // [rsp+130h] [rbp-258h] BYREF
  _QWORD v146[2]; // [rsp+190h] [rbp-1F8h] BYREF
  int v147; // [rsp+1A0h] [rbp-1E8h]
  _BYTE v148[400]; // [rsp+1A8h] [rbp-1E0h] BYREF

  v131 = a4;
  v12 = (unsigned int *)a3;
  v144 = a1;
  v15.0 = a8.0;
  v136 = a10;
  if ( a11 )
  {
    v16 = 0;
    v137 = 0;
    v17 = a7;
    while ( v16 < a7 )
    {
      v18 = (const unsigned int *)&a9[4 * v16];
      if ( (unsigned __int64)v18 >= MmUserProbeAddress )
        v18 = (const unsigned int *)MmUserProbeAddress;
      v12[v16++] = *v18;
      v137 = v16;
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
  v128 = 0LL;
  v20 = ValidateDestroyAllocation(
          a1,
          this,
          a5,
          (struct _EX_RUNDOWN_REF *)*a6,
          v17,
          (struct _EX_RUNDOWN_REF **)a4,
          &v128);
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
  v27 = *((_QWORD *)this + 209);
  v125 = v27;
  i = 0;
  if ( (a8.Value & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v145, (__int64)this, 2, v24, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v145);
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL))
      && *((_DWORD *)this + 82) == 1
      && *((_BYTE *)DXGPROCESS::GetCurrent() + 306) )
    {
      if ( v128 )
      {
        v28 = (const struct DXGALLOCATION *)*((_QWORD *)v128 + 3);
        for ( i = 1; v28; v28 = (const struct DXGALLOCATION *)*((_QWORD *)v28 + 8) )
        {
          v29 = *(_DWORD *)(*((_QWORD *)v28 + 6) + 4LL);
          if ( (v29 & 1) == 0
            || *((_QWORD *)this + 209) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
            || v28 == DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, (v29 >> 6) & 0xF) )
          {
            i = 0;
          }
        }
      }
      v27 = v125;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v145);
  }
  if ( v27 )
    v30 = *(_QWORD *)(v27 + 2304);
  else
    v30 = 0LL;
  v146[0] = v30;
  v146[1] = a1;
  if ( v30 )
    v31 = *(_DWORD *)(v30 + 80);
  else
    v31 = 0;
  v147 = 4 * v31;
  memset(v148, 0, sizeof(v148));
  v133 = *(struct DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v133 + 3);
  v132 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v133 + 120, 0LL);
  v134 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v139, (__int64)this, 2, v32, 0);
  if ( v142 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v33, v35);
    v36[3] = 275LL;
    v36[4] = 4LL;
    v36[5] = &v140;
    v36[6] = 0LL;
    v36[7] = 0LL;
    WdLogEvent5_WdCriticalError(v36);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v141 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v141 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v37, &EventBlockThread, v38, 72);
      KeWaitForSingleObject((char *)v141 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v141);
  }
  v142 = 1;
  if ( v143[40] )
    COREACCESS::AcquireShared((COREACCESS *)v143);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 176LL) == 4 )
  {
    v39 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v39 + 24) = this;
    WdLogEvent5_WdEvent(v39);
LABEL_46:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v139);
LABEL_47:
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v132);
LABEL_48:
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v146);
    return 0LL;
  }
  if ( *((_DWORD *)this + 102) == 4 )
  {
    v40 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v40 + 24) = this;
    WdLogEvent5_WdEvent(v40);
    DxgkDestroyClientAllocation(v41, this, v17, a4, v128);
    goto LABEL_46;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 192LL) + 64LL) + 40LL)
                 + 28LL) < 0x5015u )
    v15.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value & 0xFFFFFFFE);
  v122 = 0;
  v123 = 0;
  v117 = 0;
  v120 = 0;
  v119 = 0;
  v126 = 0;
  v130 = 0LL;
  v42 = -1;
  v127 = -1;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v116);
  v129 = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v138, a1);
  v44 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v45 = v128;
  if ( v128 )
  {
    if ( *((struct DXGDEVICE **)v128 + 1) != this )
    {
      v46 = WdLogNewEntry5_WdAssertion(v43);
      *(_QWORD *)(v46 + 24) = 8964LL;
      WdLogEvent5_WdAssertion(v46);
      v45 = v128;
    }
    v47 = (struct DXGALLOCATION *)*((_QWORD *)v45 + 3);
    if ( v47 )
    {
      v48 = i;
      while ( 1 )
      {
        v49 = *(_DWORD *)(*((_QWORD *)v47 + 6) + 4LL) & 1;
        if ( (unsigned int)v49
           + ((*(_DWORD *)(*((_QWORD *)v47 + 6) + 4LL) >> 1) & 1)
           + ((*(_DWORD *)(*((_QWORD *)v47 + 6) + 4LL) >> 13) & 1) > 1 )
        {
          v50 = WdLogNewEntry5_WdAssertion(v49);
          *(_QWORD *)(v50 + 24) = 8973LL;
          WdLogEvent5_WdAssertion(v50);
        }
        v51 = *(_DWORD *)(*((_QWORD *)v47 + 6) + 4LL);
        if ( (v51 & 1) != 0
          && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, (v51 >> 6) & 0xF)
           || v44
           && (v53 = *(ADAPTER_DISPLAY **)(v44 + 2304)) != 0LL
           && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v53, v52))
          && !v48 )
        {
          v117 = 1;
          v130 = v47;
          v54 = *((_QWORD *)v47 + 6);
          v42 = (*(_DWORD *)(v54 + 4) >> 6) & 0xF;
          v43 = (ADAPTER_DISPLAY *)v42;
          v126 = 1 << ((*(_DWORD *)(v54 + 4) >> 6) & 0xF);
          goto LABEL_71;
        }
        v43 = (ADAPTER_DISPLAY *)*(unsigned int *)(*((_QWORD *)v47 + 6) + 4LL);
        if ( ((unsigned __int8)v43 & 2) != 0 )
          break;
        v47 = (struct DXGALLOCATION *)*((_QWORD *)v47 + 8);
        if ( !v47 )
          goto LABEL_71;
      }
      v120 = 1;
    }
LABEL_71:
    v55 = 0;
  }
  else
  {
    if ( !v17 || (v56 = 0, !a7) )
    {
      v55 = 0;
      goto LABEL_95;
    }
    v57 = v131;
    while ( 1 )
    {
      v58 = *v57;
      if ( !*v57 )
      {
        v59 = WdLogNewEntry5_WdAssertion(v43);
        *(_QWORD *)(v59 + 24) = 9003LL;
        WdLogEvent5_WdAssertion(v59);
      }
      if ( *((struct DXGDEVICE **)v58 + 1) != this )
      {
        v60 = WdLogNewEntry5_WdAssertion(v43);
        *(_QWORD *)(v60 + 24) = 9004LL;
        WdLogEvent5_WdAssertion(v60);
      }
      if ( g_IsMobileCore || *(_DWORD *)(v44 + 276) == 1297040209 )
      {
        v61 = *(_DWORD *)(*((_QWORD *)v58 + 6) + 4LL);
        if ( (v61 & 8) != 0 )
          break;
      }
      v62 = *(_DWORD *)(*((_QWORD *)v58 + 6) + 4LL);
      if ( (v62 & 1) != 0
        && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, (v62 >> 6) & 0xF)
         || v44 && (v43 = *(ADAPTER_DISPLAY **)(v44 + 2304)) != 0LL && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v43, v63)) )
      {
        v117 = 1;
        v119 = v130 != 0LL;
        v130 = v58;
        v127 = (*(_DWORD *)(*((_QWORD *)v58 + 6) + 4LL) >> 6) & 0xF;
        v43 = (ADAPTER_DISPLAY *)v127;
        v126 |= 1 << v127;
      }
      ++v56;
      ++v57;
      if ( v56 >= a7 )
        goto LABEL_93;
    }
    v122 = 1;
    if ( DXGDEVICE::IsDisplayedPrimary((struct _KTHREAD **)this, (v61 >> 6) & 0xF, v58) )
    {
      v123 = 1;
      v117 = 1;
      v55 = v130 != 0LL;
      v130 = v58;
      v42 = (*(_DWORD *)(*((_QWORD *)v58 + 6) + 4LL) >> 6) & 0xF;
      v43 = (ADAPTER_DISPLAY *)v42;
      v126 |= 1 << ((*(_DWORD *)(*((_QWORD *)v58 + 6) + 4LL) >> 6) & 0xF);
      goto LABEL_94;
    }
LABEL_93:
    v55 = v119;
    v42 = v127;
  }
LABEL_94:
  v27 = v125;
LABEL_95:
  v64 = 0;
  if ( (*((_BYTE *)v144 + 307) & 8) == 0 )
    v64 = v117;
  v127 = v64;
  if ( !(_BYTE)v64 )
  {
    if ( i )
      ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
        *(ADAPTER_DISPLAY **)(v27 + 2304),
        this,
        *((struct DXGALLOCATION **)v128 + 3),
        (struct COREDEVICEACCESS *)v139);
    goto LABEL_134;
  }
  if ( !v27 || !*(_QWORD *)(v27 + 2304) )
  {
    v65 = WdLogNewEntry5_WdAssertion(v43);
    *(_QWORD *)(v65 + 24) = 9052LL;
    WdLogEvent5_WdAssertion(v65);
  }
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v139);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v132);
  DXGDEVICE::FlushScheduler(this, 5LL);
  v15.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(v15.Value | 1);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v146);
  v66 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v116, 1);
  v68 = v66;
  if ( v66 >= 0 )
  {
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v125 + 268),
                                             &v129,
                                             0LL);
    v70 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v71 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v71 + 24) = v70;
      WdLogEvent5_WdEvent(v71);
    }
    if ( v129 )
    {
      if ( *((_QWORD *)v129 + 2) == *((_QWORD *)this + 2) )
      {
        *((_BYTE *)v129 + 1729) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v138);
      }
      else
      {
        v129 = 0LL;
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v132);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v139);
    if ( *((_DWORD *)this + 102) == 4 )
    {
      v83 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v83 + 24) = this;
      WdLogEvent5_WdEvent(v83);
      v85 = v129;
      if ( v129 )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v138);
        *((_BYTE *)v85 + 1729) = 0;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v129 + 2), v129);
      }
      DxgkDestroyClientAllocation(v84, this, a7, v131, v128);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v138);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v116);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v139);
      if ( !v134 )
        goto LABEL_48;
      goto LABEL_47;
    }
    v72 = v126;
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v146, this, v126);
    v74 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 2);
    if ( *((_QWORD *)this + 209) == *((_QWORD *)v74 + 2) )
    {
      if ( ((v72 - 1) & v72) != 0 )
      {
        v75 = v125;
        ADAPTER_DISPLAY::DisableAllPrimaries(*(ADAPTER_DISPLAY **)(v125 + 2304), v74);
      }
      else if ( v55 )
      {
        if ( v42 == -1 )
        {
          v76 = WdLogNewEntry5_WdAssertion(v73);
          *(_QWORD *)(v76 + 24) = 9201LL;
          WdLogEvent5_WdAssertion(v76);
        }
        v75 = v125;
        ADAPTER_DISPLAY::DisablePrimaryOnDevice(*(ADAPTER_DISPLAY **)(v125 + 2304), this, v42, 0);
      }
      else
      {
        v75 = v125;
        v77 = v130;
        VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                             *(DXGADAPTER ***)(v125 + 2304),
                             (*(_DWORD *)(*((_QWORD *)v130 + 6) + 4LL) >> 6) & 0xF);
        if ( !VidPnSourceOwner || VidPnSourceOwner == this )
          ADAPTER_DISPLAY::ForcePlanesOff(*(DXGADAPTER ***)(v75 + 2304));
        v79 = *(unsigned int *)(*((_QWORD *)v77 + 6) + 4LL);
        if ( (v79 & 1) == 0 )
        {
          v80 = WdLogNewEntry5_WdAssertion(v79);
          *(_QWORD *)(v80 + 24) = 9228LL;
          WdLogEvent5_WdAssertion(v80);
        }
        v81 = (*(_DWORD *)(*((_QWORD *)v77 + 6) + 4LL) >> 6) & 0xF;
        if ( (_DWORD)v81 != v42 )
        {
          v82 = WdLogNewEntry5_WdAssertion(v81);
          *(_QWORD *)(v82 + 24) = 9229LL;
          WdLogEvent5_WdAssertion(v82);
        }
        ADAPTER_DISPLAY::DisablePrimaryAllocation(*(ADAPTER_DISPLAY **)(v75 + 2304), this, v77);
      }
      goto LABEL_135;
    }
LABEL_134:
    v75 = v125;
LABEL_135:
    if ( v120 || v122 )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v141) )
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v139);
      if ( v123 )
      {
        v87 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v75 + 2304), v42, 0, 0x10u, 0);
        v89 = v87;
        if ( v87 < 0 )
        {
          v90 = WdLogNewEntry5_WdError(v88);
          *(_QWORD *)(v90 + 24) = v42;
          *(_QWORD *)(v90 + 32) = v89;
          WdLogEvent5_WdError(v90);
        }
      }
      DXGDEVICE::FlushScheduler(this, 6LL);
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v141) )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v139);
    }
    v91 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v91 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v91 + 144)) )
    {
      v93 = WdLogNewEntry5_WdAssertion(v92);
      *(_QWORD *)(v93 + 24) = 5888LL;
      WdLogEvent5_WdAssertion(v93);
    }
    if ( !*((_DWORD *)this + 18) )
      ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
    v94 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v95 = v128;
    if ( *(_BYTE *)(v94 + 185) )
    {
      if ( v128 )
        v96 = *((_DWORD *)v128 + 5);
      else
        v96 = 0;
      v97 = *((_DWORD *)this + 84);
      Current = DXGPROCESS::GetCurrent();
      v99 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v94 + 3888);
      v100 = a7;
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(v99, *((_DWORD *)Current + 106), v97, v96, a7, v131, v15);
      if ( v95 )
        *((_DWORD *)v95 + 5) = 0;
      v101 = v131;
      if ( a7 )
      {
        v102 = v131;
        v103 = a7;
        do
        {
          *((_DWORD *)*v102++ + 24) = 0;
          --v103;
        }
        while ( v103 );
      }
      LOBYTE(v64) = v127;
    }
    else
    {
      v100 = a7;
      v101 = v131;
    }
    if ( v95 )
    {
      DXGDEVICE::TerminateAllocations(
        this,
        v95,
        1,
        *((struct DXGALLOCATION **)v95 + 3),
        (struct COREDEVICEACCESS *)v139,
        v15);
    }
    else
    {
      v135 = 0LL;
      DXGDEVICE::RemoveAllocationsAndTransferToList(this, v101, v100, &v135);
      v104 = v135;
      if ( v135 )
      {
        v105 = (struct DXGRESOURCE *)*((_QWORD *)v135 + 5);
        if ( v105 )
        {
          do
          {
            v106 = v104;
            v107 = (_QWORD *)((char *)v104 + 64);
            v104 = (struct DXGALLOCATION *)*((_QWORD *)v104 + 8);
            *v107 = 0LL;
            DXGDEVICE::TerminateAllocations(this, v105, 0, v106, (struct COREDEVICEACCESS *)v139, v15);
          }
          while ( v104 );
        }
        else
        {
          do
          {
            v108 = v104;
            v109 = (_QWORD *)((char *)v104 + 64);
            v104 = (struct DXGALLOCATION *)*((_QWORD *)v104 + 8);
            *v109 = 0LL;
            DXGDEVICE::TerminateAllocations(this, 0LL, 0, v108, (struct COREDEVICEACCESS *)v139, v15);
          }
          while ( v104 );
        }
        v135 = v104;
      }
    }
    if ( v120 )
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, (struct COREDEVICEACCESS *)v139);
    v110 = 0;
    v121 = 0;
    v124[0] = 0;
    if ( (_BYTE)v64 )
    {
      v111 = v129;
      if ( v129 )
      {
        ADAPTER_DISPLAY::EnsureGdiOutput(
          *(ADAPTER_DISPLAY **)(v125 + 2304),
          v129,
          (struct COREDEVICEACCESS *)v139,
          &v121,
          v124,
          v136);
        v110 = v121;
      }
      MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v146, v110);
      if ( v111 )
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v139);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v132);
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v138);
        *((_BYTE *)v111 + 1729) = 0;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v111 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v129 + 2), v129);
        if ( v116 )
        {
          v116 = 0;
          DxgkReleaseSessionModeChangeLock();
        }
        if ( v121 && v124[0] )
          (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 96LL) + 192LL))();
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v138);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v116);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v139);
    if ( v134 )
    {
      v113 = v133;
      ExReleasePushLockSharedEx((char *)v133 + 120, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v113 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v133 + 2), v133);
    }
    v114 = v147;
    if ( (v147 & 2) != 0 )
    {
      v115 = WdLogNewEntry5_WdAssertion(v112);
      *(_QWORD *)(v115 + 24) = 216LL;
      WdLogEvent5_WdAssertion(v115);
    }
    if ( (v114 & 1) != 0 )
      MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v146);
    return 0LL;
  }
  v86 = WdLogNewEntry5_WdError(v67);
  *(_QWORD *)(v86 + 24) = v68;
  WdLogEvent5_WdError(v86);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v138);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v116);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v139);
  if ( v134 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v132);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v146);
  return (unsigned int)v68;
}
