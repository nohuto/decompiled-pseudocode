/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0100160
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C0100890 (DxgkOpenResourceFromNtHandle.c)
 * Callees:
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0001BD8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0001C04 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004E20 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0013770 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00138F0 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013970 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00139F0 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusSendOpenResource@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IIIPEAI2@Z @ 0x1C0030DB0 (-VmBusSendOpenResource@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IIIPEAI2@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00C1F00 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C9C30 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00FEC20 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        unsigned int *a1,
        __int64 a2,
        struct _EX_RUNDOWN_REF *a3,
        unsigned int a4)
{
  bool v6; // bl
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // r13
  PVOID v11; // r12
  unsigned int *v12; // rsi
  ULONG64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGDEVICE *v18; // r15
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  ULONG_PTR Count; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  SIZE_T v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rdx
  void *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // r8
  char *v44; // r9
  int StandardAllocation; // r12d
  _DWORD *v46; // rdx
  _DWORD *v47; // rdx
  unsigned int i; // r10d
  char *v49; // rcx
  size_t v50; // r8
  char *v51; // rcx
  size_t v52; // r8
  __int64 v54; // r11
  _DWORD *v55; // rdx
  _DWORD *v56; // rdx
  _QWORD *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rcx
  __int64 v76; // r8
  unsigned int v77; // ecx
  unsigned int v78; // ebx
  DXGRESOURCEREFERENCE *ResourceSafe; // rax
  _DWORD *v80; // rcx
  PVOID v81; // rax
  char *v82; // rcx
  size_t v83; // r8
  SIZE_T v84; // rax
  PVOID v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  unsigned int j; // ebx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  unsigned int v102; // r8d
  unsigned int v103; // edx
  __int64 v104; // r10
  int v105; // r9d
  struct DXGRESOURCE *v106; // rbx
  __int64 v107; // rax
  int v108; // edx
  __int64 v109; // rax
  char v110; // [rsp+50h] [rbp-3C8h]
  bool v111; // [rsp+51h] [rbp-3C7h]
  struct DXGDEVICE *v112; // [rsp+58h] [rbp-3C0h] BYREF
  char v113; // [rsp+60h] [rbp-3B8h]
  char v114; // [rsp+61h] [rbp-3B7h]
  char v115; // [rsp+62h] [rbp-3B6h]
  unsigned int v116; // [rsp+64h] [rbp-3B4h] BYREF
  __int64 v117; // [rsp+68h] [rbp-3B0h]
  struct DXGDEVICE *v118; // [rsp+70h] [rbp-3A8h] BYREF
  int v119; // [rsp+78h] [rbp-3A0h]
  PVOID v120; // [rsp+80h] [rbp-398h]
  struct _EX_RUNDOWN_REF *v121; // [rsp+88h] [rbp-390h] BYREF
  PVOID v122; // [rsp+90h] [rbp-388h]
  void *Src; // [rsp+98h] [rbp-380h]
  char v124[8]; // [rsp+A0h] [rbp-378h] BYREF
  __int64 v125; // [rsp+A8h] [rbp-370h]
  char v126; // [rsp+B0h] [rbp-368h]
  struct DXGPROCESS *v127; // [rsp+B8h] [rbp-360h]
  unsigned int *v128; // [rsp+C0h] [rbp-358h]
  struct _EX_RUNDOWN_REF *v129; // [rsp+C8h] [rbp-350h] BYREF
  PVOID P; // [rsp+D0h] [rbp-348h]
  _BYTE v131[16]; // [rsp+D8h] [rbp-340h] BYREF
  PVOID v132; // [rsp+E8h] [rbp-330h]
  DXGSHAREDRESOURCE *v133; // [rsp+F0h] [rbp-328h]
  int v134; // [rsp+F8h] [rbp-320h]
  struct _EX_RUNDOWN_REF *v135; // [rsp+100h] [rbp-318h] BYREF
  __int64 v136; // [rsp+108h] [rbp-310h]
  _BYTE v137[32]; // [rsp+110h] [rbp-308h] BYREF
  PERESOURCE *v138[12]; // [rsp+130h] [rbp-2E8h] BYREF
  _BYTE v139[24]; // [rsp+190h] [rbp-288h] BYREF
  _BYTE v140[24]; // [rsp+1A8h] [rbp-270h] BYREF
  _OWORD v141[6]; // [rsp+1C0h] [rbp-258h] BYREF
  __int64 v142; // [rsp+220h] [rbp-1F8h]
  _QWORD v143[52]; // [rsp+230h] [rbp-1E8h] BYREF
  int v144; // [rsp+3D0h] [rbp-48h] BYREF
  int v145; // [rsp+3D4h] [rbp-44h]
  int v146; // [rsp+3D8h] [rbp-40h]
  __int64 v147; // [rsp+3DCh] [rbp-3Ch]
  int v148; // [rsp+3E4h] [rbp-34h]

  v116 = a4;
  v129 = a3;
  v120 = a1;
  v6 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v111 = v6;
  Current = DXGPROCESS::GetCurrent(v7);
  v127 = Current;
  v122 = 0LL;
  v11 = 0LL;
  P = 0LL;
  Src = 0LL;
  v110 = 0;
  if ( Current )
  {
    v12 = (unsigned int *)v141;
    if ( v6 )
    {
      v13 = (ULONG64)a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v13 = MmUserProbeAddress;
      v141[0] = *(_OWORD *)v13;
      v141[1] = *(_OWORD *)(v13 + 16);
      v141[2] = *(_OWORD *)(v13 + 32);
      v141[3] = *(_OWORD *)(v13 + 48);
      v141[4] = *(_OWORD *)(v13 + 64);
      v141[5] = *(_OWORD *)(v13 + 80);
      v142 = *(_QWORD *)(v13 + 96);
    }
    else
    {
      v12 = a1;
    }
    v128 = v12;
    v136 = *((_QWORD *)v12 + 9);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v112, *v12, (struct _KTHREAD **)Current, &v118);
    v18 = v118;
    if ( !v118 )
    {
      v59 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v59 + 24) = *v12;
      *(_QWORD *)(v59 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v59);
LABEL_154:
      if ( v112 && _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
      return 3221225485LL;
    }
    if ( !v12[16] && !v12[12] )
    {
      v60 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
      *(_QWORD *)(v60 + 24) = v18;
      *(_QWORD *)(v60 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v60);
      goto LABEL_154;
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v131,
      v118);
    v125 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
    v126 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v124);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v138, (__int64)v18, 2LL, v19, 0);
    v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v138);
    Count = v20;
    if ( v20 < 0 )
    {
      v61 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
      *(_QWORD *)(v61 + 24) = v18;
      *(_QWORD *)(v61 + 32) = Count;
      WdLogEvent5_WdWarning(v61);
      goto LABEL_75;
    }
    if ( a3 )
    {
      Count = a3[2].Count;
      v121 = (struct _EX_RUNDOWN_REF *)Count;
      if ( Count )
      {
        v133 = 0LL;
        if ( (*(_DWORD *)(Count + 12) & 0x10) != 0 )
        {
          v64 = WdLogNewEntry5_WdEvent(v22);
          *(_QWORD *)(v64 + 24) = Count;
          LODWORD(Count) = -1073741823;
          *(_QWORD *)(v64 + 32) = -1073741823LL;
          WdLogEvent5_WdEvent(v64);
        }
        else
        {
          DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v137, Current);
          if ( (v26 & 2) != 0 )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)v138);
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v124);
            DXGUSERCRIT::Acquire((DXGUSERCRIT *)v137, 1u);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v124);
            v119 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v138);
            if ( v119 < 0 )
            {
              v62 = WdLogNewEntry5_WdWarning(v67, v66, v26, v27);
              *(_QWORD *)(v62 + 24) = v18;
              LODWORD(Count) = v119;
              *(_QWORD *)(v62 + 32) = v119;
              WdLogEvent5_WdWarning(v62);
              DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v137);
