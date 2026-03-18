/*
 * XREFs of ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0086FA0
 * Callers:
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C007C640 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C008A560 (DxgkSignalSynchronizationObjectFromGpu2.c)
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C00EFF88 (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 *     ?DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00F04D8 (-DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0199E50 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01C87B8 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01D5D70 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0003A10 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C0014788 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0014818 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C00298D8 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0qPR0qPR2qx @ 0x1C0029B88 (McTemplateK0qPR0qPR2qx.c)
 *     McTemplateK0qPR0qqPR3XR3 @ 0x1C0029C50 (McTemplateK0qPR0qqPR3XR3.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAA@XZ @ 0x1C00CFC44 (--1-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ @ 0x1C00F9468 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N@Z @ 0x1C0197EB4 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01BF7D0 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
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
  unsigned __int64 v11; // rsi
  void *const *v13; // r12
  struct DXGPROCESS *v14; // rdi
  __int64 v15; // rax
  _BYTE *PoolWithTag; // rcx
  _BYTE *v18; // r13
  char v19; // si
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rdi
  _QWORD *v23; // rax
  __int64 v24; // rdi
  unsigned int v25; // ebx
  __int64 v26; // rdi
  __int64 v27; // rcx
  bool v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct _KEVENT *v32; // rsi
  struct _KEVENT *v33; // rsi
  unsigned __int8 v34; // si
  __int64 v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  _QWORD *v46; // rax
  PERESOURCE *v47; // rdi
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  struct DXGPROCESS *v55; // r14
  unsigned int v56; // edi
  unsigned int v57; // esi
  _QWORD *v58; // r9
  const unsigned int *v59; // r11
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r10
  unsigned int v64; // r8d
  __int64 v65; // r8
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rdi
  _QWORD *v74; // rax
  __int64 v75; // rax
  unsigned int v76; // r14d
  _BYTE *v77; // rdi
  char v78; // si
  DXGPUSHLOCK *v79; // r15
  _QWORD *v80; // r13
  unsigned int *v81; // r12
  unsigned int v82; // edi
  __int64 v83; // rax
  unsigned int v84; // edi
  __int64 v85; // r8
  unsigned int v86; // ecx
  __int64 v87; // rdi
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rax
  unsigned int v91; // edi
  __int64 v92; // rax
  unsigned int v93; // edi
  struct DXGPROCESS *v94; // rsi
  __int64 v95; // r8
  unsigned int v96; // edx
  __int64 v97; // rdi
  __int64 v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // r13
  const void *v101; // rdi
  __int64 v102; // rax
  PVOID v103; // rcx
  __int64 v104; // r8
  int v105; // edx
  __int64 *v106; // r12
  _BYTE *v107; // rcx
  size_t v108; // r8
  void *v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rax
  _BYTE *v112; // r15
  unsigned int v113; // r14d
  unsigned int v114; // r10d
  _QWORD *v115; // rsi
  PVOID v116; // rdi
  __int64 v117; // rdi
  __int64 v118; // rcx
  struct ADAPTER_RENDER *v119; // rdx
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  __int64 v121; // rax
  _QWORD *v122; // rax
  unsigned int v123; // esi
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  _QWORD *v128; // rax
  __int64 v129; // rcx
  char v130; // [rsp+60h] [rbp-2F8h]
  unsigned int v131; // [rsp+64h] [rbp-2F4h]
  PERESOURCE *v132; // [rsp+68h] [rbp-2F0h] BYREF
  char v133; // [rsp+70h] [rbp-2E8h]
  __int64 v134; // [rsp+78h] [rbp-2E0h] BYREF
  int v135; // [rsp+80h] [rbp-2D8h]
  _BYTE v136[16]; // [rsp+88h] [rbp-2D0h] BYREF
  struct DXGPROCESS *v137; // [rsp+98h] [rbp-2C0h]
  unsigned int v138; // [rsp+A0h] [rbp-2B8h]
  PVOID v139; // [rsp+A8h] [rbp-2B0h] BYREF
  _BYTE v140[16]; // [rsp+B0h] [rbp-2A8h] BYREF
  int v141; // [rsp+C0h] [rbp-298h]
  PVOID v142; // [rsp+C8h] [rbp-290h]
  _QWORD *v143; // [rsp+D0h] [rbp-288h]
  unsigned int *v144; // [rsp+D8h] [rbp-280h]
  PVOID i; // [rsp+E0h] [rbp-278h]
  PVOID P; // [rsp+F0h] [rbp-268h]
  _BYTE v147[128]; // [rsp+F8h] [rbp-260h] BYREF
  int v148; // [rsp+178h] [rbp-1E0h]
  PVOID v149; // [rsp+180h] [rbp-1D8h]
  _BYTE v150[16]; // [rsp+188h] [rbp-1D0h] BYREF
  unsigned int v151; // [rsp+198h] [rbp-1C0h]
  PVOID v152; // [rsp+1A0h] [rbp-1B8h] BYREF
  _BYTE v153[16]; // [rsp+1A8h] [rbp-1B0h] BYREF
  unsigned int v154; // [rsp+1B8h] [rbp-1A0h]
  void *Src; // [rsp+1C0h] [rbp-198h]
  char v156[8]; // [rsp+1D0h] [rbp-188h] BYREF
  _BYTE v157[16]; // [rsp+1D8h] [rbp-180h] BYREF
  DXGADAPTER *v158; // [rsp+1E8h] [rbp-170h]
  char v159; // [rsp+1F0h] [rbp-168h]
  _BYTE v160[16]; // [rsp+1F8h] [rbp-160h] BYREF
  __int64 v161; // [rsp+208h] [rbp-150h]
  __int64 v162; // [rsp+218h] [rbp-140h]
  char v163; // [rsp+220h] [rbp-138h]
  _QWORD v164[2]; // [rsp+230h] [rbp-128h] BYREF
  __int64 v165; // [rsp+240h] [rbp-118h] BYREF
  _QWORD v166[4]; // [rsp+248h] [rbp-110h] BYREF
  char v167; // [rsp+268h] [rbp-F0h]
  _BYTE v168[32]; // [rsp+270h] [rbp-E8h] BYREF
  _BYTE v169[80]; // [rsp+290h] [rbp-C8h] BYREF
  PVOID v170; // [rsp+2E0h] [rbp-78h]
  _BYTE v171[32]; // [rsp+2E8h] [rbp-70h] BYREF
  unsigned int v172; // [rsp+308h] [rbp-50h]

  v11 = a4;
  v138 = a4;
  v144 = a2;
  v131 = a1;
  Src = a6;
  v13 = a8;
  v14 = a9;
  v137 = a9;
  v164[1] = a9;
  if ( !a4 )
  {
    v15 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v15 + 24) = 310LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  v139 = 0LL;
  v141 = 0;
  PoolWithTag = 0LL;
  P = 0LL;
  v148 = 0;
  if ( a4 <= 0x10 )
  {
    PoolWithTag = v147;
    P = v147;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a4 < 8 )
    {
      v143 = 0LL;
      goto LABEL_11;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * a4, 0x4B677844u);
    P = PoolWithTag;
  }
  v148 = v11;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8 * v11);
    PoolWithTag = P;
  }
  v143 = PoolWithTag;
LABEL_11:
  if ( (unsigned int)v11 <= 2 )
  {
    v18 = v140;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v11 < 8 )
    {
      v18 = 0LL;
      v142 = 0LL;
      goto LABEL_18;
    }
    v18 = ExAllocatePoolWithTag(PagedPool, 8 * v11, 0x4B677844u);
    PoolWithTag = P;
  }
  v139 = v18;
  v142 = v18;
  v141 = v11;
  if ( v18 )
  {
    memset(v18, 0, 8 * v11);
    v18 = v139;
    v142 = v139;
    PoolWithTag = P;
  }
LABEL_18:
  if ( !v143 || !v18 )
  {
    if ( PoolWithTag != v147 && PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    P = 0LL;
    v148 = 0;
    goto LABEL_348;
  }
  v19 = a11;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136, *a5, v14, (struct DXGCONTEXT **)v18, a11);
  v22 = *(_QWORD *)v18;
  if ( !*(_QWORD *)v18 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v23[3] = v137;
    v23[4] = *a5;
    v23[5] = -1073741811LL;
LABEL_22:
    WdLogEvent5_WdError(v23);
LABEL_23:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
    if ( P != v147 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    P = 0LL;
    v148 = 0;
LABEL_27:
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v139);
    return 3221225485LL;
  }
  if ( (*(_BYTE *)&a3.0 & 2) != 0 )
  {
    if ( v131 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v23[3] = 344LL;
      goto LABEL_22;
    }
    if ( !*v13 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v23[3] = 349LL;
      goto LABEL_22;
    }
  }
  if ( *(_BYTE *)(v22 + 401) )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v169, (struct DXGADAPTER *const)v24, 0LL);
    if ( v19 || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v169) >= 0 )
    {
      v25 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v24 + 3888),
              v137,
              v131,
              v144,
              a3,
              v138,
              a5,
              a6,
              a7,
              v13,
              a10);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v169);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
      if ( P != v147 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v148 = 0;
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v139);
      return v25;
    }
    else
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v169);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
      if ( P != v147 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v148 = 0;
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v139);
      return 3221226166LL;
    }
  }
  v26 = *(_QWORD *)(v22 + 16);
  v134 = v26;
  v135 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v156, v26, 0, v21, v19);
  v28 = a10;
  if ( !v19 )
  {
    if ( a10 || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 328LL) == 2 || (*((_BYTE *)v137 + 307) & 8) != 0 )
    {
      v32 = *(struct _KEVENT **)(v26 + 16);
      if ( *(_DWORD *)(v26 + 328) == 2 )
        v33 = v32 + 4;
      else
        v33 = v32 + 3;
      if ( !KeReadStateEvent(v33) )
        KeWaitForSingleObject(v33, Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v26 + 104), 0) )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 96LL));
        v34 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v35, 40);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v26 + 104), 1u);
        if ( v34 )
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
        ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 96LL, 0LL);
        KeLeaveCriticalRegion();
      }
      v135 = 1;
    }
    else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134) )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v156);
      if ( v134 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
      if ( P != v147 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v148 = 0;
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v139);
      return 2147483665LL;
    }
    if ( v159 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v31);
      v36[3] = 275LL;
      v36[4] = 4LL;
      v36[5] = v157;
      v36[6] = 0LL;
      v36[7] = 0LL;
      WdLogEvent5_WdCriticalError(v36);
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v158 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v158 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v37, &EventBlockThread, v38, 72);
        KeWaitForSingleObject((char *)v158 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v158);
    }
    v159 = 1;
    v27 = *(unsigned int *)(v162 + 408);
    if ( (_DWORD)v27 != 1 )
      goto LABEL_81;
    if ( v163 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v160);
      v27 = *(unsigned int *)(v161 + 176);
      if ( (_DWORD)v27 != 1 )
      {
        COREACCESS::Release((COREACCESS *)v160);
LABEL_81:
        COREACCESS::Release((COREACCESS *)v157);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v156);
        if ( v134 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
        if ( P != v147 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v148 = 0;
        PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v139);
        return 3221226166LL;
      }
    }
  }
  Global = DXGGLOBAL::GetGlobal(v27);
  v132 = (PERESOURCE *)Global;
  v133 = 0;
  if ( !Global )
  {
    v41 = WdLogNewEntry5_WdAssertion(v40);
    *(_QWORD *)(v41 + 24) = 1946LL;
    WdLogEvent5_WdAssertion(v41);
    Global = (struct DXGGLOBAL *)v132;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 42)) )
  {
    v45 = WdLogNewEntry5_WdAssertion(v43);
    *(_QWORD *)(v45 + 24) = 1951LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( v133 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43, v42, v44);
    v46[3] = 275LL;
    v46[4] = 4LL;
    v46[5] = &v132;
    v46[6] = 0LL;
    v46[7] = 0LL;
    WdLogEvent5_WdCriticalError(v46);
  }
  v47 = v132;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v47[42], 1u);
  v133 = 1;
  v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v48 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v48 + 144)) )
  {
    v50 = WdLogNewEntry5_WdAssertion(v49);
    *(_QWORD *)(v50 + 24) = 423LL;
    WdLogEvent5_WdAssertion(v50);
  }
  if ( v28 )
  {
    v51 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 16LL) + 16LL) + 192LL)
                    + 64LL);
    if ( *(_DWORD *)(*(_QWORD *)(v51 + 40) + 28LL) > 0x1052u )
    {
      if ( (a3.Value & 0x7FFFFFF8) != 0 )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdError(v51);
        v52[3] = *a5;
        v52[4] = (a3.Value >> 3) & 0xFFFFFFF;
        v52[5] = -1073741811LL;
LABEL_100:
        WdLogEvent5_WdError(v52);
LABEL_101:
        if ( v133 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v156);
        if ( v134 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
        if ( P != v147 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v148 = 0;
        goto LABEL_27;
      }
      if ( (a3.Value & 0x80000000) != 0 )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdError(v51);
        v52[3] = 441LL;
        goto LABEL_100;
      }
    }
  }
  v53 = *(_QWORD *)v18;
  if ( (*(_DWORD *)(*(_QWORD *)v18 + 364LL) & 0x10) != 0 )
    v54 = *(_QWORD *)(v53 + 264);
  else
    v54 = *(_QWORD *)(v53 + 232);
  *v143 = v54;
  v55 = v137;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v168, v137);
  v56 = 1;
  v57 = v138;
  if ( v138 > 1 )
  {
    v58 = v143 + 1;
    v59 = a5 + 1;
    v60 = v18 - (_BYTE *)v143;
    while ( 1 )
    {
      v61 = (*v59 >> 6) & 0xFFFFFF;
      v62 = *v59 >> 30;
      if ( (unsigned int)v61 < *((_DWORD *)v55 + 60)
        && (v63 = *((_QWORD *)v55 + 28), v64 = *(_DWORD *)(v63 + 16 * v61 + 8), (_DWORD)v62 == ((v64 >> 5) & 3))
        && (v64 & 0x2000) == 0
        && (v64 & 0x1F) != 0
        && (*(_BYTE *)(v63 + 16LL * (unsigned int)v61 + 8) & 0x1F) == 7 )
      {
        v65 = *(_QWORD *)(v63 + 16LL * (unsigned int)v61);
      }
      else
      {
        v65 = 0LL;
      }
      *(_QWORD *)((char *)v58 + v60) = v65;
      if ( !v65 || *(_QWORD *)(v65 + 16) != *(_QWORD *)(*(_QWORD *)v18 + 16LL) )
        break;
      if ( (*(_DWORD *)(v65 + 364) & 0x10) != 0 )
        v66 = *(_QWORD *)(v65 + 264);
      else
        v66 = *(_QWORD *)(v65 + 232);
      *v58 = v66;
      ++v56;
      ++v59;
      ++v58;
      if ( v56 >= v138 )
      {
        v57 = v138;
        goto LABEL_135;
      }
    }
    v67 = (_QWORD *)WdLogNewEntry5_WdError(v62);
    v67[3] = *a5;
    v67[4] = a5[v56];
    v67[5] = v56;
    v67[6] = -1073741811LL;
    WdLogEvent5_WdError(v67);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v168);
    goto LABEL_131;
  }
LABEL_135:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v168);
  if ( (*(_BYTE *)&a3.0 & 2) != 0 )
  {
    v69 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD, void *const))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 16LL) + 504LL)
                                                                                       + 8LL)
                                                                           + 728LL))(
            v57,
            v143,
            a3.Value,
            *v13);
    v73 = v69;
    if ( v69 >= 0 )
    {
      if ( bTracingEnabled )
      {
        v164[0] = *v13;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qPR0qPR2qx(v71, v70, v72, v57, (__int64)v18, 1, (__int64)v164, *(_BYTE *)&a3.0, 0);
      }
      if ( v133 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v156);
      if ( v134 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
      if ( P != v147 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v148 = 0;
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v139);
      return 0LL;
    }
    else
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdError(v71);
      v74[3] = v55;
      v74[4] = *v13;
      v74[5] = v73;
      WdLogEvent5_WdError(v74);
      if ( v133 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v156);
      if ( v134 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
      if ( P != v147 && P )
        ExFreePoolWithTag(P, 0);
LABEL_144:
      P = 0LL;
      v148 = 0;
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v139);
      return (unsigned int)v73;
    }
  }
  if ( !v131 )
  {
    v75 = WdLogNewEntry5_WdError(v68);
    *(_QWORD *)(v75 + 24) = 509LL;
    WdLogEvent5_WdError(v75);
LABEL_131:
    if ( v133 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v156);
    if ( v134 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
    goto LABEL_23;
  }
  v76 = 0;
  v152 = 0LL;
  v154 = 0;
  if ( v131 <= 2 )
  {
    v77 = v153;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v131 < 8 )
    {
LABEL_164:
      PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v152);
      if ( v133 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v156);
      if ( v134 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
      if ( P != v147 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v148 = 0;
      goto LABEL_348;
    }
    v77 = ExAllocatePoolWithTag(PagedPool, 8LL * v131, 0x4B677844u);
  }
  v152 = v77;
  i = v77;
  v154 = v131;
  if ( !v77 )
    goto LABEL_164;
  memset(v77, 0, 8LL * v131);
  i = v152;
  if ( !v152 )
    goto LABEL_164;
  v130 = 0;
  v78 = 0;
  v79 = (struct DXGPROCESS *)((char *)v137 + 200);
  v80 = v152;
  v81 = v144;
  do
  {
    v82 = *v81;
    DXGPUSHLOCK::AcquireShared(v79);
    v83 = (v82 >> 6) & 0xFFFFFF;
    v84 = v82 >> 30;
    if ( (unsigned int)v83 < *((_DWORD *)v137 + 60)
      && (v85 = *((_QWORD *)v137 + 28), v86 = *(_DWORD *)(v85 + 16 * v83 + 8), v84 == ((v86 >> 5) & 3))
      && (v86 & 0x2000) == 0
      && (v86 & 0x1F) != 0
      && (*(_BYTE *)(v85 + 16LL * (unsigned int)v83 + 8) & 0x1F) == 8 )
    {
      v87 = *(_QWORD *)(v85 + 16LL * (unsigned int)v83);
    }
    else
    {
      v87 = 0LL;
    }
    ExReleasePushLockSharedEx(v79, 0LL);
    KeLeaveCriticalRegion();
    if ( v87 )
    {
      if ( *(_DWORD *)(v87 + 160) == 5 )
      {
        v89 = WdLogNewEntry5_WdAssertion(v88);
        *(_QWORD *)(v89 + 24) = 543LL;
        WdLogEvent5_WdAssertion(v89);
      }
      if ( *(_DWORD *)(v87 + 160) == 6 )
      {
        v90 = WdLogNewEntry5_WdAssertion(v88);
        *(_QWORD *)(v90 + 24) = 544LL;
        WdLogEvent5_WdAssertion(v90);
      }
      v130 = 1;
      if ( v78 )
      {
LABEL_205:
        v99 = (_QWORD *)WdLogNewEntry5_WdError(v88);
        v99[3] = v137;
        goto LABEL_206;
      }
      if ( *(_DWORD *)(v87 + 160) == 3 && v131 != 1 )
      {
        v99 = (_QWORD *)WdLogNewEntry5_WdError(v88);
        v99[3] = v137;
        v99[4] = v144[v76];
        v99[5] = v131;
        v99[6] = -1073741811LL;
LABEL_206:
        WdLogEvent5_WdError(v99);
        PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v152);
        goto LABEL_131;
      }
    }
    else
    {
      v91 = *v81;
      DXGPUSHLOCK::AcquireShared(v79);
      v92 = (v91 >> 6) & 0xFFFFFF;
      v93 = v91 >> 30;
      v94 = v137;
      if ( (unsigned int)v92 < *((_DWORD *)v137 + 60)
        && (v95 = *((_QWORD *)v137 + 28), v96 = *(_DWORD *)(v95 + 16 * v92 + 8), v93 == ((v96 >> 5) & 3))
        && (v96 & 0x2000) == 0
        && (v96 & 0x1F) != 0
        && (*(_BYTE *)(v95 + 16LL * (unsigned int)v92 + 8) & 0x1F) == 0xB )
      {
        v97 = *(_QWORD *)(v95 + 16LL * (unsigned int)v92);
      }
      else
      {
        v97 = 0LL;
      }
      ExReleasePushLockSharedEx(v79, 0LL);
      KeLeaveCriticalRegion();
      if ( !v97 )
      {
        v99 = (_QWORD *)WdLogNewEntry5_WdError(v88);
        v99[3] = v94;
        v99[4] = v144[v76];
        v99[5] = v76;
        v99[6] = -1073741811LL;
        goto LABEL_206;
      }
      v78 = 1;
      if ( v130 )
        goto LABEL_205;
      if ( (*(_DWORD *)(v97 + 64) & 0x10) != 0 )
      {
        v102 = WdLogNewEntry5_WdError(v88);
        *(_QWORD *)(v102 + 24) = v144[v76];
        WdLogEvent5_WdError(v102);
        PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v152);
        if ( v133 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v156);
        if ( v134 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
        if ( P != v147 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v148 = 0;
        PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v139);
        return 3221225506LL;
      }
      if ( *(_QWORD *)(v97 + 16) != *(_QWORD *)(*(_QWORD *)v142 + 16LL) )
      {
        v99 = (_QWORD *)WdLogNewEntry5_WdError(v88);
        v99[3] = *(_QWORD *)(*(_QWORD *)v142 + 16LL);
        v99[4] = *(_QWORD *)(v97 + 16);
        goto LABEL_206;
      }
      v87 = *(_QWORD *)(v97 + 32);
      if ( (unsigned int)(*(_DWORD *)(v87 + 160) - 5) > 1 )
      {
        v98 = WdLogNewEntry5_WdAssertion(v88);
        *(_QWORD *)(v98 + 24) = 616LL;
        WdLogEvent5_WdAssertion(v98);
      }
    }
    *v80 = v87;
    ++v76;
    ++v81;
    ++v80;
  }
  while ( v76 < v131 );
  v100 = (__int64)v142;
  v101 = i;
  v103 = 0LL;
  v170 = 0LL;
  v104 = 0LL;
  v172 = 0;
  v105 = *(_DWORD *)(*(_QWORD *)i + 160LL);
  if ( (unsigned int)(v105 - 5) > 1 )
  {
    v106 = (__int64 *)&a7;
    if ( v105 != 3 )
      v106 = 0LL;
    goto LABEL_243;
  }
  if ( !a10 )
  {
    v106 = (__int64 *)Src;
    goto LABEL_243;
  }
  if ( v131 <= 4 )
  {
    v107 = v171;
    v170 = v171;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v131 < 8 )
      goto LABEL_229;
    v107 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v131, 0x4B677844u);
    v170 = v107;
  }
  v172 = v131;
  if ( !v107 )
  {
LABEL_230:
    v170 = 0LL;
    v172 = 0;
    PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v152);
    if ( v133 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v156);
    if ( v134 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
    if ( P != v147 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v148 = 0;
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v139);
    return 3221225495LL;
  }
  memset(v107, 0, 8LL * v131);
  v104 = v172;
  v103 = v170;
LABEL_229:
  if ( !v103 )
    goto LABEL_230;
  i = v103;
  v108 = 8 * v104;
  v109 = Src;
  if ( (char *)Src + v108 < Src || (unsigned __int64)Src + v108 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v103, v109, v108);
  v106 = (__int64 *)v170;
  Src = v170;
LABEL_243:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v166,
    v101,
    v131);
  if ( v167 )
  {
    if ( v166[0] )
    {
      v111 = WdLogNewEntry5_WdError(v110);
      *(_QWORD *)(v111 + 24) = 685LL;
      WdLogEvent5_WdError(v111);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v166);
      if ( v170 != v171 && v170 )
        ExFreePoolWithTag(v170, 0);
      v170 = 0LL;
      v172 = 0;
      PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v152);
      goto LABEL_101;
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v166);
    if ( v170 != v171 && v170 )
      ExFreePoolWithTag(v170, 0);
    v170 = 0LL;
    v172 = 0;
    PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v152);
    if ( v133 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v156);
    if ( v134 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
    if ( P != v147 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v148 = 0;
LABEL_348:
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v139);
    return 3221225495LL;
  }
  v149 = 0LL;
  v151 = 0;
  if ( v131 <= 2 )
  {
    v112 = v150;
    v149 = v150;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v131 < 8 )
    {
      v112 = 0LL;
      goto LABEL_267;
    }
    v112 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v131, 0x4B677844u);
    v149 = v112;
  }
  v151 = v131;
  if ( v112 )
  {
    memset(v112, 0, 8LL * v131);
    v112 = v149;
  }
LABEL_267:
  v113 = 0;
  v114 = v131;
  v115 = v112;
  v116 = (PVOID)((_BYTE *)v101 - v112);
  for ( i = v116; ; v116 = i )
  {
    v117 = *(_QWORD *)((char *)v115 + (_QWORD)v116);
    v118 = *(_QWORD *)(*(_QWORD *)v100 + 16LL);
    v119 = *(struct ADAPTER_RENDER **)(v118 + 16);
    if ( (*(_DWORD *)(v117 + 164) & 4) != 0 )
    {
      DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject((DXGSYNCOBJECTCA *)v117, v119);
      v114 = v131;
    }
    else
    {
      if ( v119 && *(struct ADAPTER_RENDER **)(v117 + 264) != v119 )
      {
LABEL_281:
        v122 = (_QWORD *)WdLogNewEntry5_WdError(v118);
        v122[3] = v137;
        v122[4] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v100 + 16LL) + 16LL) + 16LL);
        v122[5] = -1073741811LL;
LABEL_282:
        WdLogEvent5_WdError(v122);
        if ( v149 != v150 && v149 )
          ExFreePoolWithTag(v149, 0);
        v149 = 0LL;
        v151 = 0;
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v166);
        if ( v170 != v171 && v170 )
          ExFreePoolWithTag(v170, 0);
        v170 = 0LL;
        v172 = 0;
        PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v152);
        if ( v133 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v156);
        if ( v134 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
        if ( P != v147 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v148 = 0;
        goto LABEL_27;
      }
      DxgAdapterSyncObject = (struct DXGADAPTERSYNCOBJECT *)(v117 + 248);
    }
    if ( !DxgAdapterSyncObject )
      goto LABEL_281;
    if ( (*(_DWORD *)(v117 + 164) & 4) != 0 )
      v121 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                           (DXGSYNCOBJECTCA *)v117,
                           *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v100 + 16LL) + 16LL))
             + 4);
    else
      v121 = *(_QWORD *)(v117 + 280);
    *v115 = v121;
    if ( !v121 )
    {
      v122 = (_QWORD *)WdLogNewEntry5_WdError(v118);
      v122[3] = v117;
      goto LABEL_282;
    }
    ++v113;
    ++v115;
    if ( v113 >= v114 )
      break;
  }
  v123 = v138;
  v124 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD, _BYTE *, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v100 + 16LL) + 16LL) + 504LL) + 8LL) + 544LL))(
           v138,
           v143,
           v114,
           v112,
           a3.0,
           v106);
  v73 = v124;
  if ( v124 < 0 )
  {
    v128 = (_QWORD *)WdLogNewEntry5_WdError(v126);
    v128[3] = v137;
    v128[4] = *v144;
    v128[5] = 0LL;
    v128[6] = v73;
    WdLogEvent5_WdError(v128);
    if ( v149 != v150 && v149 )
      ExFreePoolWithTag(v149, 0);
    v149 = 0LL;
    v151 = 0;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v166);
    if ( v170 != v171 && v170 )
      ExFreePoolWithTag(v170, 0);
    v170 = 0LL;
    v172 = 0;
    PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v152);
    if ( v133 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v156);
    if ( v134 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
    if ( P != v147 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_144;
  }
  if ( v130 )
  {
    if ( bTracingEnabled )
    {
      if ( (*(_BYTE *)&a3.0 & 2) != 0 )
      {
        v165 = MEMORY[0];
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qPR0qPR2qx(v126, v125, v127, v123, v100, 1, (__int64)&v165, *(_BYTE *)&a3.0, 0);
      }
      else
      {
        v129 = 0LL;
        if ( v106 )
          v129 = *v106;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qPR0qPR2qx(v129, v125, v127, v123, v100, v131, (__int64)v112, *(_BYTE *)&a3.0, v129);
      }
    }
  }
  else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qPR0qqPR3XR3(v126, v125, v127, v123, v100, *(_BYTE *)&a3.0, v131, (__int64)v112, (__int64)v106);
  }
  if ( v149 != v150 && v149 )
    ExFreePoolWithTag(v149, 0);
  v149 = 0LL;
  v151 = 0;
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v166);
  if ( v170 != v171 && v170 )
    ExFreePoolWithTag(v170, 0);
  v170 = 0LL;
  v172 = 0;
  if ( v152 != v153 && v152 )
    ExFreePoolWithTag(v152, 0);
  if ( v133 )
  {
    v133 = 0;
    ExReleaseResourceLite(v132[42]);
    KeLeaveCriticalRegion();
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v156);
  if ( v134 && v135 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v134 + 104));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
  if ( P != v147 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v148 = 0;
  if ( v139 != v140 && v139 )
    ExFreePoolWithTag(v139, 0);
  return 0LL;
}
