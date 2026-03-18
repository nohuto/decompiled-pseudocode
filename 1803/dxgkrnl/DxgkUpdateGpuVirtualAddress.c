/*
 * XREFs of DxgkUpdateGpuVirtualAddress @ 0x1C016D3D0
 * Callers:
 *     ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0187000 (-VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002694 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000A74C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C001A428 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A57C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C002BFFC (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F9D50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C0172BAC (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0172C18 (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x1C0185A84 (-VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT.c)
 */

__int64 __fastcall DxgkUpdateGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v3; // rdi
  bool v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  struct _KTHREAD **Current; // r14
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  DXGCONTEXT *v23; // rdi
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r14
  unsigned __int64 NumOperations; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  SIZE_T v44; // rax
  __int64 v45; // rcx
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v46; // r9
  __int64 v47; // rax
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *Operations; // rdx
  ULONG64 v49; // rcx
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v50; // rcx
  int v51; // r9d
  __int64 v52; // rdx
  unsigned int v53; // r10d
  unsigned __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // rax
  bool v59; // cf
  SIZE_T v60; // rax
  char *v61; // rax
  __int64 v62; // rcx
  DXGALLOCATIONREFERENCE *v63; // rax
  void *v64; // rcx
  __int64 v65; // rax
  SIZE_T v66; // rax
  char *v67; // rax
  __int64 OperationType; // rcx
  __int64 v69; // rax
  unsigned int v70; // r8d
  int v71; // r9d
  UINT v72; // edx
  char *v73; // r10
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v74; // rax
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  PERESOURCE *Global; // rax
  unsigned int v80; // ecx
  __int64 v81; // r8
  struct _KTHREAD *v82; // r9
  int v83; // ecx
  __int64 v84; // r8
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r8
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rcx
  __int64 v94; // r8
  NTSTATUS v95; // eax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  int v99; // eax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // r8
  _QWORD *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // r8
  struct DXGDEVICE *v111; // [rsp+40h] [rbp-1D8h] BYREF
  void *v112; // [rsp+48h] [rbp-1D0h]
  int v113; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v114; // [rsp+58h] [rbp-1C0h]
  DXGALLOCATIONREFERENCE *v115; // [rsp+60h] [rbp-1B8h]
  char v116[8]; // [rsp+68h] [rbp-1B0h] BYREF
  char v117; // [rsp+70h] [rbp-1A8h]
  __int64 v118; // [rsp+78h] [rbp-1A0h] BYREF
  char v119; // [rsp+80h] [rbp-198h]
  int v120; // [rsp+88h] [rbp-190h]
  struct DXGDEVICE *v121; // [rsp+90h] [rbp-188h]
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v122; // [rsp+98h] [rbp-180h]
  _BYTE v123[16]; // [rsp+A0h] [rbp-178h] BYREF
  _BYTE v124[16]; // [rsp+B0h] [rbp-168h] BYREF
  struct _KTHREAD **v125; // [rsp+C0h] [rbp-158h]
  __int64 v126; // [rsp+C8h] [rbp-150h]
  PVOID Object; // [rsp+D0h] [rbp-148h]
  struct DXGDEVICE *v128; // [rsp+D8h] [rbp-140h] BYREF
  void **p_Operations; // [rsp+E0h] [rbp-138h]
  signed __int64 v130; // [rsp+E8h] [rbp-130h]
  char *v131; // [rsp+F0h] [rbp-128h]
  _BYTE v132[24]; // [rsp+F8h] [rbp-120h] BYREF
  int v133; // [rsp+110h] [rbp-108h]
  DXGCONTEXT *v134; // [rsp+118h] [rbp-100h] BYREF
  struct _EX_RUNDOWN_REF *v135; // [rsp+120h] [rbp-F8h] BYREF
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v136; // [rsp+128h] [rbp-F0h]
  _BYTE v138[96]; // [rsp+140h] [rbp-D8h] BYREF
  _D3DKMT_UPDATEGPUVIRTUALADDRESS v139; // [rsp+1A0h] [rbp-78h] BYREF
  bool v140; // [rsp+228h] [rbp+10h]
  UINT v141; // [rsp+228h] [rbp+10h]
  D3DKMT_HANDLE hFenceObject; // [rsp+228h] [rbp+10h]
  __int64 v143; // [rsp+228h] [rbp+10h]
  unsigned int v144; // [rsp+230h] [rbp+18h]
  unsigned int Size; // [rsp+238h] [rbp+20h]
  unsigned int Sizea; // [rsp+238h] [rbp+20h]
  DXGPUSHLOCK *Sizeb; // [rsp+238h] [rbp+20h]

  v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)a1;
  v114 = 0LL;
  v113 = 2106;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2106);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v113, 2106);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v140 = v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  v125 = Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v113);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v13, &EventProfilerExit, v14, v113);
    return (unsigned int)v12;
  }
  v16 = &v139;
  v112 = &v139;
  if ( v4 )
  {
    v8 = MmUserProbeAddress;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v139 = *v3;
  }
  else
  {
    v16 = v3;
    v112 = v3;
  }
  if ( !v16->NumOperations )
  {
    v17 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    *(_QWORD *)(v17 + 32) = 12376LL;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_6;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v111, v16->hDevice, Current, &v128);
  v12 = (__int64)v128;
  v121 = v128;
  if ( !v128 )
  {
    v19 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v19 + 24) = v16->hDevice;
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    goto LABEL_19;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v123, v16->hContext, Current, &v134, 0);
  v23 = v134;
  if ( !v134 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v24[3] = Current;
    v24[4] = v16->hContext;
    LODWORD(v12) = -1073741811;
    v24[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v24);
LABEL_24:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v123);
LABEL_19:
    if ( !v111 )
      goto LABEL_6;
