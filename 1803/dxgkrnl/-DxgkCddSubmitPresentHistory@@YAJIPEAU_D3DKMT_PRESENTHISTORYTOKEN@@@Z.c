/*
 * XREFs of ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00CB390
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00CB880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00E8670 (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1EA8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00F4D30 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddSubmitPresentHistory(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rbx
  int v17; // edx
  __int64 v18; // r8
  __int64 v19; // rbx
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  __int64 v22; // rcx
  __int64 v23; // r15
  struct _KEVENT *v24; // rdi
  volatile signed __int64 *v25; // rdi
  __int64 v26; // rdx
  volatile signed __int64 *v27; // rcx
  volatile signed __int64 *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  DXGDEVICE *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // eax
  unsigned int v35; // r14d
  struct DXGADAPTER *v36; // rcx
  struct _KEVENT *v37; // rcx
  struct DXGADAPTER *v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned __int8 v42; // di
  __int64 v43; // r8
  __int64 *ThreadProperty; // rax
  __int64 *v45; // rbx
  __int64 v46; // rbx
  int v47; // r9d
  __int64 v48; // rax
  int v49; // r9d
  _QWORD *v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rax
  int v56; // r9d
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // r9
  char v60[8]; // [rsp+68h] [rbp-A0h] BYREF
  struct _KTHREAD **v61[2]; // [rsp+70h] [rbp-98h] BYREF
  struct _KEVENT *v62; // [rsp+80h] [rbp-88h]
  char v63; // [rsp+88h] [rbp-80h]
  struct _KTHREAD **v64[2]; // [rsp+90h] [rbp-78h] BYREF
  struct DXGADAPTER *v65; // [rsp+A0h] [rbp-68h]
  char v66; // [rsp+A8h] [rbp-60h]
  __int64 v67; // [rsp+B0h] [rbp-58h]
  char v68; // [rsp+B8h] [rbp-50h]
  int v69; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v70; // [rsp+D0h] [rbp-38h]
  __int64 v71; // [rsp+D8h] [rbp-30h] BYREF
  struct DXGADAPTER *v72; // [rsp+E0h] [rbp-28h]
  char v73; // [rsp+E8h] [rbp-20h]
  char v74[8]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v75; // [rsp+F8h] [rbp-10h]
  char v76; // [rsp+100h] [rbp-8h]
  _QWORD v77[2]; // [rsp+108h] [rbp+0h] BYREF
  char v78[8]; // [rsp+118h] [rbp+10h] BYREF
  char v79[32]; // [rsp+120h] [rbp+18h] BYREF
  char v80[48]; // [rsp+140h] [rbp+38h] BYREF
  enum _D3DKMT_DEVICEEXECUTION_STATE v81; // [rsp+1C8h] [rbp+C0h] BYREF
  union _LARGE_INTEGER v82; // [rsp+1D0h] [rbp+C8h] BYREF

  v4 = (unsigned int)a1;
  v70 = 0LL;
  v69 = 3036;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 3036);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v69, 3036);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v45 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v45;
      }
    }
  }
  if ( !v8 )
  {
    v35 = -1073741811;
    v46 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v46 + 24) = -1073741811LL;
    *(_QWORD *)(v46 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v46);
    goto LABEL_52;
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v47 = *(_DWORD *)(v8 + 224);
      if ( v47 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v9, &EventBlockThread, v10, v47);
    }
    ExAcquirePushLockSharedEx(v8 + 208, 0LL);
  }
  v11 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  ExReleasePushLockSharedEx(v8 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 != -208 && *(struct _KTHREAD **)(v8 + 216) == KeGetCurrentThread() )
  {
    v48 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v48 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v48);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v49 = *(_DWORD *)(v8 + 224);
      if ( v49 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v13, &EventBlockThread, v14, v49);
    }
    ExAcquirePushLockSharedEx(v8 + 208, 0LL);
  }
  if ( v11 >= *(_DWORD *)(v8 + 248) )
    goto LABEL_76;
  v15 = v11;
  v16 = *(_QWORD *)(v8 + 232);
  v17 = *(_DWORD *)(v16 + 16LL * (unsigned int)v15 + 8);
  if ( (((unsigned int)v4 >> 25) & 0x60) != (*(_BYTE *)(v16 + 16LL * (unsigned int)v15 + 8) & 0x60) )
    goto LABEL_76;
  if ( (v17 & 0x2000) != 0 )
    goto LABEL_76;
  if ( (v17 & 0x1F) == 0 )
    goto LABEL_76;
  v18 = 2 * v15;
  if ( (v17 & 0x1F) != 7 )
    goto LABEL_76;
  v19 = *(_QWORD *)(v16 + 8 * v18);
  if ( !v19 )
    goto LABEL_18;
  _m_prefetchw((const void *)(v19 + 32));
  v20 = *(_QWORD *)(v19 + 32);
  if ( v20 )
  {
    while ( 1 )
    {
      v21 = v20;
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 32), v20 + 1, v20);
      if ( v21 == v20 )
        break;
      if ( !v20 )
        goto LABEL_76;
    }
  }
  else
  {
LABEL_76:
    v19 = 0LL;
  }
LABEL_18:
  ExReleasePushLockSharedEx(v8 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v19 )
  {
    v35 = -1073741811;
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v50[3] = -1073741811LL;
    v51 = PsGetCurrentProcess();
    v50[5] = v4;
    v50[4] = v51;
    WdLogEvent5_WdError(v50);
    goto LABEL_52;
  }
  v23 = *(_QWORD *)(v19 + 16);
  v24 = (struct _KEVENT *)(*(_QWORD *)(v23 + 16) + 96LL);
  if ( !KeReadStateEvent(v24) )
    KeWaitForSingleObject(v24, Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 104), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 96LL));
    v42 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v43, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 104), 1u);
    if ( v42 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v25 = *(volatile signed __int64 **)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 16LL);
  v72 = (struct DXGADAPTER *)v25;
  _InterlockedIncrement64(v25 + 3);
  v71 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v25 + 15, 0LL);
  v26 = *(_QWORD *)(v19 + 16);
  v73 = 1;
  v27 = *(volatile signed __int64 **)(*(_QWORD *)(v26 + 16) + 16LL);
  v62 = (struct _KEVENT *)v27;
  v63 = 0;
  if ( v27 )
  {
    _InterlockedIncrement64(v27 + 3);
    v61[1] = (struct _KTHREAD **)-1LL;
  }
  v28 = *(volatile signed __int64 **)(*(_QWORD *)(v26 + 16) + 16LL);
  v65 = (struct DXGADAPTER *)v28;
  v66 = 0;
  if ( v28 )
  {
    _InterlockedIncrement64(v28 + 3);
    v64[1] = (struct _KTHREAD **)-1LL;
  }
  v67 = v26;
  v68 = 0;
  if ( KeGetCurrentThread() != (struct _KTHREAD *)v62[6].Header.WaitListHead.Blink )
  {
    if ( !KeReadStateEvent(v62 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v29, &EventBlockThread, v30, 72);
      KeWaitForSingleObject(&v62[2], Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)v62);
  }
  v63 = 1;
  if ( *(_DWORD *)(v67 + 424) != 1 )
    goto LABEL_84;
  if ( v68 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)v64);
    if ( *((_DWORD *)v65 + 44) != 1 )
    {
      COREACCESS::Release(v64);
LABEL_84:
      COREACCESS::Release(v61);
      v54 = (_QWORD *)WdLogNewEntry5_WdEvent(v53, v52);
      v54[3] = -1073741130LL;
      v54[4] = v19;
      v54[5] = v8;
      WdLogEvent5_WdEvent(v54);
      goto LABEL_85;
    }
  }
  v31 = *(DXGDEVICE **)(v19 + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v31 + 2) + 16LL) + 300LL) & 0x10) == 0
    || (int)DXGDEVICE::GetDeviceExecutionState(v31, &v81) >= 0 && v81 == D3DKMT_DEVICEEXECUTION_ACTIVE )
  {
    if ( v19 != -408 && *(struct _KTHREAD **)(v19 + 416) == KeGetCurrentThread() )
    {
      v55 = WdLogNewEntry5_WdAssertion(v31);
      *(_QWORD *)(v55 + 24) = 1306LL;
      WdLogEvent5_WdAssertion(v55);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v19 + 408, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v56 = *(_DWORD *)(v19 + 424);
        if ( v56 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v32, &EventBlockThread, v33, v56);
      }
      ExAcquirePushLockExclusiveEx(v19 + 408, 0LL);
    }
    *(_QWORD *)(v19 + 416) = KeGetCurrentThread();
    v82.QuadPart = -100000LL;
    v34 = SubmitPresentHistoryToken(
            a2,
            (struct COREDEVICEACCESS *)v60,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v71,
            0LL,
            0,
            &v82,
            0LL,
            0LL,
            (struct DXGCONTEXT *)v19,
            0LL);
    *(_QWORD *)(v19 + 416) = 0LL;
    v35 = v34;
    ExReleasePushLockExclusiveEx(v19 + 408, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_37;
  }
LABEL_85:
  v35 = -1073741130;
LABEL_37:
  v36 = v65;
  if ( v65 )
  {
    if ( v66 )
    {
      COREACCESS::Release(v64);
      v36 = v65;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v36 + 2), v36);
  }
  v37 = v62;
  if ( v62 )
  {
    if ( v63 )
    {
      v63 = 0;
      v37 = v62;
      if ( KeGetCurrentThread() != (struct _KTHREAD *)v62[6].Header.WaitListHead.Blink )
      {
        DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v62);
        v37 = v62;
      }
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)&v37[1].Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v37->Header.WaitListHead.Blink, (struct DXGADAPTER *)v37);
  }
  if ( v73 )
  {
    v38 = v72;
    ExReleasePushLockSharedEx((char *)v72 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v72 + 2), v72);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v23 + 104));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v57 = *(_QWORD *)(v19 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v77,
      (struct DXGDEVICE *)v57);
    v58 = *(_QWORD *)(v19 + 16);
    v76 = 0;
    v75 = *(_QWORD *)(*(_QWORD *)(v58 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v78, v57, 2, v59, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v78);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v57 + 16) + 16LL) + 176LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v57, (struct DXGCONTEXT *)v19, (struct COREDEVICEACCESS *)v78);
    COREACCESS::~COREACCESS((COREACCESS *)v80);
    COREACCESS::~COREACCESS((COREACCESS *)v79);
    if ( v76 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
    if ( v77[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v57 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v57 + 16), (struct DXGDEVICE *)v57);
  }
LABEL_52:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v39, &EventProfilerExit, v40, v69);
  return v35;
}
