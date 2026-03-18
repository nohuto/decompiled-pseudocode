/*
 * XREFs of ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00D38B0
 * Callers:
 *     ?VmBusSignalSyncObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0033390 (-VmBusSignalSyncObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C0089A10 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C009B7A0 (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 *     ?DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C009B9D0 (-DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C00D2AD0 (DxgkSignalSynchronizationObjectFromGpu2.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01AE9FC (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01BD5FC (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ??1?$NonPagedPoolZeroedArray@PEAU_VIDSCH_CONTEXT@@$0BA@$0ELGHHIEE@@@QEAA@XZ @ 0x1C00010D0 (--1-$NonPagedPoolZeroedArray@PEAU_VIDSCH_CONTEXT@@$0BA@$0ELGHHIEE@@@QEAA@XZ.c)
 *     ??1?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ @ 0x1C0001434 (--1-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C0001450 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C00014E0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0004CAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000701C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C000D5A0 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1?$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ @ 0x1C0020F14 (--1-$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ.c)
 *     ?VmBusSendSignalSyncObject@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N@Z @ 0x1C00318AC (-VmBusSendSignalSyncObject@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0039490 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     Template_qPR0qPR2qx @ 0x1C0039748 (Template_qPR0qPR2qx.c)
 *     Template_qPR0qqPR3XR3 @ 0x1C0039814 (Template_qPR0qqPR3XR3.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ @ 0x1C008B9C4 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAA@XZ @ 0x1C008F6A0 (--1-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01A5C5C (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall SignalSynchronizationObjectInternal(
        __int64 a1,
        unsigned int *a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        unsigned __int64 a7,
        void *const *a8,
        struct DXGPROCESS *a9,
        bool a10,
        char a11)
{
  unsigned __int64 v11; // rdi
  void *const *v13; // r13
  __int64 v14; // rax
  unsigned __int64 v16; // r12
  _BYTE *v17; // rcx
  _BYTE *PoolWithTag; // r9
  _QWORD *v19; // rsi
  struct DXGCONTEXT **v20; // rdi
  char v21; // si
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  struct DXGCONTEXT *v25; // rdi
  _QWORD *v26; // rax
  struct DXGADAPTER *v27; // rdi
  unsigned int v28; // ebx
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  struct _KEVENT *v34; // rsi
  struct _KEVENT *v35; // rsi
  unsigned __int8 v36; // si
  __int64 v37; // r8
  _QWORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  PERESOURCE *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  _QWORD *v49; // rax
  PERESOURCE *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r14
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  _QWORD *v59; // rax
  PVOID v60; // rcx
  __int64 v61; // rax
  struct DXGPROCESS *v62; // rsi
  unsigned int v63; // edi
  _QWORD *v64; // r9
  const unsigned int *v65; // r11
  __int64 v66; // rsi
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r10
  unsigned int v70; // r8d
  __int64 v71; // r8
  _QWORD *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned int v77; // r15d
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rdi
  _QWORD *v83; // rax
  __int64 v84; // r15
  __int64 v85; // rax
  _BYTE *v86; // rdi
  PVOID v87; // rcx
  char v88; // si
  unsigned int v89; // r14d
  DXGPUSHLOCK *v90; // r15
  unsigned int *v91; // r13
  unsigned int v92; // edi
  unsigned int v93; // ecx
  unsigned int v94; // edi
  __int64 v95; // r8
  unsigned int v96; // edx
  __int64 v97; // rdi
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rax
  __int64 v103; // rax
  unsigned int v104; // edi
  unsigned int v105; // ecx
  unsigned int v106; // edi
  struct DXGPROCESS *v107; // rsi
  __int64 v108; // r8
  unsigned int v109; // edx
  __int64 v110; // rdi
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rdx
  int v116; // eax
  __int64 v117; // rax
  _QWORD *v118; // rax
  _QWORD *v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  _QWORD *v124; // rax
  _BYTE *v125; // rcx
  __int64 v126; // r8
  int v127; // edx
  unsigned __int64 *v128; // r13
  size_t v129; // r8
  void *v130; // rdx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rax
  _BYTE *v134; // r15
  unsigned int v135; // r14d
  unsigned int v136; // r10d
  _QWORD *v137; // rsi
  _BYTE *v138; // rdi
  __int64 v139; // rdi
  struct DXGCONTEXT **v140; // r8
  __int64 v141; // rcx
  struct ADAPTER_RENDER *v142; // rdx
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  _QWORD *v146; // rax
  __int64 v147; // rsi
  unsigned int v148; // r14d
  int v149; // eax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  _QWORD *v153; // rax
  void *const *v154; // [rsp+48h] [rbp-310h]
  char v155; // [rsp+60h] [rbp-2F8h]
  PERESOURCE *v156; // [rsp+68h] [rbp-2F0h] BYREF
  char v157; // [rsp+70h] [rbp-2E8h]
  __int64 v158; // [rsp+78h] [rbp-2E0h] BYREF
  int v159; // [rsp+80h] [rbp-2D8h]
  unsigned int v160; // [rsp+88h] [rbp-2D0h]
  PVOID v161; // [rsp+90h] [rbp-2C8h] BYREF
  _BYTE v162[16]; // [rsp+98h] [rbp-2C0h] BYREF
  int v163; // [rsp+A8h] [rbp-2B0h]
  struct DXGPROCESS *v164; // [rsp+B0h] [rbp-2A8h]
  _BYTE v165[16]; // [rsp+B8h] [rbp-2A0h] BYREF
  unsigned int v166; // [rsp+C8h] [rbp-290h]
  struct DXGCONTEXT **v167; // [rsp+D0h] [rbp-288h]
  PVOID v168; // [rsp+D8h] [rbp-280h] BYREF
  _BYTE v169[16]; // [rsp+E0h] [rbp-278h] BYREF
  int v170; // [rsp+F0h] [rbp-268h]
  unsigned int *v171; // [rsp+F8h] [rbp-260h]
  _BYTE *i; // [rsp+100h] [rbp-258h]
  _QWORD *v173; // [rsp+108h] [rbp-250h]
  void *Src; // [rsp+110h] [rbp-248h]
  _QWORD *v175; // [rsp+118h] [rbp-240h]
  PVOID P; // [rsp+120h] [rbp-238h] BYREF
  _BYTE v177[128]; // [rsp+128h] [rbp-230h] BYREF
  int v178; // [rsp+1A8h] [rbp-1B0h]
  char v179[8]; // [rsp+1B0h] [rbp-1A8h] BYREF
  _BYTE v180[16]; // [rsp+1B8h] [rbp-1A0h] BYREF
  DXGADAPTER *v181; // [rsp+1C8h] [rbp-190h]
  char v182; // [rsp+1D0h] [rbp-188h]
  _BYTE v183[16]; // [rsp+1D8h] [rbp-180h] BYREF
  __int64 v184; // [rsp+1E8h] [rbp-170h]
  __int64 v185; // [rsp+1F8h] [rbp-160h]
  char v186; // [rsp+200h] [rbp-158h]
  PVOID v187; // [rsp+210h] [rbp-148h] BYREF
  _BYTE v188[16]; // [rsp+218h] [rbp-140h] BYREF
  unsigned int v189; // [rsp+228h] [rbp-130h]
  _QWORD v190[2]; // [rsp+230h] [rbp-128h] BYREF
  __int64 v191; // [rsp+240h] [rbp-118h] BYREF
  _QWORD v192[4]; // [rsp+248h] [rbp-110h] BYREF
  char v193; // [rsp+268h] [rbp-F0h]
  _BYTE v194[32]; // [rsp+270h] [rbp-E8h] BYREF
  _BYTE v195[80]; // [rsp+290h] [rbp-C8h] BYREF
  PVOID v196; // [rsp+2E0h] [rbp-78h] BYREF
  _BYTE v197[32]; // [rsp+2E8h] [rbp-70h] BYREF
  unsigned int v198; // [rsp+308h] [rbp-50h]

  v11 = a4;
  v166 = a4;
  v171 = a2;
  v160 = a1;
  Src = a6;
  v13 = a8;
  v164 = a9;
  v190[1] = a9;
  if ( !a4 )
  {
    v14 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v14 + 24) = 291LL;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  LOBYTE(v16) = 0;
  v17 = 0LL;
  v161 = 0LL;
  v163 = 0;
  PoolWithTag = 0LL;
  P = 0LL;
  v178 = 0;
  if ( (unsigned int)v11 <= 0x10 )
  {
    PoolWithTag = v177;
    P = v177;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v11 < 8 )
    {
      v19 = 0LL;
      goto LABEL_11;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v11, 0x4B677844u);
    P = PoolWithTag;
    v17 = v161;
  }
  v178 = v11;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8 * v11);
    v17 = v161;
    PoolWithTag = P;
  }
  v19 = PoolWithTag;
LABEL_11:
  v173 = v19;
  if ( (unsigned int)v11 <= 2 )
  {
    v17 = v162;
    v161 = v162;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v11 < 8 )
    {
      v20 = 0LL;
      goto LABEL_19;
    }
    v17 = ExAllocatePoolWithTag(PagedPool, 8 * v11, 0x4B677844u);
    v161 = v17;
    PoolWithTag = P;
  }
  v163 = v11;
  if ( v17 )
  {
    memset(v17, 0, 8 * v11);
    v17 = v161;
    PoolWithTag = P;
  }
  v20 = (struct DXGCONTEXT **)v17;
LABEL_19:
  v167 = v20;
  if ( !v19 || !v20 )
  {
    if ( PoolWithTag == v177 || !PoolWithTag )
      goto LABEL_486;
    v87 = PoolWithTag;
LABEL_484:
    ExFreePoolWithTag(v87, 0);
LABEL_485:
    v17 = v161;
LABEL_486:
    if ( v17 != v162 && v17 )
      ExFreePoolWithTag(v17, 0);
    return 3221225495LL;
  }
  v21 = a11;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165, *a5, v164, v20, a11);
  v25 = *v20;
  if ( !v25 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v26[3] = v164;
    v26[4] = *a5;
    v26[5] = -1073741811LL;
    WdLogEvent5_WdError(v26);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
    if ( P != v177 && P )
      ExFreePoolWithTag(P, 0);
    if ( v161 != v162 )
    {
      if ( v161 )
        ExFreePoolWithTag(v161, 0);
    }
    return 3221225485LL;
  }
  if ( *((_BYTE *)v25 + 369) )
  {
    v27 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v195, v27, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v195) >= 0 )
    {
      v28 = DXGADAPTER::VmBusSendSignalSyncObject(
              (struct VMBCHANNEL__ **)v27,
              v164,
              v160,
              v171,
              a3,
              v166,
              a5,
              a6,
              a7,
              v154,
              a10);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v195);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
      if ( P != v177 && P )
        ExFreePoolWithTag(P, 0);
      if ( v161 != v162 && v161 )
        ExFreePoolWithTag(v161, 0);
      return v28;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v195);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
    if ( P != v177 && P )
      ExFreePoolWithTag(P, 0);
    if ( v161 != v162 && v161 )
      ExFreePoolWithTag(v161, 0);
    return 3221226166LL;
  }
  v29 = *((_QWORD *)v25 + 2);
  v158 = v29;
  v159 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v179, v29, 0LL, v24, v21);
  if ( !v21 )
  {
    if ( a10 || *(_DWORD *)(*((_QWORD *)*v167 + 2) + 328LL) == 2 || (*((_BYTE *)v164 + 275) & 4) != 0 )
    {
      v34 = *(struct _KEVENT **)(v29 + 16);
      if ( *(_DWORD *)(v29 + 328) == 2 )
        v35 = v34 + 4;
      else
        v35 = v34 + 3;
      if ( !KeReadStateEvent(v35) )
        KeWaitForSingleObject(v35, Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v29 + 104), 0) )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) + 96LL));
        v36 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v29 + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v37, 40);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v29 + 104), 1u);
        if ( v36 )
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v29 + 16) + 16LL));
        ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) + 96LL, 0LL);
        KeLeaveCriticalRegion();
      }
      v159 = 1;
    }
    else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158) )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
      if ( v158 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
      if ( P != v177 && P )
        ExFreePoolWithTag(P, 0);
      if ( v161 != v162 && v161 )
        ExFreePoolWithTag(v161, 0);
      return 2147483665LL;
    }
    if ( v182 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v30, v31);
      v38[3] = 275LL;
      v38[4] = 4LL;
      v38[5] = v180;
      v38[6] = 0LL;
      v38[7] = 0LL;
      WdLogEvent5_WdCriticalError(v38);
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v181 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v181 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v39, &EventBlockThread, v40, 72);
        KeWaitForSingleObject((char *)v181 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v181);
    }
    v182 = 1;
    if ( *(_DWORD *)(v185 + 408) != 1 )
      goto LABEL_85;
    if ( v186 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v183);
      if ( *(_DWORD *)(v184 + 176) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v183);
LABEL_85:
        COREACCESS::Release((COREACCESS *)v180);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
        if ( v158 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
        if ( P != v177 && P )
          ExFreePoolWithTag(P, 0);
        if ( v161 != v162 && v161 )
        {
          ExFreePoolWithTag(v161, 0);
          return 3221226166LL;
        }
        return 3221226166LL;
      }
    }
  }
  v41 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v42 = WdLogNewEntry5_WdAssertion(0LL, v30, v31, v32);
    *(_QWORD *)(v42 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v42);
    v41 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
  }
  v156 = v41;
  v157 = 0;
  if ( !v41 )
  {
    v43 = WdLogNewEntry5_WdAssertion(0LL, v30, v31, v32);
    *(_QWORD *)(v43 + 24) = 1823LL;
    WdLogEvent5_WdAssertion(v43);
    v41 = v156;
  }
  if ( ExIsResourceAcquiredSharedLite(v41[42]) )
  {
    v48 = WdLogNewEntry5_WdAssertion(v45, v44, v46, v47);
    *(_QWORD *)(v48 + 24) = 1828LL;
    WdLogEvent5_WdAssertion(v48);
  }
  if ( v157 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45, v44, v46);
    v49[3] = 275LL;
    v49[4] = 4LL;
    v49[5] = &v156;
    v49[6] = 0LL;
    v49[7] = 0LL;
    WdLogEvent5_WdCriticalError(v49);
  }
  v50 = v156;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v50[42], 1u);
  v157 = 1;
  v54 = (__int64)v167;
  v55 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v167 + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v55 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v55 + 144)) )
  {
    v57 = WdLogNewEntry5_WdAssertion(v56, v51, v52, v53);
    *(_QWORD *)(v57 + 24) = 386LL;
    WdLogEvent5_WdAssertion(v57);
  }
  if ( a10 )
  {
    v58 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v54 + 16LL) + 16LL) + 16LL) + 192LL)
                    + 64LL);
    if ( *(_DWORD *)(*(_QWORD *)(v58 + 40) + 28LL) > 0x1052u )
    {
      if ( (a3.Value & 0x7FFFFFF8) != 0 )
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdError(v58, v51);
        v59[3] = *a5;
        v59[4] = (a3.Value >> 3) & 0xFFFFFFF;
        v59[5] = -1073741811LL;
        WdLogEvent5_WdError(v59);
        if ( v157 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
        if ( v158 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
        if ( P != v177 && P )
          ExFreePoolWithTag(P, 0);
        v60 = v161;
        if ( v161 != v162 && v161 )
          goto LABEL_434;
        return 3221225485LL;
      }
      if ( a3.Value >= 0x80000000 )
      {
        v61 = WdLogNewEntry5_WdError(v58, v51);
        *(_QWORD *)(v61 + 24) = 404LL;
        WdLogEvent5_WdError(v61);
        if ( v157 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
        if ( v158 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
        if ( P != v177 && P )
          ExFreePoolWithTag(P, 0);
        v60 = v161;
        if ( v161 != v162 && v161 )
          goto LABEL_434;
        return 3221225485LL;
      }
    }
  }
  *v173 = *(_QWORD *)(*(_QWORD *)v54 + 232LL);
  v62 = v164;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v194, v164, v52, v53);
  v63 = 1;
  if ( v166 > 1 )
  {
    v64 = v173 + 1;
    v65 = a5 + 1;
    v66 = v54 - (_QWORD)v173;
    do
    {
      v67 = (*v65 >> 6) & 0xFFFFFF;
      v68 = *v65 >> 30;
      if ( (unsigned int)v67 < *((_DWORD *)v164 + 52)
        && (v69 = *((_QWORD *)v164 + 24),
            v70 = *(_DWORD *)(v69 + 16LL * (unsigned int)v67 + 8),
            (_DWORD)v68 == ((v70 >> 4) & 3))
        && (v70 & 0x1000) == 0
        && (v70 & 0xF) != 0
        && (*(_BYTE *)(v69 + 16LL * (unsigned int)v67 + 8) & 0xF) == 7 )
      {
        v71 = *(_QWORD *)(v69 + 16LL * (unsigned int)v67);
      }
      else
      {
        v71 = 0LL;
      }
      *(_QWORD *)((char *)v64 + v66) = v71;
      if ( !v71 || (v68 = *(_QWORD *)(v71 + 16), v68 != *(_QWORD *)(*(_QWORD *)v54 + 16LL)) )
      {
        v72 = (_QWORD *)WdLogNewEntry5_WdError(v67, v68);
        v72[3] = *a5;
        v72[4] = a5[v63];
        v72[5] = v63;
        v72[6] = -1073741811LL;
        WdLogEvent5_WdError(v72);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v194);
        if ( v157 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
        if ( v158 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
        if ( P != v177 && P )
          ExFreePoolWithTag(P, 0);
        v60 = v161;
        if ( v161 != v162 && v161 )
          goto LABEL_434;
        return 3221225485LL;
      }
      *v64 = *(_QWORD *)(v71 + 232);
      ++v63;
      ++v65;
      ++v64;
    }
    while ( v63 < v166 );
    v62 = v164;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v194);
  if ( (*(_BYTE *)&a3.0 & 2) != 0 )
  {
    if ( v160 )
    {
      v75 = WdLogNewEntry5_WdError(v74, v73);
      *(_QWORD *)(v75 + 24) = 448LL;
      WdLogEvent5_WdError(v75);
      if ( v157 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
      if ( v158 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
      if ( P != v177 && P )
        ExFreePoolWithTag(P, 0);
      v60 = v161;
      if ( v161 != v162 && v161 )
        goto LABEL_434;
      return 3221225485LL;
    }
    if ( !*v13 )
    {
      v76 = WdLogNewEntry5_WdError(v74, v73);
      *(_QWORD *)(v76 + 24) = 453LL;
      WdLogEvent5_WdError(v76);
      if ( v157 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
      if ( v158 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
      if ( P != v177 && P )
        ExFreePoolWithTag(P, 0);
      v60 = v161;
      if ( v161 != v162 && v161 )
        goto LABEL_434;
      return 3221225485LL;
    }
    v77 = v166;
    v78 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v54 + 16LL)
                                                                                                  + 16LL)
                                                                                      + 408LL)
                                                                          + 8LL)
                                                              + 728LL))(
            v166,
            v173,
            a3.Value);
    v82 = v78;
    if ( v78 < 0 )
    {
      v83 = (_QWORD *)WdLogNewEntry5_WdError(v80, v79);
      v83[3] = v62;
      v83[4] = *v13;
      v83[5] = v82;
      WdLogEvent5_WdError(v83);
      if ( v157 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
      if ( v158 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
      if ( P != v177 && P )
        ExFreePoolWithTag(P, 0);
      if ( v161 != v162 && v161 )
        ExFreePoolWithTag(v161, 0);
      return (unsigned int)v82;
    }
    if ( bTracingEnabled )
    {
      if ( (*(_BYTE *)&a3.0 & 2) != 0 )
      {
        v190[0] = *v13;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_qPR0qPR2qx(v80, v79, v81, v77, v54, 1, (__int64)v190, *(_BYTE *)&a3.0, 0);
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        Template_qPR0qPR2qx(v80, v79, v81, v77, v54, 0, 0LL, *(_BYTE *)&a3.0, 0);
      }
    }
    if ( v157 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
    if ( v158 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
    if ( P != v177 && P )
      ExFreePoolWithTag(P, 0);
    if ( v161 != v162 && v161 )
      ExFreePoolWithTag(v161, 0);
    return 0LL;
  }
  v84 = v160;
  if ( !v160 )
  {
    v85 = WdLogNewEntry5_WdError(v74, v73);
    *(_QWORD *)(v85 + 24) = 486LL;
    WdLogEvent5_WdError(v85);
    if ( v157 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
    if ( v158 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
    if ( P != v177 && P )
      ExFreePoolWithTag(P, 0);
    v60 = v161;
    if ( v161 != v162 && v161 )
      goto LABEL_434;
    return 3221225485LL;
  }
  v86 = 0LL;
  v168 = 0LL;
  v170 = 0;
  if ( v160 <= 2 )
  {
    v86 = v169;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v160 < 8 )
    {
LABEL_220:
      if ( v86 != v169 && v86 )
        ExFreePoolWithTag(v86, 0);
      if ( v157 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
      goto LABEL_225;
    }
    v86 = ExAllocatePoolWithTag(PagedPool, 8LL * v160, 0x4B677844u);
  }
  v168 = v86;
  i = v86;
  v170 = v84;
  if ( !v86 )
    goto LABEL_220;
  memset(v86, 0, 8 * v84);
  v86 = v168;
  i = v168;
  if ( !v168 )
    goto LABEL_220;
  v155 = 0;
  v88 = 0;
  v89 = 0;
  if ( (_DWORD)v84 )
  {
    v90 = (struct DXGPROCESS *)((char *)v164 + 168);
    v175 = v168;
    v91 = v171;
    do
    {
      v92 = *v91;
      DXGPUSHLOCK::AcquireShared(v90);
      v93 = (v92 >> 6) & 0xFFFFFF;
      v94 = v92 >> 30;
      if ( v93 < *((_DWORD *)v164 + 52)
        && (v95 = *((_QWORD *)v164 + 24), v96 = *(_DWORD *)(v95 + 16LL * v93 + 8), v94 == ((v96 >> 4) & 3))
        && (v96 & 0x1000) == 0
        && (v96 & 0xF) != 0
        && (*(_BYTE *)(v95 + 16LL * v93 + 8) & 0xF) == 8 )
      {
        v97 = *(_QWORD *)(v95 + 16LL * v93);
      }
      else
      {
        v97 = 0LL;
      }
      ExReleasePushLockSharedEx(v90, 0LL);
      KeLeaveCriticalRegion();
      if ( v97 )
      {
        if ( *(_DWORD *)(v97 + 144) == 5 )
        {
          v102 = WdLogNewEntry5_WdAssertion(v99, v98, v100, v101);
          *(_QWORD *)(v102 + 24) = 520LL;
          WdLogEvent5_WdAssertion(v102);
        }
        if ( *(_DWORD *)(v97 + 144) == 6 )
        {
          v103 = WdLogNewEntry5_WdAssertion(v99, v98, v100, v101);
          *(_QWORD *)(v103 + 24) = 521LL;
          WdLogEvent5_WdAssertion(v103);
        }
        v155 = 1;
        if ( v88 )
        {
          v120 = WdLogNewEntry5_WdError(v99, v98);
          *(_QWORD *)(v120 + 24) = v164;
          WdLogEvent5_WdError(v120);
          if ( v168 != v169 && v168 )
            ExFreePoolWithTag(v168, 0);
          if ( v157 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
          if ( v158 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
          if ( P != v177 && P )
            ExFreePoolWithTag(P, 0);
          v60 = v161;
          if ( v161 != v162 && v161 )
            goto LABEL_434;
          return 3221225485LL;
        }
        if ( *(_DWORD *)(v97 + 144) == 3 && v160 != 1 )
        {
          v119 = (_QWORD *)WdLogNewEntry5_WdError(v99, v98);
          v119[3] = v164;
          v119[4] = v171[v89];
          v119[5] = v160;
          v119[6] = -1073741811LL;
          WdLogEvent5_WdError(v119);
          if ( v168 != v169 && v168 )
            ExFreePoolWithTag(v168, 0);
          if ( v157 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
          if ( v158 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
          if ( P != v177 && P )
            ExFreePoolWithTag(P, 0);
          v60 = v161;
          if ( v161 != v162 && v161 )
            goto LABEL_434;
          return 3221225485LL;
        }
      }
      else
      {
        v104 = *v91;
        DXGPUSHLOCK::AcquireShared(v90);
        v105 = (v104 >> 6) & 0xFFFFFF;
        v106 = v104 >> 30;
        v107 = v164;
        if ( v105 < *((_DWORD *)v164 + 52)
          && (v108 = *((_QWORD *)v164 + 24), v109 = *(_DWORD *)(v108 + 16LL * v105 + 8), v106 == ((v109 >> 4) & 3))
          && (v109 & 0x1000) == 0
          && (v109 & 0xF) != 0
          && (*(_BYTE *)(v108 + 16LL * v105 + 8) & 0xF) == 0xB )
        {
          v110 = *(_QWORD *)(v108 + 16LL * v105);
        }
        else
        {
          v110 = 0LL;
        }
        ExReleasePushLockSharedEx(v90, 0LL);
        KeLeaveCriticalRegion();
        if ( !v110 )
        {
          v124 = (_QWORD *)WdLogNewEntry5_WdError(v112, v111);
          v124[3] = v107;
          v124[4] = v171[v89];
          v124[5] = v89;
          v124[6] = -1073741811LL;
          WdLogEvent5_WdError(v124);
          if ( v168 != v169 && v168 )
            ExFreePoolWithTag(v168, 0);
          if ( v157 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
          if ( v158 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
          if ( P != v177 && P )
            ExFreePoolWithTag(P, 0);
          v60 = v161;
          if ( v161 != v162 && v161 )
            goto LABEL_434;
          return 3221225485LL;
        }
        v88 = 1;
        if ( v155 )
        {
          v123 = WdLogNewEntry5_WdError(v112, v111);
          *(_QWORD *)(v123 + 24) = v164;
          WdLogEvent5_WdError(v123);
          if ( v168 != v169 && v168 )
            ExFreePoolWithTag(v168, 0);
          if ( v157 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
          if ( v158 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
          if ( P != v177 && P )
            ExFreePoolWithTag(P, 0);
          v60 = v161;
          if ( v161 != v162 && v161 )
            goto LABEL_434;
          return 3221225485LL;
        }
        if ( (*(_DWORD *)(v110 + 64) & 0x10) != 0 )
        {
          v122 = WdLogNewEntry5_WdError(v112, v111);
          *(_QWORD *)(v122 + 24) = v171[v89];
          WdLogEvent5_WdError(v122);
          if ( v168 != v169 && v168 )
            ExFreePoolWithTag(v168, 0);
          if ( v157 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
          if ( v158 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
          if ( P != v177 && P )
            ExFreePoolWithTag(P, 0);
          if ( v161 != v162 && v161 )
            ExFreePoolWithTag(v161, 0);
          return 3221225506LL;
        }
        v115 = *(_QWORD *)(v110 + 16);
        if ( v115 != *((_QWORD *)*v167 + 2) )
        {
          v121 = WdLogNewEntry5_WdError(v112, v115);
          *(_QWORD *)(v121 + 24) = *((_QWORD *)*v167 + 2);
          *(_QWORD *)(v121 + 32) = *(_QWORD *)(v110 + 16);
          WdLogEvent5_WdError(v121);
          if ( v168 != v169 && v168 )
            ExFreePoolWithTag(v168, 0);
          if ( v157 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
          if ( v158 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
          if ( P != v177 && P )
            ExFreePoolWithTag(P, 0);
          v60 = v161;
          if ( v161 != v162 && v161 )
            goto LABEL_434;
          return 3221225485LL;
        }
        v97 = *(_QWORD *)(v110 + 32);
        v116 = *(_DWORD *)(v97 + 144);
        if ( v116 != 5 && v116 != 6 )
        {
          v117 = WdLogNewEntry5_WdAssertion(v112, v115, v113, v114);
          *(_QWORD *)(v117 + 24) = 593LL;
          WdLogEvent5_WdAssertion(v117);
        }
      }
      v118 = v175;
      *v175 = v97;
      ++v89;
      ++v91;
      v175 = v118 + 1;
    }
    while ( v89 < v160 );
    v86 = i;
    LODWORD(v84) = v160;
  }
  v125 = 0LL;
  v196 = 0LL;
  v126 = 0LL;
  v198 = 0;
  v127 = *(_DWORD *)(*(_QWORD *)v86 + 144LL);
  if ( v127 != 5 && v127 != 6 )
  {
    v128 = &a7;
    if ( v127 != 3 )
      v128 = 0LL;
    goto LABEL_367;
  }
  if ( !a10 )
  {
    v128 = (unsigned __int64 *)Src;
    goto LABEL_367;
  }
  if ( (unsigned int)v84 <= 4 )
  {
    v125 = v197;
    v196 = v197;
LABEL_354:
    v126 = (unsigned int)v84;
    v198 = v84;
    if ( v125 )
    {
      memset(v125, 0, 8LL * (unsigned int)v84);
      v126 = v198;
      v125 = v196;
    }
    goto LABEL_356;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v84 >= 8 )
  {
    v125 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * (unsigned int)v84, 0x4B677844u);
    v196 = v125;
    goto LABEL_354;
  }
LABEL_356:
  v175 = v125;
  if ( !v125 )
  {
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v196);
    PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(&v168);
    if ( v157 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
    if ( v158 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
    NonPagedPoolZeroedArray<_VIDSCH_CONTEXT *,16,1265072196>::~NonPagedPoolZeroedArray<_VIDSCH_CONTEXT *,16,1265072196>(&P);
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v161);
    return 3221225495LL;
  }
  i = v125;
  v129 = 8 * v126;
  v130 = Src;
  if ( (char *)Src + v129 < Src || (unsigned __int64)Src + v129 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v125, v130, v129);
  v128 = (unsigned __int64 *)v196;
  Src = v196;
LABEL_367:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v192,
    v86,
    v84);
  if ( v193 )
  {
    if ( v192[0] )
    {
      v133 = WdLogNewEntry5_WdError(v132, v131);
      *(_QWORD *)(v133 + 24) = 662LL;
      WdLogEvent5_WdError(v133);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v192);
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v196);
      if ( v168 != v169 && v168 )
        ExFreePoolWithTag(v168, 0);
      if ( v157 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
      if ( v158 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
      if ( P != v177 && P )
        ExFreePoolWithTag(P, 0);
      v60 = v161;
      if ( v161 != v162 && v161 )
        goto LABEL_434;
      return 3221225485LL;
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v192);
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v196);
    if ( v168 != v169 && v168 )
      ExFreePoolWithTag(v168, 0);
    if ( v157 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
LABEL_225:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
    if ( v158 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
    v87 = P;
    if ( P == v177 || !P )
      goto LABEL_485;
    goto LABEL_484;
  }
  v187 = 0LL;
  v189 = 0;
  if ( (unsigned int)v84 <= 2 )
  {
    v134 = v188;
    v187 = v188;
LABEL_393:
    v189 = v160;
    if ( v134 )
    {
      memset(v134, 0, 8LL * v160);
      v134 = v187;
    }
    goto LABEL_395;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v84 >= 8 )
  {
    v134 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * (unsigned int)v84, 0x4B677844u);
    v187 = v134;
    goto LABEL_393;
  }
  v134 = 0LL;
LABEL_395:
  v135 = 0;
  v136 = v160;
  if ( !v160 )
  {
LABEL_435:
    v147 = (__int64)v167;
    v148 = v166;
    v149 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD, _BYTE *, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v167 + 2) + 16LL) + 408LL) + 8LL) + 544LL))(
             v166,
             v173,
             v136,
             v134,
             a3.0,
             v128);
    v82 = v149;
    if ( v149 < 0 )
    {
      v153 = (_QWORD *)WdLogNewEntry5_WdError(v151, v150);
      v153[3] = v164;
      v153[4] = *v171;
      v153[5] = 0LL;
      v153[6] = v82;
      WdLogEvent5_WdError(v153);
      NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v187);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v192);
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v196);
      if ( v168 != v169 && v168 )
        ExFreePoolWithTag(v168, 0);
      if ( v157 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
      if ( v158 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
      if ( P != v177 && P )
        ExFreePoolWithTag(P, 0);
      if ( v161 != v162 && v161 )
      {
        ExFreePoolWithTag(v161, 0);
        return (unsigned int)v82;
      }
      return (unsigned int)v82;
    }
    if ( v155 )
    {
      if ( bTracingEnabled )
      {
        if ( (*(_BYTE *)&a3.0 & 2) != 0 )
        {
          v191 = MEMORY[0];
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_qPR0qPR2qx(v151, v150, v152, v148, v147, 1, (__int64)&v191, *(_BYTE *)&a3.0, 0);
        }
        else
        {
          if ( v128 )
            v16 = *v128;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_qPR0qPR2qx(v151, v150, v152, v148, v147, v160, (__int64)v134, *(_BYTE *)&a3.0, v16);
        }
      }
    }
    else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      Template_qPR0qqPR3XR3(v151, v150, v152, v148, v147, *(_BYTE *)&a3.0, v160, (__int64)v134, (__int64)v128);
    }
    if ( v187 != v188 && v187 )
      ExFreePoolWithTag(v187, 0);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v192);
    if ( v196 != v197 && v196 )
      ExFreePoolWithTag(v196, 0);
    if ( v168 != v169 && v168 )
      ExFreePoolWithTag(v168, 0);
    if ( v157 )
    {
      v157 = 0;
      ExReleaseResourceLite(v156[42]);
      KeLeaveCriticalRegion();
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
    if ( v158 && v159 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v158 + 104));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
    if ( P != v177 && P )
      ExFreePoolWithTag(P, 0);
    if ( v161 != v162 && v161 )
    {
      ExFreePoolWithTag(v161, 0);
      return 0LL;
    }
    return 0LL;
  }
  v137 = v134;
  v138 = (_BYTE *)(v86 - v134);
  for ( i = v138; ; v138 = i )
  {
    v139 = *(_QWORD *)((char *)v137 + (_QWORD)v138);
    v140 = v167;
    v141 = *((_QWORD *)*v167 + 2);
    v142 = *(struct ADAPTER_RENDER **)(v141 + 16);
    if ( (*(_DWORD *)(v139 + 148) & 4) == 0 )
      break;
    DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject((DXGSYNCOBJECTCA *)v139, v142);
    v136 = v160;
    v140 = v167;
LABEL_402:
    if ( !DxgAdapterSyncObject )
      goto LABEL_422;
    if ( (*(_DWORD *)(v139 + 148) & 4) != 0 )
      v144 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                           (DXGSYNCOBJECTCA *)v139,
                           *(struct ADAPTER_RENDER **)(*((_QWORD *)*v140 + 2) + 16LL))
             + 4);
    else
      v144 = *(_QWORD *)(v139 + 264);
    *v137 = v144;
    if ( !v144 )
    {
      v145 = WdLogNewEntry5_WdError(v141, v142);
      *(_QWORD *)(v145 + 24) = v139;
      WdLogEvent5_WdError(v145);
      NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v187);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v192);
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v196);
      if ( v168 != v169 && v168 )
        ExFreePoolWithTag(v168, 0);
      if ( v157 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
      if ( v158 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
      if ( P != v177 && P )
        ExFreePoolWithTag(P, 0);
      v60 = v161;
      if ( v161 == v162 || !v161 )
        return 3221225485LL;
      goto LABEL_434;
    }
    ++v135;
    ++v137;
    if ( v135 >= v136 )
      goto LABEL_435;
  }
  if ( !v142 || *(struct ADAPTER_RENDER **)(v139 + 248) == v142 )
  {
    DxgAdapterSyncObject = (struct DXGADAPTERSYNCOBJECT *)(v139 + 232);
    goto LABEL_402;
  }
LABEL_422:
  v146 = (_QWORD *)WdLogNewEntry5_WdError(v141, v142);
  v146[3] = v164;
  v146[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v167 + 2) + 16LL) + 16LL);
  v146[5] = -1073741811LL;
  WdLogEvent5_WdError(v146);
  NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(&v187);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v192);
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(&v196);
  if ( v168 != v169 && v168 )
    ExFreePoolWithTag(v168, 0);
  if ( v157 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v156);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v179);
  if ( v158 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v158);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
  if ( P != v177 && P )
    ExFreePoolWithTag(P, 0);
  v60 = v161;
  if ( v161 == v162 || !v161 )
    return 3221225485LL;
LABEL_434:
  ExFreePoolWithTag(v60, 0);
  return 3221225485LL;
}
