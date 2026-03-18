/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F0FE4
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C00F0AC0 (DxgkOpenResourceFromNtHandle.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004104 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C000D5E8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000D614 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0014504 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0014764 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C009554C (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D810 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009DD6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00F1718 (_OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__--_2_--ENSURE_SHARED_R.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        ULONG64 a1,
        __int64 a2,
        struct _EX_RUNDOWN_REF *a3,
        int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // r14
  PVOID v10; // rbx
  PVOID v11; // r12
  unsigned int *v12; // rsi
  ULONG64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGDEVICE *v17; // r15
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG_PTR Count; // r13
  char v24; // r8
  unsigned __int64 v25; // rdx
  SIZE_T v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int StandardAllocation; // r12d
  void *v39; // r13
  _QWORD *v40; // r8
  _DWORD *v41; // rdx
  _DWORD *v42; // rdx
  unsigned int i; // r10d
  char *v44; // rcx
  size_t v45; // r8
  char *v46; // rcx
  size_t v47; // r8
  __int64 v49; // r11
  ULONG64 v50; // r9
  _DWORD *v51; // rdx
  _DWORD *v52; // rdx
  _QWORD *v53; // rdx
  __int64 v54; // rax
  unsigned int v55; // ebx
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rcx
  _QWORD *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rcx
  _QWORD *v71; // rax
  int v72; // r12d
  __int64 v73; // rdx
  unsigned int v74; // ecx
  unsigned int v75; // ebx
  const void *v76; // rdx
  _DWORD *v77; // rcx
  char *v78; // rcx
  size_t v79; // r8
  struct DXGPROCESS *v80; // rbx
  unsigned int v81; // r11d
  unsigned int v82; // ecx
  __int64 v83; // r8
  unsigned int v84; // r9d
  int v85; // edx
  unsigned int v86; // r11d
  struct DXGRESOURCE *v87; // rbx
  __int64 v88; // rax
  char v89; // [rsp+50h] [rbp-3B8h]
  bool v90; // [rsp+51h] [rbp-3B7h]
  struct DXGDEVICE *v91; // [rsp+58h] [rbp-3B0h] BYREF
  void *Src; // [rsp+60h] [rbp-3A8h]
  char v93; // [rsp+68h] [rbp-3A0h]
  char v94; // [rsp+69h] [rbp-39Fh]
  char v95; // [rsp+6Ah] [rbp-39Eh]
  char v96; // [rsp+6Bh] [rbp-39Dh]
  signed int v97; // [rsp+6Ch] [rbp-39Ch]
  int v98; // [rsp+70h] [rbp-398h]
  struct DXGDEVICE *v99; // [rsp+80h] [rbp-388h] BYREF
  PVOID v100; // [rsp+88h] [rbp-380h]
  char v101[8]; // [rsp+90h] [rbp-378h] BYREF
  __int64 v102; // [rsp+98h] [rbp-370h]
  char v103; // [rsp+A0h] [rbp-368h]
  unsigned int *v104; // [rsp+A8h] [rbp-360h]
  __int64 v105; // [rsp+B0h] [rbp-358h] BYREF
  struct _EX_RUNDOWN_REF *v106; // [rsp+B8h] [rbp-350h] BYREF
  ULONG64 v107; // [rsp+C0h] [rbp-348h]
  _BYTE v108[16]; // [rsp+C8h] [rbp-340h] BYREF
  PVOID P; // [rsp+D8h] [rbp-330h]
  PVOID v110; // [rsp+E0h] [rbp-328h]
  struct DXGPROCESS *v111; // [rsp+E8h] [rbp-320h]
  __int64 v112; // [rsp+F0h] [rbp-318h]
  __int64 v113; // [rsp+F8h] [rbp-310h]
  _BYTE v114[32]; // [rsp+100h] [rbp-308h] BYREF
  PERESOURCE *v115[12]; // [rsp+120h] [rbp-2E8h] BYREF
  _BYTE v116[32]; // [rsp+180h] [rbp-288h] BYREF
  _OWORD v117[6]; // [rsp+1A0h] [rbp-268h] BYREF
  __int64 v118; // [rsp+200h] [rbp-208h]
  _QWORD v119[52]; // [rsp+210h] [rbp-1F8h] BYREF
  __int64 v120; // [rsp+3B0h] [rbp-58h]
  __int64 v121; // [rsp+3B8h] [rbp-50h]
  int v122; // [rsp+3C0h] [rbp-48h] BYREF
  int v123; // [rsp+3C4h] [rbp-44h]
  int v124; // [rsp+3C8h] [rbp-40h]
  __int64 v125; // [rsp+3CCh] [rbp-3Ch]
  int v126; // [rsp+3D4h] [rbp-34h]

  v98 = a4;
  v106 = a3;
  v107 = a1;
  v90 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = DXGPROCESS::GetCurrent(v7, v6);
  v111 = Current;
  v100 = 0LL;
  v10 = 0LL;
  P = 0LL;
  v11 = 0LL;
  Src = 0LL;
  v89 = 0;
  if ( !Current )
  {
    v54 = WdLogNewEntry5_WdError(v8);
    v55 = -1073741811;
    *(_QWORD *)(v54 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v54);
    return v55;
  }
  v12 = (unsigned int *)v117;
  if ( v90 )
  {
    v13 = a1;
    if ( a1 >= MmUserProbeAddress )
      v13 = MmUserProbeAddress;
    v117[0] = *(_OWORD *)v13;
    v117[1] = *(_OWORD *)(v13 + 16);
    v117[2] = *(_OWORD *)(v13 + 32);
    v117[3] = *(_OWORD *)(v13 + 48);
    v117[4] = *(_OWORD *)(v13 + 64);
    v117[5] = *(_OWORD *)(v13 + 80);
    v118 = *(_QWORD *)(v13 + 96);
  }
  else
  {
    v12 = (unsigned int *)a1;
  }
  v104 = v12;
  v112 = *((_QWORD *)v12 + 9);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v91, *v12, (struct _KTHREAD **)Current, &v99);
  v17 = v99;
  if ( !v99 )
  {
    v56 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v56 + 24) = *v12;
    v55 = -1073741811;
    *(_QWORD *)(v56 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v56);
    goto LABEL_136;
  }
  if ( !v12[16] && !v12[12] )
  {
    v57 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v57 + 24) = v17;
    v55 = -1073741811;
    *(_QWORD *)(v57 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v57);
    goto LABEL_136;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v108,
    v99);
  v102 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
  v103 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v115, (__int64)v17, 2, v18, 0);
  v97 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v115);
  if ( v97 < 0 )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
    v55 = v97;
    v58[4] = v97;
  }
  else
  {
    if ( !a3 )
    {
      v88 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v88 + 24) = v17;
      v55 = -1073741811;
      *(_QWORD *)(v88 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v88);
      goto LABEL_133;
    }
    Count = a3[2].Count;
    if ( Count )
    {
      v105 = 0LL;
      if ( (*(_DWORD *)(Count + 12) & 0x10) != 0 )
      {
        v59 = WdLogNewEntry5_WdEvent(v20, v19, v21, v22);
        *(_QWORD *)(v59 + 24) = Count;
        v55 = -1073741823;
        *(_QWORD *)(v59 + 32) = -1073741823LL;
        WdLogEvent5_WdEvent(v59);
      }
      else
      {
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v114, Current);
        if ( (v24 & 2) != 0 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v115);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
          DXGUSERCRIT::Acquire((DXGUSERCRIT *)v114, 1u);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
          v97 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v115);
          if ( v97 < 0 )
          {
            v64 = WdLogNewEntry5_WdWarning(v62, v61, v63);
            *(_QWORD *)(v64 + 24) = v17;
            v55 = v97;
            *(_QWORD *)(v64 + 32) = v97;
            WdLogEvent5_WdWarning(v64);
            DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v114);
            OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v105);
            goto LABEL_133;
          }
        }
        v25 = v12[4];
        v97 = 80 * v25 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( 80 * v25 <= 0xFFFFFFFF )
        {
          v26 = 80 * v25;
          if ( !is_mul_ok(v25, 0x50uLL) )
            v26 = -1LL;
          v110 = operator new(v26, 0x4B677844u, PagedPool);
          if ( !v110 )
          {
            v65 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
            v65[3] = v17;
            v65[4] = v12[4];
            StandardAllocation = -1073741801;
            v65[5] = -1073741801LL;
            WdLogEvent5_WdWarning(v65);
            DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v114);
            OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v105);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v115);
            if ( v103 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v108);
            if ( !v91 )
              return (unsigned int)StandardAllocation;
