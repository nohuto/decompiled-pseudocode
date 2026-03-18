/*
 * XREFs of DxgkPresentRedirected @ 0x1C01B5100
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00092DC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     McTemplateK0qpqqqpp @ 0x1C001B8E4 (McTemplateK0qpqqqpp.c)
 *     McTemplateK0qqxxqq @ 0x1C001B9A0 (McTemplateK0qqxxqq.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C002486C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C004BA98 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00CB880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C00DFA9C (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C014770C (--0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 */

__int64 __fastcall DxgkPresentRedirected(__int64 a1, __int64 a2)
{
  ULONG64 v2; // rbx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // r8
  _OWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r12
  __int64 v17; // rcx
  struct DXGDEVICE *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r15
  PERESOURCE *Global; // rax
  int DriverVersion; // ebx
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // edx
  __int64 v26; // rbx
  bool v27; // zf
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rax
  int v35; // r14d
  __int64 v36; // rcx
  __int64 v37; // r8
  struct DXGDEVICE *v38; // r13
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v42; // r14
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  ULONG64 v46; // rbx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v47; // [rsp+50h] [rbp-5B8h]
  struct DXGDEVICE *v48; // [rsp+58h] [rbp-5B0h] BYREF
  int v49; // [rsp+60h] [rbp-5A8h] BYREF
  __int64 v50; // [rsp+68h] [rbp-5A0h]
  ULONG64 v51; // [rsp+70h] [rbp-598h]
  int *v52; // [rsp+78h] [rbp-590h]
  char v53; // [rsp+80h] [rbp-588h]
  int v54; // [rsp+88h] [rbp-580h] BYREF
  struct DXGDEVICE *v55; // [rsp+90h] [rbp-578h] BYREF
  char v56[8]; // [rsp+98h] [rbp-570h] BYREF
  char v57; // [rsp+A0h] [rbp-568h]
  char v58[8]; // [rsp+A8h] [rbp-560h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-558h]
  char v60; // [rsp+B8h] [rbp-550h]
  ULONG64 v61; // [rsp+C0h] [rbp-548h]
  struct VIDSCH_SUBMIT_DATA_BASE *v62[2]; // [rsp+C8h] [rbp-540h] BYREF
  int v63; // [rsp+D8h] [rbp-530h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN *v64; // [rsp+E0h] [rbp-528h]
  _QWORD v65[5]; // [rsp+E8h] [rbp-520h] BYREF
  _BYTE v66[96]; // [rsp+110h] [rbp-4F8h] BYREF
  _BYTE v67[1120]; // [rsp+170h] [rbp-498h] BYREF

  v2 = a1;
  v54 = -1073741823;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    *(_QWORD *)(v5 + 32) = PsGetCurrentProcess(v7, v6);
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    if ( v2 >= MmUserProbeAddress )
      v2 = MmUserProbeAddress;
    v10 = v67;
    v11 = 8LL;
    do
    {
      *v10 = *(_OWORD *)v2;
      v10[1] = *(_OWORD *)(v2 + 16);
      v10[2] = *(_OWORD *)(v2 + 32);
      v10[3] = *(_OWORD *)(v2 + 48);
      v10[4] = *(_OWORD *)(v2 + 64);
      v10[5] = *(_OWORD *)(v2 + 80);
      v10[6] = *(_OWORD *)(v2 + 96);
      v10 += 8;
      *(v10 - 1) = *(_OWORD *)(v2 + 112);
      v2 += 128LL;
      --v11;
    }
    while ( v11 );
    *v10 = *(_OWORD *)v2;
    v10[1] = *(_OWORD *)(v2 + 16);
    v10[2] = *(_OWORD *)(v2 + 32);
    v10[3] = *(_OWORD *)(v2 + 48);
    v10[4] = *(_OWORD *)(v2 + 64);
    v10[5] = *(_OWORD *)(v2 + 80);
    v2 = (ULONG64)v67;
  }
  v61 = v2;
  v50 = 0LL;
  v49 = 2147;
  v52 = &v54;
  v53 = 1;
  v51 = v2 & -(__int64)(bTracingEnabled != 0);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2 & -(__int64)(bTracingEnabled != 0), &EventProfilerEnter, v9, 2147);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v49, 2147);
  v47 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v2 + 16);
  if ( *(_DWORD *)(v2 + 16) != 9 || *(_DWORD *)(v2 + 1096) )
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_15:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v53 )
    {
      if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          &DxgkControlGuid_Context,
          v51,
          v15,
          *(_DWORD *)v51,
          *(_DWORD *)(v51 + 56),
          *(_QWORD *)(v51 + 80),
          *(_QWORD *)(v51 + 88),
          *(_DWORD *)(v51 + 1096),
          *v52);
    }
    else if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        &DxgkControlGuid_Context,
        v51,
        v15,
        *(_DWORD *)v51,
        *(_QWORD *)(v51 + 8),
        *(_DWORD *)(v51 + 16),
        *(_DWORD *)(v51 + 88),
        *v52,
        *(_DWORD *)(v51 + 20),
        *(_DWORD *)(v51 + 24));
    }
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v14, &EventProfilerExit, v15, v49);
    return 3221225485LL;
  }
  v16 = *(unsigned int *)v2;
  v55 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v48,
    *(_DWORD *)(v2 + 4),
    (struct _KTHREAD **)Current,
    &v55);
  v18 = v55;
  if ( !v55 )
  {
    v19 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v19 + 24) = *(unsigned int *)(v2 + 4);
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
    goto LABEL_15;
  }
  v20 = *(_QWORD *)(*((_QWORD *)v55 + 2) + 16LL);
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v17);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v56, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v56);
  DriverVersion = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v20);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v23 = ((unsigned int)v16 >> 6) & 0xFFFFFF;
  if ( DriverVersion < 2000 )
  {
    if ( (unsigned int)v23 >= *((_DWORD *)Current + 62) )
      goto LABEL_38;
    v24 = *((_QWORD *)Current + 29);
    v31 = *(_DWORD *)(v24 + 16 * v23 + 8);
    if ( (((unsigned int)v16 >> 25) & 0x60) != (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60)
      || (v31 & 0x2000) != 0
      || (v31 & 0x1F) == 0 )
    {
      goto LABEL_38;
    }
    v26 = 2LL * (unsigned int)v23;
    v27 = (v31 & 0x1F) == 8;
  }
  else
  {
    if ( (unsigned int)v23 >= *((_DWORD *)Current + 62) )
      goto LABEL_38;
    v24 = *((_QWORD *)Current + 29);
    v25 = *(_DWORD *)(v24 + 16 * v23 + 8);
    if ( (((unsigned int)v16 >> 25) & 0x60) != (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60)
      || (v25 & 0x2000) != 0
      || (v25 & 0x1F) == 0 )
    {
      goto LABEL_38;
    }
    v26 = 2LL * (unsigned int)v23;
    v27 = (v25 & 0x1F) == 11;
  }
  if ( v27 )
  {
    v28 = *(_QWORD *)(v24 + 8 * v26);
    goto LABEL_39;
  }
