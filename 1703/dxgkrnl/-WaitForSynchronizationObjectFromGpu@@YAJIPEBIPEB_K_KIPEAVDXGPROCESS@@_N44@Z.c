/*
 * XREFs of ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C008DBB0
 * Callers:
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C0089A10 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C008D690 (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K@Z @ 0x1C008D830 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01BD720 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C00013E8 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ??1?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ @ 0x1C0001434 (--1-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0002004 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0004CAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000701C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C00136AC (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C0014404 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z @ 0x1C0014F08 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAPEAVDXGSYNCOBJECT@@PEB_K_KI@Z @ 0x1C0032B80 (-VmBusSendWaitForSyncObjectFromGpu@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAPEAVDXGSY.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0039490 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     Template_pqPR1XR1 @ 0x1C003953C (Template_pqPR1XR1.c)
 *     Template_pqPR1x @ 0x1C00396A4 (Template_pqPR1x.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAA@XZ @ 0x1C008F688 (--1-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01A5C5C (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromGpu(
        unsigned int a1,
        const unsigned int *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct DXGPROCESS *a6,
        bool a7,
        bool a8,
        bool a9)
{
  unsigned __int64 *v9; // rsi
  __int64 v10; // rbx
  unsigned int v11; // r15d
  _BYTE *PoolWithTag; // r12
  struct DXGSYNCOBJECT **v13; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  struct DXGCONTEXT *v18; // r14
  __int64 v19; // rdi
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _KEVENT *v24; // rbx
  struct _KEVENT *v25; // rbx
  __int64 v26; // rcx
  unsigned __int8 v27; // bl
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  PERESOURCE *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  _QWORD *v40; // rax
  PERESOURCE *v41; // rbx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int v44; // ebx
  struct DXGSYNCOBJECT **v45; // rsi
  const unsigned int *v46; // r12
  char v47; // di
  unsigned int v48; // ebx
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // r9d
  unsigned int v52; // ecx
  unsigned int v53; // ebx
  __int64 v54; // r8
  unsigned int v55; // edx
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // eax
  __int64 v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  _QWORD *v68; // rax
  __int64 v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // r9d
  __int64 v79; // rax
  __int64 v80; // rax
  struct DXGCONTEXT *v81; // rdi
  struct ADAPTER_RENDER *v82; // rdx
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  struct ADAPTER_RENDER *v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  unsigned int v91; // ebx
  __int64 v92; // rcx
  __int64 v93; // r8
  int v94; // r9d
  unsigned int v95; // ecx
  unsigned int v96; // ebx
  __int64 v97; // r8
  unsigned int v98; // edx
  __int64 v99; // rbx
  int v100; // eax
  __int64 v101; // rax
  _QWORD *v102; // rax
  _QWORD *v103; // rax
  bool v104; // zf
  __int64 v105; // rax
  char *v106; // rcx
  __int64 v107; // rdx
  void *v108; // rcx
  size_t v109; // r8
  __int64 v110; // rax
  __int64 v111; // rbx
  bool v112; // zf
  __int64 v113; // r15
  struct DXGCONTEXT *v114; // r13
  signed __int64 v115; // r12
  __int64 v116; // rdi
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  _QWORD *v120; // rax
  __int64 v121; // rbx
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  int v131; // r9d
  __int64 v132; // rax
  __int64 v133; // rax
  int v134; // ecx
  unsigned __int64 v135; // r10
  struct DXGCONTEXT *v136; // r14
  __int64 v137; // rdx
  int v138; // eax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  _QWORD *v142; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-1F8h]
  char v144; // [rsp+40h] [rbp-1D8h]
  char v145; // [rsp+41h] [rbp-1D7h]
  PERESOURCE *v146; // [rsp+48h] [rbp-1D0h] BYREF
  char v147; // [rsp+50h] [rbp-1C8h]
  __int64 v148; // [rsp+58h] [rbp-1C0h] BYREF
  int v149; // [rsp+60h] [rbp-1B8h]
  char v150; // [rsp+68h] [rbp-1B0h]
  unsigned int v151; // [rsp+6Ch] [rbp-1ACh]
  _BYTE v152[16]; // [rsp+70h] [rbp-1A8h] BYREF
  _BYTE v153[16]; // [rsp+80h] [rbp-198h] BYREF
  struct DXGCONTEXT *v154; // [rsp+90h] [rbp-188h] BYREF
  struct DXGCONTEXT *v155; // [rsp+98h] [rbp-180h]
  PVOID P; // [rsp+A0h] [rbp-178h] BYREF
  _BYTE v157[32]; // [rsp+A8h] [rbp-170h] BYREF
  int v158; // [rsp+C8h] [rbp-150h]
  unsigned __int64 v159; // [rsp+D0h] [rbp-148h]
  const unsigned int *v160; // [rsp+D8h] [rbp-140h]
  const unsigned __int64 *v161; // [rsp+E0h] [rbp-138h]
  struct DXGSYNCOBJECT **v162; // [rsp+E8h] [rbp-130h]
  __int64 v163; // [rsp+F0h] [rbp-128h] BYREF
  char v164; // [rsp+F8h] [rbp-120h]
  __int64 v165; // [rsp+100h] [rbp-118h] BYREF
  char v166; // [rsp+108h] [rbp-110h]
  struct DXGSYNCOBJECT **v167; // [rsp+110h] [rbp-108h]
  __int64 v168; // [rsp+118h] [rbp-100h] BYREF
  char v169[8]; // [rsp+120h] [rbp-F8h] BYREF
  _BYTE v170[16]; // [rsp+128h] [rbp-F0h] BYREF
  DXGADAPTER *v171; // [rsp+138h] [rbp-E0h]
  char v172; // [rsp+140h] [rbp-D8h]
  _BYTE v173[16]; // [rsp+148h] [rbp-D0h] BYREF
  __int64 v174; // [rsp+158h] [rbp-C0h]
  __int64 v175; // [rsp+168h] [rbp-B0h]
  char v176; // [rsp+170h] [rbp-A8h]
  struct DXGPROCESS *v177; // [rsp+180h] [rbp-98h]
  struct DXGPROCESS *v178; // [rsp+188h] [rbp-90h]
  void *v179; // [rsp+190h] [rbp-88h]
  void *v180; // [rsp+198h] [rbp-80h]
  void *v181; // [rsp+1A0h] [rbp-78h] BYREF
  char v182; // [rsp+1A8h] [rbp-70h] BYREF
  unsigned int v183; // [rsp+1C8h] [rbp-50h]

  v159 = a4;
  v9 = a3;
  v160 = a2;
  v10 = a1;
  v151 = a1;
  v161 = a3;
  v178 = a6;
  v177 = a6;
  v11 = 0;
  P = 0LL;
  v158 = 0;
  if ( a1 <= 4 )
  {
    PoolWithTag = v157;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a1 < 8 )
      return 3221225495LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a1, 0x4B677844u);
  }
  P = PoolWithTag;
  v162 = (struct DXGSYNCOBJECT **)PoolWithTag;
  v158 = v10;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 8 * v10);
  v13 = (struct DXGSYNCOBJECT **)P;
  v162 = (struct DXGSYNCOBJECT **)P;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v153, a5, a6, &v154, a8);
  if ( !v154 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v17[3] = a6;
    v17[4] = a5;
    v17[5] = -1073741811LL;
    WdLogEvent5_WdError(v17);
LABEL_10:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v153);
    if ( P != v157 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return 3221225485LL;
  }
  v18 = v154;
  v155 = v154;
  v19 = *((_QWORD *)v154 + 2);
  v145 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 186LL);
  v148 = v19;
  v149 = 0;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v152, (struct DXGDEVICE *)v19);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v169, *((_QWORD *)v18 + 2), 0LL, v20, a8);
  if ( !a8 )
  {
    if ( a9 )
    {
      v24 = *(struct _KEVENT **)(v19 + 16);
      if ( *(_DWORD *)(v19 + 328) == 2 )
        v25 = v24 + 4;
      else
        v25 = v24 + 3;
      if ( !KeReadStateEvent(v25) )
        KeWaitForSingleObject(v25, Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 104), 0) )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 96LL));
        v27 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v28, 40);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 104), 1u);
        if ( v27 )
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
        ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 96LL, 0LL);
        KeLeaveCriticalRegion();
      }
      v149 = 1;
    }
    else if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)v18 + 2) + 104LL)) )
    {
      DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)v152);
    }
    if ( v172 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v21, v22);
      v29[3] = 275LL;
      v29[4] = 4LL;
      v29[5] = v170;
      v29[6] = 0LL;
      v29[7] = 0LL;
      WdLogEvent5_WdCriticalError(v29);
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v171 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v171 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v30, &EventBlockThread, v31, 72);
        KeWaitForSingleObject((char *)v171 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v171);
    }
    v172 = 1;
    if ( *(_DWORD *)(v175 + 408) != 1 )
      goto LABEL_44;
    if ( v176 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v173);
      if ( *(_DWORD *)(v174 + 176) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v173);
LABEL_44:
        COREACCESS::Release((COREACCESS *)v170);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v169);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v152);
        if ( v148 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v148);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v153);
        if ( P != v157 && P )
          ExFreePoolWithTag(P, 0);
        return 3221226166LL;
      }
    }
    v19 = v148;
    v9 = (unsigned __int64 *)v161;
  }
  v32 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v33 = WdLogNewEntry5_WdAssertion(0LL, v21, v22, v23);
    *(_QWORD *)(v33 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v33);
    v32 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
  }
  v146 = v32;
  v147 = 0;
  if ( !v32 )
  {
    v34 = WdLogNewEntry5_WdAssertion(0LL, v21, v22, v23);
    *(_QWORD *)(v34 + 24) = 1823LL;
    WdLogEvent5_WdAssertion(v34);
    v32 = v146;
  }
  if ( ExIsResourceAcquiredSharedLite(v32[42]) )
  {
    v39 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
    *(_QWORD *)(v39 + 24) = 1828LL;
    WdLogEvent5_WdAssertion(v39);
  }
  if ( v147 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v35, v37);
    v40[3] = 275LL;
    v40[4] = 4LL;
    v40[5] = &v146;
    v40[6] = 0LL;
    v40[7] = 0LL;
    WdLogEvent5_WdCriticalError(v40);
  }
  v41 = v146;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v41[42], 1u);
  v147 = 1;
  v144 = 0;
  v44 = v151;
  if ( !v151 )
  {
LABEL_165:
    v106 = 0LL;
    v181 = 0LL;
    v183 = 0;
    v107 = *((unsigned int *)*v13 + 36);
    if ( (_DWORD)v107 == 5 || (_DWORD)v107 == 6 )
    {
      if ( a7 )
      {
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&v181, v44);
        v108 = v181;
        v179 = v181;
        if ( !v181 )
        {
          NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v181);
          if ( v147 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v146);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v169);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v152);
          if ( v19 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v148);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v153);
          PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,4>(&P);
          return 3221225495LL;
        }
        v180 = v181;
        v109 = v183;
        if ( &v9[v109] < v9 || (unsigned __int64)&v9[v109] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v108, v9, v109 * 8);
        v106 = (char *)v181;
        v9 = (unsigned __int64 *)v181;
        v161 = (const unsigned __int64 *)v181;
      }
      else if ( !v9 )
      {
        v110 = WdLogNewEntry5_WdError(0LL, v107);
        *(_QWORD *)(v110 + 24) = a6;
        WdLogEvent5_WdError(v110);
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v181);
        if ( v147 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v146);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v169);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v152);
        v104 = v19 == 0;
LABEL_153:
        if ( !v104 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v148);
        goto LABEL_10;
      }
    }
    if ( v145 )
    {
      LODWORD(v111) = DXGADAPTER::VmBusSendWaitForSyncObjectFromGpu(
                        *(struct VMBCHANNEL__ ***)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 16LL),
                        a6,
                        v154,
                        v13,
                        (char *)v9,
                        v159,
                        v44);
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v181);
      if ( v147 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v146);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v169);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v152);
      v112 = v19 == 0;
    }
    else
    {
      v113 = 0LL;
      if ( !v44 )
      {
LABEL_232:
        if ( v106 != &v182 && v106 )
          ExFreePoolWithTag(v106, 0);
        if ( v147 )
        {
          v147 = 0;
          ExReleaseResourceLite(v146[42]);
          KeLeaveCriticalRegion();
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v169);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v152);
        if ( v19 && v149 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v19 + 104));
          KeLeaveCriticalRegion();
        }
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v153);
        if ( P != v157 && P )
          ExFreePoolWithTag(P, 0);
        return 0LL;
      }
      v114 = v154;
      v115 = (char *)v13 - (char *)v9;
      while ( 1 )
      {
        v116 = *(unsigned __int64 *)((char *)v9 + v115);
        DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v165, (struct DXGSYNCOBJECT *)v116, v42, v43);
        if ( v166 )
        {
          v120 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v118, v117, v119);
          v120[3] = 275LL;
          v120[4] = 4LL;
          v120[5] = &v165;
          v120[6] = 0LL;
          v120[7] = 0LL;
          WdLogEvent5_WdCriticalError(v120);
        }
        v121 = v165;
        KeEnterCriticalRegion();
        if ( *(struct _KTHREAD **)(v121 + 8) == KeGetCurrentThread() )
        {
          if ( *(int *)(v121 + 24) <= 0 )
          {
            v126 = WdLogNewEntry5_WdAssertion(v123, v122, v124, v125);
            *(_QWORD *)(v126 + 24) = 351LL;
            WdLogEvent5_WdAssertion(v126);
          }
          ++*(_DWORD *)(v121 + 24);
        }
        else
        {
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v121 + 16, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v131 = *(_DWORD *)(v121 + 28);
              if ( v131 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v128, &EventBlockThread, v129, v131);
            }
            _InterlockedIncrement64((volatile signed __int64 *)v121);
            ExAcquirePushLockExclusiveEx(v121 + 16, 0LL);
          }
          if ( *(_QWORD *)(v121 + 8) )
          {
            v132 = WdLogNewEntry5_WdAssertion(v128, v127, v129, v130);
            *(_QWORD *)(v132 + 24) = 375LL;
            WdLogEvent5_WdAssertion(v132);
          }
          if ( *(_DWORD *)(v121 + 24) )
          {
            v133 = WdLogNewEntry5_WdAssertion(v128, v127, v129, v130);
            *(_QWORD *)(v133 + 24) = 376LL;
            WdLogEvent5_WdAssertion(v133);
          }
          *(_QWORD *)(v121 + 8) = KeGetCurrentThread();
          *(_DWORD *)(v121 + 24) = 1;
        }
        v166 = 1;
        v134 = *(_DWORD *)(v116 + 144);
        if ( (unsigned int)(v134 - 5) <= 1 )
        {
          v135 = *v9;
        }
        else
        {
          v135 = 0LL;
          if ( v134 == 3 )
            v135 = v159;
        }
        v136 = v155;
        v137 = (*(_DWORD *)(v116 + 148) & 4) != 0
             ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                             (DXGSYNCOBJECTCA *)v116,
                             *(struct ADAPTER_RENDER **)(*((_QWORD *)v155 + 2) + 16LL))
               + 4)
             : *(_QWORD *)(v116 + 264);
        v168 = v137;
        v138 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v136 + 2) + 16LL) + 408LL)
                                                                                        + 8LL)
                                                                            + 536LL))(
                 *((_QWORD *)v114 + 29),
                 v137,
                 v135);
        v111 = v138;
        if ( v138 < 0 )
          break;
        if ( v144 )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(Timeout) = 1;
            Template_pqPR1XR1(
              (__int64)&v161[v113],
              &EventWaitForSynchronizationObjectFromGpu,
              v141,
              v154,
              Timeout,
              &v168,
              &v161[v113]);
          }
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          Template_pqPR1x(v140, v139, v141, v154);
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v165);
        v113 = (unsigned int)(v113 + 1);
        ++v9;
        if ( (unsigned int)v113 >= v151 )
        {
          v19 = v148;
          v106 = (char *)v181;
          goto LABEL_232;
        }
      }
      v142 = (_QWORD *)WdLogNewEntry5_WdError(v140, v139);
      v142[3] = v178;
      v142[4] = v160[v113];
      v142[5] = (unsigned int)v113;
      v142[6] = v111;
      WdLogEvent5_WdError(v142);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v165);
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v181);
      if ( v147 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v146);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v169);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v152);
      v112 = v148 == 0;
    }
    if ( !v112 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v148);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v153);
    if ( P != v157 && P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)v111;
  }
  v45 = v13;
  v167 = v13;
  v46 = v160;
  v47 = 0;
  while ( 1 )
  {
    v48 = *v46;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a6 + 168, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v51 = *((_DWORD *)a6 + 46);
        if ( v51 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v49, &EventBlockThread, v50, v51);
      }
      ExAcquirePushLockSharedEx((char *)a6 + 168, 0LL);
    }
    v52 = (v48 >> 6) & 0xFFFFFF;
    v53 = v48 >> 30;
    if ( v52 < *((_DWORD *)a6 + 52)
      && (v54 = *((_QWORD *)a6 + 24), v55 = *(_DWORD *)(v54 + 16LL * v52 + 8), v53 == ((v55 >> 4) & 3))
      && (v55 & 0x1000) == 0
      && (v55 & 0xF) != 0
      && (*(_BYTE *)(v54 + 16LL * v52 + 8) & 0xF) == 8 )
    {
      v56 = *(_QWORD *)(v54 + 16LL * v52);
    }
    else
    {
      v56 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)a6 + 168, 0LL);
    KeLeaveCriticalRegion();
    if ( !v56 )
      break;
    if ( *(_DWORD *)(v56 + 144) == 5 )
    {
      v61 = WdLogNewEntry5_WdAssertion(v58, v57, v59, v60);
      *(_QWORD *)(v61 + 24) = 939LL;
      WdLogEvent5_WdAssertion(v61);
    }
    if ( *(_DWORD *)(v56 + 144) == 6 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v58, v57, v59, v60);
      *(_QWORD *)(v62 + 24) = 940LL;
      WdLogEvent5_WdAssertion(v62);
    }
    v150 = 1;
    if ( v144 )
    {
LABEL_147:
      v102 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
      goto LABEL_148;
    }
    v63 = *(_DWORD *)(v56 + 144);
    if ( v63 == 4 )
      goto LABEL_146;
    if ( v63 == 3 )
    {
      v64 = v151;
      if ( v151 != 1 )
      {
        v102 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
        v102[4] = v64;
LABEL_148:
        v102[3] = a6;
        goto LABEL_149;
      }
    }
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v163, (struct DXGSYNCOBJECT *)v56, v59, v60);
    if ( v164 )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v66, v65, v67);
      v68[3] = 275LL;
      v68[4] = 4LL;
      v68[5] = &v163;
      v68[6] = 0LL;
      v68[7] = 0LL;
      WdLogEvent5_WdCriticalError(v68);
    }
    v69 = v163;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v69 + 8) == KeGetCurrentThread() )
    {
      if ( *(int *)(v69 + 24) <= 0 )
      {
        v74 = WdLogNewEntry5_WdAssertion(v71, v70, v72, v73);
        *(_QWORD *)(v74 + 24) = 351LL;
        WdLogEvent5_WdAssertion(v74);
      }
      ++*(_DWORD *)(v69 + 24);
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v69 + 16, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v78 = *(_DWORD *)(v69 + 28);
          if ( v78 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v71, &EventBlockThread, v76, v78);
        }
        _InterlockedIncrement64((volatile signed __int64 *)v69);
        ExAcquirePushLockExclusiveEx(v69 + 16, 0LL);
      }
      if ( *(_QWORD *)(v69 + 8) )
      {
        v79 = WdLogNewEntry5_WdAssertion(v71, v75, v76, v77);
        *(_QWORD *)(v79 + 24) = 375LL;
        WdLogEvent5_WdAssertion(v79);
      }
      if ( *(_DWORD *)(v69 + 24) )
      {
        v80 = WdLogNewEntry5_WdAssertion(v71, v75, v76, v77);
        *(_QWORD *)(v80 + 24) = 376LL;
        WdLogEvent5_WdAssertion(v80);
      }
      *(_QWORD *)(v69 + 8) = KeGetCurrentThread();
      *(_DWORD *)(v69 + 24) = 1;
      v45 = v167;
    }
    v164 = 1;
    v81 = v155;
    v82 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v155 + 2) + 16LL);
    if ( (*(_DWORD *)(v56 + 148) & 4) != 0 )
    {
      DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject((DXGSYNCOBJECTCA *)v56, v82);
    }
    else
    {
      if ( v82 && *(struct ADAPTER_RENDER **)(v56 + 248) != v82 )
      {
LABEL_145:
        v103 = (_QWORD *)WdLogNewEntry5_WdError(v71, v82);
        v103[3] = a6;
        v103[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v81 + 2) + 16LL) + 16LL);
        v103[5] = -1073741811LL;
        goto LABEL_144;
      }
      DxgAdapterSyncObject = (struct DXGADAPTERSYNCOBJECT *)(v56 + 232);
    }
    if ( !DxgAdapterSyncObject )
      goto LABEL_145;
    if ( !v145 )
    {
      v84 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v81 + 2) + 16LL);
      v85 = (*(_DWORD *)(v56 + 148) & 4) != 0
          ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v56, v84) + 4)
          : *(_QWORD *)(v56 + 264);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(*((_QWORD *)v84 + 51) + 8LL)
                                                                        + 744LL))(
             v85,
             v159) )
      {
        v88 = *((_QWORD *)v81 + 2);
        if ( *(_BYTE *)(*(_QWORD *)(v88 + 16) + 664LL) )
        {
          v89 = *(unsigned __int8 *)(*(_QWORD *)(v88 + 40) + 274LL);
          if ( !(_BYTE)v89 || (*((_DWORD *)v154 + 87) & 8) == 0 )
          {
            if ( (*(_BYTE *)(v56 + 148) & 1) == 0 || !*(_BYTE *)(v88 + 1819) )
              goto LABEL_143;
            if ( *(_DWORD *)(v56 + 144) != 3 )
            {
              v90 = WdLogNewEntry5_WdAssertion(v89, v88, v86, v87);
              *(_QWORD *)(v90 + 24) = 259LL;
              WdLogEvent5_WdAssertion(v90);
            }
            if ( v159 > *(_QWORD *)(v56 + 88) )
            {
LABEL_143:
              v103 = (_QWORD *)WdLogNewEntry5_WdError(v89, v88);
              v103[3] = a6;
              v103[4] = -1073741811LL;
LABEL_144:
              WdLogEvent5_WdError(v103);
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v163);
              goto LABEL_150;
            }
          }
        }
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v163);
    v47 = v150;
LABEL_140:
    *v45 = (struct DXGSYNCOBJECT *)v56;
    ++v11;
    ++v46;
    v167 = ++v45;
    v44 = v151;
    if ( v11 >= v151 )
    {
      v19 = v148;
      v9 = (unsigned __int64 *)v161;
      v13 = v162;
      v18 = v155;
      goto LABEL_165;
    }
  }
  v91 = *v46;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a6 + 168, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v94 = *((_DWORD *)a6 + 46);
      if ( v94 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v92, &EventBlockThread, v93, v94);
    }
    ExAcquirePushLockSharedEx((char *)a6 + 168, 0LL);
  }
  v95 = (v91 >> 6) & 0xFFFFFF;
  v96 = v91 >> 30;
  if ( v95 < *((_DWORD *)a6 + 52)
    && (v97 = *((_QWORD *)a6 + 24), v98 = *(_DWORD *)(v97 + 16LL * v95 + 8), v96 == ((v98 >> 4) & 3))
    && (v98 & 0x1000) == 0
    && (v98 & 0xF) != 0
    && (*(_BYTE *)(v97 + 16LL * v95 + 8) & 0xF) == 0xB )
  {
    v99 = *(_QWORD *)(v97 + 16LL * v95);
  }
  else
  {
    v99 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)a6 + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( !v99 )
  {
LABEL_146:
    v102 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
    v102[3] = a6;
    v102[4] = v160[v11];
    v102[5] = v11;
    goto LABEL_149;
  }
  v144 = 1;
  if ( v47 )
    goto LABEL_147;
  if ( *(_QWORD *)(v99 + 16) != *((_QWORD *)v155 + 2) )
  {
    v102 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
    v102[3] = *((_QWORD *)v155 + 2);
    v102[4] = *(_QWORD *)(v99 + 16);
LABEL_149:
    WdLogEvent5_WdError(v102);
LABEL_150:
    if ( v147 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v146);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v169);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v152);
    v104 = v148 == 0;
    goto LABEL_153;
  }
  if ( (*(_DWORD *)(v99 + 64) & 0x20) == 0 )
  {
    v56 = *(_QWORD *)(v99 + 32);
    v100 = *(_DWORD *)(v56 + 144);
    if ( v100 != 5 && v100 != 6 )
    {
      v101 = WdLogNewEntry5_WdAssertion(v58, v57, v42, v43);
      *(_QWORD *)(v101 + 24) = 1077LL;
      WdLogEvent5_WdAssertion(v101);
    }
    goto LABEL_140;
  }
  v105 = WdLogNewEntry5_WdError(v58, v57);
  *(_QWORD *)(v105 + 24) = v160[v11];
  WdLogEvent5_WdError(v105);
  if ( v147 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v146);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v169);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v152);
  if ( v148 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v148);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v153);
  if ( P != v157 && P )
    ExFreePoolWithTag(P, 0);
  return 3221225506LL;
}
