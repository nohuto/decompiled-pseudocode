/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00EA91C
 * Callers:
 *     DxgkOpenResource @ 0x1C00EA830 (DxgkOpenResource.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C00030B4 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004104 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C000D5E8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000D614 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0014504 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0014764 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00958D4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D810 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009DD6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00EB078 (_OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__--_2_--ENSURE_SHARED_RESOURCE_DERE.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(ULONG64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rdx
  __int64 v7; // rcx
  PVOID v8; // r15
  PVOID v9; // r12
  PVOID v10; // rbx
  unsigned int *v11; // rsi
  ULONG64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGDEVICE *v16; // r14
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r13
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  char v34; // r8
  unsigned __int64 v35; // rdx
  SIZE_T v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  struct _EX_RUNDOWN_REF *v40; // r9
  unsigned int v41; // eax
  __int64 v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  int StandardAllocation; // r15d
  void *v50; // r13
  _QWORD *v51; // r8
  _DWORD *v52; // rdx
  _DWORD *v53; // rdx
  unsigned int i; // r10d
  char *v55; // rcx
  size_t v56; // r8
  char *v57; // rcx
  size_t v58; // r8
  __int64 v60; // r11
  ULONG64 v61; // r9
  _DWORD *v62; // rdx
  _DWORD *v63; // rdx
  _QWORD *v64; // rdx
  __int64 v65; // rax
  unsigned int v66; // ebx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rcx
  _QWORD *v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rdx
  _QWORD *v84; // rax
  int v85; // ebx
  __int64 v86; // r8
  unsigned int v87; // ecx
  unsigned int v88; // ebx
  _DWORD *v89; // rcx
  char *v90; // rcx
  size_t v91; // r8
  struct DXGPROCESS *v92; // rbx
  unsigned int v93; // r11d
  unsigned int v94; // ecx
  __int64 v95; // r8
  unsigned int v96; // r9d
  int v97; // edx
  unsigned int v98; // r11d
  struct DXGRESOURCE *v99; // rbx
  __int64 v100; // rax
  unsigned int v101; // [rsp+30h] [rbp-3D8h]
  char v102; // [rsp+50h] [rbp-3B8h]
  bool v103; // [rsp+51h] [rbp-3B7h]
  struct DXGDEVICE *v104; // [rsp+58h] [rbp-3B0h] BYREF
  signed int v105; // [rsp+60h] [rbp-3A8h]
  void *Src; // [rsp+68h] [rbp-3A0h]
  struct DXGDEVICE *v107; // [rsp+70h] [rbp-398h] BYREF
  char v108; // [rsp+78h] [rbp-390h]
  char v109; // [rsp+79h] [rbp-38Fh]
  char v110; // [rsp+7Ah] [rbp-38Eh]
  char v111; // [rsp+7Bh] [rbp-38Dh]
  unsigned int v112; // [rsp+88h] [rbp-380h]
  char v113[8]; // [rsp+90h] [rbp-378h] BYREF
  __int64 v114; // [rsp+98h] [rbp-370h]
  char v115; // [rsp+A0h] [rbp-368h]
  PVOID v116; // [rsp+A8h] [rbp-360h]
  unsigned int *v117; // [rsp+B0h] [rbp-358h]
  __int64 v118; // [rsp+B8h] [rbp-350h] BYREF
  ULONG64 v119; // [rsp+C0h] [rbp-348h]
  PVOID v120; // [rsp+C8h] [rbp-340h]
  _BYTE v121[16]; // [rsp+D0h] [rbp-338h] BYREF
  struct DXGPROCESS *v122; // [rsp+E0h] [rbp-328h]
  PVOID P; // [rsp+E8h] [rbp-320h]
  _BYTE v124[16]; // [rsp+F0h] [rbp-318h] BYREF
  struct DXGDEVICE *v125; // [rsp+100h] [rbp-308h]
  struct _EX_RUNDOWN_REF *v126; // [rsp+108h] [rbp-300h] BYREF
  __int64 v127; // [rsp+110h] [rbp-2F8h]
  __int64 v128; // [rsp+118h] [rbp-2F0h]
  _BYTE v129[32]; // [rsp+120h] [rbp-2E8h] BYREF
  PERESOURCE *v130[12]; // [rsp+140h] [rbp-2C8h] BYREF
  _BYTE v131[32]; // [rsp+1A0h] [rbp-268h] BYREF
  _OWORD v132[4]; // [rsp+1C0h] [rbp-248h] BYREF
  __int64 v133; // [rsp+200h] [rbp-208h]
  _QWORD v134[52]; // [rsp+210h] [rbp-1F8h] BYREF
  __int64 v135; // [rsp+3B0h] [rbp-58h]
  __int64 v136; // [rsp+3B8h] [rbp-50h]
  int v137; // [rsp+3C0h] [rbp-48h] BYREF
  int v138; // [rsp+3C4h] [rbp-44h]
  int v139; // [rsp+3C8h] [rbp-40h]
  __int64 v140; // [rsp+3CCh] [rbp-3Ch]
  int v141; // [rsp+3D4h] [rbp-34h]

  v112 = a2;
  v119 = a1;
  v103 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v122 = Current;
  v8 = 0LL;
  Src = 0LL;
  v9 = 0LL;
  v116 = 0LL;
  v10 = 0LL;
  v120 = 0LL;
  v102 = 0;
  if ( !Current )
  {
    v65 = WdLogNewEntry5_WdError(v7);
    v66 = -1073741811;
    *(_QWORD *)(v65 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v65);
    return v66;
  }
  v11 = (unsigned int *)v132;
  if ( v103 )
  {
    v12 = a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = MmUserProbeAddress;
    v132[0] = *(_OWORD *)v12;
    v132[1] = *(_OWORD *)(v12 + 16);
    v132[2] = *(_OWORD *)(v12 + 32);
    v132[3] = *(_OWORD *)(v12 + 48);
    v133 = *(_QWORD *)(v12 + 64);
  }
  else
  {
    v11 = (unsigned int *)a1;
  }
  v117 = v11;
  v127 = *((_QWORD *)v11 + 7);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v104, *v11, (struct _KTHREAD **)Current, &v107);
  v16 = v107;
  v125 = v107;
  if ( !v107 )
  {
    v67 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v67 + 24) = *v11;
    v66 = -1073741811;
    *(_QWORD *)(v67 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v67);
    goto LABEL_140;
  }
  if ( !v11[16] && !v11[12] )
  {
    v68 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v68 + 24) = v16;
    v66 = -1073741811;
    *(_QWORD *)(v68 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v68);
    goto LABEL_140;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v121,
    v107);
  v114 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL);
  v115 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v113);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v130, (__int64)v16, 2, v17, 0);
  v105 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v130);
  if ( v105 < 0 )
  {
    v69 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v69 + 24) = v16;
    v66 = v105;
    *(_QWORD *)(v69 + 32) = v105;
    WdLogEvent5_WdWarning(v69);
    goto LABEL_137;
  }
  if ( !a2 )
  {
    v100 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v100 + 24) = v16;
    v66 = -1073741811;
    *(_QWORD *)(v100 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v100);