LABEL_20:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v111 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v111 + 2), v111);
    goto LABEL_6;
  }
  if ( *((_QWORD *)v134 + 2) != v12 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v25[3] = *((_QWORD *)v23 + 2);
    v25[4] = v12;
    LODWORD(v12) = -1073741811;
    v25[5] = -1073741811LL;
    WdLogEvent5_WdError(v25);
    goto LABEL_24;
  }
  v126 = v12 + 16;
  v26 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL);
  if ( *(_BYTE *)(v26 + 185) )
  {
    LODWORD(v12) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateGpuVirtualAddress(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v26 + 4080),
                     (struct DXGPROCESS *)Current,
                     *(_DWORD *)(v12 + 336),
                     *((_DWORD *)v134 + 7),
                     v16);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v123);
    if ( !v111 )
      goto LABEL_6;
    goto LABEL_20;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v118, (struct DXGDEVICE *)v12);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v132, (struct _KTHREAD **)v23 + 51);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v138, v12, 0, v27, 0);
  v28 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v138);
  v12 = v28;
  if ( v28 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
    v32[4] = 12427LL;
LABEL_32:
    v32[3] = v12;
LABEL_33:
    WdLogEvent5_WdWarning(v32);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v138);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v132);
    if ( v118 && v119 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v118 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_24;
  }
  v33 = *(_QWORD *)(*(_QWORD *)v126 + 16LL);
  if ( (*(_DWORD *)(v33 + 1836) & 0x40) == 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v29, v31);
    v12 = -1073741811LL;
    v32[4] = 12433LL;
    goto LABEL_32;
  }
  if ( !DXGCONTEXT::GetVidSchCompanionContext(v23) )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36);
    v32[3] = Current;
    v32[4] = v16->hContext;
    LODWORD(v12) = -1073741811;
    v32[5] = -1073741811LL;
    goto LABEL_33;
  }
  if ( !DXGCONTEXT::GetVidMmCompanionContext(v23) )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39);
    v32[3] = Current;
    v32[4] = v16->hContext;
    LODWORD(v12) = -1073741811;
    v32[5] = -1073741811LL;
    v32[6] = 12449LL;
    goto LABEL_33;
  }
  LODWORD(v12) = -1073741811;
  LODWORD(v40) = -1073741811;
  v120 = -1073741811;
  v115 = 0LL;
  v144 = 0;
  NumOperations = v16->NumOperations;
  v42 = NumOperations << 6;
  v43 = 0xFFFFFFFFLL;
  if ( NumOperations << 6 <= 0xFFFFFFFF )
    v43 = (unsigned int)v42;
  Size = v43;
  v133 = v43;
  if ( v42 > 0xFFFFFFFF )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, NumOperations, 0xFFFFFFFFLL);
    v32[3] = v16->NumOperations;
    goto LABEL_33;
  }
  v44 = NumOperations << 6;
  if ( !is_mul_ok(NumOperations, 0x40uLL) )
    v44 = -1LL;
  v46 = (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)operator new[](v44, 0x4B677844u, PagedPool);
  v122 = v46;
  if ( !v46 )
  {
    v47 = WdLogNewEntry5_WdLowResource(v45);
    LODWORD(v40) = -1073741801;
    *(_QWORD *)(v47 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v47);
    goto LABEL_141;
  }
  if ( v140 )
  {
    p_Operations = (void **)&v16->Operations;
    Operations = v16->Operations;
    v49 = (ULONG64)Operations + Size;
    if ( v49 < (unsigned __int64)Operations || v49 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v46, Operations, Size);
  }
  else
  {
    p_Operations = (void **)&v16->Operations;
    memmove(v46, v16->Operations, Size);
  }
  v50 = v122;
  v16->Operations = v122;
  v51 = 0;
  v52 = 0LL;
  v53 = v16->NumOperations;
  if ( v53 )
  {
    do
    {
      v54 = (unsigned __int64)(unsigned int)v52 << 6;
      v55 = *(unsigned int *)((char *)&v50->OperationType + v54);
      if ( !(_DWORD)v55 || (_DWORD)v55 == 3 )
      {
        v57 = *(unsigned int *)((char *)&v50->Map.hAllocation + v54);
        if ( !(_DWORD)v57 )
        {
          v56 = WdLogNewEntry5_WdWarning(v50, v52, v57);
          *(_QWORD *)(v56 + 32) = 12509LL;
LABEL_72:
          *(_QWORD *)(v56 + 24) = -1073741811LL;
          WdLogEvent5_WdWarning(v56);
LABEL_73:
          v64 = 0LL;
          goto LABEL_139;
        }
        if ( v51 != (_DWORD)v57 )
        {
          ++v144;
          v51 = *(D3DKMT_HANDLE *)((char *)&v50->Map.hAllocation + v54);
        }
      }
      else if ( (unsigned int)(v55 - 1) > 1 )
      {
        v56 = WdLogNewEntry5_WdWarning(v50, v52, v55);
        *(_QWORD *)(v56 + 32) = 12522LL;
        goto LABEL_72;
      }
      v52 = (unsigned int)(v52 + 1);
    }
    while ( (unsigned int)v52 < v53 );
  }
  v58 = 8LL * v144;
  if ( !is_mul_ok(v144, 8uLL) )
    v58 = -1LL;
  v59 = __CFADD__(v58, 8LL);
  v60 = v58 + 8;
  if ( v59 )
    v60 = -1LL;
  v61 = (char *)operator new[](v60, 0x4B677844u, PagedPool);
  if ( v61 )
  {
    *(_QWORD *)v61 = v144;
    v115 = (DXGALLOCATIONREFERENCE *)(v61 + 8);
    `vector constructor iterator'(
      v61 + 8,
      8LL,
      v144,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    v63 = v115;
  }
  else
  {
    v63 = 0LL;
    v115 = 0LL;
  }
  if ( !v63 )
  {
    v65 = WdLogNewEntry5_WdLowResource(v62);
    LODWORD(v40) = -1073741801;
    *(_QWORD *)(v65 + 24) = -1073741801LL;
    *(_QWORD *)(v65 + 32) = 12531LL;
    WdLogEvent5_WdLowResource(v65);
    goto LABEL_73;
  }
  v66 = 8LL * v144;
  if ( !is_mul_ok(v144, 8uLL) )
    v66 = -1LL;
  v67 = (char *)operator new[](v66, 0x4B677844u, PagedPool);
  v112 = v67;
  if ( !v67 )
  {
    v69 = WdLogNewEntry5_WdLowResource(OperationType);
    LODWORD(v40) = -1073741801;
    *(_QWORD *)(v69 + 24) = -1073741801LL;
    *(_QWORD *)(v69 + 32) = 12539LL;
    WdLogEvent5_WdLowResource(v69);
    goto LABEL_138;
  }
  v70 = 0;
  v71 = -1;
  v72 = 0;
  v141 = 0;
  if ( v16->NumOperations )
  {
    v73 = v67 - 8;
    v130 = v115 - (DXGALLOCATIONREFERENCE *)v67;
    do
    {
      v74 = &v16->Operations[(unsigned __int64)v72];
      v136 = v74;
      OperationType = (unsigned int)v74->OperationType;
      if ( !(_DWORD)OperationType || (_DWORD)OperationType == 3 )
      {
        OperationType = v74->Map.hAllocation;
        if ( v70 != (_DWORD)OperationType )
        {
          Sizea = v74->Map.hAllocation;
          v120 = v71 + 1;
          v131 = v73 + 8;
          v122 = (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(v71 + 1);
          AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                      (__int64)v125,
                                                      (DXGALLOCATIONREFERENCE *)&v135,
                                                      OperationType);
          DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)v115 + (_QWORD)v122, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v135);
          v73 = v131;
          v78 = *(_QWORD *)&v131[v130];
          if ( !v78 )
          {
            v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v77, v76, 0LL);
            v86[3] = Sizea;
            v86[4] = -1073741811LL;
            v86[5] = 12570LL;
            WdLogEvent5_WdWarning(v86);
LABEL_138:
            v64 = v112;
LABEL_139:
            operator delete[](v64);
            operator delete[](*p_Operations);
            if ( v115 )
              DXGALLOCATIONREFERENCE::`vector deleting destructor'(v115);
LABEL_141:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v138);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v132);
            if ( v118 && v119 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v118 + 104));
              KeLeaveCriticalRegion();
            }
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v123);
            if ( v111 && _InterlockedExchangeAdd64((volatile signed __int64 *)v111 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v111 + 2), v111);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v113);
            if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v109, &EventProfilerExit, v110, v113);
            return (unsigned int)v40;
          }
          OperationType = *(_QWORD *)(*(_QWORD *)v126 + 16LL);
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v78 + 8) + 16LL) + 16LL) != OperationType )
          {
            v85 = (_QWORD *)WdLogNewEntry5_WdError(OperationType);
            v85[3] = v121;
            v85[4] = *((_QWORD *)v115 + (_QWORD)v122);
            v85[5] = -1073741811LL;
            WdLogEvent5_WdError(v85);
            goto LABEL_138;
          }
          *(_QWORD *)v131 = *(_QWORD *)(v78 + 24);
          v74 = v136;
          v72 = v141;
          v70 = Sizea;
          v71 = v120;
        }
        v74->Map.hAllocation = v71;
      }
      v141 = ++v72;
    }
    while ( v72 < v16->NumOperations );
  }
  Sizeb = (DXGPUSHLOCK *)(v125 + 26);
  while ( 1 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(OperationType);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v116, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v116);
    hFenceObject = v16->hFenceObject;
    DXGPUSHLOCK::AcquireShared(Sizeb);
    v80 = (hFenceObject >> 6) & 0xFFFFFF;
    if ( v80 < *((_DWORD *)v125 + 62)
      && (v81 = v80, v82 = v125[29], v83 = *((_DWORD *)v82 + 4 * v80 + 2), ((hFenceObject >> 25) & 0x60) == (v83 & 0x60))
      && (v83 & 0x2000) == 0
      && (v83 & 0x1F) != 0
      && (v84 = 2 * v81, (v83 & 0x1F) == 0xB) )
    {
      v143 = *((_QWORD *)v82 + v84);
    }
    else
    {
      v143 = 0LL;
    }
    ExReleasePushLockSharedEx(Sizeb, 0LL);
    KeLeaveCriticalRegion();
    if ( !v143 )
    {
      v108 = WdLogNewEntry5_WdWarning(0LL, v87, v88);
      *(_QWORD *)(v108 + 24) = v16->hFenceObject;
      *(_QWORD *)(v108 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v108);
      goto LABEL_136;
    }
    if ( *(struct DXGDEVICE **)(v143 + 16) != v121 )
    {
      v107 = (_QWORD *)WdLogNewEntry5_WdError(v143);
      v107[3] = *(_QWORD *)(v143 + 16);
      v107[4] = v121;
      v107[5] = -1073741811LL;
      WdLogEvent5_WdError(v107);
      goto LABEL_136;
    }
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v124, *(struct DXGSYNCOBJECT **)(v143 + 32));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v124);
    DXGSYNCOBJECT::GetVidSchSyncObject(
      *(DXGSYNCOBJECT **)(v143 + 32),
      *(struct ADAPTER_RENDER **)(*(_QWORD *)(v143 + 16) + 16LL));
    Object = 0LL;
    v89 = _guard_dispatch_icall_fptr();
    v40 = v89;
    if ( v89 != -1071775486 )
      break;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v138);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v124);
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v116);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v93, &EventBlockThread, v94, 68);
    v95 = KeWaitForSingleObject(Object, UserRequest, 0, 1u, 0LL);
    v40 = v95;
    if ( !v95 )
      KeReleaseSemaphore((PRKSEMAPHORE)Object, 0, 1, 0);
    if ( PsIsThreadTerminating(KeGetCurrentThread()) )
    {
      v104 = WdLogNewEntry5_WdWarning(v97, v96, v98);
      *(_QWORD *)(v104 + 24) = 12667LL;
      WdLogEvent5_WdWarning(v104);
      LODWORD(v40) = -1073741130;
LABEL_117:
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v124);
LABEL_136:
      if ( v117 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v116);
      goto LABEL_138;
    }
    if ( (_DWORD)v40 )
    {
      v103 = WdLogNewEntry5_WdWarning(v97, v96, v98);
      *(_QWORD *)(v103 + 32) = 12674LL;
      goto LABEL_116;
    }
    v99 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v138);
    v40 = v99;
    if ( v99 < 0 )
    {
      v103 = WdLogNewEntry5_WdWarning(v101, v100, v102);
      *(_QWORD *)(v103 + 32) = 12684LL;
LABEL_116:
      *(_QWORD *)(v103 + 24) = v40;
      WdLogEvent5_WdWarning(v103);
      goto LABEL_117;
    }
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v124);
    if ( v117 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v116);
    v121 = v128;
  }
  if ( v89 < 0 )
  {
    v103 = WdLogNewEntry5_WdWarning(v91, v90, v92);
    *(_QWORD *)(v103 + 32) = 12691LL;
    goto LABEL_116;
  }
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v124);
  if ( v117 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v116);
  DXGALLOCATIONREFERENCE::`vector deleting destructor'(v115);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v138);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v132);
  if ( v118 && v119 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v118 + 104));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v123);
  if ( v111 && _InterlockedExchangeAdd64((volatile signed __int64 *)v111 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v111 + 2), v111);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v113);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v105, &EventProfilerExit, v106, v113);
  return 0LL;
}