LABEL_38:
  v28 = 0LL;
LABEL_39:
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v28 )
  {
    v30 = WdLogNewEntry5_WdError(v29);
    *(_QWORD *)(v30 + 24) = v16;
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    if ( v57 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v56);
    if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
    goto LABEL_15;
  }
  _InterlockedIncrement64((volatile signed __int64 *)v18 + 8);
  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v56);
  v59 = v20;
  v60 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v58);
  if ( *(_DWORD *)(v20 + 176) != 1 )
  {
    v34 = WdLogNewEntry5_WdError(v32);
    *(_QWORD *)(v34 + 24) = v20;
    v35 = -1073741823;
    *(_QWORD *)(v34 + 32) = -1073741823LL;
    WdLogEvent5_WdError(v34);
    if ( v60 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v58);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v18 + 2), v55);
    if ( v57 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v56);
    if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
LABEL_61:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v53 )
    {
      if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          &DxgkControlGuid_Context,
          v51,
          v37,
          *(_DWORD *)v51,
          *(_DWORD *)(v51 + 56),
          *(_QWORD *)(v51 + 80),
          *(_QWORD *)(v51 + 88),
          *(_DWORD *)(v51 + 1096),
          *v52);
    }
    else if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        &DxgkControlGuid_Context,
        v51,
        v37,
        *(_DWORD *)v51,
        *(_QWORD *)(v51 + 8),
        *(_DWORD *)(v51 + 16),
        *(_DWORD *)(v51 + 88),
        *v52,
        *(_DWORD *)(v51 + 20),
        *(_DWORD *)(v51 + 24));
    }
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v36, &EventProfilerExit, v37, v49);
    return (unsigned int)v35;
  }
  v38 = v55;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v66, (__int64)v55, 2, v33, 0);
  v54 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v66);
  if ( v54 < 0 )
  {
    v40 = WdLogNewEntry5_WdError(v39);
    *(_QWORD *)(v40 + 24) = v54;
    WdLogEvent5_WdError(v40);
    v35 = v54;
LABEL_75:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
    if ( v60 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v58);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v18 + 2), v55);
    if ( v57 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v56);
    if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
    goto LABEL_61;
  }
  v35 = SubmitPresentHistoryTokenPreparation(
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)v58,
          (struct COREDEVICEACCESS *)v66,
          (struct DXGADAPTER *)v20,
          v47,
          0LL,
          0);
  v54 = v35;
  if ( v35 < 0 )
    goto LABEL_75;
  TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)&v63, v47);
  v62[0] = 0LL;
  v62[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v20 + 2464);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v62);
  v42 = v62[0];
  if ( v62[0] )
  {
    *(_DWORD *)v62[0] = *(_DWORD *)v62[0] & 0xFFFCFEDF | 0x10120;
    v46 = v61;
    *((_QWORD *)v42 + 58) = *(_QWORD *)(v61 + 8);
    memset(v65, 0, 0x20uLL);
    v65[0] = v46;
    LODWORD(v65[1]) = v16;
    v65[2] = v20;
    v65[3] = v38;
    v35 = SubmitPresentHistoryToken(
            v47,
            (struct COREDEVICEACCESS *)v66,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)v58,
            0LL,
            1,
            0LL,
            0LL,
            v42,
            0LL,
            (struct _PRESENT_REDIRECTED_PARAMS *)v65);
    v54 = v35;
    v63 = v35;
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v62);
    if ( v35 < 0 )
      DxgkCancelSwapChainBinding(v64);
    goto LABEL_75;
  }
  v43 = WdLogNewEntry5_WdLowResource(v41);
  *(_QWORD *)(v43 + 24) = 1015LL;
  WdLogEvent5_WdLowResource(v43);
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v62);
  if ( v63 < 0 )
    DxgkCancelSwapChainBinding(v64);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
  if ( v60 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v58);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v18 + 2), v55);
  if ( v57 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v56);
  if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
  if ( v53 )
  {
    if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq(
        &DxgkControlGuid_Context,
        v51,
        v45,
        *(_DWORD *)v51,
        *(_DWORD *)(v51 + 56),
        *(_QWORD *)(v51 + 80),
        *(_QWORD *)(v51 + 88),
        *(_DWORD *)(v51 + 1096),
        *v52);
  }
  else if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qpqqqpp(
      &DxgkControlGuid_Context,
      v51,
      v45,
      *(_DWORD *)v51,
      *(_QWORD *)(v51 + 8),
      *(_DWORD *)(v51 + 16),
      *(_DWORD *)(v51 + 88),
      *v52,
      *(_DWORD *)(v51 + 20),
      *(_DWORD *)(v51 + 24));
  }
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v44, &EventProfilerExit, v45, v49);
  return 3221225495LL;
}
