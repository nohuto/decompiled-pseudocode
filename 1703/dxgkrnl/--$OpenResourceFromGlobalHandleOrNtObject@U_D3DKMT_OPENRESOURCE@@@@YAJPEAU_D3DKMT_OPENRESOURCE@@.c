/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00FDB80
 * Callers:
 *     DxgkOpenResource @ 0x1C00FFEE0 (DxgkOpenResource.c)
 * Callees:
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0001BD8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0001C04 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004E20 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C000706C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0013770 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00138F0 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013970 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00139F0 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusSendOpenResource@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IIIPEAI2@Z @ 0x1C0030DB0 (-VmBusSendOpenResource@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IIIPEAI2@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00C2264 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C9C30 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00FE2C8 (_DXGDEVICE--QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__--_2_--ENSURE_SHARED_RESOURCE_DEREFEREN.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(unsigned int *a1, unsigned int a2)
{
  __int64 v2; // r14
  bool v4; // r13
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r12
  PVOID v9; // r15
  unsigned int *v10; // rsi
  ULONG64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGDEVICE *v16; // rbx
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v29; // r9
  __int64 ObjectA; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r13
  signed __int32 v36; // eax
  signed __int32 v37; // ett
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int64 v41; // rdx
  SIZE_T v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r8
  unsigned int v50; // eax
  PVOID v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // r8
  char *v57; // r9
  int StandardAllocation; // r15d
  PVOID v59; // rbx
  _DWORD *v60; // rdx
  _DWORD *v61; // rdx
  unsigned int i; // r10d
  char *v63; // rcx
  size_t v64; // r8
  char *v65; // rcx
  size_t v66; // r8
  __int64 v68; // r11
  _DWORD *v69; // rdx
  _DWORD *v70; // rdx
  _QWORD *v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  unsigned int v78; // ebx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rcx
  _QWORD *v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // r8
  _QWORD *v90; // rax
  int v91; // ebx
  __int64 v92; // rdx
  unsigned int v93; // ecx
  unsigned int v94; // ebx
  _DWORD *v95; // rcx
  char *v96; // rcx
  size_t v97; // r8
  SIZE_T v98; // rax
  PVOID v99; // rax
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rax
  unsigned int j; // r13d
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  unsigned int v116; // r8d
  unsigned int v117; // edx
  __int64 v118; // r10
  int v119; // r9d
  struct DXGRESOURCE *v120; // rsi
  __int64 v121; // rax
  int v122; // edx
  __int64 v123; // rax
  int v124; // [rsp+30h] [rbp-3D8h]
  char v125; // [rsp+50h] [rbp-3B8h]
  bool v126; // [rsp+51h] [rbp-3B7h]
  struct DXGDEVICE *v127; // [rsp+58h] [rbp-3B0h] BYREF
  struct DXGDEVICE *v128; // [rsp+60h] [rbp-3A8h] BYREF
  PVOID P; // [rsp+68h] [rbp-3A0h]
  char v130; // [rsp+70h] [rbp-398h]
  char v131; // [rsp+71h] [rbp-397h]
  char v132; // [rsp+72h] [rbp-396h]
  __int64 v133; // [rsp+78h] [rbp-390h]
  unsigned int v134; // [rsp+80h] [rbp-388h]
  PVOID v135; // [rsp+88h] [rbp-380h]
  char v136[8]; // [rsp+90h] [rbp-378h] BYREF
  __int64 v137; // [rsp+98h] [rbp-370h]
  char v138; // [rsp+A0h] [rbp-368h]
  void *Src; // [rsp+A8h] [rbp-360h]
  PVOID v140; // [rsp+B0h] [rbp-358h]
  struct DXGPROCESS *v141; // [rsp+B8h] [rbp-350h]
  unsigned int *v142; // [rsp+C0h] [rbp-348h]
  __int64 v143; // [rsp+C8h] [rbp-340h] BYREF
  PVOID v144; // [rsp+D0h] [rbp-338h]
  _BYTE v145[16]; // [rsp+D8h] [rbp-330h] BYREF
  struct _EX_RUNDOWN_REF *v146; // [rsp+E8h] [rbp-320h] BYREF
  unsigned int v147; // [rsp+F0h] [rbp-318h] BYREF
  struct _EX_RUNDOWN_REF *v148; // [rsp+F8h] [rbp-310h] BYREF
  _BYTE v149[16]; // [rsp+100h] [rbp-308h] BYREF
  struct _EX_RUNDOWN_REF *v150; // [rsp+110h] [rbp-2F8h] BYREF
  __int64 v151; // [rsp+118h] [rbp-2F0h]
  int v152; // [rsp+120h] [rbp-2E8h]
  _BYTE v153[24]; // [rsp+128h] [rbp-2E0h] BYREF
  PERESOURCE *v154[12]; // [rsp+140h] [rbp-2C8h] BYREF
  _BYTE v155[24]; // [rsp+1A0h] [rbp-268h] BYREF
  _BYTE v156[24]; // [rsp+1B8h] [rbp-250h] BYREF
  _OWORD v157[4]; // [rsp+1D0h] [rbp-238h] BYREF
  __int64 v158; // [rsp+210h] [rbp-1F8h]
  _QWORD v159[52]; // [rsp+220h] [rbp-1E8h] BYREF
  int v160; // [rsp+3C0h] [rbp-48h] BYREF
  int v161; // [rsp+3C4h] [rbp-44h]
  int v162; // [rsp+3C8h] [rbp-40h]
  __int64 v163; // [rsp+3CCh] [rbp-3Ch]
  int v164; // [rsp+3D4h] [rbp-34h]

  v2 = a2;
  v134 = a2;
  v135 = a1;
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v126 = v4;
  Current = DXGPROCESS::GetCurrent(v5);
  v141 = Current;
  v140 = 0LL;
  v9 = 0LL;
  P = 0LL;
  Src = 0LL;
  v125 = 0;
  if ( !Current )
  {
    v72 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v72 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v72);
    return 3221225485LL;
  }
  v10 = (unsigned int *)v157;
  if ( v4 )
  {
    v11 = (ULONG64)a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v11 = MmUserProbeAddress;
    v157[0] = *(_OWORD *)v11;
    v157[1] = *(_OWORD *)(v11 + 16);
    v157[2] = *(_OWORD *)(v11 + 32);
    v157[3] = *(_OWORD *)(v11 + 48);
    v158 = *(_QWORD *)(v11 + 64);
  }
  else
  {
    v10 = a1;
  }
  v142 = v10;
  v151 = *((_QWORD *)v10 + 7);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v127, *v10, (struct _KTHREAD **)Current, &v128);
  v16 = v128;
  if ( !v128 )
  {
    v73 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v73 + 24) = *v10;
    *(_QWORD *)(v73 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v73);
LABEL_163:
    if ( v127 && _InterlockedExchangeAdd64((volatile signed __int64 *)v127 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v127 + 2), v127);
    return 3221225485LL;
  }
  if ( !v10[16] && !v10[12] )
  {
    v74 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v74 + 24) = v16;
    *(_QWORD *)(v74 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v74);
    goto LABEL_163;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v145,
    v128);
  v137 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL);
  v138 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v154, (__int64)v16, 2LL, v17, 0);
  v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v154);
  v23 = v18;
  if ( v18 < 0 )
  {
    v75 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    *(_QWORD *)(v75 + 24) = v16;
    *(_QWORD *)(v75 + 32) = v23;
    WdLogEvent5_WdWarning(v75);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v154);
    if ( v138 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v145);
    if ( v127 && _InterlockedExchangeAdd64((volatile signed __int64 *)v127 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v127 + 2), v127);
    return (unsigned int)v23;
  }
  if ( !(_DWORD)v2 )
  {
    v123 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v123 + 24) = v16;
    *(_QWORD *)(v123 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v123);
