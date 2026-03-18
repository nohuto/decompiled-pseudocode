/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00D4A50
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C00D44B0 (DxgkOpenResourceFromNtHandle.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0009A64 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00166DC (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C001A4C8 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001A718 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C001A72C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     _OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00D511C (_OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__--_2_--ENSURE_SHARED_R.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00E6170 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00E9838 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1F88 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F2480 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        ULONG64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  bool v6; // r13
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rbx
  PVOID v9; // r12
  unsigned int *v10; // rsi
  ULONG64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGDEVICE *v15; // r15
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // r13
  char v23; // r8
  unsigned __int64 v24; // rdx
  SIZE_T v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // rdx
  void *v34; // rcx
  __int64 v35; // rdx
  void *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int StandardAllocation; // r12d
  void *v41; // r13
  char v42; // al
  _QWORD *v43; // r8
  _DWORD *v44; // rdx
  _DWORD *v45; // rdx
  unsigned int i; // r10d
  char *v47; // rcx
  size_t v48; // r8
  char *v49; // rcx
  size_t v50; // r8
  __int64 v52; // r11
  ULONG64 v53; // r9
  _DWORD *v54; // rdx
  _DWORD *v55; // rdx
  _QWORD *v56; // rdx
  __int64 v57; // rax
  unsigned int v58; // ebx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  _QWORD *v74; // rax
  int v75; // ebx
  _QWORD *v76; // rax
  __int64 v77; // rcx
  unsigned int v78; // r10d
  unsigned int v79; // ecx
  __int64 v80; // r8
  unsigned int v81; // edx
  int v82; // eax
  unsigned int v83; // r10d
  struct DXGRESOURCE *v84; // rbx
  __int64 v85; // r8
  unsigned int v86; // ebx
  _DWORD *v87; // rcx
  char *v88; // rcx
  size_t v89; // r8
  __int64 v90; // rax
  bool v91; // [rsp+51h] [rbp-3A7h]
  struct DXGDEVICE *v92; // [rsp+58h] [rbp-3A0h] BYREF
  void *v93; // [rsp+60h] [rbp-398h]
  signed int v94; // [rsp+68h] [rbp-390h]
  int v95; // [rsp+6Ch] [rbp-38Ch]
  struct DXGPROCESS *v96; // [rsp+70h] [rbp-388h]
  struct DXGDEVICE *v97; // [rsp+78h] [rbp-380h] BYREF
  void *v98; // [rsp+80h] [rbp-378h]
  void *Src; // [rsp+88h] [rbp-370h]
  char v100[8]; // [rsp+90h] [rbp-368h] BYREF
  __int64 v101; // [rsp+98h] [rbp-360h]
  char v102; // [rsp+A0h] [rbp-358h]
  unsigned int *v103; // [rsp+A8h] [rbp-350h]
  struct DXGPROCESS *v104; // [rsp+B0h] [rbp-348h]
  __int64 v105; // [rsp+B8h] [rbp-340h] BYREF
  ULONG64 v106; // [rsp+C0h] [rbp-338h]
  __int64 v107; // [rsp+C8h] [rbp-330h] BYREF
  _BYTE v108[16]; // [rsp+D0h] [rbp-328h] BYREF
  void *v109; // [rsp+E0h] [rbp-318h]
  __int64 v110; // [rsp+E8h] [rbp-310h]
  __int64 v111; // [rsp+F0h] [rbp-308h]
  _BYTE v112[24]; // [rsp+F8h] [rbp-300h] BYREF
  _BYTE v113[96]; // [rsp+110h] [rbp-2E8h] BYREF
  _BYTE v114[32]; // [rsp+170h] [rbp-288h] BYREF
  _OWORD v115[6]; // [rsp+190h] [rbp-268h] BYREF
  __int64 v116; // [rsp+1F0h] [rbp-208h]
  _QWORD v117[52]; // [rsp+200h] [rbp-1F8h] BYREF
  __int64 v118; // [rsp+3A0h] [rbp-58h]
  __int64 v119; // [rsp+3A8h] [rbp-50h]
  __int64 v120; // [rsp+3B0h] [rbp-48h] BYREF
  __int64 v121; // [rsp+3B8h] [rbp-40h]
  __int64 v122; // [rsp+3C0h] [rbp-38h]

  v95 = a4;
  v107 = a3;
  v106 = a1;
  v6 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v91 = v6;
  Current = DXGPROCESS::GetCurrent();
  v104 = Current;
  v96 = Current;
  v98 = 0LL;
  v9 = 0LL;
  v93 = 0LL;
  Src = 0LL;
  if ( !Current )
  {
    v57 = WdLogNewEntry5_WdError(v7);
    v58 = -1073741811;
    *(_QWORD *)(v57 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v57);
    return v58;
  }
  v10 = (unsigned int *)v115;
  if ( v6 )
  {
    v11 = a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = MmUserProbeAddress;
    v115[0] = *(_OWORD *)v11;
    v115[1] = *(_OWORD *)(v11 + 16);
    v115[2] = *(_OWORD *)(v11 + 32);
    v115[3] = *(_OWORD *)(v11 + 48);
    v115[4] = *(_OWORD *)(v11 + 64);
    v115[5] = *(_OWORD *)(v11 + 80);
    v116 = *(_QWORD *)(v11 + 96);
  }
  else
  {
    v10 = (unsigned int *)a1;
  }
  v103 = v10;
  v110 = *((_QWORD *)v10 + 9);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v92, *v10, (struct _KTHREAD **)Current, &v97);
  v15 = v97;
  if ( !v97 )
  {
    v59 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v59 + 24) = *v10;
    v58 = -1073741811;
    *(_QWORD *)(v59 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v59);
    goto LABEL_133;
  }
  if ( !v10[16] && !v10[12] )
  {
    v60 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v60 + 24) = v15;
    v58 = -1073741811;
    *(_QWORD *)(v60 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v60);
    goto LABEL_133;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v108,
    v97);
  v101 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
  v102 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v100);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v113, (__int64)v15, 2, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v113);
  v21 = v17;
  if ( v17 >= 0 )
  {
    if ( !a3 )
    {
      v90 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v90 + 24) = v15;
      v58 = -1073741811;
      *(_QWORD *)(v90 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v90);
      goto LABEL_130;
    }
    v22 = *(_QWORD *)(a3 + 16);
    if ( !v22 )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
      v62[3] = v15;
      v62[4] = a3;
      v58 = -1073741811;
      v62[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v62);
