/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00C0868
 * Callers:
 *     DxgkOpenResource @ 0x1C00C0FA0 (DxgkOpenResource.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0009A64 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00166DC (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001694C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C001A4C8 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001A718 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C001A72C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     _OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00C0F70 (_OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__--_2_--ENSURE_SHARED_RESOURCE_DERE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00E6170 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00E9BB8 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1F88 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F2480 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(ULONG64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  PVOID v6; // r15
  char v7; // r12
  unsigned int *v8; // r14
  ULONG64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGDEVICE *v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r13
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  __int64 v27; // rdx
  char v28; // r8
  unsigned __int64 v29; // rdx
  SIZE_T v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned int v37; // eax
  PVOID v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int StandardAllocation; // r15d
  void *v45; // rbx
  void *v46; // r13
  _QWORD *v47; // r8
  _DWORD *v48; // rdx
  _DWORD *v49; // rdx
  unsigned int v50; // r10d
  __int64 v51; // r12
  char *v52; // rcx
  size_t v53; // r8
  char *v54; // rcx
  size_t v55; // r8
  __int64 v57; // r11
  ULONG64 v58; // r9
  _DWORD *v59; // rdx
  _DWORD *v60; // rdx
  _QWORD *v61; // rdx
  __int64 v62; // rax
  unsigned int v63; // ebx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rcx
  _QWORD *v78; // rax
  __int64 v79; // rcx
  struct DXGPROCESS *v80; // r13
  unsigned int v81; // r12d
  unsigned int v82; // ecx
  __int64 v83; // r8
  unsigned int v84; // edx
  int v85; // eax
  struct DXGRESOURCE *v86; // r14
  __int64 v87; // rdx
  __int64 v88; // r8
  _QWORD *v89; // rax
  int v90; // ebx
  __int64 v91; // rdx
  unsigned int v92; // ebx
  const void *v93; // rdx
  _DWORD *v94; // rcx
  char *v95; // rcx
  size_t v96; // r8
  __int64 v97; // rax
  unsigned int v98; // [rsp+30h] [rbp-3C8h]
  bool v99; // [rsp+50h] [rbp-3A8h]
  struct DXGDEVICE *v100; // [rsp+58h] [rbp-3A0h] BYREF
  signed int v101; // [rsp+60h] [rbp-398h]
  void *v102; // [rsp+68h] [rbp-390h]
  struct DXGDEVICE *v103; // [rsp+70h] [rbp-388h] BYREF
  unsigned int v104; // [rsp+80h] [rbp-378h]
  char v105[8]; // [rsp+88h] [rbp-370h] BYREF
  __int64 v106; // [rsp+90h] [rbp-368h]
  char v107; // [rsp+98h] [rbp-360h]
  void *v108; // [rsp+A0h] [rbp-358h]
  unsigned int *v109; // [rsp+A8h] [rbp-350h]
  void *Src; // [rsp+B0h] [rbp-348h]
  __int64 v111; // [rsp+B8h] [rbp-340h] BYREF
  ULONG64 v112; // [rsp+C0h] [rbp-338h]
  _BYTE v113[16]; // [rsp+C8h] [rbp-330h] BYREF
  void *v114; // [rsp+D8h] [rbp-320h]
  struct DXGPROCESS *v115; // [rsp+E0h] [rbp-318h]
  _BYTE v116[16]; // [rsp+E8h] [rbp-310h] BYREF
  char v117[8]; // [rsp+F8h] [rbp-300h] BYREF
  __int64 v118; // [rsp+100h] [rbp-2F8h]
  __int64 v119; // [rsp+108h] [rbp-2F0h]
  _BYTE v120[32]; // [rsp+110h] [rbp-2E8h] BYREF
  _BYTE v121[96]; // [rsp+130h] [rbp-2C8h] BYREF
  _BYTE v122[32]; // [rsp+190h] [rbp-268h] BYREF
  _OWORD v123[4]; // [rsp+1B0h] [rbp-248h] BYREF
  __int64 v124; // [rsp+1F0h] [rbp-208h]
  _QWORD v125[52]; // [rsp+200h] [rbp-1F8h] BYREF
  __int64 v126; // [rsp+3A0h] [rbp-58h]
  __int64 v127; // [rsp+3A8h] [rbp-50h]
  __int64 v128; // [rsp+3B0h] [rbp-48h] BYREF
  __int64 v129; // [rsp+3B8h] [rbp-40h]
  __int64 v130; // [rsp+3C0h] [rbp-38h]

  v104 = a2;
  v112 = a1;
  v99 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = DXGPROCESS::GetCurrent();
  v115 = Current;
  v108 = 0LL;
  v6 = 0LL;
  v102 = 0LL;
  Src = 0LL;
  v7 = 0;
  if ( !Current )
  {
    v62 = WdLogNewEntry5_WdError(v4);
    v63 = -1073741811;
    *(_QWORD *)(v62 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v62);
    return v63;
  }
  v8 = (unsigned int *)v123;
  if ( v99 )
  {
    v9 = a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = MmUserProbeAddress;
    v123[0] = *(_OWORD *)v9;
    v123[1] = *(_OWORD *)(v9 + 16);
    v123[2] = *(_OWORD *)(v9 + 32);
    v123[3] = *(_OWORD *)(v9 + 48);
    v124 = *(_QWORD *)(v9 + 64);
  }
  else
  {
    v8 = (unsigned int *)a1;
  }
  v109 = v8;
  v118 = *((_QWORD *)v8 + 7);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v100, *v8, (struct _KTHREAD **)Current, &v103);
  v13 = v103;
  if ( !v103 )
  {
    v64 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v64 + 24) = *v8;
    v63 = -1073741811;
    *(_QWORD *)(v64 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v64);
    goto LABEL_132;
  }
  if ( !v8[16] && !v8[12] )
  {
    v65 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v65 + 24) = v13;
    v63 = -1073741811;
    *(_QWORD *)(v65 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v65);
    goto LABEL_132;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v113,
    v103);
  v106 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
  v107 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v121, (__int64)v13, 2, v14, 0);
  v101 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v121);
  if ( v101 < 0 )
  {
    v66 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v66 + 24) = v13;
    v63 = v101;
    *(_QWORD *)(v66 + 32) = v101;
    WdLogEvent5_WdWarning(v66);
    goto LABEL_129;
  }
  if ( !a2 )
  {
    v97 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v97 + 24) = v13;
    v63 = -1073741811;
    *(_QWORD *)(v97 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v97);
