/*
 * XREFs of DxgkPresentRedirected @ 0x1C01B8440
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0003230 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0003270 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0008EE0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0008F30 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     McTemplateK0qqxxqq @ 0x1C0029558 (McTemplateK0qqxxqq.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C00CD300 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_NQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C00EEF80 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 */

__int64 __fastcall DxgkPresentRedirected(__int64 a1, __int64 a2)
{
  ULONG64 v2; // rdi
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _OWORD *v12; // rax
  __int64 v13; // rbx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r13
  struct DXGGLOBAL *Global; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // edx
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // r15
  __int64 v30; // rcx
  int DriverVersion; // eax
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rax
  unsigned int v39; // r15d
  __int64 v40; // rdx
  __int64 v41; // r8
  bool v42; // zf
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  struct DXGPROCESS *v46; // rax
  int v47; // r12d
  __int64 v48; // rdx
  __int64 v49; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  int v55; // [rsp+60h] [rbp-538h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v56; // [rsp+68h] [rbp-530h]
  _BYTE v57[8]; // [rsp+70h] [rbp-528h] BYREF
  char v58; // [rsp+78h] [rbp-520h]
  _BYTE v59[8]; // [rsp+80h] [rbp-518h] BYREF
  __int64 v60; // [rsp+88h] [rbp-510h]
  char v61; // [rsp+90h] [rbp-508h]
  ULONG64 v62; // [rsp+98h] [rbp-500h]
  struct VIDSCH_SUBMIT_DATA_BASE *v63[2]; // [rsp+A0h] [rbp-4F8h] BYREF
  _BYTE v64[96]; // [rsp+B0h] [rbp-4E8h] BYREF
  _BYTE v65[1104]; // [rsp+110h] [rbp-488h] BYREF

  v2 = a1;
  LOBYTE(v55) = 1;
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
    v12 = v65;
    v10 = 8LL;
    v9 = 128LL;
    do
    {
      *v12 = *(_OWORD *)v2;
      v12[1] = *(_OWORD *)(v2 + 16);
      v12[2] = *(_OWORD *)(v2 + 32);
      v12[3] = *(_OWORD *)(v2 + 48);
      v12[4] = *(_OWORD *)(v2 + 64);
      v12[5] = *(_OWORD *)(v2 + 80);
      v12[6] = *(_OWORD *)(v2 + 96);
      v12 += 8;
      *(v12 - 1) = *(_OWORD *)(v2 + 112);
      v2 += 128LL;
      --v10;
    }
    while ( v10 );
    *v12 = *(_OWORD *)v2;
    v12[1] = *(_OWORD *)(v2 + 16);
    v12[2] = *(_OWORD *)(v2 + 32);
    v12[3] = *(_OWORD *)(v2 + 48);
    v12[4] = *(_OWORD *)(v2 + 64);
    v2 = (ULONG64)v65;
  }
  v62 = v2;
  v13 = v2 & -(__int64)(bTracingEnabled != 0);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerEnter, v11, 2147);
  v14 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v2 + 16);
  v56 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v2 + 16);
  if ( *(_DWORD *)(v2 + 16) != 2 )
    goto LABEL_14;
  if ( *(_DWORD *)(v2 + 836) > 0x10u )
  {
    v19 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v19 + 24) = *(unsigned int *)(v2 + 836);
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
LABEL_15:
    if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq(
        &DxgkControlGuid_Context,
        v16,
        v18,
        *(_DWORD *)v13,
        *(_DWORD *)(v13 + 56),
        *(_QWORD *)(v13 + 80),
        *(_QWORD *)(v13 + 88),
        *(_DWORD *)(v13 + 1096),
        1);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, 2147);
    return 3221225485LL;
  }
  if ( *(_DWORD *)(v2 + 1096) )
  {
LABEL_14:
    v15 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    goto LABEL_15;
  }
  v20 = *(unsigned int *)v2;
  Global = DXGGLOBAL::GetGlobal(v10);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v57, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v57);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 200));
  v22 = ((unsigned int)v20 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v22 < *((_DWORD *)Current + 60)
    && (v23 = *((_QWORD *)Current + 28),
        v24 = *(_DWORD *)(v23 + 16 * v22 + 8),
        (((unsigned int)v20 >> 25) & 0x60) == (*(_BYTE *)(v23 + 16 * v22 + 8) & 0x60))
    && (v24 & 0x2000) == 0
    && (v24 & 0x1F) != 0
    && (*(_BYTE *)(v23 + 16LL * (unsigned int)v22 + 8) & 0x1F) == 0xB )
  {
    v25 = *(_QWORD *)(v23 + 16LL * (unsigned int)v22);
  }
  else
  {
    v25 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)Current + 200, 0LL);
  KeLeaveCriticalRegion();
  if ( !v25 )
  {
    v27 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v27 + 24) = v20;
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    if ( v58 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
    goto LABEL_15;
  }
  v28 = *(_QWORD *)(v25 + 16);
  v29 = *(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)(v28 + 64));
  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
  if ( (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)v29) < 2000 )
  {
    WdLogNewEntry5_WdError(v30);
    DriverVersion = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v29);
    *(_QWORD *)(v32 + 24) = DriverVersion;
    WdLogEvent5_WdError(v32);
    if ( v28 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v28 + 16), (struct DXGDEVICE *)v28);
    if ( v58 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
    if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq(
        &DxgkControlGuid_Context,
        v33,
        v35,
        *(_DWORD *)v13,
        *(_DWORD *)(v13 + 56),
        *(_QWORD *)(v13 + 80),
        *(_QWORD *)(v13 + 88),
        *(_DWORD *)(v13 + 1096),
        1);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v34, &EventProfilerExit, v35, 2147);
    return 3221225659LL;
  }
  v60 = v29;
  v61 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
  if ( *(_DWORD *)(v29 + 176) != 1 )
  {
    v38 = WdLogNewEntry5_WdError(v36);
    *(_QWORD *)(v38 + 24) = v29;
    v39 = -1073741823;
    *(_QWORD *)(v38 + 32) = -1073741823LL;
    WdLogEvent5_WdError(v38);
LABEL_49:
    if ( v61 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
    if ( v28 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v28 + 16), (struct DXGDEVICE *)v28);
    v42 = v58 == 0;
LABEL_55:
    if ( !v42 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
    if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq(
        &DxgkControlGuid_Context,
        v40,
        v41,
        *(_DWORD *)v13,
        *(_DWORD *)(v13 + 56),
        *(_QWORD *)(v13 + 80),
        *(_QWORD *)(v13 + 88),
        *(_DWORD *)(v13 + 1096),
        v55);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C005F010, &EventProfilerExit, v41, 2147);
    return v39;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v64, v28, 2, v37, 0);
  v55 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v64);
  if ( v55 < 0 )
  {
    v45 = WdLogNewEntry5_WdError(v44);
    *(_QWORD *)(v45 + 24) = v55;
    WdLogEvent5_WdError(v45);
    v39 = v55;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
    goto LABEL_49;
  }
  v46 = DXGPROCESS::GetCurrent(v44, v43);
  v47 = SubmitPresentHistoryTokenPreparation(
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)v59,
          (struct COREDEVICEACCESS *)v64,
          (struct DXGADAPTER *)v29,
          v14,
          0LL,
          0,
          *((const struct _DXGKWIN32KENG_INTERFACE **)v46 + 12));
  if ( v47 >= 0 )
  {
    v63[0] = 0LL;
    v63[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v29 + 2312);
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v63);
    v50 = v63[0];
    if ( v63[0] )
    {
      *(_DWORD *)v63[0] = *(_DWORD *)v63[0] & 0xFFFCFEDF | 0x10120;
      *((_QWORD *)v50 + 52) = *(_QWORD *)(v62 + 8);
      v39 = SubmitPresentHistoryToken(
              v56,
              (struct COREDEVICEACCESS *)v64,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)v59,
              0LL,
              1,
              0LL,
              0LL,
              v50,
              0LL,
              (struct DXGADAPTER *)v29,
              v20);
      LOBYTE(v55) = v39;
      CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v63);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
      if ( v61 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
      if ( v28 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v28 + 16), (struct DXGDEVICE *)v28);
      v42 = v58 == 0;
      goto LABEL_55;
    }
    v51 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v51 + 24) = 1183LL;
    WdLogEvent5_WdLowResource(v51);
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v63);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
    if ( v61 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
    if ( v28 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v28 + 16), (struct DXGDEVICE *)v28);
    if ( v58 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
    if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq(
        &DxgkControlGuid_Context,
        v52,
        v54,
        *(_DWORD *)v13,
        *(_DWORD *)(v13 + 56),
        *(_QWORD *)(v13 + 80),
        *(_QWORD *)(v13 + 88),
        *(_DWORD *)(v13 + 1096),
        v47);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v53, &EventProfilerExit, v54, 2147);
    return 3221225495LL;
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
    if ( v61 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
    if ( v28 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v28 + 16), (struct DXGDEVICE *)v28);
    if ( v58 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
    if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq(
        &DxgkControlGuid_Context,
        v48,
        v49,
        *(_DWORD *)v13,
        *(_DWORD *)(v13 + 56),
        *(_QWORD *)(v13 + 80),
        *(_QWORD *)(v13 + 88),
        *(_DWORD *)(v13 + 1096),
        v47);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C005F010, &EventProfilerExit, v49, 2147);
    return (unsigned int)v47;
  }
}