LABEL_75:
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v138);
              if ( v126 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v124);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v131);
              if ( !v112 )
                return (unsigned int)Count;
              goto LABEL_78;
            }
          }
          v28 = v12[4];
          if ( 80 * v28 <= 0xFFFFFFFF )
          {
            v134 = 80 * v28;
            v29 = 80 * v28;
            if ( !is_mul_ok(v28, 0x50uLL) )
              v29 = -1LL;
            v132 = operator new(v29, 0x4B677844u, PagedPool);
            if ( !v132 )
            {
              v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
              v68[3] = v18;
              v68[4] = v12[4];
              StandardAllocation = -1073741801;
              v68[5] = -1073741801LL;
              WdLogEvent5_WdWarning(v68);
              DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v137);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v138);
              if ( v126 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v124);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v131);
              if ( !v112 )
                return (unsigned int)StandardAllocation;
LABEL_59:
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
              return (unsigned int)StandardAllocation;
            }
            v34 = v12[16];
            if ( v34 && (v11 = operator new(v34, 0x4B677844u, PagedPool), (P = v11) == 0LL) )
            {
              v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v32, v33);
              v69[3] = v18;
              v70 = v12[16];
            }
            else
            {
              if ( v12[12] )
              {
                v122 = operator new(v12[12], 0x4B677844u, PagedPool);
                if ( !v122 )
                {
                  v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v72, v71, v32, v33);
                  v69[3] = v18;
                  v70 = v12[12];
                  goto LABEL_96;
                }
              }
              v37 = v12[8];
              if ( !v37 )
              {
                v39 = Src;
                goto LABEL_22;
              }
              v39 = operator new(v37, 0x4B677844u, PagedPool);
              Src = v39;
              if ( v39 )
              {
LABEL_22:
                v40 = *((_QWORD *)v18 + 2);
                if ( *(_QWORD *)(Count + 72) == v40 && *(_QWORD *)(Count + 88) == *((_QWORD *)v18 + 225) )
                {
                  if ( v111 )
                  {
                    *((_QWORD *)v12 + 9) = v11;
                    *((_QWORD *)v12 + 7) = v122;
                    *((_QWORD *)v12 + 5) = v39;
                    *((_QWORD *)v12 + 3) = v132;
                  }
                  StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                                         v18,
                                         (__int64)v12,
                                         v32,
                                         (__int64)v129,
                                         0,
                                         v138,
                                         v116,
                                         0LL,
                                         0LL,
                                         0LL);
                  if ( StandardAllocation >= 0 )
                  {
LABEL_27:
                    v115 = 1;
                    v114 = 1;
                    v113 = 1;
                    if ( v111 )
                    {
                      v43 = v120;
                      v46 = (char *)v120 + 80;
                      if ( (unsigned __int64)v120 + 80 >= MmUserProbeAddress )
                        v46 = (_DWORD *)MmUserProbeAddress;
                      *v46 = v12[20];
                      v47 = v43 + 8;
                      if ( (unsigned __int64)(v43 + 8) >= MmUserProbeAddress )
                        v47 = (_DWORD *)MmUserProbeAddress;
                      *v47 = v12[16];
                      for ( i = 0; i < v12[4]; ++i )
                      {
                        v54 = 80LL * i;
                        v117 = v136 + *(_DWORD *)(v54 + *((_QWORD *)v12 + 3) + 8) - v12[18];
                        v44 = (char *)(v54 + v43[3]);
                        v55 = v44;
                        if ( (unsigned __int64)v44 >= MmUserProbeAddress )
                          v55 = (_DWORD *)MmUserProbeAddress;
                        *v55 = *(_DWORD *)(v54 + *((_QWORD *)v12 + 3));
                        v56 = v44 + 16;
                        if ( (unsigned __int64)(v44 + 16) >= MmUserProbeAddress )
                          v56 = (_DWORD *)MmUserProbeAddress;
                        *v56 = *(_DWORD *)(v54 + *((_QWORD *)v12 + 3) + 16);
                        v57 = v44 + 8;
                        if ( (unsigned __int64)(v44 + 8) >= MmUserProbeAddress )
                          v57 = (_QWORD *)MmUserProbeAddress;
                        *v57 = v117;
                        v18 = v118;
                        v43 = v120;
                      }
                      if ( v12[8] )
                      {
                        v49 = (char *)v43[5];
                        v50 = v12[8];
                        if ( (unsigned __int64)&v49[v50] > MmUserProbeAddress || &v49[v50] <= v49 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v49, Src, v50);
                        v18 = v118;
                        v43 = v120;
                      }
                      if ( v12[12] )
                      {
                        v82 = (char *)v43[7];
                        v83 = v12[12];
                        if ( (unsigned __int64)&v82[v83] > MmUserProbeAddress || &v82[v83] <= v82 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v82, v122, v83);
                        v18 = v118;
                      }
                      if ( v12[16] )
                      {
                        v51 = (char *)*((_QWORD *)v120 + 9);
                        v52 = v12[16];
                        if ( (unsigned __int64)&v51[v52] > MmUserProbeAddress || &v51[v52] <= v51 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v51, P, v52);
                        v18 = v118;
                      }
                    }
                    v110 = 1;
                    if ( *((_BYTE *)v18 + 1821) )
                    {
                      v84 = 4LL * v12[4];
                      if ( !is_mul_ok(v12[4], 4uLL) )
                        v84 = -1LL;
                      v85 = operator new(v84, 0x4B677844u, PagedPool);
                      v120 = v85;
                      if ( v85 )
                      {
                        StandardAllocation = DXGADAPTER::VmBusSendOpenResource(
                                               *(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL),
                                               Current,
                                               v18,
                                               *(_DWORD *)(Count + 28),
                                               v12[4],
                                               v12[16],
                                               &v116,
                                               (unsigned int *)v85);
                        if ( StandardAllocation >= 0 )
                        {
                          DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
                            (DXGHANDLETABLELOCKSHARED *)v139,
                            Current,
                            v90,
                            v91);
                          DXGPROCESS::GetResourceUnsafe((__int64)Current, (DXGRESOURCEREFERENCE *)&v129, v12[20]);
                          if ( v129 )
                          {
                            HIDWORD(v129[2].Ptr) = v116;
                            for ( j = 0; j < v12[4]; ++j )
                            {
                              DXGPROCESS::GetAllocationUnsafe(
                                (__int64)Current,
                                (DXGALLOCATIONREFERENCE *)&v121,
                                *(_DWORD *)(*((_QWORD *)v12 + 3) + 80LL * j));
                              if ( !v121 )
                              {
                                v86 = WdLogNewEntry5_WdWarning(v99, v98, v100, v101);
                                *(_QWORD *)(v86 + 24) = 9772LL;
                                WdLogEvent5_WdWarning(v86);
                                StandardAllocation = -1073741811;
                                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v121, v87, v88, v89);
                                break;
                              }
                              LODWORD(v121[12].Count) = *((_DWORD *)v120 + j);
                              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v121, j, v100, v101);
                            }
                          }
                          else
                          {
                            v96 = WdLogNewEntry5_WdWarning(v93, v92, v94, v95);
                            *(_QWORD *)(v96 + 24) = 9761LL;
                            WdLogEvent5_WdWarning(v96);
                            StandardAllocation = -1073741811;
                          }
                          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v129);
                          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v139);
                        }
                        ExFreePoolWithTag(v120, 0);
                      }
                      else
                      {
                        StandardAllocation = -1073741801;
                      }
                      v110 = 1;
                    }
