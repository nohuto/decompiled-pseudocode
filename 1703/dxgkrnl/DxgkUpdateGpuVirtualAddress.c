/*
 * XREFs of DxgkUpdateGpuVirtualAddress @ 0x1C01812F0
 * Callers:
 *     ?VmBusUpdateGpuVirtualAddress@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0033650 (-VmBusUpdateGpuVirtualAddress@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002034 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002180 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0004CAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0006F78 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006FB8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000701C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C00136AC (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C0025734 (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ?VmBusSendUpdateGpuVirtualAddress@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x1C00324C0 (-VmBusSendUpdateGpuVirtualAddress@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUA.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00D8C70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C0183BA8 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0183C14 (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 */

__int64 __fastcall DxgkUpdateGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v3; // rdi
  bool v4; // si
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r8
  struct DXGDEVICE *v14; // rcx
  bool v15; // zf
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  signed __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  DXGCONTEXT *v28; // rdi
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r14
  SIZE_T v51; // rax
  __int64 v52; // rcx
  DXGALLOCATIONREFERENCE *v53; // r9
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // rcx
  bool v57; // zf
  UINT v58; // eax
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *Operations; // rdx
  __int64 v60; // r9
  __int64 v61; // rdx
  unsigned int NumOperations; // r10d
  unsigned __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  DXGALLOCATIONREFERENCE *v67; // rsi
  PVOID v68; // rcx
  __int64 v69; // rax
  bool v70; // cf
  SIZE_T v71; // rax
  char *v72; // rax
  __int64 v73; // rcx
  DXGALLOCATIONREFERENCE *v74; // rax
  __int64 v75; // rax
  SIZE_T v76; // rax
  __int64 v77; // rcx
  __int64 OperationType; // r9
  __int64 v79; // rax
  __int64 v80; // r8
  __int64 v81; // rcx
  __int64 v82; // rdx
  char *v83; // r10
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v84; // rax
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rcx
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rcx
  __int64 v99; // r9
  int v100; // r8d
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 v104; // r9
  int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rcx
  __int64 v114; // r8
  NTSTATUS v115; // eax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // r8
  _QWORD *v129; // rax
  __int64 v130; // rax
  PVOID *v131; // r15
  DXGALLOCATIONREFERENCE *v132; // [rsp+40h] [rbp-1B8h]
  DXGALLOCATIONREFERENCE *v133; // [rsp+40h] [rbp-1B8h]
  struct DXGDEVICE *v134; // [rsp+48h] [rbp-1B0h] BYREF
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION **p_Operations; // [rsp+50h] [rbp-1A8h]
  PVOID P; // [rsp+58h] [rbp-1A0h]
  struct DXGPROCESS *v137; // [rsp+60h] [rbp-198h]
  char v138[8]; // [rsp+68h] [rbp-190h] BYREF
  char v139; // [rsp+70h] [rbp-188h]
  __int64 v140; // [rsp+78h] [rbp-180h] BYREF
  char v141; // [rsp+80h] [rbp-178h]
  struct DXGDEVICE *v142; // [rsp+88h] [rbp-170h]
  _BYTE v143[16]; // [rsp+90h] [rbp-168h] BYREF
  unsigned int hAllocation; // [rsp+A0h] [rbp-158h]
  _BYTE v145[16]; // [rsp+A8h] [rbp-150h] BYREF
  __int64 v146; // [rsp+B8h] [rbp-140h]
  PVOID Object; // [rsp+C0h] [rbp-138h]
  struct DXGDEVICE *v148; // [rsp+C8h] [rbp-130h] BYREF
  char *v149; // [rsp+D0h] [rbp-128h]
  _BYTE v150[24]; // [rsp+D8h] [rbp-120h] BYREF
  int v151; // [rsp+F0h] [rbp-108h]
  DXGCONTEXT *v152; // [rsp+F8h] [rbp-100h] BYREF
  struct _EX_RUNDOWN_REF *v153; // [rsp+100h] [rbp-F8h] BYREF
  __int64 v154; // [rsp+108h] [rbp-F0h]
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v155; // [rsp+110h] [rbp-E8h]
  _BYTE v157[96]; // [rsp+120h] [rbp-D8h] BYREF
  _D3DKMT_UPDATEGPUVIRTUALADDRESS v158; // [rsp+180h] [rbp-78h] BYREF
  bool v159; // [rsp+208h] [rbp+10h]
  unsigned int v160; // [rsp+208h] [rbp+10h]
  D3DKMT_HANDLE hFenceObject; // [rsp+208h] [rbp+10h]
  __int64 v162; // [rsp+208h] [rbp+10h]
  unsigned int v163; // [rsp+210h] [rbp+18h]
  int v164; // [rsp+218h] [rbp+20h]
  DXGPUSHLOCK *v165; // [rsp+218h] [rbp+20h]

  v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)a1;
  v151 = 2106;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2106);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v159 = v4;
  Current = DXGPROCESS::GetCurrent(v5);
  v137 = Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    v14 = (struct DXGDEVICE *)qword_1C006E790;
    v15 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v14, &EventProfilerExit, v13, 2106);
    return (unsigned int)v12;
  }
  v17 = &v158;
  P = &v158;
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v158 = *v3;
    Current = v137;
  }
  else
  {
    v17 = v3;
    P = v3;
  }
  if ( !v17->NumOperations )
  {
    v18 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    *(_QWORD *)(v18 + 32) = 11314LL;
    WdLogEvent5_WdWarning(v18);
LABEL_17:
    v15 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v134, v17->hDevice, (struct _KTHREAD **)Current, &v148);
  v12 = (__int64)v148;
  v142 = v148;
  if ( !v148 )
  {
    v21 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v21 + 24) = v17->hDevice;
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
LABEL_20:
    if ( !v134 )
      goto LABEL_17;
    v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)v134 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    v23 = v22 == 1;
    v14 = (struct DXGDEVICE *)(v22 - 1);
