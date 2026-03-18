/*
 * XREFs of ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C01A3718
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0098E10 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C01A2C00 (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C00018B8 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001A40 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0009794 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C00097E8 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C001A798 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00249B8 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0024A9C (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0ELGHHIEE@@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C0024D48 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0ELGHHIEE@@@QEAAPEAPEAU.c)
 *     McTemplateK0qPR0qqPR3XR3 @ 0x1C0033178 (McTemplateK0qPR0qqPR3XR3.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAA@XZ @ 0x1C00D1E3C (--1-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D1E5C (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F9D50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C014748C (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall SubmitSignalSyncObjectsToHwQueue(
        unsigned int a1,
        const unsigned int *a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        struct _KTHREAD **a7,
        bool a8,
        bool a9)
{
  struct _KTHREAD **v11; // r13
  _BYTE *PoolWithTag; // rcx
  unsigned __int64 v13; // rdi
  _QWORD *v14; // r14
  _BYTE *v15; // rsi
  SIZE_T v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r9
  _QWORD *v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rdi
  __int64 v22; // rcx
  int v23; // edi
  PERESOURCE *Global; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // r14d
  _QWORD *v31; // r9
  const unsigned int *v32; // r11
  __int64 v33; // r10
  __int64 v34; // rax
  struct _KTHREAD *v35; // r12
  __int64 v36; // r8
  __int64 v37; // rcx
  unsigned int v38; // r14d
  _QWORD *v39; // rax
  char *Elements; // r12
  __int64 v41; // r15
  const unsigned int *v42; // rax
  unsigned int v43; // r14d
  __int64 v44; // rax
  unsigned int v45; // r14d
  struct _KTHREAD *v46; // r8
  unsigned int v47; // ecx
  __int64 v48; // r14
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // r14
  unsigned int v52; // r14d
  __int64 v53; // rax
  unsigned int v54; // r14d
  struct _KTHREAD *v55; // r8
  unsigned int v56; // ecx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  PVOID v63; // rcx
  size_t v64; // r8
  void *v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  struct _VIDSCH_SYNC_OBJECT **v68; // rax
  __int64 v69; // r15
  unsigned int v70; // r12d
  struct _VIDSCH_SYNC_OBJECT **v71; // r14
  char *v72; // rax
  DXGSYNCOBJECT *v73; // r13
  __int64 v74; // rcx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v76; // rcx
  int v77; // r12d
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r14
  _QWORD *v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rax
  char v86[8]; // [rsp+50h] [rbp-298h] BYREF
  char v87; // [rsp+58h] [rbp-290h]
  __int64 v88; // [rsp+60h] [rbp-288h] BYREF
  int v89; // [rsp+68h] [rbp-280h]
  unsigned int v90; // [rsp+70h] [rbp-278h]
  _BYTE v91[16]; // [rsp+78h] [rbp-270h] BYREF
  unsigned int v92; // [rsp+88h] [rbp-260h]
  _QWORD *v93; // [rsp+90h] [rbp-258h]
  const unsigned int *v94; // [rsp+98h] [rbp-250h]
  void *Src; // [rsp+A0h] [rbp-248h]
  PVOID v96; // [rsp+A8h] [rbp-240h] BYREF
  _BYTE v97[16]; // [rsp+B0h] [rbp-238h] BYREF
  int v98; // [rsp+C0h] [rbp-228h]
  const unsigned int *v99; // [rsp+C8h] [rbp-220h]
  char *v100; // [rsp+D0h] [rbp-218h]
  PVOID v101[3]; // [rsp+D8h] [rbp-210h] BYREF
  int v102; // [rsp+F0h] [rbp-1F8h]
  PVOID P; // [rsp+100h] [rbp-1E8h]
  _BYTE v104[128]; // [rsp+108h] [rbp-1E0h] BYREF
  unsigned int v105; // [rsp+188h] [rbp-160h]
  _BYTE *v106; // [rsp+190h] [rbp-158h] BYREF
  _BYTE v107[16]; // [rsp+198h] [rbp-150h] BYREF
  unsigned int v108; // [rsp+1A8h] [rbp-140h]
  __int64 v109; // [rsp+1B0h] [rbp-138h]
  struct _KTHREAD **v110; // [rsp+1B8h] [rbp-130h]
  unsigned __int64 *v111; // [rsp+1C0h] [rbp-128h]
  struct _KTHREAD **v112; // [rsp+1C8h] [rbp-120h]
  _BYTE v113[96]; // [rsp+1D0h] [rbp-118h] BYREF
  _QWORD v114[4]; // [rsp+230h] [rbp-B8h] BYREF
  char v115; // [rsp+250h] [rbp-98h]
  _BYTE v116[24]; // [rsp+258h] [rbp-90h] BYREF
  PVOID v117; // [rsp+270h] [rbp-78h] BYREF
  _BYTE v118[32]; // [rsp+278h] [rbp-70h] BYREF
  unsigned int v119; // [rsp+298h] [rbp-50h]

  v92 = a4;
  v94 = a2;
  v90 = a1;
  Src = a6;
  v111 = a6;
  v11 = a7;
  v110 = a7;
  v112 = a7;
  v106 = 0LL;
  v108 = 0;
  PoolWithTag = 0LL;
  P = 0LL;
  v105 = 0;
  v13 = a4;
  if ( a4 <= 0x10 )
  {
    PoolWithTag = v104;
    P = v104;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a4 < 8 )
    {
      v14 = 0LL;
      goto LABEL_10;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * a4, 0x4B677844u);
    P = PoolWithTag;
  }
  v105 = a4;
  if ( PoolWithTag && a4 )
  {
    memset(PoolWithTag, 0, 8 * v13);
    PoolWithTag = P;
  }
  v14 = PoolWithTag;
LABEL_10:
  v93 = v14;
  if ( a4 <= 2 )
  {
    v15 = v107;
    v106 = v107;
    v16 = 8 * v13;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v13 < 8 )
    {
      v15 = 0LL;
      goto LABEL_17;
    }
    v16 = 8 * v13;
    v15 = ExAllocatePoolWithTag(PagedPool, v16, 0x4B677844u);
    v106 = v15;
    PoolWithTag = P;
  }
  v108 = a4;
  if ( v15 )
  {
    memset(v15, 0, v16);
    v15 = v106;
    PoolWithTag = P;
  }
LABEL_17:
  if ( v14 && v15 )
  {
    DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v91, *a5, a7, (struct DXGHWQUEUE **)v15, a9);
    if ( !*(_QWORD *)v15 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v17);
      v19[3] = a7;
      v19[4] = *a5;
      v20 = -1073741811;
      v19[5] = -1073741811LL;
      WdLogEvent5_WdError(v19);
LABEL_115:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v91);
      if ( P != v104 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      goto LABEL_118;
    }
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 16LL) + 16LL);
    v88 = v21;
    v89 = 0;
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v113, v21, 0, v18, a9);
    if ( !a9 )
    {
      if ( a8
        || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 16LL) + 16LL) + 328LL) == 2
        || (*((_BYTE *)a7 + 323) & 8) != 0 )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
      }
      else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88) )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v113);
        if ( v88 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v91);
        if ( P != v104 && P )
          ExFreePoolWithTag(P, 0);
        v20 = -2147483631;
        goto LABEL_118;
      }
      v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v113);
      if ( v23 < 0 )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v113);
        if ( v88 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v91);
        if ( P != v104 && P )
          ExFreePoolWithTag(P, 0);
        v20 = v23;
        goto LABEL_118;
      }
      v21 = v88;
    }
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v22);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v86, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v86);
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 16LL)
                                                                                       + 16LL)
                                                                           + 16LL)
                                                               + 16LL)) )
    {
      v26 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v26 + 24) = 1074LL;
      WdLogEvent5_WdAssertion(v26);
    }
    if ( (a3.Value & 0x7FFFFFF8) != 0 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v27[3] = *a5;
      v27[4] = (a3.Value >> 3) & 0xFFFFFFF;
      v20 = -1073741811;
      v27[5] = -1073741811LL;
      WdLogEvent5_WdError(v27);
LABEL_111:
      if ( v87 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v113);
      if ( v21 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
      goto LABEL_115;
    }
    if ( (a3.Value & 0x80000000) != 0 )
    {
      v28 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v28 + 24) = 1088LL;
LABEL_47:
      WdLogEvent5_WdError(v28);
LABEL_48:
      if ( v87 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v113);
      if ( v21 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v91);
      if ( P != v104 && P )
        ExFreePoolWithTag(P, 0);
      v20 = -1073741811;
LABEL_118:
      P = 0LL;
      v105 = 0;
      goto LABEL_119;
    }
    *v93 = *(_QWORD *)(*(_QWORD *)v15 + 40LL);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v116, a7);
    v30 = 1;
    if ( a4 > 1 )
    {
      v31 = v93 + 1;
      v32 = a5 + 1;
      v33 = v15 - (_BYTE *)v93;
      while ( 1 )
      {
        v34 = (*v32 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v34 < *((_DWORD *)a7 + 62)
          && (v35 = a7[29],
              v29 = *((unsigned int *)v35 + 4 * v34 + 2),
              *v32 >> 30 == ((*((_DWORD *)v35 + 4 * v34 + 2) >> 5) & 3))
          && (v29 & 0x2000) == 0
          && (v29 & 0x1F) != 0
          && (v29 &= 0x1Fu, (_BYTE)v29 == 15) )
        {
          v36 = *((_QWORD *)v35 + 2 * (unsigned int)v34);
        }
        else
        {
          v36 = 0LL;
        }
        *(_QWORD *)((char *)v31 + v33) = v36;
        if ( !v36 )
          break;
        v29 = *(_QWORD *)(*(_QWORD *)v15 + 16LL);
        if ( *(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) != *(_QWORD *)(v29 + 16) )
          break;
        *v31 = *(_QWORD *)(v36 + 40);
        ++v30;
        ++v32;
        ++v31;
        if ( v30 >= v92 )
          goto LABEL_68;
      }
      v39 = (_QWORD *)WdLogNewEntry5_WdError(v29);
      v39[3] = *a5;
      v39[4] = a5[v30];
      v39[5] = v30;
      v20 = -1073741811;
      v39[6] = -1073741811LL;
      WdLogEvent5_WdError(v39);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v116);
      goto LABEL_111;
    }
LABEL_68:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v116);
    v38 = v90;
    if ( !v90 )
    {
      v28 = WdLogNewEntry5_WdError(v37);
      *(_QWORD *)(v28 + 24) = 1131LL;
      goto LABEL_47;
    }
    v101[0] = 0LL;
    v102 = 0;
    Elements = (char *)PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::AllocateElements(v101, v90);
    v100 = Elements;
    if ( !Elements )
    {
      PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(v101);
      if ( v87 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v113);
      if ( v21 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v91);
      if ( P != v104 && P )
        ExFreePoolWithTag(P, 0);
      v20 = -1073741801;
      goto LABEL_118;
    }
    v41 = 0LL;
    if ( v38 )
    {
      v109 = 0LL;
      v42 = v94;
      v99 = v94;
      do
      {
        v43 = *v42;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a7 + 26));
        v44 = (v43 >> 6) & 0xFFFFFF;
        v45 = v43 >> 30;
        if ( (unsigned int)v44 < *((_DWORD *)a7 + 62)
          && (v46 = a7[29], v47 = *((_DWORD *)v46 + 4 * v44 + 2), v45 == ((v47 >> 5) & 3))
          && (v47 & 0x2000) == 0
          && (v47 & 0x1F) == 0xB )
        {
          v48 = *((_QWORD *)v46 + 2 * (unsigned int)v44);
        }
        else
        {
          v48 = 0LL;
        }
        ExReleasePushLockSharedEx(a7 + 26, 0LL);
        KeLeaveCriticalRegion();
        if ( v48 )
        {
          if ( (*(_DWORD *)(v48 + 64) & 0x10) != 0 )
          {
            v60 = WdLogNewEntry5_WdError(v49);
            *(_QWORD *)(v60 + 24) = v94[v41];
            WdLogEvent5_WdError(v60);
            PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(v101);
            if ( v87 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v113);
            if ( v21 )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
            DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v91);
            if ( P != v104 && P )
              ExFreePoolWithTag(P, 0);
            v20 = -1073741790;
            goto LABEL_118;
          }
          v50 = *(_QWORD *)(*(_QWORD *)v15 + 16LL);
          if ( *(_QWORD *)(v48 + 16) != *(_QWORD *)(v50 + 16) )
          {
            v59 = WdLogNewEntry5_WdError(v50);
            *(_QWORD *)(v59 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 16LL) + 16LL);
            *(_QWORD *)(v59 + 32) = *(_QWORD *)(v48 + 16);
            WdLogEvent5_WdError(v59);
            PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(v101);
            goto LABEL_48;
          }
          v51 = *(_QWORD *)(v48 + 32);
        }
        else
        {
          v52 = *v99;
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a7 + 26));
          v53 = (v52 >> 6) & 0xFFFFFF;
          v54 = v52 >> 30;
          if ( (unsigned int)v53 < *((_DWORD *)a7 + 62)
            && (v55 = a7[29], v56 = *((_DWORD *)v55 + 4 * v53 + 2), v54 == ((v56 >> 5) & 3))
            && (v56 & 0x2000) == 0
            && (v56 & 0x1F) == 8 )
          {
            v51 = *((_QWORD *)v55 + 2 * (unsigned int)v53);
          }
          else
          {
            v51 = 0LL;
          }
          ExReleasePushLockSharedEx(a7 + 26, 0LL);
          KeLeaveCriticalRegion();
          if ( !v51 )
          {
            v61 = (_QWORD *)WdLogNewEntry5_WdError(v57);
            v61[3] = a7;
            v61[4] = v94[v41];
            v61[5] = (unsigned int)v41;
            v20 = -1073741811;
            v61[6] = -1073741811LL;
            WdLogEvent5_WdError(v61);
            PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(v101);
            goto LABEL_111;
          }
        }
        v58 = v109;
        *(_QWORD *)&Elements[v109] = v51;
        v41 = (unsigned int)(v41 + 1);
        v42 = ++v99;
        v109 = v58 + 8;
        v38 = v90;
      }
      while ( (unsigned int)v41 < v90 );
    }
    v117 = 0LL;
    v119 = 0;
    if ( a8 )
    {
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&v117, v38);
      v63 = v117;
      if ( !v117 )
      {
        v117 = 0LL;
        v119 = 0;
        PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(v101);
        if ( v87 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v113);
        if ( v21 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v91);
        if ( P != v104 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v105 = 0;
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v106);
        return 3221225495LL;
      }
      v64 = 8LL * v119;
      v65 = Src;
      if ( (char *)Src + v64 < Src || (unsigned __int64)Src + v64 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v63, v65, v64);
      Src = v117;
      v111 = (unsigned __int64 *)v117;
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v114,
      Elements,
      v38);
    if ( v115 )
    {
      if ( v114[0] )
      {
        v67 = WdLogNewEntry5_WdError(v66);
        *(_QWORD *)(v67 + 24) = 1250LL;
        WdLogEvent5_WdError(v67);
LABEL_148:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v114);
        if ( v117 != v118 && v117 )
          ExFreePoolWithTag(v117, 0);
        v117 = 0LL;
        v119 = 0;
        PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(v101);
        if ( v87 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v113);
        if ( v21 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v91);
        if ( P != v104 && P )
          ExFreePoolWithTag(P, 0);
        v20 = -1073741811;
      }
      else
      {
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v114);
        if ( v117 != v118 && v117 )
          ExFreePoolWithTag(v117, 0);
        v117 = 0LL;
        v119 = 0;
        PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(v101);
        if ( v87 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v113);
        if ( v21 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v91);
        if ( P != v104 && P )
          ExFreePoolWithTag(P, 0);
        v20 = -1073741801;
      }
      goto LABEL_180;
    }
    v96 = 0LL;
    v98 = 0;
    v68 = (struct _VIDSCH_SYNC_OBJECT **)NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,1265072196>::AllocateElements(
                                           &v96,
                                           v38);
    v69 = (__int64)v68;
    v70 = 0;
    if ( v38 )
    {
      v71 = v68;
      v72 = (char *)(v100 - (char *)v68);
      v100 = v72;
      while ( 1 )
      {
        v73 = *(struct _VIDSCH_SYNC_OBJECT **)((char *)v71 + (_QWORD)v72);
        if ( !DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                v73,
                *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 16LL) + 16LL) + 16LL)) )
          break;
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             v73,
                             *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 16LL) + 16LL) + 16LL));
        *v71 = VidSchSyncObject;
        if ( !VidSchSyncObject )
        {
          v84 = WdLogNewEntry5_WdError(v76);
          *(_QWORD *)(v84 + 24) = v73;
          WdLogEvent5_WdError(v84);
          if ( v96 != v97 && v96 )
            ExFreePoolWithTag(v96, 0);
          v96 = 0LL;
          v98 = 0;
          goto LABEL_148;
        }
        ++v70;
        ++v71;
        v72 = v100;
        if ( v70 >= v90 )
        {
          v11 = v110;
          goto LABEL_165;
        }
      }
      v85 = (_QWORD *)WdLogNewEntry5_WdError(v74);
      v85[3] = v110;
      v85[4] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 16LL) + 16LL) + 16LL) + 16LL);
      v20 = -1073741811;
      v85[5] = -1073741811LL;
      WdLogEvent5_WdError(v85);
      if ( v96 != v97 && v96 )
        ExFreePoolWithTag(v96, 0);
      v96 = 0LL;
      v98 = 0;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v114);
      if ( v117 != v118 && v117 )
        ExFreePoolWithTag(v117, 0);
      v117 = 0LL;
      v119 = 0;
      PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(v101);
      if ( v87 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v113);
      if ( v21 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v91);
      if ( P != v104 && P )
        ExFreePoolWithTag(P, 0);
      goto LABEL_180;
    }
LABEL_165:
    v77 = v92;
    v78 = _guard_dispatch_icall_fptr();
    v82 = v78;
    if ( v78 < 0 )
    {
      v83 = (_QWORD *)WdLogNewEntry5_WdError(v80);
      v83[3] = v11;
      v83[4] = *v94;
      v83[5] = 0LL;
      v83[6] = v82;
      WdLogEvent5_WdError(v83);
      if ( v96 != v97 && v96 )
        ExFreePoolWithTag(v96, 0);
      v96 = 0LL;
      v98 = 0;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v114);
      if ( v117 != v118 && v117 )
        ExFreePoolWithTag(v117, 0);
      v117 = 0LL;
      v119 = 0;
      PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(v101);
      if ( v87 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v113);
      if ( v21 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v91);
      if ( P != v104 && P )
        ExFreePoolWithTag(P, 0);
      v20 = v82;
LABEL_180:
      P = 0LL;
      v105 = 0;
LABEL_119:
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v106);
      return v20;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qPR0qqPR3XR3(v80, v79, v81, v77, (__int64)v15, *(_BYTE *)&a3.0, v90, v69, (__int64)Src);
    if ( v96 != v97 && v96 )
      ExFreePoolWithTag(v96, 0);
    v96 = 0LL;
    v98 = 0;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v114);
    if ( v117 != v118 && v117 )
      ExFreePoolWithTag(v117, 0);
    v117 = 0LL;
    v119 = 0;
    PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(v101);
    if ( v87 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v113);
    if ( v21 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v91);
    if ( P != v104 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v105 = 0;
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v106);
    return 0LL;
  }
  else
  {
    if ( PoolWithTag != v104 && PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    v105 = 0;
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v106);
    return 3221225495LL;
  }
}
