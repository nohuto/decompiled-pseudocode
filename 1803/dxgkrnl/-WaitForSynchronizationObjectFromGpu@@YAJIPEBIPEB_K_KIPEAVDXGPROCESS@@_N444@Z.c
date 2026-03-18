/*
 * XREFs of ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00FC0D0
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0098E10 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00D2728 (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C00FBCF0 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01DEAE0 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0002664 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C001A428 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x1C001A758 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C001B460 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z @ 0x1C001BEB0 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     McTemplateK0pqPR1XR1 @ 0x1C00330DC (McTemplateK0pqPR1XR1.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C00349D4 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0pqPR1x @ 0x1C0034B44 (McTemplateK0pqPR1x.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KI@Z @ 0x1C0186178 (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C01C00BC (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01C08B8 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromGpu(
        unsigned int a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct DXGPROCESS *a6,
        bool a7,
        bool a8,
        bool a9,
        bool a10)
{
  unsigned __int64 *v10; // rsi
  __int64 v12; // r14
  struct DXGDEVICESYNCOBJECT **v13; // r13
  _BYTE *PoolWithTag; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  struct DXGCONTEXT *v18; // r15
  __int64 v19; // rdi
  unsigned int v20; // r12d
  __int64 v21; // r9
  __int64 v22; // rcx
  struct _KEVENT *v23; // rbx
  struct _KEVENT *v24; // rbx
  __int64 v25; // rcx
  unsigned __int8 v26; // bl
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rax
  PERESOURCE *v37; // rbx
  unsigned int v38; // edx
  __int64 v39; // r15
  struct DXGPROCESS *v40; // rsi
  char *v41; // r14
  char v42; // di
  unsigned int v43; // ebx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // r9d
  __int64 v47; // rax
  unsigned int v48; // ebx
  __int64 v49; // r8
  unsigned int v50; // ecx
  __int64 v51; // rbx
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdi
  __int64 v58; // rcx
  _QWORD *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rax
  int v64; // eax
  __int64 v65; // r8
  int v66; // r9d
  __int64 v67; // rax
  __int64 v68; // rax
  struct DXGCONTEXT *v69; // rsi
  struct ADAPTER_RENDER *v70; // rdx
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  struct ADAPTER_RENDER *v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rax
  unsigned int v77; // ebx
  __int64 v78; // rcx
  __int64 v79; // r8
  int v80; // r9d
  __int64 v81; // rax
  unsigned int v82; // ebx
  __int64 v83; // r8
  unsigned int v84; // ecx
  __int64 v85; // rbx
  __int64 v86; // rcx
  struct DXGCONTEXT *v87; // rsi
  __int64 v88; // rax
  struct DXGSYNCOBJECT **v89; // r8
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  bool v92; // zf
  __int64 v93; // rax
  __int64 v94; // rcx
  _BYTE *v95; // r9
  unsigned int v96; // r10d
  __int64 v97; // rcx
  size_t v98; // r8
  bool v99; // r12
  __int64 v100; // rax
  __int64 v101; // rbx
  bool v102; // zf
  unsigned int v103; // r15d
  struct DXGCONTEXT *v104; // r13
  struct DXGSYNCOBJECT **v105; // r8
  __int64 v106; // rdi
  __int64 v107; // rcx
  _QWORD *v108; // rax
  __int64 v109; // rbx
  __int64 v110; // rcx
  int v111; // eax
  __int64 v112; // rax
  int v113; // eax
  __int64 v114; // rcx
  __int64 v115; // r8
  int v116; // r9d
  __int64 v117; // rax
  __int64 v118; // rax
  int v119; // ecx
  unsigned __int64 v120; // r14
  struct DXGCONTEXT *v121; // r10
  __int64 v122; // r9
  __int64 v123; // rdi
  int v124; // eax
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  struct DXGCONTEXT *v128; // r10
  _QWORD *v129; // rbx
  _QWORD *v130; // r12
  char *v131; // r13
  __int64 v132; // rdi
  int v133; // eax
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // rsi
  struct DXGCONTEXT *v137; // rbx
  int v138; // eax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // rdi
  _QWORD *v143; // rax
  _QWORD *v144; // rax
  _QWORD *v145; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-238h]
  struct DXGDEVICESYNCOBJECT **v147; // [rsp+28h] [rbp-230h]
  unsigned __int64 *v148; // [rsp+30h] [rbp-228h]
  char v149; // [rsp+50h] [rbp-208h]
  char v150; // [rsp+51h] [rbp-207h]
  PERESOURCE *v151; // [rsp+58h] [rbp-200h] BYREF
  char v152; // [rsp+60h] [rbp-1F8h]
  __int64 v153; // [rsp+68h] [rbp-1F0h] BYREF
  int v154; // [rsp+70h] [rbp-1E8h]
  char v155; // [rsp+78h] [rbp-1E0h]
  unsigned int v156; // [rsp+7Ch] [rbp-1DCh]
  _BYTE v157[16]; // [rsp+80h] [rbp-1D8h] BYREF
  struct DXGPROCESS *v158; // [rsp+90h] [rbp-1C8h]
  unsigned int *v159; // [rsp+98h] [rbp-1C0h]
  _BYTE v160[16]; // [rsp+A0h] [rbp-1B8h] BYREF
  struct DXGCONTEXT *v161; // [rsp+B0h] [rbp-1A8h] BYREF
  void *Src; // [rsp+B8h] [rbp-1A0h]
  const unsigned __int64 *v163; // [rsp+C0h] [rbp-198h]
  struct DXGSYNCOBJECT **i; // [rsp+C8h] [rbp-190h]
  struct DXGCONTEXT *v165; // [rsp+D0h] [rbp-188h]
  unsigned __int64 v166; // [rsp+D8h] [rbp-180h] BYREF
  __int64 v167; // [rsp+E0h] [rbp-178h] BYREF
  PVOID v168; // [rsp+E8h] [rbp-170h] BYREF
  _BYTE v169[32]; // [rsp+F0h] [rbp-168h] BYREF
  unsigned int v170; // [rsp+110h] [rbp-148h]
  __int64 v171; // [rsp+118h] [rbp-140h] BYREF
  char v172; // [rsp+120h] [rbp-138h]
  struct DXGCONTEXT *v173; // [rsp+128h] [rbp-130h]
  __int64 v174; // [rsp+130h] [rbp-128h] BYREF
  char v175; // [rsp+138h] [rbp-120h]
  PVOID v176; // [rsp+140h] [rbp-118h] BYREF
  char v177; // [rsp+148h] [rbp-110h] BYREF
  int v178; // [rsp+168h] [rbp-F0h]
  char v179[8]; // [rsp+170h] [rbp-E8h] BYREF
  struct _KTHREAD **v180[2]; // [rsp+178h] [rbp-E0h] BYREF
  DXGADAPTER *v181; // [rsp+188h] [rbp-D0h]
  char v182; // [rsp+190h] [rbp-C8h]
  struct _KTHREAD **v183[5]; // [rsp+198h] [rbp-C0h] BYREF
  char v184; // [rsp+1C0h] [rbp-98h]
  __int64 v185; // [rsp+1D0h] [rbp-88h]
  __int128 v186; // [rsp+1D8h] [rbp-80h] BYREF
  PVOID P; // [rsp+1E8h] [rbp-70h]
  _BYTE v188[32]; // [rsp+1F0h] [rbp-68h] BYREF
  unsigned int v189; // [rsp+210h] [rbp-48h]

  v10 = a3;
  v163 = a3;
  v159 = a2;
  v156 = a1;
  v12 = a1;
  v185 = a1;
  Src = a3;
  v166 = a4;
  v158 = a6;
  v173 = a6;
  v13 = 0LL;
  v168 = 0LL;
  v170 = 0;
  if ( a1 <= 4 )
  {
    PoolWithTag = v169;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a1 < 8 )
    {
LABEL_12:
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v168);
      return 3221225495LL;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a1, 0x4B677844u);
  }
  v168 = PoolWithTag;
  i = (struct DXGSYNCOBJECT **)PoolWithTag;
  v170 = a1;
  if ( !PoolWithTag )
    goto LABEL_12;
  memset(PoolWithTag, 0, 8 * v12);
  i = (struct DXGSYNCOBJECT **)v168;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v157, a5, (struct _KTHREAD **)a6, &v161, a8);
  if ( !v161 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v16[3] = a6;
    v16[4] = a5;
    v16[5] = -1073741811LL;
    WdLogEvent5_WdError(v16);
    goto LABEL_8;
  }
  v18 = v161;
  v165 = v161;
  v150 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v161 + 2) + 16LL) + 16LL) + 185LL);
  v176 = 0LL;
  v178 = 0;
  if ( v150 )
  {
    v13 = (struct DXGDEVICESYNCOBJECT **)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(&v176, a1);
    if ( !v13 )
    {
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v176);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v157);
      goto LABEL_12;
    }
  }
  v19 = *((_QWORD *)v18 + 2);
  v153 = v19;
  v20 = 0;
  v154 = 0;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v160, (struct DXGDEVICE *)v19);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v179, *((_QWORD *)v18 + 2), 0, v21, a8);
  if ( !a8 )
  {
    if ( a9 )
    {
      v23 = *(struct _KEVENT **)(v19 + 16);
      if ( *(_DWORD *)(v19 + 328) == 2 )
        v24 = v23 + 4;
      else
        v24 = v23 + 3;
      if ( !KeReadStateEvent(v24) )
        KeWaitForSingleObject(v24, Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 104), 0) )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 96LL));
        v26 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v27, 40);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 104), 1u);
        if ( v26 )
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
        ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 96LL, 0LL);
        KeLeaveCriticalRegion();
      }
      v154 = 1;
    }
    else if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)v18 + 2) + 104LL)) )
    {
      DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)v160);
    }
    if ( v182 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25);
      v28[3] = 275LL;
      v28[4] = 4LL;
      v28[5] = v180;
      v28[6] = 0LL;
      v28[7] = 0LL;
      WdLogEvent5_WdCriticalError(v28);
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v181 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v181 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v29, &EventBlockThread, v30, 72);
        KeWaitForSingleObject((char *)v181 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v181);
    }
    v182 = 1;
    v22 = *((unsigned int *)v183[4] + 106);
    if ( (_DWORD)v22 != 1 )
      goto LABEL_43;
    if ( v184 )
    {
      COREACCESS::AcquireShared((DXGADAPTER **)v183);
      v22 = *((unsigned int *)v183[2] + 44);
      if ( (_DWORD)v22 != 1 )
      {
        COREACCESS::Release(v183);
LABEL_43:
        COREACCESS::Release(v180);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v160);
        if ( v153 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v153);
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v176);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v157);
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v168);
        return 3221226166LL;
      }
    }
    v19 = v153;
    v10 = (unsigned __int64 *)Src;
    v163 = (const unsigned __int64 *)Src;
  }
  Global = DXGGLOBAL::GetGlobal(v22);
  v151 = (PERESOURCE *)Global;
  v152 = 0;
  if ( !Global )
  {
    v33 = WdLogNewEntry5_WdAssertion(v32);
    *(_QWORD *)(v33 + 24) = 2138LL;
    WdLogEvent5_WdAssertion(v33);
    Global = (struct DXGGLOBAL *)v151;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 43)) )
  {
    v35 = WdLogNewEntry5_WdAssertion(v34);
    *(_QWORD *)(v35 + 24) = 2143LL;
    WdLogEvent5_WdAssertion(v35);
  }
  if ( v152 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34);
    v36[3] = 275LL;
    v36[4] = 4LL;
    v36[5] = &v151;
    v36[6] = 0LL;
    v36[7] = 0LL;
    WdLogEvent5_WdCriticalError(v36);
  }
  v37 = v151;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v37[43], 1u);
  v152 = 1;
  v149 = 0;
  v38 = v156;
  if ( v156 )
  {
    v39 = 0LL;
    v40 = v158;
    v41 = (char *)v158 + 208;
    v42 = 0;
    while ( 1 )
    {
      v43 = v159[v39];
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v41, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v46 = *((_DWORD *)v41 + 4);
          if ( v46 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v44, &EventBlockThread, v45, v46);
        }
        ExAcquirePushLockSharedEx(v41, 0LL);
      }
      v47 = (v43 >> 6) & 0xFFFFFF;
      v48 = v43 >> 30;
      if ( (unsigned int)v47 < *((_DWORD *)v40 + 62)
        && (v49 = *((_QWORD *)v40 + 29), v50 = *(_DWORD *)(v49 + 16 * v47 + 8), v48 == ((v50 >> 5) & 3))
        && (v50 & 0x2000) == 0
        && (v50 & 0x1F) == 8 )
      {
        v51 = *(_QWORD *)(v49 + 16LL * (unsigned int)v47);
      }
      else
      {
        v51 = 0LL;
      }
      ExReleasePushLockSharedEx(v41, 0LL);
      KeLeaveCriticalRegion();
      if ( v51 )
      {
        if ( v13 )
          v13[v39] = 0LL;
        v53 = *(_DWORD *)(v51 + 168);
        if ( v53 == 5 )
        {
          v54 = WdLogNewEntry5_WdAssertion(v52);
          *(_QWORD *)(v54 + 24) = 1055LL;
          WdLogEvent5_WdAssertion(v54);
          v53 = *(_DWORD *)(v51 + 168);
        }
        if ( v53 == 6 )
        {
          v55 = WdLogNewEntry5_WdAssertion(v52);
          *(_QWORD *)(v55 + 24) = 1056LL;
          WdLogEvent5_WdAssertion(v55);
        }
        v155 = 1;
        if ( v149 )
          goto LABEL_142;
        v56 = *(_DWORD *)(v51 + 168);
        if ( v56 == 4 )
        {
          v90 = (_QWORD *)WdLogNewEntry5_WdError(v52);
          v90[3] = v40;
          v90[4] = v159[v20];
          v90[5] = v20;
          goto LABEL_144;
        }
        if ( v56 == 3 )
        {
          v57 = v156;
          if ( v156 != 1 )
          {
            v90 = (_QWORD *)WdLogNewEntry5_WdError(v52);
            v90[4] = v57;
            goto LABEL_143;
          }
        }
        DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v174, (struct DXGSYNCOBJECT *)v51);
        if ( v175 )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v58);
          v59[3] = 275LL;
          v59[4] = 4LL;
          v59[5] = &v174;
          v59[6] = 0LL;
          v59[7] = 0LL;
          WdLogEvent5_WdCriticalError(v59);
        }
        v60 = v174;
        KeEnterCriticalRegion();
        if ( *(struct _KTHREAD **)(v60 + 8) == KeGetCurrentThread() )
        {
          v62 = *(_DWORD *)(v60 + 24);
          if ( v62 <= 0 )
          {
            v63 = WdLogNewEntry5_WdAssertion(v61);
            *(_QWORD *)(v63 + 24) = 406LL;
            WdLogEvent5_WdAssertion(v63);
            v62 = *(_DWORD *)(v60 + 24);
          }
          v64 = v62 + 1;
        }
        else
        {
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v60 + 16, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v66 = *(_DWORD *)(v60 + 28);
              if ( v66 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v61, &EventBlockThread, v65, v66);
            }
            _InterlockedIncrement64((volatile signed __int64 *)v60);
            ExAcquirePushLockExclusiveEx(v60 + 16, 0LL);
          }
          if ( *(_QWORD *)(v60 + 8) )
          {
            v67 = WdLogNewEntry5_WdAssertion(v61);
            *(_QWORD *)(v67 + 24) = 430LL;
            WdLogEvent5_WdAssertion(v67);
          }
          if ( *(_DWORD *)(v60 + 24) )
          {
            v68 = WdLogNewEntry5_WdAssertion(v61);
            *(_QWORD *)(v68 + 24) = 431LL;
            WdLogEvent5_WdAssertion(v68);
          }
          *(_QWORD *)(v60 + 8) = KeGetCurrentThread();
          v64 = 1;
        }
        *(_DWORD *)(v60 + 24) = v64;
        v175 = 1;
        v69 = v165;
        v70 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v165 + 2) + 16LL);
        if ( (*(_DWORD *)(v51 + 172) & 4) != 0 )
        {
          DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject((DXGSYNCOBJECTCA *)v51, v70);
        }
        else
        {
          if ( v70 && *(struct ADAPTER_RENDER **)(v51 + 280) != v70 )
          {
LABEL_140:
            v91 = (_QWORD *)WdLogNewEntry5_WdError(v61);
            v91[3] = v158;
            v91[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v69 + 2) + 16LL) + 16LL);
            v91[5] = -1073741811LL;
LABEL_139:
            WdLogEvent5_WdError(v91);
            DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v174);
            goto LABEL_145;
          }
          DxgAdapterSyncObject = (struct DXGADAPTERSYNCOBJECT *)(v51 + 264);
        }
        if ( !DxgAdapterSyncObject )
          goto LABEL_140;
        if ( !v150 )
        {
          v72 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v69 + 2) + 16LL);
          v73 = (*(_DWORD *)(v51 + 172) & 4) != 0
              ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v51, v72) + 4)
              : *(_QWORD *)(v51 + 296);
          if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(*((_QWORD *)v72 + 65) + 8LL)
                                                                            + 856LL))(
                 v73,
                 v166) )
          {
            v75 = *((_QWORD *)v69 + 2);
            if ( *(_BYTE *)(*(_QWORD *)(v75 + 16) + 776LL) )
            {
              if ( !*(_BYTE *)(*(_QWORD *)(v75 + 40) + 322LL) || (*((_DWORD *)v161 + 91) & 8) == 0 )
              {
                if ( (*(_BYTE *)(v51 + 172) & 1) == 0 || !*(_BYTE *)(v75 + 1707) )
                  goto LABEL_138;
                if ( *(_DWORD *)(v51 + 168) != 3 )
                {
                  v76 = WdLogNewEntry5_WdAssertion(v74);
                  *(_QWORD *)(v76 + 24) = 331LL;
                  WdLogEvent5_WdAssertion(v76);
                }
                if ( v166 > *(_QWORD *)(v51 + 112) )
                {
LABEL_138:
                  v91 = (_QWORD *)WdLogNewEntry5_WdError(v74);
                  v91[3] = v158;
                  v91[4] = -1073741811LL;
                  goto LABEL_139;
                }
              }
            }
          }
        }
        DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v174);
        v42 = v155;
      }
      else
      {
        v77 = v159[v39];
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v41, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v80 = *((_DWORD *)v41 + 4);
            if ( v80 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v78, &EventBlockThread, v79, v80);
          }
          ExAcquirePushLockSharedEx(v41, 0LL);
        }
        v81 = (v77 >> 6) & 0xFFFFFF;
        v82 = v77 >> 30;
        if ( (unsigned int)v81 < *((_DWORD *)v40 + 62)
          && (v83 = *((_QWORD *)v40 + 29), v84 = *(_DWORD *)(v83 + 16 * v81 + 8), v82 == ((v84 >> 5) & 3))
          && (v84 & 0x2000) == 0
          && (v84 & 0x1F) == 0xB )
        {
          v85 = *(_QWORD *)(v83 + 16LL * (unsigned int)v81);
        }
        else
        {
          v85 = 0LL;
        }
        ExReleasePushLockSharedEx(v41, 0LL);
        KeLeaveCriticalRegion();
        if ( !v85 )
        {
          v90 = (_QWORD *)WdLogNewEntry5_WdError(v52);
          v90[3] = v40;
          v94 = v159[v20];
          v90[5] = v20;
          v90[4] = v94;
          goto LABEL_144;
        }
        if ( v13 )
          v13[v39] = (struct DXGDEVICESYNCOBJECT *)v85;
        v149 = 1;
        if ( v42 )
        {
LABEL_142:
          v90 = (_QWORD *)WdLogNewEntry5_WdError(v52);
LABEL_143:
          v90[3] = v40;
LABEL_144:
          WdLogEvent5_WdError(v90);
LABEL_145:
          if ( v152 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v151);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v160);
          v92 = v153 == 0;
LABEL_148:
          if ( !v92 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v153);
          PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v176);
LABEL_8:
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v157);
          PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v168);
          return 3221225485LL;
        }
        v86 = *(_QWORD *)(v85 + 16);
        v87 = v165;
        if ( v86 != *((_QWORD *)v165 + 2) )
        {
          v90 = (_QWORD *)WdLogNewEntry5_WdError(v86);
          v90[3] = *((_QWORD *)v87 + 2);
          v90[4] = *(_QWORD *)(v85 + 16);
          goto LABEL_144;
        }
        if ( (*(_DWORD *)(v85 + 64) & 0x20) != 0 )
        {
          v93 = WdLogNewEntry5_WdError(v86);
          *(_QWORD *)(v93 + 24) = v159[v20];
          WdLogEvent5_WdError(v93);
          if ( v152 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v151);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v160);
          if ( v153 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v153);
          PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v176);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v157);
          PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v168);
          return 3221225506LL;
        }
        v51 = *(_QWORD *)(v85 + 32);
        if ( (unsigned int)(*(_DWORD *)(v51 + 168) - 5) > 1 )
        {
          v88 = WdLogNewEntry5_WdAssertion(v86);
          *(_QWORD *)(v88 + 24) = 1198LL;
          WdLogEvent5_WdAssertion(v88);
        }
      }
      v89 = i;
      i[v39] = (struct DXGSYNCOBJECT *)v51;
      ++v20;
      ++v39;
      v38 = v156;
      if ( v20 >= v156 )
        break;
      v40 = v158;
    }
    v19 = v153;
    v10 = (unsigned __int64 *)Src;
    v163 = (const unsigned __int64 *)Src;
    LODWORD(v12) = v185;
    v18 = v165;
  }
  else
  {
    v89 = i;
  }
  v95 = 0LL;
  P = 0LL;
  v96 = 0;
  v189 = 0;
  v97 = (unsigned int)(*((_DWORD *)*v89 + 42) - 5);
  if ( (unsigned int)v97 > 1 )
  {
    v99 = a10;
    goto LABEL_189;
  }
  if ( !a7 )
  {
    v99 = a10;
    if ( a10 )
    {
      v10 = &v166;
      v163 = &v166;
      Src = &v166;
    }
    else if ( !v10 )
    {
      v100 = WdLogNewEntry5_WdError(v97);
      *(_QWORD *)(v100 + 24) = v158;
      WdLogEvent5_WdError(v100);
      if ( P != v188 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v189 = 0;
      if ( v152 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v151);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v160);
      v92 = v19 == 0;
      goto LABEL_148;
    }
    goto LABEL_189;
  }
  if ( v38 <= 4 )
  {
    v95 = v188;
    P = v188;
    goto LABEL_166;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v12 >= 8 )
  {
    v95 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * (unsigned int)v12, 0x4B677844u);
    P = v95;
    v38 = v156;
LABEL_166:
    v96 = v38;
    v189 = v38;
    if ( !v95 )
    {
LABEL_170:
      P = 0LL;
      v189 = 0;
      if ( v152 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v151);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v160);
      if ( v19 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v153);
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v176);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v157);
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v168);
      return 3221225495LL;
    }
    if ( (_DWORD)v12 )
    {
      memset(v95, 0, 8LL * (unsigned int)v12);
      v96 = v189;
      v95 = P;
    }
  }
  if ( !v95 )
    goto LABEL_170;
  v98 = v96;
  if ( &v10[v98] < v10 || (unsigned __int64)&v10[v98] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v95, v10, v98 * 8);
  v95 = P;
  v10 = (unsigned __int64 *)P;
  v163 = (const unsigned __int64 *)P;
  Src = P;
  v99 = a10;
  v89 = i;
LABEL_189:
  if ( !v150 )
  {
    v103 = 0;
    if ( !v156 )
    {
LABEL_266:
      if ( v95 != v188 && v95 )
        ExFreePoolWithTag(v95, 0);
      P = 0LL;
      v189 = 0;
      if ( v152 )
      {
        v152 = 0;
        ExReleaseResourceLite(v151[43]);
        KeLeaveCriticalRegion();
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v160);
      if ( v19 && v154 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v19 + 104));
        KeLeaveCriticalRegion();
      }
      if ( v176 != &v177 && v176 )
        ExFreePoolWithTag(v176, 0);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v157);
      if ( v168 != v169 && v168 )
        ExFreePoolWithTag(v168, 0);
      return 0LL;
    }
    v104 = v161;
    v173 = v161;
    v105 = (struct DXGSYNCOBJECT **)((char *)v89 - (char *)v10);
    for ( i = v105; ; v105 = i )
    {
      v106 = *(unsigned __int64 *)((char *)v10 + (_QWORD)v105);
      DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v171, (struct DXGSYNCOBJECT *)v106);
      if ( v172 )
      {
        v108 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v107);
        v108[3] = 275LL;
        v108[4] = 4LL;
        v108[5] = &v171;
        v108[6] = 0LL;
        v108[7] = 0LL;
        WdLogEvent5_WdCriticalError(v108);
      }
      v109 = v171;
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v109 + 8) == KeGetCurrentThread() )
      {
        v111 = *(_DWORD *)(v109 + 24);
        if ( v111 <= 0 )
        {
          v112 = WdLogNewEntry5_WdAssertion(v110);
          *(_QWORD *)(v112 + 24) = 406LL;
          WdLogEvent5_WdAssertion(v112);
          v111 = *(_DWORD *)(v109 + 24);
        }
        v113 = v111 + 1;
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v109 + 16, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v116 = *(_DWORD *)(v109 + 28);
            if ( v116 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v114, &EventBlockThread, v115, v116);
          }
          _InterlockedIncrement64((volatile signed __int64 *)v109);
          ExAcquirePushLockExclusiveEx(v109 + 16, 0LL);
        }
        if ( *(_QWORD *)(v109 + 8) )
        {
          v117 = WdLogNewEntry5_WdAssertion(v114);
          *(_QWORD *)(v117 + 24) = 430LL;
          WdLogEvent5_WdAssertion(v117);
        }
        if ( *(_DWORD *)(v109 + 24) )
        {
          v118 = WdLogNewEntry5_WdAssertion(v114);
          *(_QWORD *)(v118 + 24) = 431LL;
          WdLogEvent5_WdAssertion(v118);
        }
        *(_QWORD *)(v109 + 8) = KeGetCurrentThread();
        v113 = 1;
        v10 = (unsigned __int64 *)v163;
      }
      *(_DWORD *)(v109 + 24) = v113;
      v172 = 1;
      v119 = *(_DWORD *)(v106 + 168);
      if ( (unsigned int)(v119 - 5) <= 1 )
      {
        v120 = *v10;
      }
      else
      {
        v120 = 0LL;
        if ( v119 == 3 )
          v120 = v166;
      }
      v121 = v165;
      if ( (*(_DWORD *)(v106 + 172) & 4) != 0 )
        v122 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                             (DXGSYNCOBJECTCA *)v106,
                             *(struct ADAPTER_RENDER **)(*((_QWORD *)v165 + 2) + 16LL))
               + 4);
      else
        v122 = *(_QWORD *)(v106 + 296);
      v167 = v122;
      if ( (*((_DWORD *)v104 + 91) & 0x10) != 0 )
      {
        if ( !v99 )
        {
          DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)v161 + 46, &v186);
          v129 = (_QWORD *)*((_QWORD *)&v186 + 1);
          v130 = (_QWORD *)v186;
          v131 = (char *)Src;
          while ( 1 )
          {
            if ( v129 == v130 || !v129 )
            {
              v186 = 0LL;
              v10 = (unsigned __int64 *)v163;
              v104 = v173;
              goto LABEL_249;
            }
            v132 = v129[5];
            v133 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v128 + 2) + 16LL) + 520LL)
                                                                                             + 8LL)
                                                                                 + 640LL))(
                     v132,
                     v127,
                     v120);
            v136 = v133;
            if ( v133 < 0 )
              break;
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              LODWORD(Timeout) = 1;
              McTemplateK0pqPR1XR1(
                (__int64)&v131[8 * v103],
                &EventWaitForSynchronizationObjectFromGpu,
                v135,
                v132,
                Timeout,
                &v167,
                &v131[8 * v103]);
            }
            v129 = (_QWORD *)*v129;
            v127 = v167;
            v128 = v165;
          }
          v144 = (_QWORD *)WdLogNewEntry5_WdError(v134);
          v144[3] = v158;
          v144[4] = v159[v103];
          v144[5] = v103;
          v144[6] = v136;
          WdLogEvent5_WdError(v144);
          DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v171);
          if ( P != v188 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v189 = 0;
          if ( v152 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v151);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v160);
          if ( v153 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v153);
          PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v176);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v157);
          PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v168);
          return (unsigned int)v136;
        }
        v123 = *((_QWORD *)v161 + 33);
        v124 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v121 + 2) + 16LL) + 520LL)
                                                                                         + 8LL)
                                                                             + 640LL))(
                 v123,
                 v122,
                 v120);
        v101 = v124;
        if ( v124 < 0 )
        {
          v143 = (_QWORD *)WdLogNewEntry5_WdError(v125);
          v143[3] = v158;
          v143[4] = v159[v103];
          v143[5] = v103;
          v143[6] = v101;
          WdLogEvent5_WdError(v143);
          DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v171);
          if ( P != v188 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v189 = 0;
          if ( v152 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v151);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v160);
          v102 = v153 == 0;
          goto LABEL_196;
        }
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(Timeout) = 1;
          McTemplateK0pqPR1XR1(
            (__int64)Src + 8 * v103,
            &EventWaitForSynchronizationObjectFromGpu,
            v126,
            v123,
            Timeout,
            &v167,
            (char *)Src + 8 * v103);
        }
      }
      else
      {
        v137 = v161;
        v138 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v121 + 2) + 16LL) + 520LL)
                                                                                        + 8LL)
                                                                            + 632LL))(
                 *((_QWORD *)v161 + 29),
                 v122,
                 v120);
        v142 = v138;
        if ( v138 < 0 )
        {
          v145 = (_QWORD *)WdLogNewEntry5_WdError(v140);
          v145[3] = v158;
          v145[4] = v159[v103];
          v145[5] = v103;
          v145[6] = v142;
          WdLogEvent5_WdError(v145);
          DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v171);
          if ( P != v188 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v189 = 0;
          if ( v152 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v151);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v160);
          if ( v153 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v153);
          PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v176);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v157);
          PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v168);
          return (unsigned int)v142;
        }
        if ( v149 )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(Timeout) = 1;
            McTemplateK0pqPR1XR1(
              (__int64)Src + 8 * v103,
              &EventWaitForSynchronizationObjectFromGpu,
              v141,
              v137,
              Timeout,
              &v167,
              (char *)Src + 8 * v103);
          }
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v148 = (unsigned __int64 *)v166;
          v147 = (struct DXGDEVICESYNCOBJECT **)&v167;
          McTemplateK0pqPR1x(v140, v139, v141, v137);
        }
      }
LABEL_249:
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v171);
      ++v103;
      v163 = ++v10;
      if ( v103 >= v156 )
      {
        v19 = v153;
        v95 = P;
        goto LABEL_266;
      }
      v99 = a10;
    }
  }
  LODWORD(v101) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 16LL) + 4080LL),
                    v158,
                    v161,
                    v159,
                    v89,
                    v13,
                    v10,
                    v166,
                    v156);
  if ( P != v188 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v189 = 0;
  if ( v152 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v151);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v160);
  v102 = v19 == 0;
LABEL_196:
  if ( !v102 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v153);
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v176);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v157);
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v168);
  return (unsigned int)v101;
}
