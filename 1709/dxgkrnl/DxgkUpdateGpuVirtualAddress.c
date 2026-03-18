/*
 * XREFs of DxgkUpdateGpuVirtualAddress @ 0x1C01854C0
 * Callers:
 *     ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C019A210 (-VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0003230 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0003270 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00089FC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000E3DC (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0014440 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00145BC (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C0023E74 (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C008AAE4 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C0187DA8 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0187E14 (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x1C0198E18 (-VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT.c)
 */

__int64 __fastcall DxgkUpdateGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v3; // rdi
  bool v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r8
  struct DXGDEVICE *v14; // rcx
  bool v15; // zf
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  signed __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  DXGCONTEXT *v26; // rdi
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r14
  unsigned __int64 NumOperations; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  SIZE_T v48; // rax
  __int64 v49; // rcx
  DXGALLOCATIONREFERENCE *v50; // r9
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // rcx
  bool v54; // zf
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *Operations; // rdx
  ULONG64 v56; // rcx
  int v57; // r9d
  __int64 v58; // rdx
  unsigned int v59; // r10d
  unsigned __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rax
  DXGALLOCATIONREFERENCE *v64; // rsi
  PVOID v65; // rcx
  __int64 v66; // rax
  bool v67; // cf
  SIZE_T v68; // rax
  char *v69; // rax
  __int64 v70; // rcx
  DXGALLOCATIONREFERENCE *v71; // rax
  __int64 v72; // rax
  SIZE_T v73; // rax
  __int64 v74; // rcx
  PVOID v75; // r8
  __int64 v76; // rax
  D3DKMT_HANDLE v77; // edx
  int v78; // r9d
  __int64 v79; // rcx
  char *v80; // r10
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v81; // rax
  unsigned int hAllocation; // r8d
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rcx
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v91; // rcx
  __int64 v92; // r9
  int v93; // r8d
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // r8
  int v97; // eax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rcx
  __int64 v102; // r8
  NTSTATUS v103; // eax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // r8
  _QWORD *v115; // rax
  __int64 v116; // rax
  PVOID *v117; // r15
  DXGALLOCATIONREFERENCE *v118; // [rsp+40h] [rbp-1B8h]
  DXGALLOCATIONREFERENCE *v119; // [rsp+40h] [rbp-1B8h]
  struct DXGDEVICE *v120; // [rsp+48h] [rbp-1B0h] BYREF
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION **p_Operations; // [rsp+50h] [rbp-1A8h]
  PVOID P; // [rsp+58h] [rbp-1A0h]
  struct DXGPROCESS *v123; // [rsp+60h] [rbp-198h]
  char v124[8]; // [rsp+68h] [rbp-190h] BYREF
  char v125; // [rsp+70h] [rbp-188h]
  __int64 v126; // [rsp+78h] [rbp-180h] BYREF
  int v127; // [rsp+80h] [rbp-178h]
  struct DXGDEVICE *v128; // [rsp+88h] [rbp-170h]
  _BYTE v129[16]; // [rsp+90h] [rbp-168h] BYREF
  __int64 v130; // [rsp+A0h] [rbp-158h]
  _BYTE v131[16]; // [rsp+A8h] [rbp-150h] BYREF
  __int64 v132; // [rsp+B8h] [rbp-140h]
  PVOID Object; // [rsp+C0h] [rbp-138h]
  struct DXGDEVICE *v134; // [rsp+C8h] [rbp-130h] BYREF
  char *v135; // [rsp+D0h] [rbp-128h]
  _BYTE v136[24]; // [rsp+D8h] [rbp-120h] BYREF
  int v137; // [rsp+F0h] [rbp-108h]
  DXGCONTEXT *v138; // [rsp+F8h] [rbp-100h] BYREF
  struct _EX_RUNDOWN_REF *v139; // [rsp+100h] [rbp-F8h] BYREF
  signed __int64 v140; // [rsp+108h] [rbp-F0h]
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v141; // [rsp+110h] [rbp-E8h]
  _BYTE v143[96]; // [rsp+120h] [rbp-D8h] BYREF
  _D3DKMT_UPDATEGPUVIRTUALADDRESS v144; // [rsp+180h] [rbp-78h] BYREF
  bool v145; // [rsp+208h] [rbp+10h]
  int v146; // [rsp+208h] [rbp+10h]
  D3DKMT_HANDLE hFenceObject; // [rsp+208h] [rbp+10h]
  __int64 v148; // [rsp+208h] [rbp+10h]
  unsigned int v149; // [rsp+210h] [rbp+18h]
  unsigned int Size; // [rsp+218h] [rbp+20h]
  D3DKMT_HANDLE Sizea; // [rsp+218h] [rbp+20h]
  DXGPUSHLOCK *Sizeb; // [rsp+218h] [rbp+20h]

  v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2106);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v145 = v4;
  Current = DXGPROCESS::GetCurrent(v6, v5);
  v123 = Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    v14 = (struct DXGDEVICE *)qword_1C005F010;
    v15 = (qword_1C005F010 & 2) == 0;