LABEL_129:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v121);
    if ( v107 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v113);
LABEL_132:
    if ( v100 )
      goto LABEL_133;
    return v63;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v116);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v116);
  Global = DXGGLOBAL::GetGlobal(v18);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2, 2);
  v24 = ObjectA;
  if ( !ObjectA )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    v67[3] = v13;
LABEL_71:
    v63 = -1073741811;
    v68 = v104;
    v67[5] = -1073741811LL;
    v67[4] = v68;
    WdLogEvent5_WdWarning(v67);
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v116);
    goto LABEL_129;
  }
  _m_prefetchw((const void *)(ObjectA + 60));
  v25 = *(_DWORD *)(ObjectA + 60);
  do
  {
    if ( !v25 )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
      v67[3] = v103;
      v67[6] = 10354LL;
      goto LABEL_71;
    }
    v22 = (unsigned int)(v25 + 1);
    v26 = v25;
    v25 = _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 60), v22, v25);
  }
  while ( v26 != v25 );
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v116);
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v116);
  v111 = v24 & -(__int64)(v104 != 0);
  if ( (*(_DWORD *)(v24 + 12) & 0x10) != 0 )
  {
    v69 = WdLogNewEntry5_WdEvent(v24 & -(__int64)(v104 != 0), v27);
    *(_QWORD *)(v69 + 24) = v24;
    v63 = -1073741823;
    *(_QWORD *)(v69 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v69);
  }
  else
  {
    DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v120, Current);
    if ( (v28 & 2) != 0 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v121);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v120, 1u);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
      v101 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v121);
      if ( v101 < 0 )
      {
        v74 = WdLogNewEntry5_WdWarning(v72, v71, v73);
        *(_QWORD *)(v74 + 24) = v103;
        v63 = v101;
        *(_QWORD *)(v74 + 32) = v101;
        WdLogEvent5_WdWarning(v74);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v120);
        OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v111);
        goto LABEL_129;
      }
    }
    v29 = v8[2];
    v101 = 80 * v29 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( 80 * v29 <= 0xFFFFFFFF )
    {
      v30 = 80 * v29;
      if ( !is_mul_ok(v29, 0x50uLL) )
        v30 = -1LL;
      v114 = operator new[](v30, 0x4B677844u, PagedPool);
      if ( !v114 )
      {
        v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
        v75[3] = v103;
        v75[4] = v8[2];
        StandardAllocation = -1073741801;
        v75[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v75);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v120);
        OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v111);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v121);
        if ( v107 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v113);
        if ( v100 )
          goto LABEL_53;
        return (unsigned int)StandardAllocation;
      }
      v34 = v8[16];
      if ( v34 )
      {
        v6 = operator new[](v34, 0x4B677844u, PagedPool);
        v102 = v6;
        if ( !v6 )
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v35, v36);
          v76[3] = v103;
          v77 = v8[16];
          goto LABEL_86;
        }
      }
      if ( v8[12] )
      {
        v108 = operator new[](v8[12], 0x4B677844u, PagedPool);
        if ( !v108 )
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v87, v88);
          v76[3] = v103;
          v77 = v8[12];