LABEL_22:
    if ( v23 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v134 + 2), v134);
    goto LABEL_17;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v143, v17->hContext, v137, &v152, 0);
  v28 = v152;
  if ( !v152 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    v29[3] = v137;
    v29[4] = v17->hContext;
    LODWORD(v12) = -1073741811;
    v29[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
LABEL_26:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v143);
    goto LABEL_20;
  }
  if ( *((_QWORD *)v152 + 2) != v12 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
    v30[3] = *((_QWORD *)v28 + 2);
    v30[4] = v12;
    LODWORD(v12) = -1073741811;
    v30[5] = -1073741811LL;
    WdLogEvent5_WdError(v30);
    goto LABEL_26;
  }
  v146 = v12 + 16;
  v31 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL);
  if ( *(_BYTE *)(v31 + 186) )
  {
    LODWORD(v12) = DXGADAPTER::VmBusSendUpdateGpuVirtualAddress(
                     (struct VMBCHANNEL__ **)v31,
                     v137,
                     *(_DWORD *)(v12 + 336),
                     *((_DWORD *)v152 + 7),
                     v17);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v143);
    v14 = v134;
    if ( !v134 )
      goto LABEL_17;
    v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)v134 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_22;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v140, (struct DXGDEVICE *)v12);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v150,
    (struct _KTHREAD **)v28 + 47,
    v32,
    v33);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v157, v12, 0LL, v34, 0);
  v35 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v157);
  v12 = v35;
  if ( v35 < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
    v40[4] = 11367LL;
LABEL_34:
    v40[3] = v12;
LABEL_35:
    WdLogEvent5_WdWarning(v40);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v157);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v150);
    if ( v140 && v141 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v140 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_26;
  }
  v41 = *(_QWORD *)(*(_QWORD *)v146 + 16LL);
  if ( (*(_DWORD *)(v41 + 1676) & 0x40) == 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v36, v38, v39);
    v12 = -1073741811LL;
    v40[4] = 11373LL;
    goto LABEL_34;
  }
  if ( !DXGCONTEXT::GetVidSchCompanionContext(v28) )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44, v45);
    v40[3] = v137;
    v40[4] = v17->hContext;
    LODWORD(v12) = -1073741811;
    v40[5] = -1073741811LL;
    goto LABEL_35;
  }
  if ( !DXGCONTEXT::GetVidMmCompanionContext(v28) )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v46, v48, v49);
    v40[3] = v137;
    v40[4] = v17->hContext;
    LODWORD(v12) = -1073741811;
    v40[5] = -1073741811LL;
    v40[6] = 11389LL;
    goto LABEL_35;
  }
  LODWORD(v50) = -1073741811;
  v163 = 0;
  v51 = (unsigned __int64)v17->NumOperations << 6;
  if ( !is_mul_ok(v17->NumOperations, 0x40uLL) )
    v51 = -1LL;
  v53 = (DXGALLOCATIONREFERENCE *)operator new(v51, 0x4B677844u, PagedPool);
  v132 = v53;
  if ( !v53 )
  {
    v54 = WdLogNewEntry5_WdLowResource(v52);
    LODWORD(v50) = -1073741801;
    *(_QWORD *)(v54 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v54);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v157);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v150);
    if ( v140 && v141 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v140 + 104));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v143);
    if ( v134 && _InterlockedExchangeAdd64((volatile signed __int64 *)v134 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v134 + 2), v134);
    v56 = qword_1C006E790;
    v57 = (qword_1C006E790 & 2) == 0;
    goto LABEL_159;
  }
  v58 = v17->NumOperations << 6;
  if ( v159 )
  {
    p_Operations = &v17->Operations;
    Operations = v17->Operations;
    if ( (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)((char *)Operations + v58) < Operations
      || (unsigned __int64)Operations + v58 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v53, Operations, v58);
  }
  else
  {
    p_Operations = &v17->Operations;
    memmove(v53, v17->Operations, v58);
  }
  v17->Operations = (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)v132;
  v60 = 0LL;
  v61 = 0LL;
  NumOperations = v17->NumOperations;
  if ( NumOperations )
  {
    do
    {
      v63 = (unsigned __int64)(unsigned int)v61 << 6;
      v64 = *(unsigned int *)((char *)v132 + v63);
      if ( !(_DWORD)v64 || (_DWORD)v64 == 3 )
      {
        v65 = *(unsigned int *)((char *)v132 + v63 + 24);
        if ( !(_DWORD)v65 )
        {
          v66 = WdLogNewEntry5_WdWarning(v65, v61, v132, v60);
          *(_QWORD *)(v66 + 32) = 11444LL;
          goto LABEL_71;
        }
        if ( (_DWORD)v60 != (_DWORD)v65 )
        {
          ++v163;
          v60 = (unsigned int)v65;
        }
      }
      else if ( (unsigned int)(v64 - 1) > 1 )
      {
        v66 = WdLogNewEntry5_WdWarning(v64, v61, v132, v60);
        *(_QWORD *)(v66 + 32) = 11457LL;
LABEL_71:
        *(_QWORD *)(v66 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v66);
        v67 = 0LL;
        v68 = 0LL;
        goto LABEL_146;
      }
      v61 = (unsigned int)(v61 + 1);
    }
    while ( (unsigned int)v61 < NumOperations );
  }
  v69 = 8LL * v163;
  if ( !is_mul_ok(v163, 8uLL) )
    v69 = -1LL;
  v70 = __CFADD__(v69, 8LL);
  v71 = v69 + 8;
  if ( v70 )
    v71 = -1LL;
  v72 = (char *)operator new(v71, 0x4B677844u, PagedPool);
  if ( v72 )
  {
    *(_QWORD *)v72 = v163;
    v133 = (DXGALLOCATIONREFERENCE *)(v72 + 8);
    `vector constructor iterator'(
      v72 + 8,
      8LL,
      v163,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    v74 = v133;
  }
  else
  {
    v74 = 0LL;
    v133 = 0LL;
  }
  if ( !v74 )
  {
    v75 = WdLogNewEntry5_WdLowResource(v73);
    LODWORD(v50) = -1073741801;
    *(_QWORD *)(v75 + 24) = -1073741801LL;
    *(_QWORD *)(v75 + 32) = 11466LL;
    WdLogEvent5_WdLowResource(v75);
    v68 = 0LL;
    goto LABEL_145;
  }
  v76 = 8LL * v163;
  if ( !is_mul_ok(v163, 8uLL) )
    v76 = -1LL;
  OperationType = (__int64)operator new(v76, 0x4B677844u, PagedPool);
  P = (PVOID)OperationType;
  if ( !OperationType )
  {
    v79 = WdLogNewEntry5_WdLowResource(v77);
    LODWORD(v50) = -1073741801;
    *(_QWORD *)(v79 + 24) = -1073741801LL;
    *(_QWORD *)(v79 + 32) = 11474LL;
    WdLogEvent5_WdLowResource(v79);
    goto LABEL_144;
  }
  v80 = 0LL;
  v81 = 0xFFFFFFFFLL;
  v82 = 0LL;
  v164 = 0;
  if ( v17->NumOperations )
  {
    v83 = (char *)v133 - 8;
    v154 = OperationType - (_QWORD)v133;
    do
    {
      v84 = &v17->Operations[(unsigned __int64)(unsigned int)v82];
      v155 = v84;
      OperationType = (unsigned int)v84->OperationType;
      if ( !(_DWORD)OperationType || (_DWORD)OperationType == 3 )
      {
        OperationType = v84->Map.hAllocation;
        if ( (_DWORD)v80 != (_DWORD)OperationType )
        {
          hAllocation = v84->Map.hAllocation;
          v160 = v81 + 1;
          v149 = v83 + 8;
          AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                      (__int64)v137,
                                                      (DXGALLOCATIONREFERENCE *)&v153,
                                                      OperationType);
          DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)v133 + (int)v160, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v153, v86, v87, v88);
          v83 = v149;
          v91 = *(_QWORD *)v149;
          if ( !*(_QWORD *)v149 )
          {
            v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v90, v89, 0LL, OperationType);
            v94[3] = hAllocation;
            v94[4] = -1073741811LL;
            v94[5] = 11505LL;
            WdLogEvent5_WdWarning(v94);
LABEL_144:
            v68 = P;
LABEL_145:
            v67 = v133;
LABEL_146:
            v131 = (PVOID *)p_Operations;
            if ( v68 )
              ExFreePoolWithTag(v68, 0);
            if ( *v131 )
              ExFreePoolWithTag(*v131, 0);
            if ( v67 )
              DXGALLOCATIONREFERENCE::`vector deleting destructor'(v67);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v157);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v150);
            if ( v140 && v141 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v140 + 104));
              KeLeaveCriticalRegion();
            }
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v143);
            if ( v134 )
            {
              v56 = _InterlockedDecrement64((volatile signed __int64 *)v134 + 8);
              if ( !v56 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v134 + 2), v134);
            }
            v57 = (qword_1C006E790 & 2) == 0;