LABEL_58:
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v91 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v91 + 2), v91);
            return (unsigned int)StandardAllocation;
          }
          v30 = v12[16];
          if ( v30 && (v10 = operator new(v30, 0x4B677844u, PagedPool), (P = v10) == 0LL) )
          {
            v66 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v27, v29);
            v66[3] = v17;
            v67 = v12[16];
          }
          else
          {
            if ( v12[12] )
            {
              v100 = operator new(v12[12], 0x4B677844u, PagedPool);
              if ( !v100 )
              {
                v66 = (_QWORD *)WdLogNewEntry5_WdWarning(v70, v27, v29);
                v66[3] = v17;
                v67 = v12[12];
                goto LABEL_90;
              }
            }
            v32 = v12[8];
            if ( !v32 || (v11 = operator new(v32, 0x4B677844u, PagedPool), (Src = v11) != 0LL) )
            {
              v34 = *((_QWORD *)v17 + 2);
              if ( *(_QWORD *)(Count + 72) == v34 && *(_QWORD *)(Count + 88) == *((_QWORD *)v17 + 209) )
              {
                if ( v90 )
                {
                  *((_QWORD *)v12 + 9) = v10;
                  *((_QWORD *)v12 + 7) = v100;
                  *((_QWORD *)v12 + 5) = v11;
                  *((_QWORD *)v12 + 3) = v110;
                }
                StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                                       v17,
                                       (__int64)v12,
                                       v29,
                                       (__int64)v106,
                                       0,
                                       v115,
                                       v98,
                                       0LL,
                                       0LL,
                                       0LL);
                if ( StandardAllocation >= 0 )
                {
                  v39 = Src;
                  goto LABEL_28;
                }
                v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v37);
                v71[3] = 10504LL;
                goto LABEL_117;
              }
              v72 = *(_DWORD *)(Count + 12);
              if ( (v72 & 0x20) == 0 )
              {
                StandardAllocation = -1073741811;
                v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v27, v29);
                v71[3] = v17;
                v71[4] = v106;
                v71[5] = -1073741811LL;