LABEL_130:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v113);
      if ( v102 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v100);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v108);
LABEL_133:
      if ( v92 )
      {
LABEL_134:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
      }
      return v58;
    }
    v105 = 0LL;
    if ( (*(_DWORD *)(v22 + 12) & 0x10) != 0 )
    {
      v63 = WdLogNewEntry5_WdEvent(v19, v18);
      *(_QWORD *)(v63 + 24) = v22;
      v58 = -1073741823;
      *(_QWORD *)(v63 + 32) = -1073741823LL;
      WdLogEvent5_WdEvent(v63);
    }
    else
    {
      DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v112, Current);
      if ( (v23 & 2) != 0 )
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v113);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v100);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v112, 1u);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v100);
        v94 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v113);
        if ( v94 < 0 )
        {
          v68 = WdLogNewEntry5_WdWarning(v66, v65, v67);
          *(_QWORD *)(v68 + 24) = v15;
          v58 = v94;
          *(_QWORD *)(v68 + 32) = v94;
          WdLogEvent5_WdWarning(v68);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v112);
          OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v105);
          goto LABEL_130;
        }
      }
      v24 = v10[4];
      v94 = 80 * v24 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( 80 * v24 <= 0xFFFFFFFF )
      {
        v25 = 80 * v24;
        if ( !is_mul_ok(v24, 0x50uLL) )
          v25 = -1LL;
        v109 = operator new[](v25, 0x4B677844u, PagedPool);
        if ( !v109 )
        {
          v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
          v69[3] = v15;
          v69[4] = v10[4];
          StandardAllocation = -1073741801;
          v69[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v69);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v112);
          OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v105);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v113);
          if ( v102 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v100);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v108);
          if ( !v92 )
            return (unsigned int)StandardAllocation;
