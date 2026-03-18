/*
 * XREFs of ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00DD060
 * Callers:
 *     ?VmBusCreateAllocation@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002BC70 (-VmBusCreateAllocation@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateAllocation @ 0x1C00DD050 (DxgkCreateAllocation.c)
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C00D84B4 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 *     _lambda_352933434268f97f7896632aa298aa71_::_lambda_invoker_cdecl_ @ 0x1C00DD620 (_lambda_352933434268f97f7896632aa298aa71_--_lambda_invoker_cdecl_.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCreateAllocationInternal(struct _D3DKMT_CREATEALLOCATION *a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rsi
  unsigned __int8 CurrentThreadPreviousMode; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _D3DKMT_CREATEALLOCATION *v11; // rcx
  __int64 hDevice; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGDEVICE *v17; // rdi
  __int64 NumAllocations; // rbx
  __int64 v19; // rcx
  int v20; // ebx
  struct _KEVENT *v21; // r15
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdi
  SIZE_T v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *PoolWithTag; // r12
  DXGDEVICE *v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // r15
  OUTPUTDUPL_MGR *v38; // rcx
  DXGGLOBAL *v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // r15d
  _DWORD *p_hResource; // rcx
  _DWORD *p_hGlobalShare; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS *p_Flags; // rcx
  struct DXGADAPTER *v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 *ThreadProperty; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  struct _KEVENT *v57; // rcx
  unsigned __int8 v58; // bl
  __int64 v59; // r8
  unsigned __int8 v60; // bl
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  struct DXGRESOURCE *v70; // r13
  __int64 v71; // r8
  D3DKMT_HANDLE v72; // r8d
  __int64 v73; // r10
  int v74; // r9d
  __int64 v75; // r9
  int v76; // r8d
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // r9
  struct DXGALLOCATION **v78; // r10
  __int64 hAllocation; // rdx
  __int64 v80; // rcx
  __int64 v81; // r11
  struct DXGALLOCATION *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // r11
  int v86; // edx
  _QWORD *v87; // rax
  __int64 v88; // rcx
  __int64 v89; // r8
  struct DXGDEVICE *v90; // [rsp+60h] [rbp-168h] BYREF
  struct DXGDEVICE *v91; // [rsp+68h] [rbp-160h] BYREF
  D3DDDI_ALLOCATIONINFO *v92; // [rsp+70h] [rbp-158h]
  _QWORD *v93; // [rsp+78h] [rbp-150h]
  struct _D3DKMT_CREATEALLOCATION v94; // [rsp+80h] [rbp-148h] BYREF
  struct DXGDEVICE *v95; // [rsp+D0h] [rbp-F8h] BYREF
  int v96; // [rsp+D8h] [rbp-F0h]
  __int64 v97; // [rsp+E0h] [rbp-E8h] BYREF
  struct DXGADAPTER *v98; // [rsp+E8h] [rbp-E0h]
  char v99; // [rsp+F0h] [rbp-D8h]
  char v100[8]; // [rsp+100h] [rbp-C8h] BYREF
  _BYTE v101[16]; // [rsp+108h] [rbp-C0h] BYREF
  DXGADAPTER *v102; // [rsp+118h] [rbp-B0h]
  char v103; // [rsp+120h] [rbp-A8h]
  _BYTE v104[16]; // [rsp+128h] [rbp-A0h] BYREF
  __int64 v105; // [rsp+138h] [rbp-90h]
  __int64 v106; // [rsp+148h] [rbp-80h]
  char v107; // [rsp+150h] [rbp-78h]
  _QWORD v108[3]; // [rsp+160h] [rbp-68h] BYREF
  _BYTE v109[80]; // [rsp+178h] [rbp-50h] BYREF
  unsigned __int8 v111; // [rsp+1E0h] [rbp+18h]
  UINT v112; // [rsp+1E0h] [rbp+18h]
  struct DXGALLOCATION **v113; // [rsp+1E8h] [rbp+20h]
  struct DXGALLOCATION **v114; // [rsp+1E8h] [rbp+20h]

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2003);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v7 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v7 = *ThreadProperty;
    }
  }
  v92 = (D3DDDI_ALLOCATIONINFO *)v7;
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  if ( CurrentThreadPreviousMode != 1 )
    CurrentThreadPreviousMode = 0;
  v111 = CurrentThreadPreviousMode;
  if ( !v7 )
  {
    v51 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v51 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v51);
LABEL_73:
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v52, &EventProfilerExit, v53, 2003);
    return 3221225485LL;
  }
  if ( CurrentThreadPreviousMode )
  {
    v11 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v11 = (struct _D3DKMT_CREATEALLOCATION *)MmUserProbeAddress;
    v94 = *v11;
  }
  else
  {
    v94 = *a1;
  }
  hDevice = v94.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v90, v94.hDevice, (struct _KTHREAD **)v7, &v91);
  v17 = v91;
  if ( !v91 )
  {
    v54 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v54 + 24) = hDevice;
    *(_QWORD *)(v54 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v54);
LABEL_80:
    if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
    goto LABEL_73;
  }
  NumAllocations = v94.NumAllocations;
  if ( v94.NumAllocations > 0x682AA )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    v56[3] = v17;
    v56[4] = NumAllocations;
    v56[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v56);
    goto LABEL_80;
  }
  if ( (*(_BYTE *)(v7 + 275) & 4) == 0
    && ((*(_BYTE *)&v94.Flags & 8) != 0
     || (*(_BYTE *)&v94.Flags & 0x20) != 0
     || (*(_WORD *)&v94.Flags & 0x100) != 0
     || (*(_WORD *)&v94.Flags & 0x1000) != 0
     || (*(_WORD *)&v94.Flags & 0x200) != 0)
    || (*(_BYTE *)&v94.Flags & 2) != 0 && (*(_BYTE *)&v94.Flags & 1) == 0
    || !v94.hResource && !v94.NumAllocations )
  {
    v55 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v55 + 24) = v17;
    *(_QWORD *)(v55 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v55);
    goto LABEL_80;
  }
  v95 = v91;
  v19 = *(_QWORD *)(*((_QWORD *)v91 + 2) + 16LL);
  if ( *(int *)(v19 + 1944) >= 0x2000 || *(_BYTE *)(v19 + 2228) )
    v20 = *((_DWORD *)DXGGLOBAL::GetGlobal(v19, v13, v15, v16) + 203);
  else
    v20 = 0;
  v96 = v20;
  v21 = (struct _KEVENT *)*((_QWORD *)v17 + 2);
  if ( *((_DWORD *)v17 + 82) == 2 )
  {
    if ( KeReadStateEvent(v21 + 4) )
      goto LABEL_26;
    v57 = v21 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v21 + 3) )
      goto LABEL_26;
    v57 = v21 + 3;
  }
  KeWaitForSingleObject(v57, Executive, 0, 0, 0LL);
LABEL_26:
  KeEnterCriticalRegion();
  if ( v20 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v17 + 112, 0LL) )
      goto LABEL_28;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 96LL));
    v60 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v17 + 112));
    if ( !v60 )
      goto LABEL_98;
    goto LABEL_97;
  }
  if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v17 + 13), 0) )
    goto LABEL_28;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 96LL));
  v58 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v59, 40);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v17 + 13), 1u);
  if ( v58 )
LABEL_97:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
LABEL_98:
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_28:
  v98 = *(struct DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v98 + 3);
  v97 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v98 + 120, 0LL);
  v99 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v100, (__int64)v91, 2LL, v22, 0);
  if ( v103 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25);
    v61[3] = 275LL;
    v61[4] = 4LL;
    v61[5] = v101;
    v61[6] = 0LL;
    v61[7] = 0LL;
    WdLogEvent5_WdCriticalError(v61);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v102 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v102 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v26, &EventBlockThread, v27, 72);
      KeWaitForSingleObject((char *)v102 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v102);
  }
  v103 = 1;
  v28 = *(unsigned int *)(v106 + 408);
  if ( (_DWORD)v28 != 1 )
    goto LABEL_105;
  if ( v107 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v104);
    v28 = *(unsigned int *)(v105 + 176);
    if ( (_DWORD)v28 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v104);
LABEL_105:
      COREACCESS::Release((COREACCESS *)v101);
      v66 = WdLogNewEntry5_WdWarning(v63, v62, v64, v65);
      *(_QWORD *)(v66 + 24) = v91;
      *(_QWORD *)(v66 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v66);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v100);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v97);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v95);
      if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v67, &EventProfilerExit, v68, 2003);
      return 3221226166LL;
    }
  }
  v29 = v94.NumAllocations;
  v30 = 8LL * v94.NumAllocations;
  if ( !is_mul_ok(v94.NumAllocations, 8uLL) )
    v30 = -1LL;
  if ( v30 )
  {
    if ( v30 > 0x7FFFFFFF )
      goto LABEL_151;
  }
  else
  {
    v30 = 1LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v30, 0x4B677844u);
  v93 = PoolWithTag;
  if ( PoolWithTag )
  {
    v35 = v91;
    v36 = *((_QWORD *)v91 + 225);
    if ( v36 )
    {
      v37 = *(_QWORD *)(v36 + 2280);
      v38 = *(OUTPUTDUPL_MGR **)(v37 + 104);
      if ( !v38 || (int)lambda_352933434268f97f7896632aa298aa71_::_lambda_invoker_cdecl_(v38, v91) >= 0 )
      {
        v108[0] = *(_QWORD *)(*(_QWORD *)(v37 + 16) + 268LL);
        v108[1] = lambda_352933434268f97f7896632aa298aa71_::_lambda_invoker_cdecl_;
        v108[2] = v35;
        v39 = (DXGGLOBAL *)DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v69 = WdLogNewEntry5_WdAssertion(0LL, v31, v32, v33);
          *(_QWORD *)(v69 + 24) = 1815LL;
          WdLogEvent5_WdAssertion(v69);
          v39 = (DXGGLOBAL *)DXGGLOBAL::m_pGlobal;
        }
        DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
          v39,
          lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_,
          (__int64)v108,
          v33);
      }
    }
    v94.hGlobalShare = 0;
    v94.hDevice = 0;
    v42 = DXGDEVICE::CreateAllocation(
            v35,
            &v94,
            v111,
            0LL,
            0LL,
            0LL,
            (struct COREDEVICEACCESS *)v100,
            0,
            0LL,
            0LL,
            0LL,
            a2);
    if ( v42 < 0 )
      v40 = 0LL;
    else
      LOBYTE(v40) = 1;
    if ( v111 )
    {
      p_hResource = &a1->hResource;
      if ( (unsigned __int64)&a1->hResource >= MmUserProbeAddress )
        p_hResource = (_DWORD *)MmUserProbeAddress;
      *p_hResource = v94.hResource;
      p_hGlobalShare = &a1->hGlobalShare;
      if ( (unsigned __int64)&a1->hGlobalShare >= MmUserProbeAddress )
        p_hGlobalShare = (_DWORD *)MmUserProbeAddress;
      *p_hGlobalShare = v94.hGlobalShare;
      p_Flags = &a1->Flags;
      if ( (unsigned __int64)&a1->Flags >= MmUserProbeAddress )
        p_Flags = (D3DKMT_CREATEALLOCATIONFLAGS *)MmUserProbeAddress;
      *p_Flags = v94.Flags;
    }
    else
    {
      a1->hResource = v94.hResource;
      a1->hGlobalShare = v94.hGlobalShare;
      a1->Flags = v94.Flags;
    }
    if ( v42 < 0 && (_BYTE)v40 )
    {
      v112 = 0;
      v70 = 0LL;
      v113 = 0LL;
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
        (DXGHANDLETABLELOCKEXCLUSIVE *)v109,
        (struct DXGPROCESS *)v7,
        v40,
        v41);
      if ( v94.hResource )
      {
        v72 = (v94.hResource >> 6) & 0xFFFFFF;
        if ( v72 < *(_DWORD *)(v7 + 208) )
        {
          v73 = *(_QWORD *)(v7 + 192);
          v74 = *(_DWORD *)(v73 + 16LL * v72 + 8);
          if ( ((v94.hResource >> 26) & 0x30) == (*(_BYTE *)(v73 + 16LL * v72 + 8) & 0x30)
            && (v74 & 0x1000) == 0
            && (v74 & 0xF) != 0
            && (*(_BYTE *)(v73 + 16LL * v72 + 8) & 0xF) == 4 )
          {
            v70 = *(struct DXGRESOURCE **)(v73 + 16LL * v72);
          }
        }
        if ( v70 )
        {
          if ( v72 < *(_DWORD *)(v7 + 208) )
          {
            v75 = *(_QWORD *)(v7 + 192);
            v76 = *(_DWORD *)(v75 + 16LL * v72 + 8);
            if ( ((v94.hResource >> 26) & 0x30) == (v76 & 0x30) && (v76 & 0x1000) == 0 && (v76 & 0xF) != 0 )
              *(_DWORD *)(v75 + 16LL * ((v94.hResource >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
          }
        }
      }
      else
      {
        v112 = v94.NumAllocations;
        if ( v94.NumAllocations )
        {
          pAllocationInfo = v94.pAllocationInfo;
          v92 = v94.pAllocationInfo;
          v78 = (struct DXGALLOCATION **)PoolWithTag;
          v114 = (struct DXGALLOCATION **)PoolWithTag;
          v93 = (_QWORD *)v94.NumAllocations;
          do
          {
            hAllocation = pAllocationInfo->hAllocation;
            v80 = (pAllocationInfo->hAllocation >> 6) & 0xFFFFFF;
            if ( (unsigned int)v80 < *(_DWORD *)(v7 + 208)
              && (v81 = *(_QWORD *)(v7 + 192),
                  v71 = *(unsigned int *)(v81 + 16LL * (unsigned int)v80 + 8),
                  hAllocation = ((unsigned int)hAllocation >> 26) & 0x30,
                  (_BYTE)hAllocation == (*(_BYTE *)(v81 + 16LL * (unsigned int)v80 + 8) & 0x30))
              && (v71 & 0x1000) == 0
              && (v71 & 0xF) != 0
              && (v80 *= 2LL, (*(_BYTE *)(v81 + 8 * v80 + 8) & 0xF) == 5) )
            {
              v82 = *(struct DXGALLOCATION **)(v81 + 8 * v80);
            }
            else
            {
              v82 = 0LL;
            }
            *v78 = v82;
            if ( !v82 )
            {
              v83 = WdLogNewEntry5_WdAssertion(v80, hAllocation, v71, pAllocationInfo);
              *(_QWORD *)(v83 + 24) = 7543LL;
              WdLogEvent5_WdAssertion(v83);
              pAllocationInfo = v92;
              v78 = v114;
            }
            v71 = pAllocationInfo->hAllocation;
            v84 = (pAllocationInfo->hAllocation >> 6) & 0xFFFFFF;
            if ( (unsigned int)v84 < *(_DWORD *)(v7 + 208) )
            {
              v85 = *(_QWORD *)(v7 + 192);
              v86 = *(_DWORD *)(v85 + 16 * v84 + 8);
              if ( (((unsigned int)v71 >> 26) & 0x30) == (*(_BYTE *)(v85 + 16 * v84 + 8) & 0x30)
                && (v86 & 0x1000) == 0
                && (v86 & 0xF) != 0 )
              {
                *(_DWORD *)(v85 + 16LL * (((unsigned int)v71 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
              }
            }
            v114 = ++v78;
            pAllocationInfo = (D3DDDI_ALLOCATIONINFO *)((char *)pAllocationInfo + 96);
            v92 = pAllocationInfo;
            v93 = (_QWORD *)((char *)v93 - 1);
          }
          while ( v93 );
        }
        v113 = (struct DXGALLOCATION **)PoolWithTag;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v109);
      DXGDEVICE::DestroyAllocationInternal(v35, v112, v113, v70, 0LL, DXGDEVICE::DestroyFlagsDefault);
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v100);
    v46 = v98;
    ExReleasePushLockSharedEx((char *)v98 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v98 + 2), v98);
    if ( v96 )
      ExReleasePushLockSharedEx((char *)v91 + 112, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v91 + 13));
    KeLeaveCriticalRegion();
    if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v47, &EventProfilerExit, v48, 2003);
    return (unsigned int)v42;
  }
LABEL_151:
  v87 = (_QWORD *)WdLogNewEntry5_WdLowResource(v28);
  v87[3] = v91;
  v87[4] = v29;
  v87[5] = -1073741801LL;
  WdLogEvent5_WdLowResource(v87);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v100);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v97);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v95);
  if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v88, &EventProfilerExit, v89, 2003);
  return 3221225495LL;
}
