/*
 * XREFs of ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C008F820
 * Callers:
 *     DxgkCreateAllocation @ 0x1C008F800 (DxgkCreateAllocation.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0191640 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C008BD10 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 *     _lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_ @ 0x1C008FEF0 (_lambda_4dffd96e1fbf85f9617d9335535820ae_--_lambda_invoker_cdecl_.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C0097830 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009DD6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1C0182F24 (-GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEA.c)
 *     ?ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDALLOCATION@@_N@Z @ 0x1C01838AC (-ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDAL.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCreateAllocationInternal(struct _D3DKMT_CREATEALLOCATION *a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  struct DXGRESOURCE *v7; // r15
  __int64 v8; // rcx
  bool v9; // r12
  _D3DKMT_CREATEALLOCATION *v10; // rcx
  __int64 hDevice; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGDEVICE *v15; // rdi
  __int64 NumAllocations; // rsi
  char Flags; // bl
  int v18; // r14d
  __int64 v19; // rcx
  int v20; // ebx
  struct _KEVENT *v21; // r12
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r12
  SIZE_T v30; // rax
  struct DXGDEVICE *v31; // r12
  __int64 v32; // rcx
  void *v33; // r12
  DXGDEVICE *v34; // rdi
  int StandardAllocationDriverData; // r14d
  _DWORD *p_hResource; // rcx
  _DWORD *p_hGlobalShare; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS *p_Flags; // rcx
  struct DXGADAPTER *v39; // rdi
  struct DXGDEVICE *v40; // rcx
  __int64 v41; // r8
  struct DXGALLOCATION **v43; // rax
  OUTPUTDUPL_MGR *v44; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGRESOURCE **ThreadProperty; // rax
  struct DXGRESOURCE **v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rax
  struct DXGDEVICE *v53; // rax
  _QWORD *v54; // rax
  int v55; // r12d
  struct DXGDEVICE *v56; // rcx
  struct _KEVENT *v57; // rcx
  unsigned __int8 v58; // bl
  __int64 v59; // r8
  unsigned __int8 v60; // bl
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r8
  enum _D3DKMDT_STANDARDALLOCATION_TYPE v68; // edx
  __int64 v69; // rcx
  __int64 v70; // rax
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rcx
  _QWORD *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned __int8 v75; // [rsp+70h] [rbp-1B8h]
  struct DXGDEVICE *v76; // [rsp+78h] [rbp-1B0h] BYREF
  struct DXGALLOCATION **v77; // [rsp+80h] [rbp-1A8h]
  struct DXGDEVICE *v78; // [rsp+88h] [rbp-1A0h] BYREF
  PVOID P; // [rsp+90h] [rbp-198h]
  struct DXGRESOURCE *v80; // [rsp+98h] [rbp-190h]
  unsigned int v81; // [rsp+A0h] [rbp-188h] BYREF
  unsigned __int64 *v82; // [rsp+A8h] [rbp-180h]
  void *v83; // [rsp+B0h] [rbp-178h] BYREF
  struct DXGDEVICE *v84; // [rsp+B8h] [rbp-170h] BYREF
  int v85; // [rsp+C0h] [rbp-168h]
  __int64 v86; // [rsp+C8h] [rbp-160h] BYREF
  struct DXGADAPTER *v87; // [rsp+D0h] [rbp-158h]
  char v88; // [rsp+D8h] [rbp-150h]
  _D3DKMT_CREATEALLOCATION v89; // [rsp+E0h] [rbp-148h] BYREF
  struct _D3DKMT_CREATESTANDARDALLOCATION v90; // [rsp+130h] [rbp-F8h] BYREF
  char v91[8]; // [rsp+150h] [rbp-D8h] BYREF
  _BYTE v92[16]; // [rsp+158h] [rbp-D0h] BYREF
  DXGADAPTER *v93; // [rsp+168h] [rbp-C0h]
  char v94; // [rsp+170h] [rbp-B8h]
  _BYTE v95[16]; // [rsp+178h] [rbp-B0h] BYREF
  __int64 v96; // [rsp+188h] [rbp-A0h]
  __int64 v97; // [rsp+198h] [rbp-90h]
  char v98; // [rsp+1A0h] [rbp-88h]
  __int64 v99[3]; // [rsp+1B0h] [rbp-78h] BYREF
  int Size; // [rsp+1E0h] [rbp-48h] BYREF
  __int64 v101; // [rsp+1E4h] [rbp-44h]
  int v102; // [rsp+1ECh] [rbp-3Ch]
  __int64 v103; // [rsp+1F0h] [rbp-38h]

  v82 = a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2003);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v7 = (struct DXGRESOURCE *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (struct DXGRESOURCE **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v47 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v7 = *v47;
      }
    }
  }
  v80 = v7;
  v9 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v75 = v9;
  if ( !v7 )
  {
    v48 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v48 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v48);
    goto LABEL_74;
  }
  memset(&v90, 0, sizeof(v90));
  if ( v9 )
  {
    v10 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v10 = (_D3DKMT_CREATEALLOCATION *)MmUserProbeAddress;
    v89 = *v10;
  }
  else
  {
    v89 = *a1;
  }
  hDevice = v89.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v76, v89.hDevice, (struct _KTHREAD **)v7, &v78);
  v15 = v78;
  if ( !v78 )
  {
    v51 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v51 + 24) = hDevice;
    *(_QWORD *)(v51 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v51);
    goto LABEL_81;
  }
  NumAllocations = v89.NumAllocations;
  if ( v89.NumAllocations > 0x682AA )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
    v54[3] = v15;
    v54[4] = NumAllocations;
    v54[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v54);
LABEL_81:
    v53 = v76;
    if ( v76 )
    {
LABEL_82:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v76 + 2), v76);
    }
LABEL_74:
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v49, &EventProfilerExit, v50, 2003);
    return 3221225485LL;
  }
  Flags = (char)v89.Flags;
  if ( (*((_BYTE *)v7 + 307) & 8) == 0
    && ((*(_BYTE *)&v89.Flags & 8) != 0
     || (*(_WORD *)&v89.Flags & 0x100) != 0
     || (*(_WORD *)&v89.Flags & 0x1000) != 0
     || (*(_WORD *)&v89.Flags & 0x200) != 0)
    || (*(_BYTE *)&v89.Flags & 0x20) != 0 && (*(_DWORD *)&v89.Flags & 0x10000) == 0 && (*((_BYTE *)v7 + 307) & 8) == 0
    || (*(_DWORD *)&v89.Flags & 0x20000) != 0 && (*(_DWORD *)&v89.Flags & 0x10000) == 0 )
  {
    goto LABEL_80;
  }
  v18 = HIWORD(*(_DWORD *)&v89.Flags) & 1;
  if ( v18 )
  {
    v55 = ValidateStandardAllocationParams(&v89, &v90, v9);
    if ( v55 < 0 )
    {
      v56 = v76;
      if ( v76 && _InterlockedExchangeAdd64((volatile signed __int64 *)v76 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v76 + 2), v76);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)v56, &EventProfilerExit, v14, 2003);
      return (unsigned int)v55;
    }
  }
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 || !v89.hResource && !(_DWORD)NumAllocations )
  {
LABEL_80:
    v52 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v52 + 24) = v15;
    *(_QWORD *)(v52 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v52);
    goto LABEL_81;
  }
  v84 = v15;
  v19 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
  if ( *(int *)(v19 + 1968) >= 0x2000 || *(_BYTE *)(v19 + 2252) )
    v20 = *((_DWORD *)DXGGLOBAL::GetGlobal(v19) + 203);
  else
    v20 = 0;
  v85 = v20;
  v21 = (struct _KEVENT *)*((_QWORD *)v15 + 2);
  if ( *((_DWORD *)v15 + 82) == 2 )
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
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v15 + 112, 0LL) )
      goto LABEL_28;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 96LL));
    v60 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v15 + 112));
    if ( !v60 )
      goto LABEL_112;
    goto LABEL_111;
  }
  if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 13), 0) )
    goto LABEL_28;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 96LL));
  v58 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v59, 40);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 13), 1u);
  if ( v58 )
LABEL_111:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
LABEL_112:
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_28:
  v87 = *(struct DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v87 + 3);
  v86 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v87 + 120, 0LL);
  v88 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v91, (__int64)v78, 2, v22, 0);
  if ( v94 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25);
    v61[3] = 275LL;
    v61[4] = 4LL;
    v61[5] = v92;
    v61[6] = 0LL;
    v61[7] = 0LL;
    WdLogEvent5_WdCriticalError(v61);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v93 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v93 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v26, &EventBlockThread, v27, 72);
      KeWaitForSingleObject((char *)v93 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v93);
  }
  v94 = 1;
  v28 = *(unsigned int *)(v97 + 408);
  if ( (_DWORD)v28 != 1 )
    goto LABEL_117;
  if ( v98 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v95);
    v28 = *(unsigned int *)(v96 + 176);
    if ( (_DWORD)v28 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v95);
LABEL_117:
      COREACCESS::Release((COREACCESS *)v92);
      v65 = WdLogNewEntry5_WdWarning(v63, v62, v64);
      *(_QWORD *)(v65 + 24) = v78;
      *(_QWORD *)(v65 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v65);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v86);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v84);
      if ( v76 && _InterlockedExchangeAdd64((volatile signed __int64 *)v76 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v76 + 2), v76);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v66, &EventProfilerExit, v67, 2003);
      return 3221226166LL;
    }
  }
  v29 = v89.NumAllocations;
  v30 = 8LL * v89.NumAllocations;
  if ( !is_mul_ok(v89.NumAllocations, 8uLL) )
    v30 = -1LL;
  if ( v30 )
  {
    if ( v30 > 0x7FFFFFFF )
      goto LABEL_137;
  }
  else
  {
    v30 = 1LL;
  }
  P = ExAllocatePoolWithTag(PagedPool, v30, 0x4B677844u);
  if ( P )
  {
    v31 = v78;
    v32 = *((_QWORD *)v78 + 209);
    if ( !v32 )
      goto LABEL_41;
    v43 = *(struct DXGALLOCATION ***)(v32 + 2304);
    v77 = v43;
    v44 = v43[13];
    if ( v44 )
    {
      if ( (int)lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_(v44, v78) < 0 )
        goto LABEL_41;
      v43 = v77;
    }
    v99[0] = *(_QWORD *)((char *)v43[2] + 268);
    v99[1] = (__int64)lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_;
    v99[2] = (__int64)v31;
    Global = DXGGLOBAL::GetGlobal(v99[0]);
    DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
      Global,
      lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_,
      v99);
LABEL_41:
    v89.hGlobalShare = 0;
    v89.hDevice = 0;
    v33 = 0LL;
    v83 = 0LL;
    if ( !v18 )
    {
      v34 = v78;
      goto LABEL_43;
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL)) >= 2000 )
    {
      v81 = 0;
      v103 = 0LL;
      Size = v90.ExistingHeapData.Size;
      v101 = 1LL;
      v102 = 7;
      v34 = v78;
      StandardAllocationDriverData = DXGDEVICE::GetStandardAllocationDriverData(v78, v68, &Size, &v81, &v83);
      if ( StandardAllocationDriverData < 0 )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v86);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v84);
        v40 = v76;
        if ( !v76 || _InterlockedExchangeAdd64((volatile signed __int64 *)v76 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
          goto LABEL_59;
        goto LABEL_131;
      }
      v33 = v83;
      pAllocationInfo = v89.pAllocationInfo;
      v89.pAllocationInfo->pPrivateDriverData = v83;
      pAllocationInfo->PrivateDriverDataSize = v81;
LABEL_43:
      StandardAllocationDriverData = DXGDEVICE::CreateAllocation(
                                       v34,
                                       &v89,
                                       v75,
                                       0,
                                       0LL,
                                       0LL,
                                       (struct COREDEVICEACCESS *)v91,
                                       0,
                                       0LL,
                                       0LL,
                                       0LL,
                                       v82,
                                       &v90);
      if ( v75 )
      {
        p_hResource = &a1->hResource;
        if ( (unsigned __int64)&a1->hResource >= MmUserProbeAddress )
          p_hResource = (_DWORD *)MmUserProbeAddress;
        *p_hResource = v89.hResource;
        p_hGlobalShare = &a1->hGlobalShare;
        if ( (unsigned __int64)&a1->hGlobalShare >= MmUserProbeAddress )
          p_hGlobalShare = (_DWORD *)MmUserProbeAddress;
        *p_hGlobalShare = v89.hGlobalShare;
        p_Flags = &a1->Flags;
        if ( (unsigned __int64)&a1->Flags >= MmUserProbeAddress )
          p_Flags = (D3DKMT_CREATEALLOCATIONFLAGS *)MmUserProbeAddress;
        *p_Flags = v89.Flags;
      }
      else
      {
        a1->hResource = v89.hResource;
        a1->hGlobalShare = v89.hGlobalShare;
        a1->Flags = v89.Flags;
      }
      ExFreePoolWithTag(P, 0);
      if ( v33 )
        ExFreePoolWithTag(v33, 0);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
      v39 = v87;
      ExReleasePushLockSharedEx((char *)v87 + 120, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v87 + 2), v87);
      if ( v85 )
        ExReleasePushLockSharedEx((char *)v78 + 112, 0LL);
      else
        ExReleaseResourceLite(*((PERESOURCE *)v78 + 13));
      KeLeaveCriticalRegion();
      if ( !v76 || _InterlockedExchangeAdd64((volatile signed __int64 *)v76 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
        goto LABEL_59;
LABEL_131:
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v76 + 2), v76);
LABEL_59:
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)v40, &EventProfilerExit, v41, 2003);
      return (unsigned int)StandardAllocationDriverData;
    }
    v70 = WdLogNewEntry5_WdError(v69);
    *(_QWORD *)(v70 + 24) = v78;
    *(_QWORD *)(v70 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v70);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v86);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v84);
    v53 = v76;
    if ( !v76 )
      goto LABEL_74;
    goto LABEL_82;
  }
LABEL_137:
  v72 = (_QWORD *)WdLogNewEntry5_WdLowResource(v28);
  v72[3] = v78;
  v72[4] = v29;
  v72[5] = -1073741801LL;
  WdLogEvent5_WdLowResource(v72);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v86);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v84);
  if ( v76 && _InterlockedExchangeAdd64((volatile signed __int64 *)v76 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v76 + 2), v76);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v73, &EventProfilerExit, v74, 2003);
  return 3221225495LL;
}