LABEL_46:
                    if ( StandardAllocation >= 0 )
                      goto LABEL_47;
                    goto LABEL_134;
                  }
                  v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
                  v73[3] = 9616LL;
LABEL_133:
                  WdLogEvent5_WdWarning(v73);
                  goto LABEL_46;
                }
                v116 = *(_DWORD *)(Count + 12);
                if ( (v116 & 0x20) == 0 )
                {
                  StandardAllocation = -1073741811;
                  v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v40, v32, v33);
                  v73[3] = v18;
                  v73[4] = v129;
                  v73[5] = -1073741811LL;
                  goto LABEL_133;
                }
                if ( *(_DWORD *)(Count + 124) == v12[4] )
                {
                  v119 = *(_DWORD *)(Count + 104);
                  if ( v12[8] == v119 )
                  {
                    v76 = *(unsigned int *)(Count + 184);
                    if ( (_DWORD)v76 || *(_DWORD *)(*(_QWORD *)(v40 + 16) + 1504LL) >= 0x5000u )
                    {
                      v145 = 0;
                      v147 = 0LL;
                      v148 = 0;
                      v146 = v76;
                      v144 = *(_DWORD *)(Count + 176);
                      v145 = *(_DWORD *)(Count + 180);
                      LODWORD(v147) = 7;
                      memset(v143, 0, 0x198uLL);
                      v77 = v143[0] & 0xFFFFBEFF | (4 * (v116 & 0x40 | (32 * (v116 & 0x80)))) | 0x41;
                      HIDWORD(v143[0]) = *v12;
                      LODWORD(v143[2]) = 4;
                      v143[3] = &v144;
                      v143[39] = *(_QWORD *)(Count + 96);
                      LODWORD(v143[40]) = v119;
                      v143[41] = *(_QWORD *)(Count + 192);
                      v143[42] = *(_QWORD *)(Count + 200);
                      LODWORD(v143[6]) = *(_DWORD *)(Count + 208);
                      v143[43] = v122;
                      LODWORD(v143[44]) = v12[12];
                      v143[45] = v11;
                      LODWORD(v143[46]) = v12[16];
                      LODWORD(v143[0]) = ((unsigned __int16)v77 ^ (unsigned __int16)((_WORD)v116 << 7)) & 0x400 ^ v77 | 0x200;
                      StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                             v18,
                                             (struct _D3DKM_CREATESTANDARDALLOCATION *)v143,
                                             v138);
                      if ( StandardAllocation < 0 )
                        goto LABEL_46;
                      v78 = v143[1];
                      ResourceSafe = DXGPROCESS::GetResourceSafe(
                                       (__int64)Current,
                                       (DXGRESOURCEREFERENCE *)&v135,
                                       v143[1]);
                      *(_QWORD *)(*(_QWORD *)ResourceSafe + 120LL) = v121;
                      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v135);
                      memmove(Src, v121[12].Ptr, v12[8]);
                      v12[20] = v78;
                      v80 = v132;
                      *(_DWORD *)v132 = HIDWORD(v143[6]);
                      v80[4] = v12[16];
                      v81 = P;
                      *((_QWORD *)v80 + 1) = P;
                      *((_QWORD *)v12 + 3) = v80;
                      v44 = (char *)Src;
                      *((_QWORD *)v12 + 5) = Src;
                      *((_QWORD *)v12 + 7) = v122;
                      *((_QWORD *)v12 + 9) = v81;
                      Count = (ULONG_PTR)v121;
                      goto LABEL_27;
                    }
                    v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v40, v76, v33);
                    v74[3] = v18;
                    v74[4] = -1073741811LL;