LABEL_159:
            if ( !v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q(v56, &EventProfilerExit, v55, 2106);
            return (unsigned int)v50;
          }
          v92 = *(_QWORD *)(*(_QWORD *)(v91 + 8) + 16LL);
          if ( *(_QWORD *)(v92 + 16) != *(_QWORD *)(*(_QWORD *)v146 + 16LL) )
          {
            v93 = (_QWORD *)WdLogNewEntry5_WdError(v92, v89);
            v93[3] = v142;
            v93[4] = *((_QWORD *)v133 + (int)v160);
            v93[5] = -1073741811LL;
            WdLogEvent5_WdError(v93);
            goto LABEL_144;
          }
          *(_QWORD *)&v149[v154] = *(_QWORD *)(v91 + 24);
          v84 = v155;
          v81 = v160;
          LODWORD(v82) = v164;
          v80 = hAllocation;
        }
        v84->Map.hAllocation = v81;
      }
      v82 = (unsigned int)(v82 + 1);
      v164 = v82;
    }
    while ( (unsigned int)v82 < v17->NumOperations );
  }
  v165 = (struct DXGPROCESS *)((char *)v137 + 168);
  while ( 1 )
  {
    Global = DXGGLOBAL::GetGlobal(v81, v82, v80, OperationType);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v138, Global, v96, v97);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v138);
    hFenceObject = v17->hFenceObject;
    DXGPUSHLOCK::AcquireShared(v165);
    v98 = (hFenceObject >> 6) & 0xFFFFFF;
    if ( (unsigned int)v98 < *((_DWORD *)v137 + 52)
      && (v99 = *((_QWORD *)v137 + 24),
          v100 = *(_DWORD *)(v99 + 16LL * (unsigned int)v98 + 8),
          ((hFenceObject >> 26) & 0x30) == (*(_BYTE *)(v99 + 16LL * (unsigned int)v98 + 8) & 0x30))
      && (v100 & 0x1000) == 0
      && (v100 & 0xF) != 0
      && (v101 = 2 * v98, (*(_BYTE *)(v99 + 8 * v101 + 8) & 0xF) == 0xB) )
    {
      v162 = *(_QWORD *)(v99 + 8 * v101);
    }
    else
    {
      v162 = 0LL;
    }
    ExReleasePushLockSharedEx(v165, 0LL);
    KeLeaveCriticalRegion();
    if ( !v162 )
    {
      v130 = WdLogNewEntry5_WdWarning(0LL, v102, v103, v104);
      *(_QWORD *)(v130 + 24) = v17->hFenceObject;
      *(_QWORD *)(v130 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v130);
      goto LABEL_142;
    }
    if ( *(struct DXGDEVICE **)(v162 + 16) != v142 )
    {
      v129 = (_QWORD *)WdLogNewEntry5_WdError(v162, v102);
      v129[3] = *(_QWORD *)(v162 + 16);
      v129[4] = v142;
      v129[5] = -1073741811LL;
      WdLogEvent5_WdError(v129);
      goto LABEL_142;
    }
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX(
      (DXGSYNCOBJECTMUTEX *)v145,
      *(struct DXGSYNCOBJECT **)(v162 + 32),
      v103,
      v104);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v145);
    DXGSYNCOBJECT::GetVidSchSyncObject(
      *(DXGSYNCOBJECT **)(v162 + 32),
      *(struct ADAPTER_RENDER **)(*(_QWORD *)(v162 + 16) + 16LL));
    Object = 0LL;
    v105 = _guard_dispatch_icall_fptr();
    v50 = v105;
    if ( v105 != -1071775486 )
      break;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v157);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v145, v110, v111, v112);
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v138);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q(v113, &EventBlockThread, v114, 68);
    v115 = KeWaitForSingleObject(Object, UserRequest, 0, 1u, 0LL);
    v50 = v115;
    if ( !v115 )
      KeReleaseSemaphore((PRKSEMAPHORE)Object, 0, 1, 0);
    if ( PsIsThreadTerminating(KeGetCurrentThread()) )
    {
      v126 = WdLogNewEntry5_WdWarning(v117, v116, v118, v119);
      *(_QWORD *)(v126 + 24) = 11602LL;
      WdLogEvent5_WdWarning(v126);
      LODWORD(v50) = -1073741130;
LABEL_123:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v145);
LABEL_142:
      if ( v139 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v138);
      goto LABEL_144;
    }
    if ( (_DWORD)v50 )
    {
      v125 = WdLogNewEntry5_WdWarning(v117, v116, v118, v119);
      *(_QWORD *)(v125 + 32) = 11609LL;
      goto LABEL_122;
    }
    v120 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v157);
    v50 = v120;
    if ( v120 < 0 )
    {
      v125 = WdLogNewEntry5_WdWarning(v122, v121, v123, v124);
      *(_QWORD *)(v125 + 32) = 11619LL;
LABEL_122:
      *(_QWORD *)(v125 + 24) = v50;
      WdLogEvent5_WdWarning(v125);
      goto LABEL_123;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v145);
    if ( v139 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v138);
    v142 = v148;
  }
  if ( v105 < 0 )
  {
    v125 = WdLogNewEntry5_WdWarning(v107, v106, v108, v109);
    *(_QWORD *)(v125 + 32) = 11626LL;
    goto LABEL_122;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v145);
  if ( v139 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v138);
  DXGALLOCATIONREFERENCE::`vector deleting destructor'(v133);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v157);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v150);
  if ( v140 && v141 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v140 + 104));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v143);
  if ( v134 )
  {
    v127 = _InterlockedDecrement64((volatile signed __int64 *)v134 + 8);
    if ( !v127 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v134 + 2), v134);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v127, &EventProfilerExit, v128, 2106);
  return 0LL;
}