LABEL_160:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v154);
    if ( v138 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v145);
    goto LABEL_163;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v149);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v149);
  Global = DXGGLOBAL::GetGlobal(v25, v24, v26, v27);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, (unsigned int)v2, 2LL, v29);
  v35 = ObjectA;
  if ( !ObjectA )
  {
    v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
    v76[3] = v16;
LABEL_85:
    v76[5] = -1073741811LL;
    v76[4] = v2;
    WdLogEvent5_WdWarning(v76);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v149);
    goto LABEL_160;
  }
  _m_prefetchw((const void *)(ObjectA + 60));
  v36 = *(_DWORD *)(ObjectA + 60);
  do
  {
    if ( !v36 )
    {
      v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
      v76[3] = v128;
      v76[6] = 9342LL;
      goto LABEL_85;
    }
    v32 = (unsigned int)(v36 + 1);
    v37 = v36;
    v36 = _InterlockedCompareExchange((volatile signed __int32 *)(v35 + 60), v32, v36);
  }
  while ( v37 != v36 );
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v149, v31, v33, v34);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v149);
  v143 = v35;
  if ( (*(_DWORD *)(v35 + 12) & 0x10) != 0 )
  {
    v77 = WdLogNewEntry5_WdEvent(v38);
    *(_QWORD *)(v77 + 24) = v35;
    v78 = -1073741823;
    *(_QWORD *)(v77 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v77);
  }
  else
  {
    DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v153, Current);
    if ( (v39 & 2) != 0 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v154);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v153, 1u);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
      LODWORD(v144) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v154);
      if ( (int)v144 < 0 )
      {
        v82 = WdLogNewEntry5_WdWarning(v81, v80, v39, v40);
        *(_QWORD *)(v82 + 24) = v128;
        v78 = (unsigned int)v144;
        *(_QWORD *)(v82 + 32) = (int)v144;
        WdLogEvent5_WdWarning(v82);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v153);
        DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v143);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v154);
        if ( v138 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v145);
        if ( v127 )
          goto LABEL_91;
        return v78;
      }
    }
    v41 = v10[2];
    if ( 80 * v41 <= 0xFFFFFFFF )
    {
      v152 = 80 * v41;
      v42 = 80 * v41;
      if ( !is_mul_ok(v41, 0x50uLL) )
        v42 = -1LL;
      v144 = operator new(v42, 0x4B677844u, PagedPool);
      if ( !v144 )
      {
        v83 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45, v46);
        v83[3] = v128;
        v83[4] = v10[2];
        StandardAllocation = -1073741801;
        v83[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v83);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v153);
        DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v143);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v154);
        if ( v138 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v145);
        if ( v127 )
          goto LABEL_62;
        return (unsigned int)StandardAllocation;
      }
      v47 = v10[16];
      if ( v47 )
      {
        v9 = operator new(v47, 0x4B677844u, PagedPool);
        P = v9;
        if ( !v9 )
        {
          v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v48, v49, v46);
          v84[3] = v128;
          v85 = v10[16];
          goto LABEL_105;
        }
      }
      if ( v10[12] )
      {
        v140 = operator new(v10[12], 0x4B677844u, PagedPool);
        if ( !v140 )
        {
          v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v88, v89, v46);
          v84[3] = v128;
          v85 = v10[12];
LABEL_105:
          v84[4] = v85;
          StandardAllocation = -1073741801;
          v84[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v84);
LABEL_109:
          v59 = P;
LABEL_145:
          if ( v125 )
          {
            DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
              (DXGHANDLETABLELOCKEXCLUSIVE *)v156,
              Current,
              (__int64)v56,
              (__int64)v57);
            v116 = v10[17];
            v117 = (v116 >> 6) & 0xFFFFFF;
            if ( v117 < *((_DWORD *)Current + 52)
              && (v118 = *((_QWORD *)Current + 24),
                  v119 = *(_DWORD *)(v118 + 16LL * v117 + 8),
                  ((v116 >> 26) & 0x30) == (*(_BYTE *)(v118 + 16LL * v117 + 8) & 0x30))
              && (v119 & 0x1000) == 0
              && (v119 & 0xF) != 0
              && (*(_BYTE *)(v118 + 16LL * v117 + 8) & 0xF) == 4 )
            {
              v120 = *(struct DXGRESOURCE **)(v118 + 16LL * v117);
              if ( v120 )
              {
                v121 = (v116 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v121 < *((_DWORD *)Current + 52) )
                {
                  v122 = *(_DWORD *)(v118 + 16 * v121 + 8);
                  if ( ((v116 >> 26) & 0x30) == (*(_BYTE *)(v118 + 16 * v121 + 8) & 0x30)
                    && (v122 & 0x1000) == 0
                    && (v122 & 0xF) != 0 )
                  {
                    *(_DWORD *)(v118 + 16 * (((unsigned __int64)v116 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
                  }
                }
              }
            }
            else
            {
              v120 = 0LL;
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v156);
            DXGDEVICE::DestroyAllocationInternal(v128, 0, 0LL, v120, 0LL, DXGDEVICE::DestroyFlagsDefault);
          }
LABEL_51:
          if ( v59 )
            ExFreePoolWithTag(v59, 0);
          if ( v140 )
            ExFreePoolWithTag(v140, 0);
          if ( v144 )
            ExFreePoolWithTag(v144, 0);
          if ( Src )
            ExFreePoolWithTag(Src, 0);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v153);
          DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v143);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v154);
          if ( v138 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v145);
          if ( v127 )
          {
LABEL_62:
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v127 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v127 + 2), v127);
          }
          return (unsigned int)StandardAllocation;
        }
      }
      v50 = v10[8];
      if ( v50 )
      {
        v51 = operator new(v50, 0x4B677844u, PagedPool);
        Src = v51;
        if ( !v51 )
        {
          v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, 0LL, v52, v46);
          v84[3] = v128;
          v85 = v10[8];
          goto LABEL_105;
        }
      }
      else
      {
        v51 = Src;
      }
      v53 = *((_QWORD *)v16 + 2);
      if ( *(_QWORD *)(v35 + 72) == v53 )
      {
        v44 = *((_QWORD *)v128 + 225);
        if ( *(_QWORD *)(v35 + 88) == v44 )
        {
          if ( v126 )
          {
            *((_QWORD *)v10 + 7) = v9;
            *((_QWORD *)v10 + 5) = v140;
            *((_QWORD *)v10 + 3) = v51;
            *((_QWORD *)v10 + 2) = v144;
          }
          StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                                 v128,
                                 (__int64)v10,
                                 v134,
                                 v46,
                                 0,
                                 v154,
                                 v124,
                                 0LL,
                                 0LL,
                                 0LL);
          if ( StandardAllocation >= 0 )
          {
            v59 = P;
LABEL_31:
            v132 = 1;
            v131 = 1;
            v130 = 1;
            if ( v126 )
            {
              v56 = v135;
              v60 = (char *)v135 + 68;
              if ( (unsigned __int64)v135 + 68 >= MmUserProbeAddress )
                v60 = (_DWORD *)MmUserProbeAddress;
              *v60 = v10[17];
              v61 = v56 + 8;
              if ( (unsigned __int64)(v56 + 8) >= MmUserProbeAddress )
                v61 = (_DWORD *)MmUserProbeAddress;
              *v61 = v10[16];
              for ( i = 0; i < v10[2]; ++i )
              {
                v68 = 80LL * i;
                v133 = v151 + *(_DWORD *)(v68 + *((_QWORD *)v10 + 2) + 8) - v10[14];
                v57 = (char *)(v68 + v56[2]);
                v69 = v57;
                if ( (unsigned __int64)v57 >= MmUserProbeAddress )
                  v69 = (_DWORD *)MmUserProbeAddress;
                *v69 = *(_DWORD *)(v68 + *((_QWORD *)v10 + 2));
                v70 = v57 + 16;
                if ( (unsigned __int64)(v57 + 16) >= MmUserProbeAddress )
                  v70 = (_DWORD *)MmUserProbeAddress;
                *v70 = *(_DWORD *)(v68 + *((_QWORD *)v10 + 2) + 16);
                v71 = v57 + 8;
                if ( (unsigned __int64)(v57 + 8) >= MmUserProbeAddress )
                  v71 = (_QWORD *)MmUserProbeAddress;
                *v71 = v133;
                v56 = v135;
              }
              if ( v10[8] )
              {
                v63 = (char *)v56[3];
                v64 = v10[8];
                if ( (unsigned __int64)&v63[v64] > MmUserProbeAddress || &v63[v64] <= v63 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v63, Src, v64);
                v56 = v135;
              }
              if ( v10[12] )
              {
                v96 = (char *)v56[5];
                v97 = v10[12];
                if ( (unsigned __int64)&v96[v97] > MmUserProbeAddress || &v96[v97] <= v96 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v96, v140, v97);
              }
              if ( v10[16] )
              {
                v65 = (char *)*((_QWORD *)v135 + 7);
                v66 = v10[16];
                if ( (unsigned __int64)&v65[v66] > MmUserProbeAddress || &v65[v66] <= v65 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v65, v59, v66);
              }
            }
            v125 = 1;
            if ( *((_BYTE *)v128 + 1821) )
            {
              v98 = 4LL * v10[2];
              if ( !is_mul_ok(v10[2], 4uLL) )
                v98 = -1LL;
              v99 = operator new(v98, 0x4B677844u, PagedPool);
              v135 = v99;
              if ( v99 )
              {
                StandardAllocation = DXGADAPTER::VmBusSendOpenResource(
                                       *(DXGADAPTER **)(*((_QWORD *)v128 + 2) + 16LL),
                                       Current,
                                       v128,
                                       *(_DWORD *)(v35 + 28),
                                       v10[2],
                                       v10[16],
                                       &v147,
                                       (unsigned int *)v99);
                if ( StandardAllocation >= 0 )
                {
                  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
                    (DXGHANDLETABLELOCKSHARED *)v155,
                    Current,
                    v104,
                    v105);
                  DXGPROCESS::GetResourceUnsafe((__int64)Current, (DXGRESOURCEREFERENCE *)&v148, v10[17]);
                  if ( v148 )
                  {
                    HIDWORD(v148[2].Ptr) = v147;
                    for ( j = 0; j < v10[2]; ++j )
                    {
                      DXGPROCESS::GetAllocationUnsafe(
                        (__int64)Current,
                        (DXGALLOCATIONREFERENCE *)&v146,
                        *(_DWORD *)(*((_QWORD *)v10 + 2) + 80LL * j));
                      if ( !v146 )
                      {
                        v100 = WdLogNewEntry5_WdWarning(v113, v112, v114, v115);
                        *(_QWORD *)(v100 + 24) = 9772LL;
                        WdLogEvent5_WdWarning(v100);
                        StandardAllocation = -1073741811;
                        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v146, v101, v102, v103);
                        break;
                      }
                      LODWORD(v146[12].Count) = *((_DWORD *)v135 + j);
                      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v146, j, v114, v115);
                    }
                  }
                  else
                  {
                    v110 = WdLogNewEntry5_WdWarning(v107, v106, v108, v109);
                    *(_QWORD *)(v110 + 24) = 9761LL;
                    WdLogEvent5_WdWarning(v110);
                    StandardAllocation = -1073741811;
                  }
                  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v148);
                  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
                }
                ExFreePoolWithTag(v135, 0);
              }
              else
              {
                StandardAllocation = -1073741801;
              }
              v125 = 1;
            }