LABEL_6:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v14, &EventProfilerExit, v13, 2106);
    return (unsigned int)v12;
  }
  v17 = &v144;
  P = &v144;
  if ( v4 )
  {
    v9 = MmUserProbeAddress;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v144 = *v3;
    Current = v123;
  }
  else
  {
    v17 = v3;
    P = v3;
  }
  if ( !v17->NumOperations )
  {
    v18 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    *(_QWORD *)(v18 + 32) = 12171LL;
    WdLogEvent5_WdWarning(v18);
LABEL_17:
    v15 = (qword_1C005F010 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v120, v17->hDevice, (struct _KTHREAD **)Current, &v134);
  v12 = (__int64)v134;
  v128 = v134;
  if ( !v134 )
  {
    v20 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v20 + 24) = v17->hDevice;
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
LABEL_20:
    if ( !v120 )
      goto LABEL_17;
    v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)v120 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    v22 = v21 == 1;
    v14 = (struct DXGDEVICE *)(v21 - 1);
LABEL_22:
    if ( v22 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v120 + 2), v120);
    goto LABEL_17;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v129, v17->hContext, v123, &v138, 0);
  v26 = v138;
  if ( !v138 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
    v27[3] = v123;
    v27[4] = v17->hContext;
    LODWORD(v12) = -1073741811;
    v27[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v27);
LABEL_26:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v129);
    goto LABEL_20;
  }
  if ( *((_QWORD *)v138 + 2) != v12 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    v28[3] = *((_QWORD *)v26 + 2);
    v28[4] = v12;
    LODWORD(v12) = -1073741811;
    v28[5] = -1073741811LL;
    WdLogEvent5_WdError(v28);
    goto LABEL_26;
  }
  v132 = v12 + 16;
  v29 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL);
  if ( *(_BYTE *)(v29 + 185) )
  {
    LODWORD(v12) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateGpuVirtualAddress(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v29 + 3888),
                     v123,
                     *(_DWORD *)(v12 + 336),
                     *((_DWORD *)v138 + 7),
                     v17);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v129);
    v14 = v120;
    if ( !v120 )
      goto LABEL_17;
    v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)v120 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_22;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v126, (struct DXGDEVICE *)v12);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v136, (struct _KTHREAD **)v26 + 51);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v143, v12, 0, v30, 0);
  v31 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v143);
  v12 = v31;
  if ( v31 < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
    v35[4] = 12222LL;
LABEL_34:
    v35[3] = v12;
    goto LABEL_35;
  }
  v36 = *(_QWORD *)(*(_QWORD *)v132 + 16LL);
  if ( (*(_DWORD *)(v36 + 1700) & 0x40) == 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v32, v34);
    v12 = -1073741811LL;
    v35[4] = 12228LL;
    goto LABEL_34;
  }
  if ( !DXGCONTEXT::GetVidSchCompanionContext(v26) )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39);
    v35[3] = v123;
    v35[4] = v17->hContext;
    LODWORD(v12) = -1073741811;
    v35[5] = -1073741811LL;
    goto LABEL_35;
  }
  if ( !DXGCONTEXT::GetVidMmCompanionContext(v26) )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, v42);
    v35[3] = v123;
    v35[4] = v17->hContext;
    LODWORD(v12) = -1073741811;
    v35[5] = -1073741811LL;
    v35[6] = 12244LL;