LABEL_137:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v130);
    if ( v115 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v113);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v121);
LABEL_140:
    if ( v104 )
      goto LABEL_141;
    return v66;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v124);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v124);
  Global = DXGGLOBAL::GetGlobal(v21);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2, 2);
  v27 = ObjectA;
  if ( !ObjectA )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
    v70[3] = v16;
LABEL_79:
    v66 = -1073741811;
    v71 = v112;
    v70[5] = -1073741811LL;
    v70[4] = v71;
    WdLogEvent5_WdWarning(v70);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v124);
    goto LABEL_137;
  }
  _m_prefetchw((const void *)(ObjectA + 60));
  v28 = *(_DWORD *)(ObjectA + 60);
  do
  {
    if ( !v28 )
    {
      v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
      v70[3] = v107;
      v70[6] = 10211LL;
      goto LABEL_79;
    }
    v25 = (unsigned int)(v28 + 1);
    v29 = v28;
    v28 = _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 60), v25, v28);
  }
  while ( v29 != v28 );
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v124);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v124);
  v118 = v27;
  if ( (*(_DWORD *)(v27 + 12) & 0x10) != 0 )
  {
    v72 = WdLogNewEntry5_WdEvent(v31, v30, v32, v33);
    *(_QWORD *)(v72 + 24) = v27;
    v66 = -1073741823;
    *(_QWORD *)(v72 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v72);
  }
  else
  {
    DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v129, v122);
    if ( (v34 & 2) != 0 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v130);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v113);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v129, 1u);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v113);
      v105 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v130);
      if ( v105 < 0 )
      {
        v77 = WdLogNewEntry5_WdWarning(v75, v74, v76);
        *(_QWORD *)(v77 + 24) = v107;
        v66 = v105;
        *(_QWORD *)(v77 + 32) = v105;
        WdLogEvent5_WdWarning(v77);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v129);
        OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v118);
        goto LABEL_137;
      }
    }
    v35 = v11[2];
    v105 = 80 * v35 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( 80 * v35 <= 0xFFFFFFFF )
    {
      v36 = 80 * v35;
      if ( !is_mul_ok(v35, 0x50uLL) )
        v36 = -1LL;
      P = operator new(v36, 0x4B677844u, PagedPool);
      if ( !P )
      {
        v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39);
        v78[3] = v107;
        v78[4] = v11[2];
        StandardAllocation = -1073741801;
        v78[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v78);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v129);
        OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v118);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v130);
        if ( v115 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v113);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v121);
        if ( v104 )
          goto LABEL_61;
        return (unsigned int)StandardAllocation;
      }
      v41 = v11[16];
      if ( v41 )
      {
        v9 = operator new(v41, 0x4B677844u, PagedPool);
        v116 = v9;
        if ( !v9 )
        {
          v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v42, v39);
          v79[3] = v107;
          v80 = v11[16];
          goto LABEL_94;
        }
      }
      if ( v11[12] )
      {
        v8 = operator new(v11[12], 0x4B677844u, PagedPool);
        Src = v8;
        if ( !v8 )
        {
          v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v83, v39);
          v79[3] = v107;
          v80 = v11[12];
LABEL_94:
          v79[4] = v80;
          StandardAllocation = -1073741801;
          v79[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v79);
LABEL_98:
          v50 = Src;
LABEL_123:
          if ( v102 )
          {
            v92 = v122;
            DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v131, v122);
            v93 = v11[17];
            v112 = v93;
            v94 = (v93 >> 6) & 0xFFFFFF;
            v105 = *((_DWORD *)v92 + 60);
            if ( v94 < v105
              && (v95 = *((_QWORD *)v92 + 28),
                  v96 = *(_DWORD *)(v95 + 16LL * v94 + 8),
                  v97 = (v96 >> 5) & 3,
                  v98 = v93 >> 30,
                  v98 == v97)
              && (v96 & 0x2000) == 0
              && (v96 & 0x1F) != 0
              && (*(_BYTE *)(v95 + 16LL * v94 + 8) & 0x1F) == 4 )
            {
              v99 = *(struct DXGRESOURCE **)(v95 + 16LL * v94);
              if ( v99 && v94 < v105 && v98 == v97 && (v96 & 0x2000) == 0 )
                *(_DWORD *)(v95 + 16LL * ((v112 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            }
            else
            {
              v99 = 0LL;
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v131);
            DXGDEVICE::DestroyAllocationInternal(v107, 0, 0LL, v99, 0LL, DXGDEVICE::DestroyFlagsDefault);
          }
LABEL_50:
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
          if ( v50 )
            ExFreePoolWithTag(v50, 0);
          if ( P )
            ExFreePoolWithTag(P, 0);
          if ( v120 )
            ExFreePoolWithTag(v120, 0);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v129);
          OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v118);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v130);
          if ( v115 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v113);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v121);
          if ( v104 )
          {
LABEL_61:
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v104 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v104 + 2), v104);
          }
          return (unsigned int)StandardAllocation;
        }
      }
      v43 = v11[8];
      if ( v43 )
      {
        v10 = operator new(v43, 0x4B677844u, PagedPool);
        v120 = v10;
        if ( !v10 )
        {
          v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v44, v39);
          v79[3] = v107;
          v80 = v11[8];
          goto LABEL_94;
        }
      }
      v45 = *((_QWORD *)v125 + 2);
      if ( *(_QWORD *)(v27 + 72) == v45 )
      {
        v38 = *((_QWORD *)v107 + 209);
        if ( *(_QWORD *)(v27 + 88) == v38 )
        {
          if ( v103 )
          {
            *((_QWORD *)v11 + 7) = v9;
            *((_QWORD *)v11 + 5) = v8;
            *((_QWORD *)v11 + 3) = v10;
            *((_QWORD *)v11 + 2) = P;
          }
          StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                                 v107,
                                 (__int64)v11,
                                 v112,
                                 v40,
                                 0,
                                 v130,
                                 v101,
                                 0LL,
                                 0LL,
                                 0LL);
          if ( StandardAllocation >= 0 )
          {
            v50 = Src;
LABEL_31:
            v111 = 1;
            v110 = 1;
            v109 = 1;
            v108 = 1;
            v102 = 1;
            if ( v103 )
            {
              v51 = (_QWORD *)v119;
              v52 = (_DWORD *)(v119 + 68);
              if ( v119 + 68 >= MmUserProbeAddress )
                v52 = (_DWORD *)MmUserProbeAddress;
              *v52 = v11[17];
              v53 = v51 + 8;
              if ( (unsigned __int64)(v51 + 8) >= MmUserProbeAddress )
                v53 = (_DWORD *)MmUserProbeAddress;
              *v53 = v11[16];
              for ( i = 0; i < v11[2]; ++i )
              {
                v60 = 80LL * i;
                v128 = v127 + *(_DWORD *)(v60 + *((_QWORD *)v11 + 2) + 8) - v11[14];
                v61 = v60 + v51[2];
                v62 = (_DWORD *)v61;
                if ( v61 >= MmUserProbeAddress )
                  v62 = (_DWORD *)MmUserProbeAddress;
                *v62 = *(_DWORD *)(v60 + *((_QWORD *)v11 + 2));
                v63 = (_DWORD *)(v61 + 16);
                if ( v61 + 16 >= MmUserProbeAddress )
                  v63 = (_DWORD *)MmUserProbeAddress;
                *v63 = *(_DWORD *)(v60 + *((_QWORD *)v11 + 2) + 16);
                v64 = (_QWORD *)(v61 + 8);
                if ( v61 + 8 >= MmUserProbeAddress )
                  v64 = (_QWORD *)MmUserProbeAddress;
                *v64 = v128;
                v51 = (_QWORD *)v119;
              }
              if ( v11[8] )
              {
                v55 = (char *)v51[3];
                v56 = v11[8];
                if ( (unsigned __int64)&v55[v56] > MmUserProbeAddress || &v55[v56] <= v55 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v55, v10, v56);
                v51 = (_QWORD *)v119;
              }
              if ( v11[12] )
              {
                v90 = (char *)v51[5];
                v91 = v11[12];
                if ( (unsigned __int64)&v90[v91] > MmUserProbeAddress || &v90[v91] <= v90 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v90, v50, v91);
              }
              v102 = 1;
              if ( v11[16] )
              {
                v57 = *(char **)(v119 + 56);
                v58 = v11[16];
                if ( (unsigned __int64)&v57[v58] > MmUserProbeAddress || &v57[v58] <= v57 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v57, v9, v58);
                v102 = 1;
              }
            }
LABEL_49:
            if ( StandardAllocation < 0 )
              goto LABEL_123;
            goto LABEL_50;
          }
          v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v46, v48);
          v84[3] = 10504LL;