LABEL_50:
            if ( StandardAllocation < 0 )
              goto LABEL_145;
            goto LABEL_51;
          }
          v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v54, v56, v57);
          v90[3] = 9616LL;
LABEL_143:
          WdLogEvent5_WdWarning(v90);
LABEL_144:
          v59 = P;
          goto LABEL_50;
        }
      }
      v91 = *(_DWORD *)(v35 + 12);
      if ( (v91 & 0x20) == 0 )
      {
        StandardAllocation = -1073741811;
        v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v51, v53, v46);
        v90[3] = v128;
        v90[4] = 0LL;
        v90[5] = -1073741811LL;
        goto LABEL_143;
      }
      if ( *(_DWORD *)(v35 + 124) == v10[2] )
      {
        v134 = *(_DWORD *)(v35 + 104);
        if ( v10[8] == v134 )
        {
          v92 = *(unsigned int *)(v35 + 184);
          if ( (_DWORD)v92 || *(_DWORD *)(*(_QWORD *)(v53 + 16) + 1504LL) >= 0x5000u )
          {
            v161 = 0;
            v163 = 0LL;
            v164 = 0;
            v162 = v92;
            v160 = *(_DWORD *)(v35 + 176);
            v161 = *(_DWORD *)(v35 + 180);
            LODWORD(v163) = 7;
            memset(v159, 0, 0x198uLL);
            v93 = v159[0] & 0xFFFFBEFF | (4 * (v91 & 0x40 | (32 * (v91 & 0x80)))) | 0x41;
            HIDWORD(v159[0]) = *v10;
            LODWORD(v159[2]) = 4;
            v159[3] = &v160;
            v159[39] = *(_QWORD *)(v35 + 96);
            LODWORD(v159[40]) = v134;
            v159[41] = *(_QWORD *)(v35 + 192);
            v159[42] = *(_QWORD *)(v35 + 200);
            LODWORD(v159[6]) = *(_DWORD *)(v35 + 208);
            v159[43] = v140;
            LODWORD(v159[44]) = v10[12];
            v159[45] = v9;
            LODWORD(v159[46]) = v10[16];
            LODWORD(v159[0]) = ((unsigned __int16)v93 ^ (unsigned __int16)((_WORD)v91 << 7)) & 0x400 ^ v93 | 0x200;
            StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                   v128,
                                   (struct _D3DKM_CREATESTANDARDALLOCATION *)v159,
                                   v154);
            if ( StandardAllocation >= 0 )
            {
              v94 = v159[1];
              *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe(
                                       (__int64)Current,
                                       (DXGRESOURCEREFERENCE *)&v150,
                                       v159[1])
                        + 120LL) = v35;
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v150);
              memmove(Src, *(const void **)(v35 + 96), v10[8]);
              v10[17] = v94;
              v95 = v144;
              *(_DWORD *)v144 = HIDWORD(v159[6]);
              v95[4] = v10[16];
              v59 = P;
              *((_QWORD *)v95 + 1) = P;
              *((_QWORD *)v10 + 2) = v95;
              v57 = (char *)Src;
              *((_QWORD *)v10 + 3) = Src;
              *((_QWORD *)v10 + 5) = v140;
              *((_QWORD *)v10 + 7) = v59;
              goto LABEL_31;
            }
            goto LABEL_144;
          }
          v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v92, v53, v46);
          v86[3] = v128;
          v86[4] = -1073741811LL;
        }
        else
        {
          v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v51, v53, v46);
          v86[3] = v128;
          v86[4] = v10[8];
          v87 = *(unsigned int *)(v35 + 104);
LABEL_107:
          v86[5] = v87;
          v86[6] = -1073741811LL;
        }
        WdLogEvent5_WdWarning(v86);
        StandardAllocation = -1073741811;
        goto LABEL_109;
      }
      v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v51, v53, v46);
      v86[3] = v128;
      v86[4] = v10[2];
      v87 = *(unsigned int *)(v35 + 124);
      goto LABEL_107;
    }
    v79 = WdLogNewEntry5_WdWarning(80 * v41, v41, v39, v40);
    *(_QWORD *)(v79 + 24) = v128;
    v78 = -1073741675;
    *(_QWORD *)(v79 + 32) = -1073741675LL;
    WdLogEvent5_WdWarning(v79);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v153);
  }
  DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v143);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v154);
  if ( v138 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v145);
  if ( v127 )
  {
LABEL_91:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v127 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v127 + 2), v127);
  }
  return v78;
}
