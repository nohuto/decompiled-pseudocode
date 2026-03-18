/*
 * XREFs of ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C00E9300
 * Callers:
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C007C640 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00E8DC8 (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K@Z @ 0x1C00E8F90 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01D5E94 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008EC0 (-GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0014440 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C00298D8 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0pqPR1XR1 @ 0x1C0029984 (McTemplateK0pqPR1XR1.c)
 *     McTemplateK0pqPR1x @ 0x1C0029AE4 (McTemplateK0pqPR1x.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KI@Z @ 0x1C0199520 (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C01BEFCC (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01BF7D0 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromGpu(
        unsigned int a1,
        unsigned int *a2,
        const unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct DXGPROCESS *a6,
        bool a7,
        bool a8,
        bool a9)
{
  const unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // r13
  unsigned int v11; // r12d
  _BYTE *PoolWithTag; // r14
  struct DXGSYNCOBJECT **v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r9
  DXGCONTEXT *v16; // rbx
  char v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  PERESOURCE *v29; // rdi
  __int64 v30; // r15
  struct DXGPROCESS *v31; // rsi
  char *v32; // rdi
  unsigned int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  unsigned int v37; // ebx
  __int64 v38; // r8
  unsigned int v39; // edx
  __int64 v40; // rbx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // r8
  DXGCONTEXT *v49; // rdi
  struct ADAPTER_RENDER *v50; // rdx
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  struct ADAPTER_RENDER *v52; // rdx
  __int64 v53; // rcx
  _BYTE *v54; // r9
  unsigned int v55; // r10d
  __int64 v56; // rcx
  unsigned int v57; // r15d
  signed __int64 v58; // r14
  __int64 v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rdx
  DXGCONTEXT *v68; // rdi
  struct _VIDSCH_CONTEXT *RenderHwQueue; // rax
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // r11
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rbx
  unsigned int v79; // ebx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rax
  unsigned int v83; // ebx
  __int64 v84; // r8
  unsigned int v85; // edx
  __int64 v86; // rbx
  __int64 v87; // rcx
  _BYTE *v88; // r9
  size_t v89; // r8
  struct _KEVENT *v90; // rdi
  struct _KEVENT *v91; // rdi
  int v92; // r9d
  int v93; // r9d
  __int64 v94; // rdx
  __int64 v95; // rcx
  _QWORD *v96; // rax
  unsigned __int8 v97; // di
  __int64 v98; // r8
  _QWORD *v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rax
  int v107; // r9d
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  int v111; // r9d
  __int64 v112; // rax
  __int64 v113; // rax
  _QWORD *v114; // rax
  __int64 v115; // rax
  _QWORD *v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  _QWORD *v120; // rax
  __int64 v121; // rax
  unsigned int v122; // edi
  _QWORD *v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  _QWORD *v127; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-218h]
  char v129; // [rsp+50h] [rbp-1E8h]
  char v130; // [rsp+51h] [rbp-1E7h]
  char v131; // [rsp+52h] [rbp-1E6h]
  PERESOURCE *v132; // [rsp+58h] [rbp-1E0h] BYREF
  char v133; // [rsp+60h] [rbp-1D8h]
  __int64 v134; // [rsp+68h] [rbp-1D0h] BYREF
  int v135; // [rsp+70h] [rbp-1C8h]
  _BYTE v136[16]; // [rsp+78h] [rbp-1C0h] BYREF
  unsigned int *v137; // [rsp+88h] [rbp-1B0h]
  DXGCONTEXT *v138; // [rsp+90h] [rbp-1A8h]
  DXGCONTEXT *v139; // [rsp+98h] [rbp-1A0h] BYREF
  unsigned __int64 v140; // [rsp+A0h] [rbp-198h]
  struct DXGPROCESS *v141; // [rsp+A8h] [rbp-190h]
  struct DXGDEVICESYNCOBJECT **v142; // [rsp+B0h] [rbp-188h]
  const unsigned __int64 *v143; // [rsp+B8h] [rbp-180h]
  PVOID v144; // [rsp+C0h] [rbp-178h] BYREF
  _BYTE v145[32]; // [rsp+C8h] [rbp-170h] BYREF
  int v146; // [rsp+E8h] [rbp-150h]
  __int64 v147; // [rsp+F0h] [rbp-148h] BYREF
  char v148; // [rsp+F8h] [rbp-140h]
  __int64 v149; // [rsp+100h] [rbp-138h] BYREF
  char v150; // [rsp+108h] [rbp-130h]
  PVOID v151; // [rsp+110h] [rbp-128h] BYREF
  char v152; // [rsp+118h] [rbp-120h] BYREF
  int v153; // [rsp+138h] [rbp-100h]
  __int64 v154; // [rsp+140h] [rbp-F8h] BYREF
  char v155[8]; // [rsp+150h] [rbp-E8h] BYREF
  _BYTE v156[16]; // [rsp+158h] [rbp-E0h] BYREF
  DXGADAPTER *v157; // [rsp+168h] [rbp-D0h]
  char v158; // [rsp+170h] [rbp-C8h]
  _BYTE v159[16]; // [rsp+178h] [rbp-C0h] BYREF
  __int64 v160; // [rsp+188h] [rbp-B0h]
  __int64 v161; // [rsp+198h] [rbp-A0h]
  char v162; // [rsp+1A0h] [rbp-98h]
  char *v163; // [rsp+1B0h] [rbp-88h]
  struct DXGPROCESS *v164; // [rsp+1B8h] [rbp-80h]
  _BYTE *v165; // [rsp+1C0h] [rbp-78h]
  PVOID P; // [rsp+1C8h] [rbp-70h]
  _BYTE v167[32]; // [rsp+1D0h] [rbp-68h] BYREF
  unsigned int v168; // [rsp+1F0h] [rbp-48h]

  v140 = a4;
  v9 = a3;
  v137 = a2;
  v10 = a1;
  v143 = a3;
  v141 = a6;
  v164 = a6;
  v11 = 0;
  v144 = 0LL;
  v146 = 0;
  if ( a1 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a1 < 8 )
    {
LABEL_163:
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v144);
      return 3221225495LL;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a1, 0x4B677844u);
    v144 = PoolWithTag;
  }
  else
  {
    PoolWithTag = v145;
    v144 = v145;
  }
  v146 = v10;
  if ( !PoolWithTag )
    goto LABEL_163;
  memset(PoolWithTag, 0, 8 * v10);
  v13 = (struct DXGSYNCOBJECT **)v144;
  if ( !v144 )
    goto LABEL_163;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136, a5, a6, &v139, a8);
  if ( !v139 )
  {
    v96 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v96[3] = a6;
    v96[4] = a5;
    v96[5] = -1073741811LL;
    WdLogEvent5_WdError(v96);
    goto LABEL_160;
  }
  v16 = v139;
  v138 = v139;
  v17 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v139 + 2) + 16LL) + 16LL) + 185LL);
  v131 = v17;
  v151 = 0LL;
  v153 = 0;
  v142 = 0LL;
  if ( v17 )
  {
    v142 = (struct DXGDEVICESYNCOBJECT **)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(
                                            &v151,
                                            (unsigned int)v10);
    if ( !v142 )
    {
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v151);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
      goto LABEL_163;
    }
  }
  v18 = *((_QWORD *)v16 + 2);
  v134 = v18;
  v135 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v155, v18, 0, v15, a8);
  if ( a8 )
    goto LABEL_17;
  if ( a9 )
  {
    v90 = *(struct _KEVENT **)(v18 + 16);
    if ( *(_DWORD *)(v18 + 328) == 2 )
    {
      v91 = v90 + 4;
      if ( KeReadStateEvent(v91) )
        goto LABEL_139;
    }
    else
    {
      v91 = v90 + 3;
      if ( KeReadStateEvent(v91) )
      {
LABEL_139:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v18 + 104), 0) )
        {
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 96LL));
          v97 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v18 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v98, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v18 + 104), 1u);
          if ( v97 )
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v18 + 16) + 16LL));
          ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 96LL, 0LL);
          KeLeaveCriticalRegion();
        }
        v135 = 1;
        goto LABEL_9;
      }
    }
    KeWaitForSingleObject(v91, Executive, 0, 0, 0LL);
    goto LABEL_139;
  }
LABEL_9:
  if ( v158 )
  {
    v99 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19, v21);
    v99[3] = 275LL;
    v99[4] = 4LL;
    v99[5] = v156;
    v99[6] = 0LL;
    v99[7] = 0LL;
    WdLogEvent5_WdCriticalError(v99);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v157 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v157 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v22, &EventBlockThread, v23, 72);
      KeWaitForSingleObject((char *)v157 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v157);
  }
  v158 = 1;
  v20 = *(unsigned int *)(v161 + 408);
  if ( (_DWORD)v20 != 1 )
    goto LABEL_178;
  if ( v162 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v159);
    v20 = *(unsigned int *)(v160 + 176);
    if ( (_DWORD)v20 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v159);
LABEL_178:
      COREACCESS::Release((COREACCESS *)v156);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v155);
      if ( v134 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v151);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v144);
      return 3221226166LL;
    }
  }
  v18 = v134;
  v9 = v143;
LABEL_17:
  Global = DXGGLOBAL::GetGlobal(v20);
  v132 = (PERESOURCE *)Global;
  v133 = 0;
  if ( !Global )
  {
    v100 = WdLogNewEntry5_WdAssertion(v25);
    *(_QWORD *)(v100 + 24) = 1946LL;
    WdLogEvent5_WdAssertion(v100);
    Global = (struct DXGGLOBAL *)v132;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 42)) )
  {
    v101 = WdLogNewEntry5_WdAssertion(v27);
    *(_QWORD *)(v101 + 24) = 1951LL;
    WdLogEvent5_WdAssertion(v101);
  }
  if ( v133 )
  {
    v102 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26, v28);
    v102[3] = 275LL;
    v102[4] = 4LL;
    v102[5] = &v132;
    v102[6] = 0LL;
    v102[7] = 0LL;
    WdLogEvent5_WdCriticalError(v102);
  }
  v29 = v132;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v29[42], 1u);
  v133 = 1;
  v130 = 0;
  v129 = 0;
  if ( !(_DWORD)v10 )
  {
LABEL_63:
    v54 = 0LL;
    P = 0LL;
    v55 = 0;
    v168 = 0;
    v56 = (unsigned int)(*((_DWORD *)*v13 + 40) - 5);
    if ( (unsigned int)v56 > 1 )
      goto LABEL_64;
    if ( !a7 )
    {
      if ( !v9 )
      {
        v121 = WdLogNewEntry5_WdError(v56);
        *(_QWORD *)(v121 + 24) = v141;
        WdLogEvent5_WdError(v121);
        if ( P != v167 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v168 = 0;
        if ( v133 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v155);
        if ( v18 )
          goto LABEL_158;
        goto LABEL_159;
      }
      goto LABEL_64;
    }
    if ( (unsigned int)v10 > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v10 < 8 )
        goto LABEL_124;
      v88 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v10, 0x4B677844u);
      P = v88;
    }
    else
    {
      v88 = v167;
      P = v167;
    }
    v168 = v10;
    if ( !v88 )
      goto LABEL_130;
    memset(v88, 0, 8 * v10);
    v55 = v168;
    v54 = P;
LABEL_124:
    if ( v54 )
    {
      v165 = v54;
      v89 = v55;
      if ( &v9[v89] < v9 || (unsigned __int64)&v9[v89] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v54, v9, v89 * 8);
      v54 = P;
      v9 = (const unsigned __int64 *)P;
      v143 = (const unsigned __int64 *)P;
LABEL_64:
      if ( v17 )
      {
        v122 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v138 + 2) + 16LL) + 16LL) + 3888LL),
                 v141,
                 v139,
                 v137,
                 v13,
                 v142,
                 v9,
                 v140,
                 v10);
        if ( P != v167 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v168 = 0;
        if ( v133 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v155);
        if ( v18 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v151);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v144);
        return v122;
      }
      else
      {
        v57 = 0;
        if ( (_DWORD)v10 )
        {
          v58 = (char *)v13 - (char *)v9;
          while ( 1 )
          {
            v59 = *(const unsigned __int64 *)((char *)v9 + v58);
            DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v149, (struct DXGSYNCOBJECT *)v59);
            if ( v150 )
            {
              v123 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v61, v60, v62);
              v123[3] = 275LL;
              v123[4] = 4LL;
              v123[5] = &v149;
              v123[6] = 0LL;
              v123[7] = 0LL;
              WdLogEvent5_WdCriticalError(v123);
            }
            v63 = v149;
            KeEnterCriticalRegion();
            if ( *(struct _KTHREAD **)(v63 + 8) == KeGetCurrentThread() )
            {
              if ( *(int *)(v63 + 24) <= 0 )
              {
                v124 = WdLogNewEntry5_WdAssertion(v64);
                *(_QWORD *)(v124 + 24) = 362LL;
                WdLogEvent5_WdAssertion(v124);
              }
              ++*(_DWORD *)(v63 + 24);
            }
            else
            {
              if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v63 + 16, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v92 = *(_DWORD *)(v63 + 28);
                  if ( v92 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0q(v65, &EventBlockThread, v66, v92);
                }
                _InterlockedIncrement64((volatile signed __int64 *)v63);
                ExAcquirePushLockExclusiveEx(v63 + 16, 0LL);
              }
              if ( *(_QWORD *)(v63 + 8) )
              {
                v125 = WdLogNewEntry5_WdAssertion(v65);
                *(_QWORD *)(v125 + 24) = 386LL;
                WdLogEvent5_WdAssertion(v125);
              }
              if ( *(_DWORD *)(v63 + 24) )
              {
                v126 = WdLogNewEntry5_WdAssertion(v65);
                *(_QWORD *)(v126 + 24) = 387LL;
                WdLogEvent5_WdAssertion(v126);
              }
              *(_QWORD *)(v63 + 8) = KeGetCurrentThread();
              *(_DWORD *)(v63 + 24) = 1;
            }
            v150 = 1;
            v67 = (*(_DWORD *)(v59 + 164) & 4) != 0
                ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                                (DXGSYNCOBJECTCA *)v59,
                                *(struct ADAPTER_RENDER **)(*((_QWORD *)v138 + 2) + 16LL))
                  + 4)
                : *(_QWORD *)(v59 + 280);
            v154 = v67;
            v68 = v139;
            RenderHwQueue = DXGCONTEXT::GetRenderHwQueue(v139);
            v73 = (*(__int64 (__fastcall **)(struct _VIDSCH_CONTEXT *, __int64, __int64))(*(_QWORD *)(v70 + 8) + 536LL))(
                    RenderHwQueue,
                    v71,
                    v72);
            v77 = v73;
            if ( v73 < 0 )
              break;
            if ( v129 )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                LODWORD(Timeout) = 1;
                McTemplateK0pqPR1XR1(
                  (__int64)&v143[v57],
                  &EventWaitForSynchronizationObjectFromGpu,
                  v76,
                  v68,
                  Timeout,
                  &v154,
                  &v143[v57]);
              }
            }
            else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              McTemplateK0pqPR1x(v75, v74, v76, v68);
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v149);
            ++v57;
            ++v9;
            if ( v57 >= (unsigned int)v10 )
            {
              v18 = v134;
              v54 = P;
              goto LABEL_85;
            }
          }
          v127 = (_QWORD *)WdLogNewEntry5_WdError(v75);
          v127[3] = v141;
          v127[4] = v137[v57];
          v127[5] = v57;
          v127[6] = v77;
          WdLogEvent5_WdError(v127);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v149);
          if ( P != v167 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v168 = 0;
          if ( v133 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v155);
          if ( v134 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v151);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v144);
          return (unsigned int)v77;
        }
        else
        {
LABEL_85:
          if ( v54 != v167 && v54 )
            ExFreePoolWithTag(v54, 0);
          P = 0LL;
          v168 = 0;
          if ( v133 )
          {
            v133 = 0;
            ExReleaseResourceLite(v132[42]);
            KeLeaveCriticalRegion();
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v155);
          if ( v18 && v135 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(v18 + 104));
            KeLeaveCriticalRegion();
          }
          if ( v151 != &v152 && v151 )
            ExFreePoolWithTag(v151, 0);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
          if ( v144 != v145 )
          {
            if ( v144 )
              ExFreePoolWithTag(v144, 0);
          }
          return 0LL;
        }
      }
    }
LABEL_130:
    P = 0LL;
    v168 = 0;
    if ( v133 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v155);
    if ( v18 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v151);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v144);
    return 3221225495LL;
  }
  v30 = 0LL;
  v31 = v141;
  v32 = (char *)v141 + 200;
  v163 = (char *)v141 + 200;
  while ( 1 )
  {
    v33 = v137[v30];
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v32, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v93 = *((_DWORD *)v32 + 4);
        if ( v93 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v34, &EventBlockThread, v35, v93);
      }
      ExAcquirePushLockSharedEx(v32, 0LL);
    }
    v36 = (v33 >> 6) & 0xFFFFFF;
    v37 = v33 >> 30;
    if ( (unsigned int)v36 < *((_DWORD *)v31 + 60)
      && (v38 = *((_QWORD *)v31 + 28), v39 = *(_DWORD *)(v38 + 16 * v36 + 8), v37 == ((v39 >> 5) & 3))
      && (v39 & 0x2000) == 0
      && (v39 & 0x1F) != 0
      && (*(_BYTE *)(v38 + 16LL * (unsigned int)v36 + 8) & 0x1F) == 8 )
    {
      v40 = *(_QWORD *)(v38 + 16LL * (unsigned int)v36);
    }
    else
    {
      v40 = 0LL;
    }
    ExReleasePushLockSharedEx(v32, 0LL);
    KeLeaveCriticalRegion();
    if ( !v40 )
    {
      v79 = v137[v30];
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v32, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v111 = *((_DWORD *)v32 + 4);
          if ( v111 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v80, &EventBlockThread, v81, v111);
        }
        ExAcquirePushLockSharedEx(v32, 0LL);
      }
      v82 = (v79 >> 6) & 0xFFFFFF;
      v83 = v79 >> 30;
      if ( (unsigned int)v82 < *((_DWORD *)v31 + 60)
        && (v84 = *((_QWORD *)v31 + 28), v85 = *(_DWORD *)(v84 + 16 * v82 + 8), v83 == ((v85 >> 5) & 3))
        && (v85 & 0x2000) == 0
        && (v85 & 0x1F) != 0
        && (*(_BYTE *)(v84 + 16LL * (unsigned int)v82 + 8) & 0x1F) == 0xB )
      {
        v86 = *(_QWORD *)(v84 + 16LL * (unsigned int)v82);
      }
      else
      {
        v86 = 0LL;
      }
      ExReleasePushLockSharedEx(v32, 0LL);
      KeLeaveCriticalRegion();
      if ( !v86 )
      {
        v120 = (_QWORD *)WdLogNewEntry5_WdError(v87);
        v120[3] = v31;
        v120[4] = v137[v11];
        v120[5] = v11;
        WdLogEvent5_WdError(v120);
        goto LABEL_209;
      }
      if ( v142 )
        v142[v30] = (struct DXGDEVICESYNCOBJECT *)v86;
      v129 = 1;
      if ( v130 )
      {
        v119 = WdLogNewEntry5_WdError(v87);
        *(_QWORD *)(v119 + 24) = v31;
        WdLogEvent5_WdError(v119);
        goto LABEL_209;
      }
      if ( *(_QWORD *)(v86 + 16) != *((_QWORD *)v138 + 2) )
      {
        v115 = WdLogNewEntry5_WdError(v87);
        *(_QWORD *)(v115 + 24) = *((_QWORD *)v138 + 2);
        *(_QWORD *)(v115 + 32) = *(_QWORD *)(v86 + 16);
        WdLogEvent5_WdError(v115);
        goto LABEL_209;
      }
      if ( (*(_DWORD *)(v86 + 64) & 0x20) != 0 )
      {
        v118 = WdLogNewEntry5_WdError(v87);
        *(_QWORD *)(v118 + 24) = v137[v11];
        WdLogEvent5_WdError(v118);
        if ( v133 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v155);
        if ( v134 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v151);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v144);
        return 3221225506LL;
      }
      v40 = *(_QWORD *)(v86 + 32);
      if ( (unsigned int)(*(_DWORD *)(v40 + 160) - 5) > 1 )
      {
        v112 = WdLogNewEntry5_WdAssertion(v87);
        *(_QWORD *)(v112 + 24) = 1115LL;
        WdLogEvent5_WdAssertion(v112);
      }
      goto LABEL_61;
    }
    if ( v142 )
      v142[v30] = 0LL;
    if ( *(_DWORD *)(v40 + 160) == 5 )
    {
      v103 = WdLogNewEntry5_WdAssertion(v41);
      *(_QWORD *)(v103 + 24) = 972LL;
      WdLogEvent5_WdAssertion(v103);
    }
    if ( *(_DWORD *)(v40 + 160) == 6 )
    {
      v104 = WdLogNewEntry5_WdAssertion(v41);
      *(_QWORD *)(v104 + 24) = 973LL;
      WdLogEvent5_WdAssertion(v104);
    }
    v130 = 1;
    if ( v129 )
      break;
    v42 = *(_DWORD *)(v40 + 160);
    if ( v42 == 4 )
    {
      v116 = (_QWORD *)WdLogNewEntry5_WdError(v41);
      v116[3] = v31;
      v116[4] = v137[v11];
      v116[5] = v11;
      WdLogEvent5_WdError(v116);
      if ( !v133 )
        goto LABEL_213;
      goto LABEL_212;
    }
    if ( v42 == 3 && (_DWORD)v10 != 1 )
    {
      v113 = WdLogNewEntry5_WdError(v41);
      *(_QWORD *)(v113 + 24) = v31;
      *(_QWORD *)(v113 + 32) = v10;
      WdLogEvent5_WdError(v113);
      if ( !v133 )
        goto LABEL_213;
      goto LABEL_212;
    }
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v147, (struct DXGSYNCOBJECT *)v40);
    if ( v148 )
    {
      v105 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v44, v43, v45);
      v105[3] = 275LL;
      v105[4] = 4LL;
      v105[5] = &v147;
      v105[6] = 0LL;
      v105[7] = 0LL;
      WdLogEvent5_WdCriticalError(v105);
    }
    v46 = v147;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v46 + 8) == KeGetCurrentThread() )
    {
      if ( *(int *)(v46 + 24) <= 0 )
      {
        v106 = WdLogNewEntry5_WdAssertion(v47);
        *(_QWORD *)(v106 + 24) = 362LL;
        WdLogEvent5_WdAssertion(v106);
      }
      ++*(_DWORD *)(v46 + 24);
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v46 + 16, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v107 = *(_DWORD *)(v46 + 28);
          if ( v107 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v47, &EventBlockThread, v48, v107);
        }
        _InterlockedIncrement64((volatile signed __int64 *)v46);
        ExAcquirePushLockExclusiveEx(v46 + 16, 0LL);
      }
      if ( *(_QWORD *)(v46 + 8) )
      {
        v108 = WdLogNewEntry5_WdAssertion(v47);
        *(_QWORD *)(v108 + 24) = 386LL;
        WdLogEvent5_WdAssertion(v108);
      }
      if ( *(_DWORD *)(v46 + 24) )
      {
        v109 = WdLogNewEntry5_WdAssertion(v47);
        *(_QWORD *)(v109 + 24) = 387LL;
        WdLogEvent5_WdAssertion(v109);
      }
      *(_QWORD *)(v46 + 8) = KeGetCurrentThread();
      *(_DWORD *)(v46 + 24) = 1;
      v31 = v141;
    }
    v148 = 1;
    v49 = v138;
    v50 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v138 + 2) + 16LL);
    if ( (*(_DWORD *)(v40 + 164) & 4) != 0 )
    {
      DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject((DXGSYNCOBJECTCA *)v40, v50);
    }
    else
    {
      if ( v50 && *(struct ADAPTER_RENDER **)(v40 + 264) != v50 )
      {
LABEL_206:
        v114 = (_QWORD *)WdLogNewEntry5_WdError(v47);
        v114[3] = v31;
        v114[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v49 + 2) + 16LL) + 16LL);
        v114[5] = -1073741811LL;
LABEL_207:
        WdLogEvent5_WdError(v114);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v147);
LABEL_209:
        if ( !v133 )
        {
LABEL_213:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v155);
          if ( !v134 )
            goto LABEL_159;
          goto LABEL_158;
        }
LABEL_212:
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
        goto LABEL_213;
      }
      DxgAdapterSyncObject = (struct DXGADAPTERSYNCOBJECT *)(v40 + 248);
    }
    if ( !DxgAdapterSyncObject )
      goto LABEL_206;
    if ( !v131 )
    {
      v52 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v49 + 2) + 16LL);
      v53 = (*(_DWORD *)(v40 + 164) & 4) != 0
          ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v40, v52) + 4)
          : *(_QWORD *)(v40 + 280);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(*((_QWORD *)v52 + 63) + 8LL)
                                                                        + 744LL))(
             v53,
             v140) )
      {
        v94 = *((_QWORD *)v49 + 2);
        if ( *(_BYTE *)(*(_QWORD *)(v94 + 16) + 760LL) )
        {
          v95 = *(unsigned __int8 *)(*(_QWORD *)(v94 + 40) + 306LL);
          if ( !(_BYTE)v95 || (*((_DWORD *)v139 + 91) & 8) == 0 )
          {
            if ( (*(_BYTE *)(v40 + 164) & 1) == 0 || !*(_BYTE *)(v94 + 1691) )
              goto LABEL_205;
            if ( *(_DWORD *)(v40 + 160) != 3 )
            {
              v110 = WdLogNewEntry5_WdAssertion(v95);
              *(_QWORD *)(v110 + 24) = 322LL;
              WdLogEvent5_WdAssertion(v110);
            }
            if ( v140 > *(_QWORD *)(v40 + 104) )
            {
LABEL_205:
              v114 = (_QWORD *)WdLogNewEntry5_WdError(v95);
              v114[3] = v31;
              v114[4] = -1073741811LL;
              goto LABEL_207;
            }
          }
        }
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v147);
    v32 = v163;
LABEL_61:
    v13[v30] = (struct DXGSYNCOBJECT *)v40;
    ++v11;
    ++v30;
    if ( v11 >= (unsigned int)v10 )
    {
      v18 = v134;
      v9 = v143;
      v17 = v131;
      goto LABEL_63;
    }
  }
  v117 = WdLogNewEntry5_WdError(v41);
  *(_QWORD *)(v117 + 24) = v31;
  WdLogEvent5_WdError(v117);
  if ( v133 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v132);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v155);
  if ( !v134 )
    goto LABEL_159;
LABEL_158:
  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v134);
LABEL_159:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v151);
LABEL_160:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v136);
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v144);
  return 3221225485LL;
}