LABEL_121:
          WdLogEvent5_WdWarning(v84);
LABEL_122:
          v50 = Src;
          goto LABEL_49;
        }
      }
      v85 = *(_DWORD *)(v27 + 12);
      if ( (v85 & 0x20) == 0 )
      {
        StandardAllocation = -1073741811;
        v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v45, v39);
        v84[3] = v107;
        v84[4] = 0LL;
        v84[5] = -1073741811LL;
        goto LABEL_121;
      }
      if ( *(_DWORD *)(v27 + 124) != v11[2] )
      {
        v81 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v45, v39);
        v81[3] = v107;
        v81[4] = v11[2];
        v82 = *(unsigned int *)(v27 + 124);
        goto LABEL_96;
      }
      v105 = *(_DWORD *)(v27 + 104);
      if ( v11[8] != v105 )
      {
        v81 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v45, v39);
        v81[3] = v107;
        v81[4] = v11[8];
        v82 = *(unsigned int *)(v27 + 104);
LABEL_96:
        v81[5] = v82;
        v81[6] = -1073741811LL;
LABEL_97:
        WdLogEvent5_WdWarning(v81);
        StandardAllocation = -1073741811;
        goto LABEL_98;
      }
      v86 = *(unsigned int *)(v27 + 200);
      if ( !(_DWORD)v86 && *(_DWORD *)(*(_QWORD *)(v45 + 16) + 1528LL) < 0x5000u )
      {
        v81 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v45, v86);
        v81[3] = v107;
        v81[4] = -1073741811LL;
        goto LABEL_97;
      }
      v138 = 0;
      v140 = 0LL;
      v141 = 0;
      v139 = v86;
      v137 = *(_DWORD *)(v27 + 192);
      v138 = *(_DWORD *)(v27 + 196);
      LODWORD(v140) = 7;
      memset(v134, 0, 0x134uLL);
      memset(&v134[39], 0, 0x68uLL);
      v135 = 0LL;
      v136 = 0LL;
      v87 = v134[0] & 0xFFFFBEFF | (4 * (v85 & 0x40 | (32 * (v85 & 0x80)))) | 0x41;
      HIDWORD(v134[0]) = *v11;
      LODWORD(v134[2]) = 4;
      v134[3] = &v137;
      v134[39] = *(_QWORD *)(v27 + 96);
      LODWORD(v134[40]) = v105;
      v134[41] = *(_QWORD *)(v27 + 208);
      v134[42] = *(_QWORD *)(v27 + 216);
      LODWORD(v134[6]) = *(_DWORD *)(v27 + 224);
      v134[43] = v8;
      LODWORD(v134[44]) = v11[12];
      v134[45] = v9;
      LODWORD(v134[46]) = v11[16];
      LODWORD(v134[0]) = (v87 ^ (v85 << 7)) & 0x400 ^ v87 | 0x200;
      v134[51] = *(_QWORD *)(v27 + 176);
      if ( (v85 & 0x200) != 0 )
      {
        LODWORD(v135) = v135 | 1;
        goto LABEL_113;
      }
      if ( (v85 & 0x400) != 0 )
      {
        LODWORD(v135) = v135 | 2;
LABEL_113:
        v136 = *(_QWORD *)(v27 + 184);
      }
      StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                             v107,
                             (struct _D3DKM_CREATESTANDARDALLOCATION *)v134,
                             v130);
      if ( StandardAllocation >= 0 )
      {
        v88 = v134[1];
        *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)v122, (DXGRESOURCEREFERENCE *)&v126, v134[1]) + 120LL) = v27;
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v126);
        memmove(v120, *(const void **)(v27 + 96), v11[8]);
        v11[17] = v88;
        v89 = P;
        *(_DWORD *)P = HIDWORD(v134[6]);
        v89[4] = v11[16];
        *((_QWORD *)v89 + 1) = v9;
        *((_QWORD *)v11 + 2) = v89;
        v10 = v120;
        *((_QWORD *)v11 + 3) = v120;
        v50 = Src;
        *((_QWORD *)v11 + 5) = Src;
        *((_QWORD *)v11 + 7) = v9;
        goto LABEL_31;
      }
      goto LABEL_122;
    }
    v73 = WdLogNewEntry5_WdWarning(80 * v35 > 0xFFFFFFFF ? 0xC0000095 : 0, v35, 0xFFFFFFFFLL);
    *(_QWORD *)(v73 + 24) = v107;
    v66 = v105;
    *(_QWORD *)(v73 + 32) = v105;
    WdLogEvent5_WdWarning(v73);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v129);
  }
  OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v118);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v130);
  if ( v115 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v113);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v121);
  if ( v104 )
  {
LABEL_141:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v104 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v104 + 2), v104);
  }
  return v66;
}
