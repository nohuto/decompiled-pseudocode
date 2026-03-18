/*
 * XREFs of ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00F5360
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0098E10 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C00D11E0 (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 *     DxgkSignalSynchronizationObjectInternal @ 0x1C00D20B8 (DxgkSignalSynchronizationObjectInternal.c)
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C00F40D0 (DxgkSignalSynchronizationObjectFromGpu2.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0186C00 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01CB94C (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01DE9B8 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C00018B8 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0009794 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x1C001A758 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C001A798 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     McTemplateK0qPR0qqPR3XR3 @ 0x1C0033178 (McTemplateK0qPR0qqPR3XR3.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C00349D4 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0qPR0qPR2qx @ 0x1C0034BE8 (McTemplateK0qPR0qPR2qx.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ @ 0x1C009CC84 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAA@XZ @ 0x1C00D1E3C (--1-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N@Z @ 0x1C0184B20 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C01A30A8 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01C08B8 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall SignalSynchronizationObjectInternal(
        __int64 a1,
        unsigned int *a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        unsigned __int64 a7,
        void **a8,
        struct DXGPROCESS *a9,
        bool a10,
        bool a11)
{
  __int64 v11; // rsi
  void *const *v13; // r13
  __int64 v14; // rax
  _BYTE *PoolWithTag; // r12
  DXGCONTEXT **v17; // r12
  char v18; // si
  __int64 v19; // rcx
  __int64 v20; // r9
  DXGCONTEXT *v21; // rdi
  _QWORD *v22; // rax
  char v23; // al
  __int64 v24; // rdi
  __int64 v25; // rdi
  unsigned int v26; // ebx
  __int64 v27; // rcx
  bool v28; // r14
  __int64 v29; // rcx
  struct _KEVENT *v30; // rsi
  struct _KEVENT *v31; // rsi
  unsigned __int8 v32; // si
  __int64 v33; // r8
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // rax
  PERESOURCE *v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  struct DXGPROCESS *v49; // r14
  __int64 v50; // rcx
  unsigned int v51; // edi
  unsigned int v52; // esi
  _QWORD *v53; // r9
  const unsigned int *v54; // r10
  __int64 v55; // rax
  __int64 v56; // r11
  __int64 v57; // rdx
  _BYTE *v58; // r11
  unsigned int v59; // r15d
  unsigned int v60; // esi
  DXGCONTEXT **v61; // r9
  __int64 v62; // r10
  _QWORD *v63; // rax
  unsigned __int64 v64; // rcx
  _BYTE *v65; // r9
  char *v66; // rdi
  _BYTE *v67; // rsi
  _BYTE *v68; // rdx
  int v69; // r11d
  DXGCONTEXT **v70; // r10
  DXGCONTEXT *v71; // rcx
  unsigned int v72; // r8d
  _QWORD *v73; // rdx
  _QWORD *v74; // r9
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rdi
  _QWORD *v80; // rax
  PVOID v81; // rcx
  __int64 v82; // rax
  _BYTE *v83; // r13
  _QWORD *v84; // r13
  PVOID v85; // rcx
  char v86; // si
  unsigned int v87; // r14d
  DXGPUSHLOCK *v88; // r15
  unsigned int *v89; // r12
  unsigned int v90; // edi
  __int64 v91; // rax
  unsigned int v92; // edi
  __int64 v93; // r8
  unsigned int v94; // ecx
  __int64 v95; // rdi
  __int64 v96; // rcx
  int v97; // eax
  __int64 v98; // rax
  __int64 v99; // rax
  _QWORD *v100; // rax
  unsigned int v101; // edi
  __int64 v102; // rax
  unsigned int v103; // edi
  struct DXGPROCESS *v104; // rsi
  __int64 v105; // r8
  unsigned int v106; // ecx
  __int64 v107; // rdi
  __int64 v108; // rax
  char *v109; // r13
  unsigned __int64 v110; // r15
  PVOID v111; // rcx
  __int64 v112; // r8
  int v113; // edx
  __int64 *v114; // r12
  PVOID v115; // rcx
  __int64 v116; // rax
  _BYTE *v117; // rcx
  size_t v118; // r8
  void *v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rax
  unsigned int v122; // r9d
  __int64 v123; // r15
  _BYTE *v124; // rcx
  unsigned int v125; // r14d
  __int64 v126; // rsi
  char *v127; // r13
  __int64 v128; // rdi
  PVOID v129; // r8
  __int64 v130; // rcx
  struct ADAPTER_RENDER *v131; // rdx
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  __int64 v133; // rax
  __int64 v134; // rsi
  int v135; // eax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  _QWORD *v139; // rax
  __int64 v140; // rax
  _QWORD *v141; // rax
  __int64 v142; // rcx
  char v143; // [rsp+60h] [rbp-338h]
  unsigned int v144; // [rsp+64h] [rbp-334h]
  PERESOURCE *v145; // [rsp+68h] [rbp-330h] BYREF
  char v146; // [rsp+70h] [rbp-328h]
  __int64 v147; // [rsp+78h] [rbp-320h] BYREF
  int v148; // [rsp+80h] [rbp-318h]
  unsigned int v149; // [rsp+88h] [rbp-310h]
  _BYTE v150[16]; // [rsp+90h] [rbp-308h] BYREF
  struct DXGPROCESS *v151; // [rsp+A0h] [rbp-2F8h]
  PVOID v152; // [rsp+A8h] [rbp-2F0h] BYREF
  _BYTE v153[16]; // [rsp+B0h] [rbp-2E8h] BYREF
  int v154; // [rsp+C0h] [rbp-2D8h]
  PVOID v155; // [rsp+C8h] [rbp-2D0h]
  PVOID v156; // [rsp+D0h] [rbp-2C8h]
  _BYTE v157[64]; // [rsp+D8h] [rbp-2C0h] BYREF
  unsigned int v158; // [rsp+118h] [rbp-280h]
  PVOID P; // [rsp+120h] [rbp-278h]
  _BYTE v160[64]; // [rsp+128h] [rbp-270h] BYREF
  unsigned int v161; // [rsp+168h] [rbp-230h]
  unsigned int v162; // [rsp+170h] [rbp-228h]
  unsigned int *v163; // [rsp+178h] [rbp-220h]
  PVOID v164; // [rsp+180h] [rbp-218h]
  _BYTE v165[16]; // [rsp+188h] [rbp-210h] BYREF
  unsigned int v166; // [rsp+198h] [rbp-200h]
  unsigned int v167; // [rsp+1A0h] [rbp-1F8h]
  PVOID v168; // [rsp+1A8h] [rbp-1F0h] BYREF
  _BYTE v169[16]; // [rsp+1B0h] [rbp-1E8h] BYREF
  unsigned int v170; // [rsp+1C0h] [rbp-1D8h]
  _BYTE *v171; // [rsp+1C8h] [rbp-1D0h]
  int v172; // [rsp+1D0h] [rbp-1C8h]
  char *v173; // [rsp+1D8h] [rbp-1C0h]
  void *Src; // [rsp+1E0h] [rbp-1B8h]
  char v175[8]; // [rsp+1F0h] [rbp-1A8h] BYREF
  struct _KTHREAD **v176[2]; // [rsp+1F8h] [rbp-1A0h] BYREF
  DXGADAPTER *v177; // [rsp+208h] [rbp-190h]
  char v178; // [rsp+210h] [rbp-188h]
  struct _KTHREAD **v179[5]; // [rsp+218h] [rbp-180h] BYREF
  char v180; // [rsp+240h] [rbp-158h]
  unsigned __int64 v181; // [rsp+250h] [rbp-148h]
  _BYTE *v182; // [rsp+258h] [rbp-140h]
  _QWORD v183[2]; // [rsp+260h] [rbp-138h] BYREF
  __int64 v184; // [rsp+270h] [rbp-128h] BYREF
  __int128 v185; // [rsp+278h] [rbp-120h] BYREF
  _QWORD v186[4]; // [rsp+288h] [rbp-110h] BYREF
  char v187; // [rsp+2A8h] [rbp-F0h]
  _BYTE v188[32]; // [rsp+2B0h] [rbp-E8h] BYREF
  _BYTE v189[80]; // [rsp+2D0h] [rbp-C8h] BYREF
  PVOID v190; // [rsp+320h] [rbp-78h]
  _BYTE v191[32]; // [rsp+328h] [rbp-70h] BYREF
  unsigned int v192; // [rsp+348h] [rbp-50h]

  v11 = a4;
  v149 = a4;
  v163 = a2;
  v144 = a1;
  Src = a6;
  v13 = a8;
  v151 = a9;
  v183[1] = a9;
  if ( !a4 )
  {
    v14 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v14 + 24) = 332LL;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  v152 = 0LL;
  v154 = 0;
  if ( a4 <= 2 )
  {
    PoolWithTag = v153;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a4 < 8 )
    {
LABEL_363:
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v152);
      return 3221225495LL;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a4, 0x4B677844u);
  }
  v152 = PoolWithTag;
  v155 = PoolWithTag;
  v154 = v11;
  if ( !PoolWithTag )
    goto LABEL_363;
  memset(PoolWithTag, 0, 8 * v11);
  v17 = (DXGCONTEXT **)v152;
  v155 = v152;
  v18 = a11;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v150,
    *a5,
    (struct _KTHREAD **)v151,
    (struct DXGCONTEXT **)v152,
    a11);
  v21 = *v17;
  if ( !*v17 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v22[3] = v151;
    v22[4] = *a5;
    v22[5] = -1073741811LL;
LABEL_10:
    WdLogEvent5_WdError(v22);
    goto LABEL_11;
  }
  v172 = *(_BYTE *)&a3.0 & 2;
  if ( (*(_BYTE *)&a3.0 & 2) != 0 )
  {
    if ( v144 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v19);
      v22[3] = 362LL;
      goto LABEL_10;
    }
    if ( !*v13 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v19);
      v22[3] = 367LL;
      goto LABEL_10;
    }
  }
  v23 = *((_BYTE *)v21 + 401);
  v24 = *((_QWORD *)v21 + 2);
  if ( v23 )
  {
    v25 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v189, (struct DXGADAPTER *const)v25, 0LL);
    if ( v18 || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v189) >= 0 )
    {
      v26 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v25 + 4080),
              v151,
              v144,
              v163,
              a3,
              v149,
              a5,
              a6,
              a7,
              v13,
              a10);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v189);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v150);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v152);
      return v26;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v189);
LABEL_21:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v150);
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v152);
    return 3221226166LL;
  }
  v147 = v24;
  v148 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v175, v24, 0, v20, v18);
  v28 = a10;
  if ( !v18 )
  {
    if ( a10 || *(_DWORD *)(*((_QWORD *)*v17 + 2) + 328LL) == 2 || (*((_BYTE *)v151 + 323) & 8) != 0 )
    {
      v30 = *(struct _KEVENT **)(v24 + 16);
      if ( *(_DWORD *)(v24 + 328) == 2 )
        v31 = v30 + 4;
      else
        v31 = v30 + 3;
      if ( !KeReadStateEvent(v31) )
        KeWaitForSingleObject(v31, Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v24 + 104), 0) )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) + 96LL));
        v32 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v24 + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v33, 40);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v24 + 104), 1u);
        if ( v32 )
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v24 + 16) + 16LL));
        ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) + 96LL, 0LL);
        KeLeaveCriticalRegion();
      }
      v148 = 1;
    }
    else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v147) )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v175);
      if ( v147 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v147);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v150);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v152);
      return 2147483665LL;
    }
    if ( v178 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29);
      v34[3] = 275LL;
      v34[4] = 4LL;
      v34[5] = v176;
      v34[6] = 0LL;
      v34[7] = 0LL;
      WdLogEvent5_WdCriticalError(v34);
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v177 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v177 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v35, &EventBlockThread, v36, 72);
        KeWaitForSingleObject((char *)v177 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v177);
    }
    v178 = 1;
    v27 = *((unsigned int *)v179[4] + 106);
    if ( (_DWORD)v27 != 1 )
      goto LABEL_57;
    if ( v180 )
    {
      COREACCESS::AcquireShared((DXGADAPTER **)v179);
      v27 = *((unsigned int *)v179[2] + 44);
      if ( (_DWORD)v27 != 1 )
      {
        COREACCESS::Release(v179);
LABEL_57:
        COREACCESS::Release(v176);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v175);
        if ( v147 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v147);
        goto LABEL_21;
      }
    }
  }
  Global = DXGGLOBAL::GetGlobal(v27);
  v145 = (PERESOURCE *)Global;
  v146 = 0;
  if ( !Global )
  {
    v39 = WdLogNewEntry5_WdAssertion(v38);
    *(_QWORD *)(v39 + 24) = 2138LL;
    WdLogEvent5_WdAssertion(v39);
    Global = (struct DXGGLOBAL *)v145;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 43)) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v40);
    *(_QWORD *)(v41 + 24) = 2143LL;
    WdLogEvent5_WdAssertion(v41);
  }
  if ( v146 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40);
    v42[3] = 275LL;
    v42[4] = 4LL;
    v42[5] = &v145;
    v42[6] = 0LL;
    v42[7] = 0LL;
    WdLogEvent5_WdCriticalError(v42);
  }
  v43 = v145;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v43[43], 1u);
  v146 = 1;
  v44 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v17 + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v44 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v44 + 144)) )
  {
    v46 = WdLogNewEntry5_WdAssertion(v45);
    *(_QWORD *)(v46 + 24) = 441LL;
    WdLogEvent5_WdAssertion(v46);
  }
  if ( v28 )
  {
    v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v17 + 2) + 16LL) + 16LL) + 192LL) + 64LL);
    if ( *(_DWORD *)(*(_QWORD *)(v47 + 40) + 28LL) > 0x1052u )
    {
      if ( (a3.Value & 0x7FFFFFF8) != 0 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdError(v47);
        v48[3] = *a5;
        v48[4] = (a3.Value >> 3) & 0xFFFFFFF;
        v48[5] = -1073741811LL;
LABEL_72:
        WdLogEvent5_WdError(v48);
        goto LABEL_73;
      }
      if ( (a3.Value & 0x80000000) != 0 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdError(v47);
        v48[3] = 459LL;
        goto LABEL_72;
      }
    }
  }
  v49 = v151;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v188, (struct _KTHREAD **)v151);
  v51 = 1;
  v52 = v149;
  if ( v149 > 1 )
  {
    v53 = v17 + 1;
    v54 = a5 + 1;
    while ( 1 )
    {
      v55 = (*v54 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v55 < *((_DWORD *)v49 + 62)
        && (v56 = *((_QWORD *)v49 + 29),
            v50 = *(unsigned int *)(v56 + 16 * v55 + 8),
            *v54 >> 30 == ((*(_DWORD *)(v56 + 16 * v55 + 8) >> 5) & 3))
        && (v50 & 0x2000) == 0
        && (v50 & 0x1F) != 0
        && (v50 &= 0x1Fu, (_BYTE)v50 == 7) )
      {
        v57 = *(_QWORD *)(v56 + 16LL * (unsigned int)v55);
      }
      else
      {
        v57 = 0LL;
      }
      *v53 = v57;
      if ( !v57 || *(_QWORD *)(v57 + 16) != *((_QWORD *)*v17 + 2) )
        break;
      ++v51;
      ++v54;
      ++v53;
      if ( v51 >= v52 )
        goto LABEL_91;
    }
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v50);
    v63[3] = *a5;
    v63[4] = a5[v51];
    v63[5] = v51;
    v63[6] = -1073741811LL;
    WdLogEvent5_WdError(v63);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v188);
LABEL_73:
    if ( v146 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
    goto LABEL_75;
  }
LABEL_91:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v188);
  v58 = 0LL;
  v59 = 0;
  v167 = 0;
  v60 = 0;
  v162 = 0;
  if ( v149 )
  {
    v61 = v17;
    v62 = v149;
    do
    {
      if ( (*((_DWORD *)*v61 + 91) & 0x10) != 0 )
        v60 += DXGCONTEXT::GetRenderHwQueueCount(*v61);
      else
        ++v59;
      ++v61;
      --v62;
    }
    while ( v62 );
    v162 = v60;
    v167 = v59;
  }
  v64 = (unsigned __int64)v58;
  v156 = v58;
  v158 = (unsigned int)v58;
  if ( v59 <= 8 )
  {
    v64 = (unsigned __int64)v157;
    v156 = v157;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v59 < 8 )
    {
      v171 = v58;
      goto LABEL_108;
    }
    v64 = (unsigned __int64)ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v59, 0x4B677844u);
    v156 = (PVOID)v64;
  }
  v158 = v59;
  if ( v64 && v59 )
  {
    memset((void *)v64, 0, 8LL * v59);
    v64 = (unsigned __int64)v156;
  }
  v171 = (_BYTE *)v64;
  v58 = 0LL;
LABEL_108:
  v65 = v58;
  P = v58;
  v161 = (unsigned int)v58;
  if ( v60 <= 8 )
  {
    v65 = v160;
    P = v160;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v60 < 8 )
    {
      v66 = 0LL;
      v67 = 0LL;
      v182 = 0LL;
      goto LABEL_117;
    }
    v65 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v60, 0x4B677844u);
    P = v65;
    v64 = (unsigned __int64)v156;
  }
  v161 = v60;
  if ( v65 && v60 )
  {
    memset(v65, 0, 8LL * v60);
    v64 = (unsigned __int64)v156;
    v65 = P;
  }
  v67 = v65;
  v182 = v65;
  v66 = 0LL;
LABEL_117:
  v68 = v171;
  if ( !v171 || !v67 )
  {
    if ( v67 == v160 || !v67 )
      goto LABEL_355;
    v85 = v65;
LABEL_353:
    ExFreePoolWithTag(v85, 0);
LABEL_354:
    v64 = (unsigned __int64)v156;
LABEL_355:
    v161 = (unsigned int)v66;
    P = v66;
    if ( (_BYTE *)v64 != v157 && v64 )
      ExFreePoolWithTag((PVOID)v64, 0);
    v158 = (unsigned int)v66;
    v156 = v66;
    if ( v146 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v175);
    if ( v147 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v147);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v150);
    goto LABEL_363;
  }
  v69 = 0;
  if ( v149 )
  {
    v70 = v17;
    v66 = (char *)v149;
    do
    {
      v71 = *v70;
      if ( (*((_DWORD *)*v70 + 91) & 0x10) != 0 )
      {
        DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)v71 + 46, &v185);
        v73 = (_QWORD *)*((_QWORD *)&v185 + 1);
        v74 = (_QWORD *)v185;
        while ( v73 != v74 && v73 )
        {
          v64 = v72;
          *(_QWORD *)&v67[8 * v72++] = v73[5];
          v73 = (_QWORD *)*v73;
        }
        v185 = 0LL;
        v68 = v171;
      }
      else
      {
        v64 = *((_QWORD *)v71 + 29);
        *(_QWORD *)&v68[8 * v69++] = v64;
      }
      ++v70;
      --v66;
    }
    while ( v66 );
  }
  if ( (*(_BYTE *)&a3.0 & 2) != 0 )
  {
    v75 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD, _BYTE *, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, void *const))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v17 + 2) + 16LL) + 520LL) + 8LL) + 840LL))(
            v162,
            v67,
            v59,
            v68,
            a3.0,
            *v13);
    v79 = v75;
    if ( v75 >= 0 )
    {
      if ( bTracingEnabled )
      {
        v183[0] = *v13;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qPR0qPR2qx(v77, v76, v78, v149, (__int64)v17, 1, (__int64)v183, *(_BYTE *)&a3.0, 0);
      }
      if ( P != v160 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v161 = 0;
      if ( v156 != v157 && v156 )
        ExFreePoolWithTag(v156, 0);
      v156 = 0LL;
      v158 = 0;
      if ( v146 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v175);
      if ( v147 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v147);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v150);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v152);
      return 0LL;
    }
    else
    {
      v80 = (_QWORD *)WdLogNewEntry5_WdError(v77);
      v80[3] = v49;
      v80[4] = *v13;
      v80[5] = v79;
      WdLogEvent5_WdError(v80);
      v81 = P;
      if ( P != v160 && P )
LABEL_133:
        ExFreePoolWithTag(v81, 0);
LABEL_134:
      v161 = 0;
      P = 0LL;
      if ( v156 != v157 && v156 )
        ExFreePoolWithTag(v156, 0);
      v158 = 0;
      v156 = 0LL;
      if ( v146 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v175);
      if ( v147 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v147);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v150);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v152);
      return (unsigned int)v79;
    }
  }
  if ( !v144 )
  {
    v82 = WdLogNewEntry5_WdError(v64);
    *(_QWORD *)(v82 + 24) = 577LL;
    WdLogEvent5_WdError(v82);
LABEL_158:
    if ( P != v160 && P )
      ExFreePoolWithTag(P, 0);
    v161 = (unsigned int)v66;
    P = v66;
    if ( v156 != v157 && v156 )
      ExFreePoolWithTag(v156, 0);
    v156 = v66;
    v158 = (unsigned int)v66;
    goto LABEL_73;
  }
  v168 = v66;
  v170 = (unsigned int)v66;
  v181 = v144;
  if ( v144 <= 2 )
  {
    v83 = v169;
    v181 = v144;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v144 < 8 )
      goto LABEL_171;
    v83 = ExAllocatePoolWithTag(PagedPool, 8LL * v144, 0x4B677844u);
  }
  v168 = v83;
  v173 = v83;
  v170 = v144;
  if ( !v83 || (memset(v83, 0, 8LL * v144), v84 = v168, (v173 = (char *)v168) == 0LL) )
  {
LABEL_171:
    PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v168);
    v85 = P;
    if ( P == v160 || !P )
      goto LABEL_354;
    goto LABEL_353;
  }
  v143 = 0;
  v86 = 0;
  v87 = (unsigned int)v66;
  v88 = (struct DXGPROCESS *)((char *)v151 + 208);
  v89 = v163;
  do
  {
    v90 = *v89;
    DXGPUSHLOCK::AcquireShared(v88);
    v91 = (v90 >> 6) & 0xFFFFFF;
    v92 = v90 >> 30;
    if ( (unsigned int)v91 < *((_DWORD *)v151 + 62)
      && (v93 = *((_QWORD *)v151 + 29), v94 = *(_DWORD *)(v93 + 16 * v91 + 8), v92 == ((v94 >> 5) & 3))
      && (v94 & 0x2000) == 0
      && (v94 & 0x1F) == 8 )
    {
      v95 = *(_QWORD *)(v93 + 16LL * (unsigned int)v91);
    }
    else
    {
      v95 = 0LL;
    }
    ExReleasePushLockSharedEx(v88, 0LL);
    KeLeaveCriticalRegion();
    if ( v95 )
    {
      v97 = *(_DWORD *)(v95 + 168);
      if ( v97 == 5 )
      {
        v98 = WdLogNewEntry5_WdAssertion(v96);
        *(_QWORD *)(v98 + 24) = 611LL;
        WdLogEvent5_WdAssertion(v98);
        v97 = *(_DWORD *)(v95 + 168);
      }
      if ( v97 == 6 )
      {
        v99 = WdLogNewEntry5_WdAssertion(v96);
        *(_QWORD *)(v99 + 24) = 612LL;
        WdLogEvent5_WdAssertion(v99);
      }
      v143 = 1;
      if ( v86 )
      {
LABEL_207:
        v100 = (_QWORD *)WdLogNewEntry5_WdError(v96);
        v100[3] = v151;
        goto LABEL_208;
      }
      if ( *(_DWORD *)(v95 + 168) == 3 && v144 != 1 )
      {
        v100 = (_QWORD *)WdLogNewEntry5_WdError(v96);
        v100[3] = v151;
        v100[4] = v163[v87];
        v100[5] = v144;
        v100[6] = -1073741811LL;
LABEL_208:
        WdLogEvent5_WdError(v100);
        PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v168);
        v115 = P;
        if ( P != v160 && P )
          goto LABEL_210;
        goto LABEL_211;
      }
    }
    else
    {
      v101 = *v89;
      DXGPUSHLOCK::AcquireShared(v88);
      v102 = (v101 >> 6) & 0xFFFFFF;
      v103 = v101 >> 30;
      v104 = v151;
      if ( (unsigned int)v102 < *((_DWORD *)v151 + 62)
        && (v105 = *((_QWORD *)v151 + 29), v106 = *(_DWORD *)(v105 + 16 * v102 + 8), v103 == ((v106 >> 5) & 3))
        && (v106 & 0x2000) == 0
        && (v106 & 0x1F) == 0xB )
      {
        v107 = *(_QWORD *)(v105 + 16LL * (unsigned int)v102);
      }
      else
      {
        v107 = 0LL;
      }
      ExReleasePushLockSharedEx(v88, 0LL);
      KeLeaveCriticalRegion();
      if ( !v107 )
      {
        v100 = (_QWORD *)WdLogNewEntry5_WdError(v96);
        v100[3] = v104;
        v100[4] = v163[v87];
        v100[5] = v87;
        v100[6] = -1073741811LL;
        goto LABEL_208;
      }
      v86 = 1;
      if ( v143 )
        goto LABEL_207;
      if ( (*(_DWORD *)(v107 + 64) & 0x10) != 0 )
      {
        v116 = WdLogNewEntry5_WdError(v96);
        *(_QWORD *)(v116 + 24) = v163[v87];
        WdLogEvent5_WdError(v116);
        PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v168);
        if ( P != v160 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v161 = 0;
        if ( v156 != v157 && v156 )
          ExFreePoolWithTag(v156, 0);
        v156 = 0LL;
        v158 = 0;
        if ( v146 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v175);
        if ( v147 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v147);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v150);
        PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v152);
        return 3221225506LL;
      }
      if ( *(_QWORD *)(v107 + 16) != *(_QWORD *)(*(_QWORD *)v155 + 16LL) )
      {
        v100 = (_QWORD *)WdLogNewEntry5_WdError(v96);
        v100[3] = *(_QWORD *)(*(_QWORD *)v155 + 16LL);
        v100[4] = *(_QWORD *)(v107 + 16);
        goto LABEL_208;
      }
      v95 = *(_QWORD *)(v107 + 32);
      if ( (unsigned int)(*(_DWORD *)(v95 + 168) - 5) > 1 )
      {
        v108 = WdLogNewEntry5_WdAssertion(v96);
        *(_QWORD *)(v108 + 24) = 684LL;
        WdLogEvent5_WdAssertion(v108);
      }
    }
    *v84 = v95;
    ++v87;
    ++v89;
    ++v84;
  }
  while ( v87 < v144 );
  v109 = v173;
  v110 = v181;
  v66 = 0LL;
  v111 = 0LL;
  v190 = 0LL;
  v112 = 0LL;
  v192 = 0;
  v113 = *(_DWORD *)(*(_QWORD *)v173 + 168LL);
  if ( (unsigned int)(v113 - 5) > 1 )
  {
    v114 = (__int64 *)&a7;
    if ( v113 != 3 )
      v114 = 0LL;
    goto LABEL_254;
  }
  if ( !a10 )
  {
    v114 = (__int64 *)Src;
    goto LABEL_254;
  }
  if ( v144 <= 4 )
  {
    v117 = v191;
    v190 = v191;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v144 < 8 )
      goto LABEL_237;
    v117 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v144, 0x4B677844u);
    v190 = v117;
  }
  v192 = v144;
  if ( !v117 )
    goto LABEL_238;
  memset(v117, 0, 8LL * v144);
  v112 = v192;
  v111 = v190;
LABEL_237:
  if ( !v111 )
  {
LABEL_238:
    v190 = 0LL;
    v192 = 0;
    PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v168);
    if ( P != v160 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v161 = 0;
    if ( v156 != v157 && v156 )
      ExFreePoolWithTag(v156, 0);
    v156 = 0LL;
    v158 = 0;
    if ( v146 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v175);
    if ( v147 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v147);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v150);
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v152);
    return 3221225495LL;
  }
  v118 = 8 * v112;
  v119 = Src;
  if ( (char *)Src + v118 < Src || (unsigned __int64)Src + v118 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v111, v119, v118);
  v114 = (__int64 *)v190;
  Src = v190;
  v66 = 0LL;
LABEL_254:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v186,
    v109,
    v144);
  if ( v187 )
  {
    if ( v186[0] )
    {
      v121 = WdLogNewEntry5_WdError(v120);
      *(_QWORD *)(v121 + 24) = 753LL;
      WdLogEvent5_WdError(v121);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v186);
      if ( v190 != v191 && v190 )
        ExFreePoolWithTag(v190, 0);
      v190 = 0LL;
      v192 = 0;
      PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v168);
      goto LABEL_158;
    }
    goto LABEL_256;
  }
  v164 = 0LL;
  v166 = 0;
  v122 = v144;
  if ( v144 <= 2 )
  {
    v124 = v165;
    v164 = v165;
    v110 = v144;
    goto LABEL_269;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v110 >= 8 )
  {
    v124 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v110, 0x4B677844u);
    v164 = v124;
    v122 = v144;
LABEL_269:
    v166 = v122;
    if ( v124 )
    {
      memset(v124, 0, 8 * v110);
      v124 = v164;
      v122 = v144;
    }
    v123 = (__int64)v124;
    goto LABEL_272;
  }
  v123 = 0LL;
LABEL_272:
  if ( !v123 )
  {
    v164 = 0LL;
    v166 = 0;
LABEL_256:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v186);
    if ( v190 != v191 && v190 )
      ExFreePoolWithTag(v190, 0);
    v190 = 0LL;
    v192 = 0;
    goto LABEL_171;
  }
  v125 = 0;
  v126 = v123;
  v127 = &v109[-v123];
  while ( 1 )
  {
    v128 = *(_QWORD *)&v127[v126];
    v129 = v155;
    v130 = *(_QWORD *)(*(_QWORD *)v155 + 16LL);
    v131 = *(struct ADAPTER_RENDER **)(v130 + 16);
    if ( (*(_DWORD *)(v128 + 172) & 4) == 0 )
      break;
    DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(*(DXGSYNCOBJECTCA **)&v127[v126], v131);
    v129 = v155;
    v122 = v144;
LABEL_280:
    if ( !DxgAdapterSyncObject )
      goto LABEL_305;
    if ( (*(_DWORD *)(v128 + 172) & 4) != 0 )
      v133 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                           (DXGSYNCOBJECTCA *)v128,
                           *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v129 + 16LL) + 16LL))
             + 4);
    else
      v133 = *(_QWORD *)(v128 + 296);
    *(_QWORD *)v126 = v133;
    if ( !v133 )
    {
      v140 = WdLogNewEntry5_WdError(v130);
      *(_QWORD *)(v140 + 24) = v128;
      WdLogEvent5_WdError(v140);
      if ( v164 != v165 && v164 )
        ExFreePoolWithTag(v164, 0);
      v164 = 0LL;
      v166 = 0;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v186);
      if ( v190 != v191 && v190 )
        ExFreePoolWithTag(v190, 0);
      v190 = 0LL;
      v192 = 0;
      PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v168);
      v115 = P;
      if ( P == v160 || !P )
        goto LABEL_211;
      goto LABEL_210;
    }
    ++v125;
    v126 += 8LL;
    if ( v125 >= v122 )
    {
      v134 = (__int64)v155;
      v135 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD, _BYTE *, unsigned int, __int64, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v155 + 16LL) + 16LL) + 520LL) + 8LL) + 648LL))(
               v162,
               v182,
               v167,
               v171,
               v122,
               v123,
               a3.0,
               v114);
      v79 = v135;
      if ( v135 >= 0 )
      {
        if ( v143 )
        {
          if ( bTracingEnabled )
          {
            if ( v172 )
            {
              v184 = MEMORY[0];
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0qPR0qPR2qx(v137, v136, v138, v149, v134, 1, (__int64)&v184, *(_BYTE *)&a3.0, 0);
            }
            else
            {
              v142 = 0LL;
              if ( v114 )
                v142 = *v114;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0qPR0qPR2qx(v142, v136, v138, v149, v134, v144, v123, *(_BYTE *)&a3.0, v142);
            }
          }
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0qPR0qqPR3XR3(v137, v136, v138, v149, v134, *(_BYTE *)&a3.0, v144, v123, (__int64)v114);
        }
        if ( v164 != v165 && v164 )
          ExFreePoolWithTag(v164, 0);
        v164 = 0LL;
        v166 = 0;
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v186);
        if ( v190 != v191 && v190 )
          ExFreePoolWithTag(v190, 0);
        v190 = 0LL;
        v192 = 0;
        if ( v168 != v169 && v168 )
          ExFreePoolWithTag(v168, 0);
        if ( P != v160 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v161 = 0;
        if ( v156 != v157 && v156 )
          ExFreePoolWithTag(v156, 0);
        v156 = 0LL;
        v158 = 0;
        if ( v146 )
        {
          v146 = 0;
          ExReleaseResourceLite(v145[43]);
          KeLeaveCriticalRegion();
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v175);
        if ( v147 && v148 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v147 + 104));
          KeLeaveCriticalRegion();
        }
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v150);
        if ( v152 != v153 && v152 )
          ExFreePoolWithTag(v152, 0);
        return 0LL;
      }
      v139 = (_QWORD *)WdLogNewEntry5_WdError(v137);
      v139[3] = v151;
      v139[4] = *v163;
      v139[5] = 0LL;
      v139[6] = v79;
      WdLogEvent5_WdError(v139);
      if ( v164 != v165 && v164 )
        ExFreePoolWithTag(v164, 0);
      v164 = 0LL;
      v166 = 0;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v186);
      if ( v190 != v191 && v190 )
        ExFreePoolWithTag(v190, 0);
      v190 = 0LL;
      v192 = 0;
      PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v168);
      v81 = P;
      if ( P == v160 || !P )
        goto LABEL_134;
      goto LABEL_133;
    }
  }
  if ( !v131 || *(struct ADAPTER_RENDER **)(v128 + 280) == v131 )
  {
    DxgAdapterSyncObject = (struct DXGADAPTERSYNCOBJECT *)(v128 + 264);
    goto LABEL_280;
  }
LABEL_305:
  v141 = (_QWORD *)WdLogNewEntry5_WdError(v130);
  v141[3] = v151;
  v141[4] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v155 + 16LL) + 16LL) + 16LL);
  v141[5] = -1073741811LL;
  WdLogEvent5_WdError(v141);
  if ( v164 != v165 && v164 )
    ExFreePoolWithTag(v164, 0);
  v164 = 0LL;
  v166 = 0;
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v186);
  if ( v190 != v191 && v190 )
    ExFreePoolWithTag(v190, 0);
  v190 = 0LL;
  v192 = 0;
  PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v168);
  v115 = P;
  if ( P == v160 || !P )
    goto LABEL_211;
LABEL_210:
  ExFreePoolWithTag(v115, 0);
LABEL_211:
  P = 0LL;
  v161 = 0;
  if ( v156 != v157 && v156 )
    ExFreePoolWithTag(v156, 0);
  v156 = 0LL;
  v158 = 0;
  if ( v146 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v145);
LABEL_75:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v175);
  if ( v147 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v147);
LABEL_11:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v150);
  PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v152);
  return 3221225485LL;
}