LABEL_117:
                WdLogEvent5_WdWarning(v71);
                goto LABEL_118;
              }
              if ( *(_DWORD *)(Count + 124) != v12[4] )
              {
                v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v27, v29);
                v68[3] = v17;
                v68[4] = v12[4];
                v69 = *(unsigned int *)(Count + 124);
LABEL_92:
                v68[5] = v69;
                v68[6] = -1073741811LL;
LABEL_93:
                WdLogEvent5_WdWarning(v68);
                StandardAllocation = -1073741811;
                goto LABEL_94;
              }
              v98 = *(_DWORD *)(Count + 104);
              if ( v12[8] != v98 )
              {
                v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v27, v29);
                v68[3] = v17;
                v68[4] = v12[8];
                v69 = *(unsigned int *)(Count + 104);
                goto LABEL_92;
              }
              v73 = *(unsigned int *)(Count + 200);
              if ( !(_DWORD)v73 && *(_DWORD *)(*(_QWORD *)(v34 + 16) + 1528LL) < 0x5000u )
              {
                v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v73, v29);
                v68[3] = v17;
                v68[4] = -1073741811LL;
                goto LABEL_93;
              }
              v123 = 0;
              v125 = 0LL;
              v126 = 0;
              v124 = v73;
              v122 = *(_DWORD *)(Count + 192);
              v123 = *(_DWORD *)(Count + 196);
              LODWORD(v125) = 7;
              memset(v119, 0, 0x134uLL);
              memset(&v119[39], 0, 0x68uLL);
              v120 = 0LL;
              v121 = 0LL;
              v74 = v119[0] & 0xFFFFBEFF | (4 * (v72 & 0x40 | (32 * (v72 & 0x80)))) | 0x41;
              HIDWORD(v119[0]) = *v12;
              LODWORD(v119[2]) = 4;
              v119[3] = &v122;
              v119[39] = *(_QWORD *)(Count + 96);
              LODWORD(v119[40]) = v98;
              v119[41] = *(_QWORD *)(Count + 208);
              v119[42] = *(_QWORD *)(Count + 216);
              LODWORD(v119[6]) = *(_DWORD *)(Count + 224);
              v119[43] = v100;
              LODWORD(v119[44]) = v12[12];
              v119[45] = v10;
              LODWORD(v119[46]) = v12[16];
              LODWORD(v119[0]) = (v74 ^ (v72 << 7)) & 0x400 ^ v74 | 0x200;
              v119[51] = *(_QWORD *)(Count + 176);
              if ( (v72 & 0x200) != 0 )
              {
                LODWORD(v120) = v120 | 1;
              }
              else
              {
                if ( (v72 & 0x400) == 0 )
                  goto LABEL_110;
                LODWORD(v120) = v120 | 2;
              }
              v121 = *(_QWORD *)(Count + 184);