LABEL_50:
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
          return (unsigned int)StandardAllocation;
        }
        v29 = v10[16];
        if ( v29 && (v9 = operator new[](v29, 0x4B677844u, PagedPool), (v93 = v9) == 0LL) )
        {
          v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v28);
          v70[3] = v15;
          v71 = v10[16];
        }
        else
        {
          if ( v10[12] )
          {
            v98 = operator new[](v10[12], 0x4B677844u, PagedPool);
            if ( !v98 )
            {
              v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v73, v72, v28);
              v70[3] = v15;
              v71 = v10[12];
              goto LABEL_86;
            }
          }
          v32 = v10[8];
          if ( !v32 )
          {
            v34 = Src;
            goto LABEL_22;
          }
          v34 = operator new[](v32, 0x4B677844u, PagedPool);
          Src = v34;
          if ( v34 )
          {
LABEL_22:
            v35 = *((_QWORD *)v15 + 2);
            if ( *(_QWORD *)(v22 + 72) == v35 && *(_QWORD *)(v22 + 88) == *((_QWORD *)v15 + 211) )
            {
              v36 = v98;
              if ( v91 )
              {
                *((_QWORD *)v10 + 9) = v9;
                *((_QWORD *)v10 + 7) = v36;
                *((_QWORD *)v10 + 5) = v34;
                *((_QWORD *)v10 + 3) = v109;
              }
              StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                                     v15,
                                     0,
                                     (struct COREDEVICEACCESS *)v113,
                                     v95,
                                     0LL,
                                     0LL,
                                     0LL);
              if ( StandardAllocation >= 0 )
              {
                v41 = v93;
                goto LABEL_28;
              }
              v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39);
              v74[3] = 10647LL;
              goto LABEL_125;
            }
            v75 = *(_DWORD *)(v22 + 12);
            if ( (v75 & 0x20) == 0 )
            {
              StandardAllocation = -1073741811;
              v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v35, v28);
              v74[3] = v15;
              v74[4] = v107;
              v74[5] = -1073741811LL;
LABEL_125:
              WdLogEvent5_WdWarning(v74);
              goto LABEL_126;
            }
            if ( *(_DWORD *)(v22 + 124) != v10[4] )
            {
              v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v35, v28);
              v76[3] = v15;
              v76[4] = v10[4];
              v77 = *(unsigned int *)(v22 + 124);
LABEL_95:
              v76[5] = v77;
              v76[6] = -1073741811LL;
LABEL_97:
              WdLogEvent5_WdWarning(v76);
              StandardAllocation = -1073741811;
              v42 = 0;
              v41 = v93;
LABEL_98:
              Current = v104;
