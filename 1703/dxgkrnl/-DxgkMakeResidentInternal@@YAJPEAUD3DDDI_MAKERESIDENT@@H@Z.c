/*
 * XREFs of ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00CAEC0
 * Callers:
 *     ?VmBusMakeResident@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002DA50 (-VmBusMakeResident@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C009DEE0 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z.c)
 *     DxgkMakeResident @ 0x1C009F200 (DxgkMakeResident.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002180 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0002BF8 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013970 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0013E4C (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusSendMakeResident@DXGADAPTER@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C00309F0 (-VmBusSendMakeResident@DXGADAPTER@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFEREN.c)
 *     Template_ppqq @ 0x1C003875C (Template_ppqq.c)
 *     Template_qxx @ 0x1C00387F0 (Template_qxx.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C016CF10 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C016CF4C (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkMakeResidentInternal(struct D3DDDI_MAKERESIDENT *a1, int a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGPROCESS *v11; // rcx
  struct DXGPROCESS **ThreadProperty; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  struct D3DDDI_MAKERESIDENT *v17; // rax
  struct D3DDDI_MAKERESIDENT *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  struct DXGPAGINGQUEUE *v26; // r15
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 NumAllocations; // rdi
  _BYTE *v32; // r12
  __int64 v33; // rax
  bool v34; // cf
  SIZE_T v35; // rax
  char *v36; // rax
  unsigned __int64 v37; // rdi
  _BYTE *PoolWithTag; // rcx
  unsigned int *AllocationList; // r14
  ULONG_PTR *v40; // r12
  __int64 v41; // rsi
  __int64 v42; // rcx
  int v43; // ebx
  struct _KEVENT *v44; // rdi
  struct _KEVENT *v45; // rcx
  __int64 v46; // r9
  unsigned __int8 v47; // bl
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  _QWORD *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rcx
  char v61; // r13
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // r8
  __int64 v66; // r9
  struct DXGPROCESS *v67; // r15
  struct DXGPROCESS **v68; // rax
  struct DXGALLOCATION **v69; // rbx
  unsigned int *v70; // rax
  unsigned int v71; // r8d
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  ULONG_PTR Count; // rbx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  struct _EX_RUNDOWN_REF *v85; // rcx
  _DWORD *v86; // rax
  __int64 v87; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v89; // rax
  int CurrentProcessSessionId; // ebx
  bool v91; // zf
  __int64 v92; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rax
  struct _KTHREAD *v99; // rdi
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  int v103; // ebx
  __int64 v104; // r8
  __int64 v105; // rbx
  __int64 *v106; // rax
  __int64 v107; // rbx
  _QWORD *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  struct DXGPAGINGQUEUE *v112; // rbx
  __int64 v113; // rdi
  __int64 v114; // rax
  int Resident; // ebx
  struct D3DDDI_MAKERESIDENT *v116; // r14
  int v117; // r8d
  int v118; // esi
  unsigned __int64 *p_PagingFenceValue; // r15
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  DXGADAPTER *v123; // rsi
  UINT v124; // edi
  unsigned __int64 *p_NumBytesToTrim; // rbx
  unsigned int HostProcess; // eax
  struct D3DDDI_MAKERESIDENT *v127; // r9
  _QWORD *v128; // rdx
  _QWORD *v129; // rdx
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rcx
  __int64 v140; // r8
  struct _EX_RUNDOWN_REF *v141; // [rsp+58h] [rbp-400h] BYREF
  struct DXGALLOCATION **v142; // [rsp+60h] [rbp-3F8h]
  char v143[8]; // [rsp+68h] [rbp-3F0h] BYREF
  struct D3DDDI_MAKERESIDENT *v144; // [rsp+70h] [rbp-3E8h]
  _BYTE *v145; // [rsp+78h] [rbp-3E0h]
  struct DXGPAGINGQUEUE *v146; // [rsp+80h] [rbp-3D8h] BYREF
  struct DXGPROCESS *v147; // [rsp+88h] [rbp-3D0h]
  struct DXGALLOCATIONREFERENCE *v148; // [rsp+90h] [rbp-3C8h]
  struct D3DDDI_MAKERESIDENT *v149; // [rsp+98h] [rbp-3C0h]
  __int64 v150; // [rsp+A0h] [rbp-3B8h] BYREF
  int v151; // [rsp+A8h] [rbp-3B0h]
  __int64 v152; // [rsp+B0h] [rbp-3A8h]
  unsigned int v153; // [rsp+B8h] [rbp-3A0h]
  unsigned int *v154; // [rsp+C0h] [rbp-398h]
  struct D3DDDI_MAKERESIDENT *v155; // [rsp+C8h] [rbp-390h]
  char v156[8]; // [rsp+D0h] [rbp-388h] BYREF
  _BYTE v157[16]; // [rsp+D8h] [rbp-380h] BYREF
  DXGADAPTER *v158; // [rsp+E8h] [rbp-370h]
  char v159; // [rsp+F0h] [rbp-368h]
  _BYTE v160[16]; // [rsp+F8h] [rbp-360h] BYREF
  __int64 v161; // [rsp+108h] [rbp-350h]
  __int64 v162; // [rsp+118h] [rbp-340h]
  char v163; // [rsp+120h] [rbp-338h]
  _BYTE v164[24]; // [rsp+130h] [rbp-328h] BYREF
  _OWORD v165[3]; // [rsp+148h] [rbp-310h] BYREF
  PVOID P; // [rsp+180h] [rbp-2D8h] BYREF
  _BYTE v167[320]; // [rsp+188h] [rbp-2D0h] BYREF
  int v168; // [rsp+2C8h] [rbp-190h]
  _BYTE *v169; // [rsp+2D0h] [rbp-188h] BYREF
  _BYTE v170[320]; // [rsp+2D8h] [rbp-180h] BYREF
  int v171; // [rsp+418h] [rbp-40h]

  v149 = a1;
  v155 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2115);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  v11 = ProcessDxgProcess;
  v147 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*((_BYTE *)ProcessDxgProcess + 275) & 2) != 0 )
  {
    ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    if ( ThreadProperty )
    {
      v11 = *ThreadProperty;
      v147 = *ThreadProperty;
    }
    else
    {
      v11 = v147;
    }
  }
  if ( !v11 )
  {
    v13 = WdLogNewEntry5_WdError(0LL, v8);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_11:
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      goto LABEL_13;
    return 3221225485LL;
  }
  v144 = 0LL;
  if ( a2 )
  {
    v17 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v17 = (struct D3DDDI_MAKERESIDENT *)MmUserProbeAddress;
    v165[0] = *(_OWORD *)&v17->hPagingQueue;
    v165[1] = *(_OWORD *)&v17->PriorityList;
    v165[2] = *(_OWORD *)&v17->PagingFenceValue;
    v18 = (struct D3DDDI_MAKERESIDENT *)v165;
    v144 = (struct D3DDDI_MAKERESIDENT *)v165;
    v11 = v147;
  }
  else
  {
    v18 = a1;
    v144 = a1;
  }
  if ( !v18->NumAllocations )
  {
    v19 = WdLogNewEntry5_WdWarning(v11, v8, v9, v10);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_11;
  }
  if ( !v18->AllocationList )
  {
    v20 = WdLogNewEntry5_WdWarning(v11, v8, v9, v10);
    *(_QWORD *)(v20 + 24) = 480LL;
    WdLogEvent5_WdWarning(v20);
    goto LABEL_11;
  }
  if ( v18->Flags.Value >= 4 )
  {
    v21 = WdLogNewEntry5_WdWarning(v11, v8, v9, v10);
    *(_QWORD *)(v21 + 24) = 487LL;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_11;
  }
  v146 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v143, v18->hPagingQueue, v11, &v146);
  v26 = v146;
  if ( !v146 )
  {
    v27 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
    *(_QWORD *)(v27 + 24) = v18->hPagingQueue;
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v27);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v143, v28, v29, v30);
    goto LABEL_11;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v169);
  P = 0LL;
  v168 = 0;
  NumAllocations = v18->NumAllocations;
  if ( (unsigned int)NumAllocations <= 0x28 )
  {
    v32 = v170;
    v148 = (struct DXGALLOCATIONREFERENCE *)v170;
    goto LABEL_39;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations < 8 )
  {
    v32 = 0LL;
    v148 = 0LL;
    goto LABEL_41;
  }
  v33 = 8LL * (unsigned int)NumAllocations;
  if ( !is_mul_ok((unsigned int)NumAllocations, 8uLL) )
    v33 = -1LL;
  v34 = __CFADD__(v33, 8LL);
  v35 = v33 + 8;
  if ( v34 )
    v35 = -1LL;
  v36 = (char *)operator new[](v35, 0x4B677844u, PagedPool);
  if ( v36 )
  {
    *(_QWORD *)v36 = (unsigned int)NumAllocations;
    v32 = v36 + 8;
    v148 = (struct DXGALLOCATIONREFERENCE *)(v36 + 8);
    `vector constructor iterator'(
      v36 + 8,
      8LL,
      (unsigned int)NumAllocations,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
LABEL_39:
    v169 = v32;
    goto LABEL_40;
  }
  v32 = 0LL;
  v148 = 0LL;
  v169 = 0LL;
LABEL_40:
  v171 = NumAllocations;
LABEL_41:
  v37 = v18->NumAllocations;
  if ( (unsigned int)v37 <= 0x28 )
  {
    PoolWithTag = v167;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v37 < 8 )
    {
      PoolWithTag = 0LL;
LABEL_48:
      v145 = PoolWithTag;
      goto LABEL_49;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v37, 0x4B677844u);
  }
  P = PoolWithTag;
  v145 = PoolWithTag;
  v168 = v37;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8 * v37);
    PoolWithTag = P;
    goto LABEL_48;
  }
LABEL_49:
  if ( !v32 || !PoolWithTag )
  {
    v135 = WdLogNewEntry5_WdLowResource(PoolWithTag);
    *(_QWORD *)(v135 + 24) = 522LL;
    WdLogEvent5_WdLowResource(v135);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
    PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v169);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v143, v136, v137, v138);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v139, &EventProfilerExit, v140, 2115);
    return 3221225495LL;
  }
  AllocationList = (unsigned int *)v18->AllocationList;
  v154 = &AllocationList[v18->NumAllocations];
  v142 = (struct DXGALLOCATION **)v32;
  v40 = (ULONG_PTR *)PoolWithTag;
  v41 = *((_QWORD *)v26 + 2);
  v152 = v41;
  v150 = v41;
  v42 = *(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL);
  if ( *(int *)(v42 + 1944) >= 0x2000 || *(_BYTE *)(v42 + 2228) )
    v43 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 203);
  else
    v43 = 0;
  v151 = v43;
  v44 = *(struct _KEVENT **)(v41 + 16);
  if ( *(_DWORD *)(v41 + 328) == 2 )
  {
    if ( KeReadStateEvent(v44 + 4) )
      goto LABEL_61;
    v45 = v44 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v44 + 3) )
      goto LABEL_61;
    v45 = v44 + 3;
  }
  KeWaitForSingleObject(v45, Executive, 0, 0, 0LL);
LABEL_61:
  KeEnterCriticalRegion();
  if ( v43 )
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v41 + 112, 0LL) )
    {
      KeLeaveCriticalRegion();
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL) + 96LL));
      v47 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v41 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v41 + 112));
LABEL_69:
      if ( v47 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v41 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v41 + 104), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL) + 96LL));
    v47 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v41 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v48, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v41 + 104), 1u);
    goto LABEL_69;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v156, v41, 0LL, v46, 0);
  if ( v159 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v50, v49, v51);
    v52[3] = 275LL;
    v52[4] = 4LL;
    v52[5] = v157;
    v52[6] = 0LL;
    v52[7] = 0LL;
    WdLogEvent5_WdCriticalError(v52);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v158 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v158 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v53, &EventBlockThread, v54, 72);
      KeWaitForSingleObject((char *)v158 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v158);
  }
  v159 = 1;
  if ( *(_DWORD *)(v162 + 408) != 1 )
    goto LABEL_85;
  if ( v163 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v160);
    if ( *(_DWORD *)(v161 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v160);
LABEL_85:
      COREACCESS::Release((COREACCESS *)v157);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v156);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v150);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v169);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v143, v55, v56, v57);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v58, &EventProfilerExit, v59, 2115);
      return 3221226166LL;
    }
  }
  v60 = *(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL);
  v61 = *(_BYTE *)(v60 + 186);
  v62 = PsGetCurrentProcess(v60);
  v64 = PsGetProcessDxgProcess(v62, v63);
  v67 = (struct DXGPROCESS *)v64;
  if ( v64 )
  {
    if ( (*(_BYTE *)(v64 + 275) & 2) != 0 )
    {
      v68 = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( v68 )
        v67 = *v68;
    }
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v164, v67, v65, v66);
LABEL_94:
  v69 = v142;
  while ( 1 )
  {
    if ( AllocationList == v154 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v164);
      if ( v61 )
      {
        v123 = *(DXGADAPTER **)(*(_QWORD *)(v41 + 16) + 16LL);
        v124 = *((_DWORD *)v146 + 7);
        v116 = v144;
        p_PagingFenceValue = &v144->PagingFenceValue;
        p_NumBytesToTrim = &v144->NumBytesToTrim;
        HostProcess = DXGPROCESS::GetHostProcess(v147);
        Resident = DXGADAPTER::VmBusSendMakeResident(
                     v123,
                     HostProcess,
                     0,
                     v124,
                     v116->Flags,
                     v116->NumAllocations,
                     v148,
                     p_PagingFenceValue,
                     p_NumBytesToTrim);
      }
      else
      {
        v112 = v146;
        v113 = *((_QWORD *)v146 + 2);
        if ( !*(_BYTE *)(v113 + 1823)
          && (*(_DWORD *)(v113 + 328) != 2
           || (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v113 + 16) + 16LL)) < 2000) )
        {
          v114 = WdLogNewEntry5_WdError(v110, v109);
          *(_QWORD *)(v114 + 24) = v112;
          WdLogEvent5_WdError(v114);
          Resident = -1073741637;
          v116 = v144;
          v117 = a2;
          goto LABEL_155;
        }
        v116 = v144;
        v118 = v144->Flags.Value & 1 | 2;
        if ( (v144->Flags.Value & 2) == 0 )
          v118 = v144->Flags.Value & 1;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          Template_ppqq(
            *(_QWORD *)(*((_QWORD *)v112 + 5) + 32LL),
            &EventMakeResidentBegin,
            v111,
            v112,
            *(_QWORD *)(*((_QWORD *)v112 + 5) + 32LL),
            v144->NumAllocations,
            v144->Flags.Value);
        p_PagingFenceValue = &v116->PagingFenceValue;
        Resident = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, int, UINT64 *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v113 + 16) + 432LL) + 8LL) + 768LL))(
                     *(_QWORD *)(*(_QWORD *)(v113 + 16) + 440LL),
                     *((_QWORD *)v112 + 4),
                     v145,
                     v116->NumAllocations,
                     v118,
                     &v116->PagingFenceValue,
                     &v116->NumBytesToTrim);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          Template_qxx(v121, v120, v122, Resident, v116->NumBytesToTrim, *p_PagingFenceValue);
      }
      v117 = a2;
      if ( Resident >= 0 && a2 )
      {
        v127 = v149;
        v128 = &v149->PagingFenceValue;
        if ( (unsigned __int64)&v149->PagingFenceValue >= MmUserProbeAddress )
          v128 = (_QWORD *)MmUserProbeAddress;
        *v128 = *p_PagingFenceValue;
        goto LABEL_156;
      }
LABEL_155:
      v127 = v149;
LABEL_156:
      if ( v117 )
      {
        v129 = &v127->NumBytesToTrim;
        if ( (unsigned __int64)&v127->NumBytesToTrim >= MmUserProbeAddress )
          v129 = (_QWORD *)MmUserProbeAddress;
        *v129 = v116->NumBytesToTrim;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v156);
      if ( v151 )
        ExReleasePushLockSharedEx(v150 + 112, 0LL);
      else
        ExReleaseResourceLite(*(PERESOURCE *)(v150 + 104));
      KeLeaveCriticalRegion();
      if ( P != v167 && P )
        ExFreePoolWithTag(P, 0);
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v169);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v143, v130, v131, v132);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v133, &EventProfilerExit, v134, 2115);
      return (unsigned int)Resident;
    }
    if ( a2 )
    {
      v70 = AllocationList;
      if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
        v70 = (unsigned int *)MmUserProbeAddress;
      v71 = *v70;
      v153 = *v70;
    }
    else
    {
      v71 = *AllocationList;
    }
    DXGPROCESS::GetAllocationUnsafe((__int64)v67, (DXGALLOCATIONREFERENCE *)&v141, v71);
    if ( !v141 )
    {
      v76 = WdLogNewEntry5_WdError(v73, v72);
      *(_QWORD *)(v76 + 24) = v141;
      goto LABEL_103;
    }
    if ( v141[1].Count != v41 )
      break;
    if ( !v61 )
    {
      Count = v141[3].Count;
      if ( !Count )
      {
        v81 = WdLogNewEntry5_WdWarning(v73, v72, v74, v75);
        *(_QWORD *)(v81 + 24) = v141;
        WdLogEvent5_WdWarning(v81);
      }
      *v40++ = Count;
      v69 = v142;
    }
    DXGALLOCATIONREFERENCE::MoveAssign(v69++, (struct DXGALLOCATION **)&v141);
    v142 = v69;
    ++AllocationList;
    v85 = v141;
    if ( v141 )
      ExReleaseRundownProtection(v141 + 11);
    v86 = DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v87 = WdLogNewEntry5_WdAssertion(v85, v82, v83, v84);
      *(_QWORD *)(v87 + 24) = 1815LL;
      WdLogEvent5_WdAssertion(v87);
      v86 = DXGGLOBAL::m_pGlobal;
    }
    if ( v86[203] )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v89 = WdLogNewEntry5_WdAssertion(v85, v82, v83, v84);
        *(_QWORD *)(v89 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v89);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v85, v82, v83, v84);
      if ( !CurrentProcessSessionId )
        goto LABEL_94;
      v91 = (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId;
      v69 = v142;
      if ( v91 )
      {
        v92 = 0LL;
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v92 = *ThreadWin32Thread;
        v98 = v92 ? *(_QWORD *)(v92 + 80) : 0LL;
        v69 = v142;
        if ( v98 )
        {
          v99 = KeGetCurrentThread();
          if ( !v99 )
          {
            v100 = WdLogNewEntry5_WdAssertion(v95, v94, v96, v97);
            *(_QWORD *)(v100 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v100);
          }
          v103 = PsGetCurrentProcessSessionId(v95, v94, v96, v97);
          if ( !v103 || (unsigned int)PsGetThreadSessionId(v99) != v103 )
            goto LABEL_135;
          v105 = 0LL;
          v106 = (__int64 *)PsGetThreadWin32Thread(v99);
          if ( v106 )
            v105 = *v106;
          if ( v105 )
            v107 = *(_QWORD *)(v105 + 80);
          else
LABEL_135:
            v107 = 0LL;
          if ( *(_DWORD *)(v107 + 136) )
          {
            v108 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v102, v101, v104);
            v108[3] = 275LL;
            v108[4] = 25LL;
            v108[5] = *(int *)(v107 + 136);
            v108[6] = 0LL;
            v108[7] = 0LL;
            WdLogEvent5_WdCriticalError(v108);
          }
          goto LABEL_94;
        }
      }
    }
  }
  v76 = WdLogNewEntry5_WdError(v73, v72);
  *(_QWORD *)(v76 + 24) = v41;
  *(struct _EX_RUNDOWN_REF *)(v76 + 32) = v141[1];
LABEL_103:
  WdLogEvent5_WdError(v76);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v141);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v164);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v156);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v150);
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v169);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v143, v77, v78, v79);
  if ( (qword_1C006E790 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
    return 3221225485LL;
LABEL_13:
  Template_q(v14, &EventProfilerExit, v15, 2115);
  return 3221225485LL;
}