LABEL_110:
              StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                     v17,
                                     (struct _D3DKM_CREATESTANDARDALLOCATION *)v119,
                                     v115);
              if ( StandardAllocation >= 0 )
              {
                v75 = v119[1];
                *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe(
                                         (__int64)v111,
                                         (DXGRESOURCEREFERENCE *)&v106,
                                         v119[1])
                          + 120LL) = Count;
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v106);
                v76 = *(const void **)(Count + 96);
                v39 = Src;
                memmove(Src, v76, v12[8]);
                v12[20] = v75;
                v77 = v110;
                *(_DWORD *)v110 = HIDWORD(v119[6]);
                v77[4] = v12[16];
                v10 = P;
                *((_QWORD *)v77 + 1) = P;
                *((_QWORD *)v12 + 3) = v77;
                *((_QWORD *)v12 + 5) = v39;
                *((_QWORD *)v12 + 7) = v100;
                *((_QWORD *)v12 + 9) = v10;
LABEL_28:
                v96 = 1;
                v95 = 1;
                v94 = 1;
                v93 = 1;
                v89 = 1;
                if ( v90 )
                {
                  v40 = (_QWORD *)v107;
                  v41 = (_DWORD *)(v107 + 80);
                  if ( v107 + 80 >= MmUserProbeAddress )
                    v41 = (_DWORD *)MmUserProbeAddress;
                  *v41 = v12[20];
                  v42 = v40 + 8;
                  if ( (unsigned __int64)(v40 + 8) >= MmUserProbeAddress )
                    v42 = (_DWORD *)MmUserProbeAddress;
                  *v42 = v12[16];
                  for ( i = 0; i < v12[4]; ++i )
                  {
                    v49 = 80LL * i;
                    v113 = v112 + *(_DWORD *)(*((_QWORD *)v12 + 3) + v49 + 8) - v12[18];
                    v50 = v49 + v40[3];
                    v51 = (_DWORD *)v50;
                    if ( v50 >= MmUserProbeAddress )
                      v51 = (_DWORD *)MmUserProbeAddress;
                    *v51 = *(_DWORD *)(v49 + *((_QWORD *)v12 + 3));
                    v52 = (_DWORD *)(v50 + 16);
                    if ( v50 + 16 >= MmUserProbeAddress )
                      v52 = (_DWORD *)MmUserProbeAddress;
                    *v52 = *(_DWORD *)(*((_QWORD *)v12 + 3) + v49 + 16);
                    v53 = (_QWORD *)(v50 + 8);
                    if ( v50 + 8 >= MmUserProbeAddress )
                      v53 = (_QWORD *)MmUserProbeAddress;
                    *v53 = v113;
                    v17 = v99;
                    v40 = (_QWORD *)v107;
                  }
                  if ( v12[8] )
                  {
                    v44 = (char *)v40[5];
                    v45 = v12[8];
                    if ( (unsigned __int64)&v44[v45] > MmUserProbeAddress || &v44[v45] <= v44 )
                      *(_BYTE *)MmUserProbeAddress = 0;
                    memmove(v44, v39, v45);
                    v17 = v99;
                    v40 = (_QWORD *)v107;
                  }
                  if ( v12[12] )
                  {
                    v78 = (char *)v40[7];
                    v79 = v12[12];
                    if ( (unsigned __int64)&v78[v79] > MmUserProbeAddress || &v78[v79] <= v78 )
                      *(_BYTE *)MmUserProbeAddress = 0;
                    memmove(v78, v100, v79);
                    v17 = v99;
                  }
                  v89 = 1;
                  if ( v12[16] )
                  {
                    v46 = *(char **)(v107 + 72);
                    v47 = v12[16];
                    if ( (unsigned __int64)&v46[v47] > MmUserProbeAddress || &v46[v47] <= v46 )
                      *(_BYTE *)MmUserProbeAddress = 0;
                    memmove(v46, v10, v47);
                    v89 = 1;
                    v17 = v99;
                  }
                }