LABEL_107:
                    WdLogEvent5_WdWarning(v74);
                    StandardAllocation = -1073741811;
LABEL_134:
                    if ( v110 )
                    {
                      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
                        (DXGHANDLETABLELOCKEXCLUSIVE *)v140,
                        Current,
                        (__int64)v43,
                        (__int64)v44);
                      v102 = v12[20];
                      v103 = (v102 >> 6) & 0xFFFFFF;
                      if ( v103 < *((_DWORD *)Current + 52)
                        && (v104 = *((_QWORD *)Current + 24),
                            v105 = *(_DWORD *)(v104 + 16LL * v103 + 8),
                            ((v102 >> 26) & 0x30) == (*(_BYTE *)(v104 + 16LL * v103 + 8) & 0x30))
                        && (v105 & 0x1000) == 0
                        && (v105 & 0xF) != 0
                        && (*(_BYTE *)(v104 + 16LL * v103 + 8) & 0xF) == 4 )
                      {
                        v106 = *(struct DXGRESOURCE **)(v104 + 16LL * v103);
                        if ( v106 )
                        {
                          v107 = (v102 >> 6) & 0xFFFFFF;
                          if ( (unsigned int)v107 < *((_DWORD *)Current + 52) )
                          {
                            v108 = *(_DWORD *)(v104 + 16 * v107 + 8);
                            if ( ((v102 >> 26) & 0x30) == (*(_BYTE *)(v104 + 16 * v107 + 8) & 0x30)
                              && (v108 & 0x1000) == 0
                              && (v108 & 0xF) != 0 )
                            {
                              *(_DWORD *)(v104 + 16 * (((unsigned __int64)v102 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
                            }
                          }
                        }
                      }
                      else
                      {
                        v106 = 0LL;
                      }
                      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v140);
                      DXGDEVICE::DestroyAllocationInternal(v18, 0, 0LL, v106, 0LL, DXGDEVICE::DestroyFlagsDefault);
                    }
LABEL_47:
                    if ( P )
                      ExFreePoolWithTag(P, 0);
                    if ( v122 )
                      ExFreePoolWithTag(v122, 0);
                    if ( v132 )
                      ExFreePoolWithTag(v132, 0);
                    if ( Src )
                      ExFreePoolWithTag(Src, 0);
                    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v137);
                    if ( v133 && _InterlockedExchangeAdd((volatile signed __int32 *)v133 + 15, 0xFFFFFFFF) == 1 )
                      DXGSHAREDRESOURCE::Destroy(v133, 0LL, 0);
                    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v138);
                    if ( v126 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v124);
                    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v131);
                    if ( !v112 )
                      return (unsigned int)StandardAllocation;
                    goto LABEL_59;
                  }
                  v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v40, v32, v33);
                  v74[3] = v18;
                  v74[4] = v12[8];
                  v75 = *(unsigned int *)(Count + 104);
                }
                else
                {
                  v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v40, v32, v33);
                  v74[3] = v18;
                  v74[4] = v12[4];
                  v75 = *(unsigned int *)(Count + 124);
                }
                v74[5] = v75;
                v74[6] = -1073741811LL;
                goto LABEL_107;
              }
              v69 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v38, v32, v33);
              v69[3] = v18;
              v70 = v12[8];
            }
LABEL_96:
            v69[4] = v70;
            StandardAllocation = -1073741801;
            v69[5] = -1073741801LL;
            WdLogEvent5_WdWarning(v69);
            goto LABEL_134;
          }
          v65 = WdLogNewEntry5_WdWarning(80 * v28, v28, v26, v27);
          *(_QWORD *)(v65 + 24) = v18;
          LODWORD(Count) = -1073741675;
          *(_QWORD *)(v65 + 32) = -1073741675LL;
          WdLogEvent5_WdWarning(v65);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v137);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v138);
        if ( v126 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v124);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v131);
        if ( !v112 )
          return (unsigned int)Count;
LABEL_78:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
        return (unsigned int)Count;
      }
      v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
      v63[3] = v18;
      v63[4] = a3;
      v63[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v63);
    }
    else
    {
      v109 = WdLogNewEntry5_WdError(v22, v21);
      *(_QWORD *)(v109 + 24) = v18;
      *(_QWORD *)(v109 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v109);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v138);
    if ( v126 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v124);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v131);
    goto LABEL_154;
  }
  v58 = WdLogNewEntry5_WdError(v9, v8);
  *(_QWORD *)(v58 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v58);
  return 3221225485LL;
}