LABEL_35:
    WdLogEvent5_WdWarning(v35);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v143);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v136);
    if ( v126 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v126 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_26;
  }
  LODWORD(v12) = -1073741811;
  LODWORD(v43) = -1073741811;
  v127 = -1073741811;
  v149 = 0;
  NumOperations = v17->NumOperations;
  v45 = NumOperations << 6;
  v46 = 0xFFFFFFFFLL;
  if ( NumOperations << 6 <= 0xFFFFFFFF )
    v46 = (unsigned int)v45;
  Size = v46;
  v137 = v46;
  if ( v45 > 0xFFFFFFFF )
  {
    v47 = WdLogNewEntry5_WdWarning(v46, NumOperations, 0xFFFFFFFFLL);
    *(_QWORD *)(v47 + 24) = v17->NumOperations;
    WdLogEvent5_WdWarning(v47);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v143);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v136);
    if ( v126 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v126 + 104));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v129);
    if ( v120 )
    {
      v14 = (struct DXGDEVICE *)_InterlockedDecrement64((volatile signed __int64 *)v120 + 8);
      if ( !v14 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v120 + 2), v120);
    }
    v15 = (qword_1C005F010 & 2) == 0;
    goto LABEL_6;
  }
  v48 = NumOperations << 6;
  if ( !is_mul_ok(NumOperations, 0x40uLL) )
    v48 = -1LL;
  v50 = (DXGALLOCATIONREFERENCE *)operator new(v48, 0x4B677844u, PagedPool);
  v118 = v50;
  if ( !v50 )
  {
    v51 = WdLogNewEntry5_WdLowResource(v49);
    LODWORD(v43) = -1073741801;
    *(_QWORD *)(v51 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v51);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v143);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v136);
    if ( v126 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v126 + 104));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v129);
    if ( v120 && _InterlockedExchangeAdd64((volatile signed __int64 *)v120 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v120 + 2), v120);
    v53 = qword_1C005F010;
    v54 = (qword_1C005F010 & 2) == 0;
    goto LABEL_164;
  }
  if ( v145 )
  {
    p_Operations = &v17->Operations;
    Operations = v17->Operations;
    v56 = (ULONG64)Operations + Size;
    if ( v56 < (unsigned __int64)Operations || v56 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v50, Operations, Size);
  }
  else
  {
    p_Operations = &v17->Operations;
    memmove(v50, v17->Operations, Size);
  }
  v17->Operations = (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)v118;
  v57 = 0;
  v58 = 0LL;
  v59 = v17->NumOperations;
  if ( v59 )
  {
    do
    {
      v60 = (unsigned __int64)(unsigned int)v58 << 6;
      v61 = *(unsigned int *)((char *)v118 + v60);
      if ( !(_DWORD)v61 || (_DWORD)v61 == 3 )
      {
        v62 = *(unsigned int *)((char *)v118 + v60 + 24);
        if ( !(_DWORD)v62 )
        {
          v63 = WdLogNewEntry5_WdWarning(v62, v58, v118);
          *(_QWORD *)(v63 + 32) = 12304LL;
          goto LABEL_78;
        }
        if ( v57 != (_DWORD)v62 )
        {
          ++v149;
          v57 = *(_DWORD *)((char *)v118 + v60 + 24);
        }
      }
      else if ( (unsigned int)(v61 - 1) > 1 )
      {
        v63 = WdLogNewEntry5_WdWarning(v61, v58, v118);
        *(_QWORD *)(v63 + 32) = 12317LL;
LABEL_78:
        *(_QWORD *)(v63 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v63);
        v64 = 0LL;
        v65 = 0LL;
        goto LABEL_152;
      }
      v58 = (unsigned int)(v58 + 1);
    }
    while ( (unsigned int)v58 < v59 );
  }
  v66 = 8LL * v149;
  if ( !is_mul_ok(v149, 8uLL) )
    v66 = -1LL;
  v67 = __CFADD__(v66, 8LL);
  v68 = v66 + 8;
  if ( v67 )
    v68 = -1LL;
  v69 = (char *)operator new(v68, 0x4B677844u, PagedPool);
  if ( v69 )
  {
    *(_QWORD *)v69 = v149;
    v119 = (DXGALLOCATIONREFERENCE *)(v69 + 8);
    `vector constructor iterator'(
      v69 + 8,
      8LL,
      v149,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    v71 = v119;
  }
  else
  {
    v71 = 0LL;
    v119 = 0LL;
  }
  if ( !v71 )
  {
    v72 = WdLogNewEntry5_WdLowResource(v70);
    LODWORD(v43) = -1073741801;
    *(_QWORD *)(v72 + 24) = -1073741801LL;
    *(_QWORD *)(v72 + 32) = 12326LL;
    WdLogEvent5_WdLowResource(v72);
    v65 = 0LL;
    goto LABEL_151;
  }
  v73 = 8LL * v149;
  if ( !is_mul_ok(v149, 8uLL) )
    v73 = -1LL;
  v75 = operator new(v73, 0x4B677844u, PagedPool);
  P = v75;
  if ( !v75 )
  {
    v76 = WdLogNewEntry5_WdLowResource(v74);
    LODWORD(v43) = -1073741801;
    *(_QWORD *)(v76 + 24) = -1073741801LL;
    *(_QWORD *)(v76 + 32) = 12334LL;
    WdLogEvent5_WdLowResource(v76);
    goto LABEL_150;
  }
  v77 = 0;
  v78 = -1;
  v79 = 0LL;
  v146 = 0;
  if ( v17->NumOperations )
  {
    v80 = (char *)v119 - 8;
    v140 = (_BYTE *)v75 - (_BYTE *)v119;
    do
    {
      v81 = &v17->Operations[(unsigned __int64)(unsigned int)v79];
      v141 = v81;
      if ( v81->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
        || v81->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
      {
        hAllocation = v81->Map.hAllocation;
        if ( v77 != hAllocation )
        {
          Sizea = v81->Map.hAllocation;
          v127 = v78 + 1;
          v135 = v80 + 8;
          v130 = v78 + 1;
          AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                      (__int64)v123,
                                                      (DXGALLOCATIONREFERENCE *)&v139,
                                                      hAllocation);
          DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)v119 + v130, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v139);
          v80 = v135;
          v86 = *(_QWORD *)v135;
          if ( !*(_QWORD *)v135 )
          {
            v89 = (_QWORD *)WdLogNewEntry5_WdWarning(v85, v84, 0LL);
            v89[3] = Sizea;
            v89[4] = -1073741811LL;
            v89[5] = 12365LL;
            WdLogEvent5_WdWarning(v89);
LABEL_150:
            v65 = P;
LABEL_151:
            v64 = v119;
LABEL_152:
            v117 = (PVOID *)p_Operations;
            if ( v65 )
              ExFreePoolWithTag(v65, 0);
            if ( *v117 )
              ExFreePoolWithTag(*v117, 0);
            if ( v64 )
              DXGALLOCATIONREFERENCE::`vector deleting destructor'(v64);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v143);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v136);
            if ( v126 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v126 + 104));
              KeLeaveCriticalRegion();
            }
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v129);
            if ( v120 )
            {
              v53 = _InterlockedDecrement64((volatile signed __int64 *)v120 + 8);
              if ( !v53 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v120 + 2), v120);
            }
            v54 = (qword_1C005F010 & 2) == 0;
