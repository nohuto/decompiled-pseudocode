/*
 * XREFs of ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00949F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005B1C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00BDE10 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00BF56C (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C1E20 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00D3290 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddSubmitPresentHistory(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // edx
  __int64 v20; // r9
  int v21; // r8d
  __int64 v22; // rdi
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r15
  struct _KEVENT *v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  volatile signed __int64 *v32; // rcx
  volatile signed __int64 *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  DXGDEVICE *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // eax
  unsigned int v42; // r14d
  struct DXGADAPTER *v43; // rcx
  DXGADAPTER *v44; // rcx
  struct DXGADAPTER *v45; // rbx
  __int64 v46; // r8
  __int64 v47; // rcx
  unsigned __int8 v49; // bl
  __int64 v50; // r8
  __int64 *ThreadProperty; // rax
  __int64 v52; // rbx
  int v53; // r9d
  __int64 v54; // rax
  int v55; // r9d
  _QWORD *v56; // rbx
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  int v60; // r9d
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // r9
  __int64 v64; // [rsp+58h] [rbp-B0h]
  char v65[8]; // [rsp+78h] [rbp-90h] BYREF
  char v66[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v67; // [rsp+88h] [rbp-80h]
  DXGADAPTER *v68; // [rsp+90h] [rbp-78h]
  char v69; // [rsp+98h] [rbp-70h]
  char v70[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-60h]
  struct DXGADAPTER *v72; // [rsp+B0h] [rbp-58h]
  char v73; // [rsp+B8h] [rbp-50h]
  __int64 v74; // [rsp+C0h] [rbp-48h]
  char v75; // [rsp+C8h] [rbp-40h]
  __int64 v76; // [rsp+D8h] [rbp-30h] BYREF
  struct DXGADAPTER *v77; // [rsp+E0h] [rbp-28h]
  char v78; // [rsp+E8h] [rbp-20h]
  char v79[8]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-10h]
  char v81; // [rsp+100h] [rbp-8h]
  _QWORD v82[4]; // [rsp+108h] [rbp+0h] BYREF
  char v83[8]; // [rsp+128h] [rbp+20h] BYREF
  char v84[32]; // [rsp+130h] [rbp+28h] BYREF
  char v85[48]; // [rsp+150h] [rbp+48h] BYREF
  enum _D3DKMT_DEVICEEXECUTION_STATE v86; // [rsp+1D8h] [rbp+D0h] BYREF
  union _LARGE_INTEGER v87; // [rsp+1E0h] [rbp+D8h] BYREF

  v4 = (unsigned int)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3036);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v10 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v10 = *ThreadProperty;
    }
  }
  if ( !v10 )
  {
    v42 = -1073741811;
    v52 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v52 + 24) = -1073741811LL;
    *(_QWORD *)(v52 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v52);
    goto LABEL_52;
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v10 + 168, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v53 = *(_DWORD *)(v10 + 184);
      if ( v53 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v11, &EventBlockThread, v12, v53);
    }
    ExAcquirePushLockSharedEx(v10 + 168, 0LL);
  }
  ExReleasePushLockSharedEx(v10 + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( v10 != -168 && *(struct _KTHREAD **)(v10 + 176) == KeGetCurrentThread() )
  {
    v54 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v54 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v54);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v10 + 168, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v55 = *(_DWORD *)(v10 + 184);
      if ( v55 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v17, &EventBlockThread, v18, v55);
    }
    ExAcquirePushLockSharedEx(v10 + 168, 0LL);
  }
  v19 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( v19 >= *(_DWORD *)(v10 + 208) )
    goto LABEL_74;
  v20 = *(_QWORD *)(v10 + 192);
  v21 = *(_DWORD *)(v20 + 16LL * v19 + 8);
  if ( (((unsigned int)v4 >> 26) & 0x30) != (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0x30)
    || (v21 & 0x1000) != 0
    || (v21 & 0xF) == 0
    || (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0xF) != 7 )
  {
    goto LABEL_74;
  }
  v22 = *(_QWORD *)(v20 + 16LL * v19);
  v64 = v22;
  if ( !v22 )
    goto LABEL_18;
  _m_prefetchw((const void *)(v22 + 32));
  v23 = *(_QWORD *)(v22 + 32);
  if ( v23 )
  {
    while ( 1 )
    {
      v24 = v23;
      v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 32), v23 + 1, v23);
      if ( v24 == v23 )
        break;
      if ( !v23 )
        goto LABEL_74;
    }
  }
  else
  {
LABEL_74:
    v22 = 0LL;
    v64 = 0LL;
  }
LABEL_18:
  ExReleasePushLockSharedEx(v10 + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( !v22 )
  {
    v42 = -1073741811;
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
    v56[3] = -1073741811LL;
    v57 = PsGetCurrentProcess();
    v56[5] = v4;
    v56[4] = v57;
    WdLogEvent5_WdError(v56);
    goto LABEL_52;
  }
  v27 = *(_QWORD *)(v22 + 16);
  v82[2] = v27;
  v28 = (struct _KEVENT *)(*(_QWORD *)(v27 + 16) + 96LL);
  if ( !KeReadStateEvent(v28) )
    KeWaitForSingleObject(v28, Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v27 + 104), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 96LL));
    v49 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v27 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v50, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v27 + 104), 1u);
    if ( v49 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v27 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v77 = *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v77 + 3);
  v76 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v77 + 120, 0LL);
  v31 = *(_QWORD *)(v22 + 16);
  v78 = 1;
  v32 = *(volatile signed __int64 **)(*(_QWORD *)(v31 + 16) + 16LL);
  v68 = (DXGADAPTER *)v32;
  v69 = 0;
  if ( v32 )
  {
    _InterlockedIncrement64(v32 + 3);
    v67 = -1LL;
  }
  v33 = *(volatile signed __int64 **)(*(_QWORD *)(v31 + 16) + 16LL);
  v72 = (struct DXGADAPTER *)v33;
  v73 = 0;
  if ( v33 )
  {
    _InterlockedIncrement64(v33 + 3);
    v71 = -1LL;
  }
  v74 = v31;
  v75 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v68 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v68 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v34, &EventBlockThread, v35, 72);
      KeWaitForSingleObject((char *)v68 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v68);
  }
  v69 = 1;
  if ( *(_DWORD *)(v74 + 408) != 1 )
    goto LABEL_84;
  if ( v75 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v70);
    if ( *((_DWORD *)v72 + 44) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v70);
LABEL_84:
      COREACCESS::Release((COREACCESS *)v66);
      v58 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v58[4] = v64;
      v58[3] = -1073741130LL;
      v58[5] = v10;
      WdLogEvent5_WdEvent(v58);
      goto LABEL_87;
    }
  }
  v36 = *(DXGDEVICE **)(v22 + 16);
  v37 = *(_QWORD *)(*((_QWORD *)v36 + 2) + 16LL);
  if ( (*(_DWORD *)(v37 + 300) & 0x10) == 0
    || (int)DXGDEVICE::GetDeviceExecutionState(v36, &v86) >= 0 && v86 == D3DKMT_DEVICEEXECUTION_ACTIVE )
  {
    v38 = v64 + 376;
    if ( v64 != -376 && *(struct _KTHREAD **)(v64 + 384) == KeGetCurrentThread() )
    {
      v59 = WdLogNewEntry5_WdAssertion(v36, v37, v29, v30);
      *(_QWORD *)(v59 + 24) = 1167LL;
      WdLogEvent5_WdAssertion(v59);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v38, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v60 = *(_DWORD *)(v64 + 392);
        if ( v60 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v39, &EventBlockThread, v40, v60);
      }
      ExAcquirePushLockExclusiveEx(v38, 0LL);
    }
    *(_QWORD *)(v64 + 384) = KeGetCurrentThread();
    v87.QuadPart = -100000LL;
    v41 = DXGCONTEXT::SubmitPresentHistoryToken(
            (DXGCONTEXT *)v64,
            a2,
            (struct COREDEVICEACCESS *)v65,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v76,
            0LL,
            0,
            &v87,
            0LL,
            0LL);
    *(_QWORD *)(v64 + 384) = 0LL;
    v42 = v41;
    ExReleasePushLockExclusiveEx(v38, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_37;
  }
LABEL_87:
  v42 = -1073741130;
LABEL_37:
  v43 = v72;
  if ( v72 )
  {
    if ( v73 )
    {
      COREACCESS::Release((COREACCESS *)v70);
      v43 = v72;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v43 + 2), v43);
  }
  v44 = v68;
  if ( v68 )
  {
    if ( v69 )
    {
      v69 = 0;
      v44 = v68;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v68 + 20) )
      {
        DXGADAPTER::ReleaseCoreResource(v68);
        v44 = v68;
      }
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v44 + 2), v44);
  }
  if ( v78 )
  {
    v45 = v77;
    ExReleasePushLockSharedEx((char *)v77 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v77 + 2), v77);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v27 + 104));
  KeLeaveCriticalRegion();
  v47 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v64 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  if ( v47 == 1 )
  {
    v61 = *(_QWORD *)(v22 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v82,
      (struct DXGDEVICE *)v61);
    v62 = *(_QWORD *)(v22 + 16);
    v81 = 0;
    v80 = *(_QWORD *)(*(_QWORD *)(v62 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v79);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v83, v61, 2LL, v63, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v83);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v61 + 16) + 16LL) + 176LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v61, (struct DXGCONTEXT *)v64, (struct COREDEVICEACCESS *)v83);
    COREACCESS::~COREACCESS((COREACCESS *)v85);
    COREACCESS::~COREACCESS((COREACCESS *)v84);
    if ( v81 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v79);
    if ( v82[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v82);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v61 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v61 + 16), (struct DXGDEVICE *)v61);
  }
LABEL_52:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v47, &EventProfilerExit, v46, 3036);
  return v42;
}