LABEL_99:
              if ( v42 )
              {
                DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
                  (DXGHANDLETABLELOCKEXCLUSIVE *)v114,
                  (struct _KTHREAD **)Current);
                v78 = v10[20];
                v94 = v78;
                v79 = (v78 >> 6) & 0xFFFFFF;
                v95 = *((_DWORD *)v96 + 62);
                if ( v79 < v95
                  && (v80 = *((_QWORD *)Current + 29),
                      v81 = *(_DWORD *)(v80 + 16LL * v79 + 8),
                      v82 = (v81 >> 5) & 3,
                      v83 = v78 >> 30,
                      v83 == v82)
                  && (v81 & 0x2000) == 0
                  && (v81 & 0x1F) == 4 )
                {
                  v84 = *(struct DXGRESOURCE **)(v80 + 16LL * v79);
                  if ( v84 && v79 < v95 && v83 == v82 && (v81 & 0x2000) == 0 && (v81 & 0x1F) != 0 )
                    *(_DWORD *)(v80 + 16LL * (((unsigned int)v94 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                }
                else
                {
                  v84 = 0LL;
                }
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v114);
                DXGDEVICE::DestroyAllocationInternal(v15, 0, 0LL, v84, 0LL, DXGDEVICE::DestroyFlagsDefault);
              }
LABEL_47:
              operator delete[](v41);
              operator delete[](v98);
              operator delete[](v109);
              operator delete[](Src);
              DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v112);
              OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v105);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v113);
              if ( v102 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v100);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v108);
              if ( !v92 )
                return (unsigned int)StandardAllocation;
              goto LABEL_50;
            }
            v95 = *(_DWORD *)(v22 + 104);
            if ( v10[8] != v95 )
            {
              v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v35, v28);
              v76[3] = v15;
              v76[4] = v10[8];
              v77 = *(unsigned int *)(v22 + 104);
              goto LABEL_95;
            }
            v85 = *(unsigned int *)(v22 + 200);
            if ( !(_DWORD)v85 && *(_DWORD *)(*(_QWORD *)(v35 + 16) + 1664LL) < 0x5000u )
            {
              v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v35, v85);
              v76[3] = v15;
              v76[4] = -1073741811LL;
              goto LABEL_97;
            }
            v120 = 0LL;
            v122 = 0LL;
            v121 = (unsigned int)v85;
            v120 = *(_QWORD *)(v22 + 192);
            HIDWORD(v121) = 7;
            memset(v117, 0, 0x134uLL);
            memset(&v117[39], 0, 0x68uLL);
            v118 = 0LL;
            v119 = 0LL;
            HIDWORD(v117[0]) = *v10;
            LODWORD(v117[2]) = 4;
            v117[3] = &v120;
            v117[39] = *(_QWORD *)(v22 + 96);
            LODWORD(v117[40]) = v95;
            v117[41] = *(_QWORD *)(v22 + 208);
            v117[42] = *(_QWORD *)(v22 + 216);
            LODWORD(v117[6]) = *(_DWORD *)(v22 + 224);
            v117[43] = v98;
            LODWORD(v117[44]) = v10[12];
            v117[45] = v9;
            LODWORD(v117[46]) = v10[16];
            LODWORD(v117[0]) = v117[0] & 0xFFFFBAFF | (4 * (v75 & 0x40 | (32 * (v75 & 0x88)))) | 0x241;
            v117[51] = *(_QWORD *)(v22 + 176);
            if ( (v75 & 0x200) != 0 )
            {
              LODWORD(v118) = v118 | 1;
            }
            else
            {
              if ( (v75 & 0x400) == 0 )
                goto LABEL_118;
              LODWORD(v118) = v118 | 2;
            }
            v119 = *(_QWORD *)(v22 + 184);
LABEL_118:
            StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                   v15,
                                   (struct _D3DKM_CREATESTANDARDALLOCATION *)v117,
                                   (struct COREDEVICEACCESS *)v113);
            if ( StandardAllocation >= 0 )
            {
              v86 = v117[1];
              *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)v104, (DXGRESOURCEREFERENCE *)&v107, v117[1])
                        + 120LL) = v22;
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v107);
              memmove(Src, *(const void **)(v22 + 96), v10[8]);
              v10[20] = v86;
              v87 = v109;
              *(_DWORD *)v109 = HIDWORD(v117[6]);
              v87[4] = v10[16];
              v41 = v93;
              *((_QWORD *)v87 + 1) = v93;
              *((_QWORD *)v10 + 3) = v87;
              *((_QWORD *)v10 + 5) = Src;
              v36 = v98;
              *((_QWORD *)v10 + 7) = v98;
              *((_QWORD *)v10 + 9) = v41;