LABEL_46:
                if ( StandardAllocation >= 0 )
                  goto LABEL_47;
                goto LABEL_119;
              }
LABEL_118:
              v39 = Src;
              goto LABEL_46;
            }
            v66 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v27, v29);
            v66[3] = v17;
            v67 = v12[8];
          }
LABEL_90:
          v66[4] = v67;
          StandardAllocation = -1073741801;
          v66[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v66);
LABEL_94:
          v39 = Src;
LABEL_119:
          if ( v89 )
          {
            v80 = v111;
            DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v116, v111);
            v81 = v12[20];
            v97 = v81;
            v82 = (v81 >> 6) & 0xFFFFFF;
            v98 = *((_DWORD *)v80 + 60);
            if ( v82 < v98
              && (v83 = *((_QWORD *)v80 + 28),
                  v84 = *(_DWORD *)(v83 + 16LL * v82 + 8),
                  v85 = (v84 >> 5) & 3,
                  v86 = v81 >> 30,
                  v86 == v85)
              && (v84 & 0x2000) == 0
              && (v84 & 0x1F) != 0
              && (*(_BYTE *)(v83 + 16LL * v82 + 8) & 0x1F) == 4 )
            {
              v87 = *(struct DXGRESOURCE **)(v83 + 16LL * v82);
              if ( v87 && v82 < v98 && v86 == v85 && (v84 & 0x2000) == 0 )
                *(_DWORD *)(v83 + 16LL * (((unsigned int)v97 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            }
            else
            {
              v87 = 0LL;
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v116);
            DXGDEVICE::DestroyAllocationInternal(v17, 0, 0LL, v87, 0LL, DXGDEVICE::DestroyFlagsDefault);
          }
LABEL_47:
          if ( P )
            ExFreePoolWithTag(P, 0);
          if ( v100 )
            ExFreePoolWithTag(v100, 0);
          if ( v110 )
            ExFreePoolWithTag(v110, 0);
          if ( v39 )
            ExFreePoolWithTag(v39, 0);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v114);
          OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v105);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v115);
          if ( v103 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v108);
          if ( !v91 )
            return (unsigned int)StandardAllocation;
          goto LABEL_58;
        }
        v60 = WdLogNewEntry5_WdWarning(80 * v25 > 0xFFFFFFFF ? 0xC0000095 : 0, v25, 0xFFFFFFFFLL);
        *(_QWORD *)(v60 + 24) = v17;
        v55 = v97;
        *(_QWORD *)(v60 + 32) = v97;
        WdLogEvent5_WdWarning(v60);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v114);
      }
      OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v105);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v115);
      if ( v103 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v108);
      if ( !v91 )
        return v55;
      goto LABEL_137;
    }
    v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
    v58[4] = v106;
    v55 = -1073741811;
    v58[5] = -1073741811LL;
  }
  v58[3] = v17;
  WdLogEvent5_WdWarning(v58);
LABEL_133:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v115);
  if ( v103 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v108);
LABEL_136:
  if ( v91 )
  {
LABEL_137:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v91 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v91 + 2), v91);
  }
  return v55;
}