LABEL_164:
            if ( !v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v53, &EventProfilerExit, v52, 2106);
            return (unsigned int)v43;
          }
          v87 = *(_QWORD *)(*(_QWORD *)v132 + 16LL);
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v86 + 8) + 16LL) + 16LL) != v87 )
          {
            v88 = (_QWORD *)WdLogNewEntry5_WdError(v87);
            v88[3] = v128;
            v88[4] = *((_QWORD *)v119 + v130);
            v88[5] = -1073741811LL;
            WdLogEvent5_WdError(v88);
            goto LABEL_150;
          }
          *(_QWORD *)&v135[v140] = *(_QWORD *)(v86 + 24);
          v81 = v141;
          LODWORD(v79) = v146;
          v77 = Sizea;
          v78 = v127;
        }
        v81->Map.hAllocation = v78;
      }
      v79 = (unsigned int)(v79 + 1);
      v146 = v79;
    }
    while ( (unsigned int)v79 < v17->NumOperations );
  }
  Sizeb = (struct DXGPROCESS *)((char *)v123 + 200);
  while ( 1 )
  {
    Global = DXGGLOBAL::GetGlobal(v79);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v124, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v124);
    hFenceObject = v17->hFenceObject;
    DXGPUSHLOCK::AcquireShared(Sizeb);
    v91 = (hFenceObject >> 6) & 0xFFFFFF;
    if ( (unsigned int)v91 < *((_DWORD *)v123 + 60)
      && (v92 = *((_QWORD *)v123 + 28),
          v93 = *(_DWORD *)(v92 + 16LL * (unsigned int)v91 + 8),
          ((hFenceObject >> 25) & 0x60) == (*(_BYTE *)(v92 + 16LL * (unsigned int)v91 + 8) & 0x60))
      && (v93 & 0x2000) == 0
      && (v93 & 0x1F) != 0
      && (v94 = 2 * v91, (*(_BYTE *)(v92 + 8 * v94 + 8) & 0x1F) == 0xB) )
    {
      v148 = *(_QWORD *)(v92 + 8 * v94);
    }
    else
    {
      v148 = 0LL;
    }
    ExReleasePushLockSharedEx(Sizeb, 0LL);
    KeLeaveCriticalRegion();
    if ( !v148 )
    {
      v116 = WdLogNewEntry5_WdWarning(0LL, v95, v96);
      *(_QWORD *)(v116 + 24) = v17->hFenceObject;
      *(_QWORD *)(v116 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v116);
      goto LABEL_148;
    }
    if ( *(struct DXGDEVICE **)(v148 + 16) != v128 )
    {
      v115 = (_QWORD *)WdLogNewEntry5_WdError(v148);
      v115[3] = *(_QWORD *)(v148 + 16);
      v115[4] = v128;
      v115[5] = -1073741811LL;
      WdLogEvent5_WdError(v115);
      goto LABEL_148;
    }
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v131, *(struct DXGSYNCOBJECT **)(v148 + 32));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v131);
    DXGSYNCOBJECT::GetVidSchSyncObject(
      *(DXGSYNCOBJECT **)(v148 + 32),
      *(struct ADAPTER_RENDER **)(*(_QWORD *)(v148 + 16) + 16LL));
    Object = 0LL;
    v97 = _guard_dispatch_icall_fptr();
    v43 = v97;
    if ( v97 != -1071775486 )
      break;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v143);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v131);
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v124);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v101, &EventBlockThread, v102, 68);
    v103 = KeWaitForSingleObject(Object, UserRequest, 0, 1u, 0LL);
    v43 = v103;
    if ( !v103 )
      KeReleaseSemaphore((PRKSEMAPHORE)Object, 0, 1, 0);
    if ( PsIsThreadTerminating(KeGetCurrentThread()) )
    {
      v112 = WdLogNewEntry5_WdWarning(v105, v104, v106);
      *(_QWORD *)(v112 + 24) = 12462LL;
      WdLogEvent5_WdWarning(v112);
      LODWORD(v43) = -1073741130;
LABEL_130:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v131);
LABEL_148:
      if ( v125 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v124);
      goto LABEL_150;
    }
    if ( (_DWORD)v43 )
    {
      v111 = WdLogNewEntry5_WdWarning(v105, v104, v106);
      *(_QWORD *)(v111 + 32) = 12469LL;
      goto LABEL_129;
    }
    v107 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v143);
    v43 = v107;
    if ( v107 < 0 )
    {
      v111 = WdLogNewEntry5_WdWarning(v109, v108, v110);
      *(_QWORD *)(v111 + 32) = 12479LL;
LABEL_129:
      *(_QWORD *)(v111 + 24) = v43;
      WdLogEvent5_WdWarning(v111);
      goto LABEL_130;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v131);
    if ( v125 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v124);
    v128 = v134;
  }
  if ( v97 < 0 )
  {
    v111 = WdLogNewEntry5_WdWarning(v99, v98, v100);
    *(_QWORD *)(v111 + 32) = 12486LL;
    goto LABEL_129;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v131);
  if ( v125 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v124);
  DXGALLOCATIONREFERENCE::`vector deleting destructor'(v119);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v143);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v136);
  if ( v126 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v126 + 104));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v129);
  if ( v120 )
  {
    v113 = _InterlockedDecrement64((volatile signed __int64 *)v120 + 8);
    if ( !v113 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v120 + 2), v120);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v113, &EventProfilerExit, v114, 2106);
  return 0LL;
}