LABEL_28:
              v42 = 1;
              if ( v91 )
              {
                v43 = (_QWORD *)v106;
                v44 = (_DWORD *)(v106 + 80);
                if ( v106 + 80 >= MmUserProbeAddress )
                  v44 = (_DWORD *)MmUserProbeAddress;
                *v44 = v10[20];
                v45 = v43 + 8;
                if ( (unsigned __int64)(v43 + 8) >= MmUserProbeAddress )
                  v45 = (_DWORD *)MmUserProbeAddress;
                *v45 = v10[16];
                for ( i = 0; i < v10[4]; ++i )
                {
                  v52 = 80LL * i;
                  v111 = v110 + *(_DWORD *)(v52 + *((_QWORD *)v10 + 3) + 8) - v10[18];
                  v53 = v52 + v43[3];
                  v54 = (_DWORD *)v53;
                  if ( v53 >= MmUserProbeAddress )
                    v54 = (_DWORD *)MmUserProbeAddress;
                  *v54 = *(_DWORD *)(v52 + *((_QWORD *)v10 + 3));
                  v55 = (_DWORD *)(v53 + 16);
                  if ( v53 + 16 >= MmUserProbeAddress )
                    v55 = (_DWORD *)MmUserProbeAddress;
                  *v55 = *(_DWORD *)(v52 + *((_QWORD *)v10 + 3) + 16);
                  v56 = (_QWORD *)(v53 + 8);
                  if ( v53 + 8 >= MmUserProbeAddress )
                    v56 = (_QWORD *)MmUserProbeAddress;
                  *v56 = v111;
                  v15 = v97;
                  v43 = (_QWORD *)v106;
                }
                if ( v10[8] )
                {
                  v47 = (char *)v43[5];
                  v48 = v10[8];
                  if ( (unsigned __int64)&v47[v48] > MmUserProbeAddress || &v47[v48] <= v47 )
                    *(_BYTE *)MmUserProbeAddress = 0;
                  memmove(v47, Src, v48);
                  v15 = v97;
                  v43 = (_QWORD *)v106;
                }
                if ( v10[12] )
                {
                  v88 = (char *)v43[7];
                  v89 = v10[12];
                  if ( (unsigned __int64)&v88[v89] > MmUserProbeAddress || &v88[v89] <= v88 )
                    *(_BYTE *)MmUserProbeAddress = 0;
                  memmove(v88, v36, v89);
                  v15 = v97;
                }
                v42 = 1;
                if ( v10[16] )
                {
                  v49 = *(char **)(v106 + 72);
                  v50 = v10[16];
                  if ( (unsigned __int64)&v49[v50] > MmUserProbeAddress || &v49[v50] <= v49 )
                    *(_BYTE *)MmUserProbeAddress = 0;
                  memmove(v49, v41, v50);
                  v42 = 1;
                  v15 = v97;
                }
              }
LABEL_46:
              if ( StandardAllocation >= 0 )
                goto LABEL_47;
              goto LABEL_98;
            }
LABEL_126:
            v42 = 0;
            v41 = v93;
            goto LABEL_46;
          }
          v70 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v33, v28);
          v70[3] = v15;
          v71 = v10[8];
        }
LABEL_86:
        v70[4] = v71;
        StandardAllocation = -1073741801;
        v70[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v70);
        v42 = 0;
        v41 = v93;
        goto LABEL_99;
      }
      v64 = WdLogNewEntry5_WdWarning(80 * v24 > 0xFFFFFFFF ? 0xC0000095 : 0, v24, 0xFFFFFFFFLL);
      *(_QWORD *)(v64 + 24) = v15;
      v58 = v94;
      *(_QWORD *)(v64 + 32) = v94;
      WdLogEvent5_WdWarning(v64);
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v112);
    }
    OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v105);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v113);
    if ( v102 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v100);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v108);
    if ( !v92 )
      return v58;
    goto LABEL_134;
  }
  v61 = WdLogNewEntry5_WdWarning(v19, v18, v20);
  *(_QWORD *)(v61 + 24) = v15;
  *(_QWORD *)(v61 + 32) = v21;
  WdLogEvent5_WdWarning(v61);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v113);
  if ( v102 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v100);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v108);
  if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
  return (unsigned int)v21;
}