LABEL_86:
          v76[4] = v77;
          StandardAllocation = -1073741801;
          v76[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v76);
LABEL_90:
          v45 = v102;
LABEL_91:
          if ( v7 )
          {
            v80 = v115;
            DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
              (DXGHANDLETABLELOCKEXCLUSIVE *)v122,
              (struct _KTHREAD **)v115);
            v81 = v8[17];
            v82 = (v81 >> 6) & 0xFFFFFF;
            v101 = *((_DWORD *)v80 + 62);
            if ( v82 < v101
              && (v83 = *((_QWORD *)v80 + 29),
                  v84 = *(_DWORD *)(v83 + 16LL * v82 + 8),
                  v85 = (v84 >> 5) & 3,
                  v81 >> 30 == v85)
              && (v84 & 0x2000) == 0
              && (v84 & 0x1F) == 4 )
            {
              v86 = *(struct DXGRESOURCE **)(v83 + 16LL * v82);
              if ( v86 && v82 < v101 && v81 >> 30 == v85 && (v84 & 0x1F) != 0 )
                *(_DWORD *)(v83 + 16LL * ((v81 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            }
            else
            {
              v86 = 0LL;
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v122);
            DXGDEVICE::DestroyAllocationInternal(v103, 0, 0LL, v86, 0LL, DXGDEVICE::DestroyFlagsDefault);
          }
LABEL_50:
          operator delete[](v45);
          operator delete[](v108);
          operator delete[](v114);
          operator delete[](Src);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v120);
          OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v111);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v121);
          if ( v107 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v113);
          if ( v100 )
          {
LABEL_53:
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v100 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v100 + 2), v100);
          }
          return (unsigned int)StandardAllocation;
        }
      }
      v37 = v8[8];
      if ( v37 )
      {
        v38 = operator new[](v37, 0x4B677844u, PagedPool);
        Src = v38;
        if ( !v38 )
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, 0LL, v39);
          v76[3] = v103;
          v77 = v8[8];
          goto LABEL_86;
        }
      }
      else
      {
        v38 = Src;
      }
      v40 = *((_QWORD *)v13 + 2);
      if ( *(_QWORD *)(v24 + 72) == v40 )
      {
        v32 = *((_QWORD *)v103 + 211);
        if ( *(_QWORD *)(v24 + 88) == v32 )
        {
          if ( v99 )
          {
            *((_QWORD *)v8 + 7) = v6;
            *((_QWORD *)v8 + 5) = v108;
            *((_QWORD *)v8 + 3) = v38;
            *((_QWORD *)v8 + 2) = v114;
          }
          StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                                 v103,
                                 0,
                                 (struct COREDEVICEACCESS *)v121,
                                 v98,
                                 0LL,
                                 0LL,
                                 0LL);
          if ( StandardAllocation >= 0 )
          {
            v45 = v102;
            v46 = Src;
LABEL_31:
            v7 = 1;
            if ( v99 )
            {
              v47 = (_QWORD *)v112;
              v48 = (_DWORD *)(v112 + 68);
              if ( v112 + 68 >= MmUserProbeAddress )
                v48 = (_DWORD *)MmUserProbeAddress;
              *v48 = v8[17];
              v49 = v47 + 8;
              if ( (unsigned __int64)(v47 + 8) >= MmUserProbeAddress )
                v49 = (_DWORD *)MmUserProbeAddress;
              *v49 = v8[16];
              v50 = 0;
              v51 = v118;
              while ( v50 < v8[2] )
              {
                v57 = 80LL * v50;
                v119 = v51 + *(_DWORD *)(*((_QWORD *)v8 + 2) + v57 + 8) - v8[14];
                v58 = v57 + v47[2];
                v59 = (_DWORD *)v58;
                if ( v58 >= MmUserProbeAddress )
                  v59 = (_DWORD *)MmUserProbeAddress;
                *v59 = *(_DWORD *)(v57 + *((_QWORD *)v8 + 2));
                v60 = (_DWORD *)(v58 + 16);
                if ( v58 + 16 >= MmUserProbeAddress )
                  v60 = (_DWORD *)MmUserProbeAddress;
                *v60 = *(_DWORD *)(*((_QWORD *)v8 + 2) + v57 + 16);
                v61 = (_QWORD *)(v58 + 8);
                if ( v58 + 8 >= MmUserProbeAddress )
                  v61 = (_QWORD *)MmUserProbeAddress;
                *v61 = v119;
                ++v50;
                v47 = (_QWORD *)v112;
              }
              if ( v8[8] )
              {
                v52 = (char *)v47[3];
                v53 = v8[8];
                if ( (unsigned __int64)&v52[v53] > MmUserProbeAddress || &v52[v53] <= v52 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v52, v46, v53);
                v47 = (_QWORD *)v112;
              }
              if ( v8[12] )
              {
                v95 = (char *)v47[5];
                v96 = v8[12];
                if ( (unsigned __int64)&v95[v96] > MmUserProbeAddress || &v95[v96] <= v95 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v95, v108, v96);
              }
              v7 = 1;
              if ( v8[16] )
              {
                v54 = *(char **)(v112 + 56);
                v55 = v8[16];
                if ( (unsigned __int64)&v54[v55] > MmUserProbeAddress || &v54[v55] <= v54 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v54, v45, v55);
                v7 = 1;
              }
            }
LABEL_49:
            if ( StandardAllocation < 0 )
              goto LABEL_91;
            goto LABEL_50;
          }
          v89 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
          v89[3] = 10647LL;
LABEL_124:
          WdLogEvent5_WdWarning(v89);
LABEL_125:
          v45 = v102;
          goto LABEL_49;
        }
      }
      v90 = *(_DWORD *)(v24 + 12);
      if ( (v90 & 0x20) == 0 )
      {
        StandardAllocation = -1073741811;
        v89 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v38, v40);
        v89[3] = v103;
        v89[4] = 0LL;
        v89[5] = -1073741811LL;
        goto LABEL_124;
      }
      if ( *(_DWORD *)(v24 + 124) != v8[2] )
      {
        v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v38, v40);
        v78[3] = v103;
        v78[4] = v8[2];
        v79 = *(unsigned int *)(v24 + 124);
        goto LABEL_88;
      }
      v101 = *(_DWORD *)(v24 + 104);
      if ( v8[8] != v101 )
      {
        v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v38, v40);
        v78[3] = v103;
        v78[4] = v8[8];
        v79 = *(unsigned int *)(v24 + 104);
LABEL_88:
        v78[5] = v79;
        v78[6] = -1073741811LL;
LABEL_89:
        WdLogEvent5_WdWarning(v78);
        StandardAllocation = -1073741811;
        goto LABEL_90;
      }
      v91 = *(unsigned int *)(v24 + 200);
      if ( !(_DWORD)v91 && *(_DWORD *)(*(_QWORD *)(v40 + 16) + 1664LL) < 0x5000u )
      {
        v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v91, v40);
        v78[3] = v103;
        v78[4] = -1073741811LL;
        goto LABEL_89;
      }
      v128 = 0LL;
      v130 = 0LL;
      v129 = (unsigned int)v91;
      v128 = *(_QWORD *)(v24 + 192);
      HIDWORD(v129) = 7;
      memset(v125, 0, 0x134uLL);
      memset(&v125[39], 0, 0x68uLL);
      v126 = 0LL;
      v127 = 0LL;
      HIDWORD(v125[0]) = *v8;
      LODWORD(v125[2]) = 4;
      v125[3] = &v128;
      v125[39] = *(_QWORD *)(v24 + 96);
      LODWORD(v125[40]) = v101;
      v125[41] = *(_QWORD *)(v24 + 208);
      v125[42] = *(_QWORD *)(v24 + 216);
      LODWORD(v125[6]) = *(_DWORD *)(v24 + 224);
      v125[43] = v108;
      LODWORD(v125[44]) = v8[12];
      v125[45] = v6;
      LODWORD(v125[46]) = v8[16];
      LODWORD(v125[0]) = v125[0] & 0xFFFFBAFF | (4 * (v90 & 0x40 | (32 * (v90 & 0x88)))) | 0x241;
      v125[51] = *(_QWORD *)(v24 + 176);
      if ( (v90 & 0x200) != 0 )
      {
        LODWORD(v126) = v126 | 1;
        goto LABEL_116;
      }
      if ( (v90 & 0x400) != 0 )
      {
        LODWORD(v126) = v126 | 2;
LABEL_116:
        v127 = *(_QWORD *)(v24 + 184);
      }
      StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                             v103,
                             (struct _D3DKM_CREATESTANDARDALLOCATION *)v125,
                             (struct COREDEVICEACCESS *)v121);
      if ( StandardAllocation >= 0 )
      {
        v92 = v125[1];
        *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)v115, (DXGRESOURCEREFERENCE *)v117, v125[1]) + 120LL) = v24;
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v117);
        v93 = *(const void **)(v24 + 96);
        v46 = Src;
        memmove(Src, v93, v8[8]);
        v8[17] = v92;
        v94 = v114;
        *(_DWORD *)v114 = HIDWORD(v125[6]);
        v94[4] = v8[16];
        v45 = v102;
        *((_QWORD *)v94 + 1) = v102;
        *((_QWORD *)v8 + 2) = v94;
        *((_QWORD *)v8 + 3) = v46;
        *((_QWORD *)v8 + 5) = v108;
        *((_QWORD *)v8 + 7) = v45;
        goto LABEL_31;
      }
      goto LABEL_125;
    }
    v70 = WdLogNewEntry5_WdWarning(80 * v29 > 0xFFFFFFFF ? 0xC0000095 : 0, v29, 0xFFFFFFFFLL);
    *(_QWORD *)(v70 + 24) = v103;
    v63 = v101;
    *(_QWORD *)(v70 + 32) = v101;
    WdLogEvent5_WdWarning(v70);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v120);
  }
  OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v111);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v121);
  if ( v107 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v105);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v113);
  if ( v100 )
  {
LABEL_133:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v100 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v100 + 2), v100);
  }
  return v63;
}
