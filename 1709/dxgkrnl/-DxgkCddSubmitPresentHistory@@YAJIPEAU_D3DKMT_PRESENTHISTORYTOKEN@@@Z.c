/*
 * XREFs of ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00CE6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0084890 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00941C8 (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D730 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C00CD300 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddSubmitPresentHistory(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // r8d
  __int64 v18; // rbx
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  __int64 v21; // rcx
  __int64 v22; // r15
  struct _KEVENT *v23; // rdi
  __int64 v24; // rdx
  volatile signed __int64 *v25; // rcx
  volatile signed __int64 *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  DXGDEVICE *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // eax
  unsigned int v33; // esi
  struct DXGADAPTER *v34; // rcx
  DXGADAPTER *v35; // rcx
  struct DXGADAPTER *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned __int8 v40; // di
  __int64 v41; // r8
  __int64 *ThreadProperty; // rax
  __int64 *v43; // rbx
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // r9d
  __int64 v48; // rax
  int v49; // r9d
  _QWORD *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // rax
  __int64 v59; // rax
  int v60; // r9d
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // r9
  char v64[8]; // [rsp+78h] [rbp-90h] BYREF
  char v65[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v66; // [rsp+88h] [rbp-80h]
  DXGADAPTER *v67; // [rsp+90h] [rbp-78h]
  char v68; // [rsp+98h] [rbp-70h]
  char v69[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-60h]
  struct DXGADAPTER *v71; // [rsp+B0h] [rbp-58h]
  char v72; // [rsp+B8h] [rbp-50h]
  __int64 v73; // [rsp+C0h] [rbp-48h]
  char v74; // [rsp+C8h] [rbp-40h]
  __int64 v75; // [rsp+D8h] [rbp-30h] BYREF
  struct DXGADAPTER *v76; // [rsp+E0h] [rbp-28h]
  char v77; // [rsp+E8h] [rbp-20h]
  char v78[8]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v79; // [rsp+F8h] [rbp-10h]
  char v80; // [rsp+100h] [rbp-8h]
  _QWORD v81[2]; // [rsp+108h] [rbp+0h] BYREF
  char v82[8]; // [rsp+118h] [rbp+10h] BYREF
  char v83[32]; // [rsp+120h] [rbp+18h] BYREF
  char v84[48]; // [rsp+140h] [rbp+38h] BYREF
  enum _D3DKMT_DEVICEEXECUTION_STATE v85; // [rsp+1C8h] [rbp+C0h] BYREF
  union _LARGE_INTEGER v86; // [rsp+1D0h] [rbp+C8h] BYREF

  v4 = (unsigned int)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 3036);
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v43 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v43;
      }
    }
  }
  if ( !v9 )
  {
    v33 = -1073741811;
    v44 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v44 + 24) = -1073741811LL;
    *(_QWORD *)(v44 + 32) = PsGetCurrentProcess(v46, v45);
    WdLogEvent5_WdError(v44);
    goto LABEL_52;
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v9 + 200, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v47 = *(_DWORD *)(v9 + 216);
      if ( v47 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v10, &EventBlockThread, v11, v47);
    }
    ExAcquirePushLockSharedEx(v9 + 200, 0LL);
  }
  ExReleasePushLockSharedEx(v9 + 200, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 != -200 && *(struct _KTHREAD **)(v9 + 208) == KeGetCurrentThread() )
  {
    v48 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v48 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v48);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v9 + 200, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v49 = *(_DWORD *)(v9 + 216);
      if ( v49 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v13, &EventBlockThread, v14, v49);
    }
    ExAcquirePushLockSharedEx(v9 + 200, 0LL);
  }
  v15 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 >= *(_DWORD *)(v9 + 240) )
    goto LABEL_79;
  v16 = *(_QWORD *)(v9 + 224);
  v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
  if ( (((unsigned int)v4 >> 25) & 0x60) != (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
    || (v17 & 0x2000) != 0
    || (v17 & 0x1F) == 0
    || (*(_BYTE *)(v16 + 16LL * (unsigned int)v15 + 8) & 0x1F) != 7 )
  {
    goto LABEL_79;
  }
  v18 = *(_QWORD *)(v16 + 16LL * (unsigned int)v15);
  if ( !v18 )
    goto LABEL_18;
  _m_prefetchw((const void *)(v18 + 32));
  v19 = *(_QWORD *)(v18 + 32);
  if ( v19 )
  {
    while ( 1 )
    {
      v20 = v19;
      v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 32), v19 + 1, v19);
      if ( v20 == v19 )
        break;
      if ( !v19 )
        goto LABEL_79;
    }
  }
  else
  {
LABEL_79:
    v18 = 0LL;
  }
LABEL_18:
  ExReleasePushLockSharedEx(v9 + 200, 0LL);
  KeLeaveCriticalRegion();
  if ( !v18 )
  {
    v33 = -1073741811;
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v50[3] = -1073741811LL;
    v53 = PsGetCurrentProcess(v52, v51);
    v50[5] = v4;
    v50[4] = v53;
    WdLogEvent5_WdError(v50);
    goto LABEL_52;
  }
  v22 = *(_QWORD *)(v18 + 16);
  v23 = (struct _KEVENT *)(*(_QWORD *)(v22 + 16) + 96LL);
  if ( !KeReadStateEvent(v23) )
    KeWaitForSingleObject(v23, Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v22 + 104), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 96LL));
    v40 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v41, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v22 + 104), 1u);
    if ( v40 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v76 = *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v76 + 3);
  v75 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v76 + 120, 0LL);
  v24 = *(_QWORD *)(v18 + 16);
  v77 = 1;
  v25 = *(volatile signed __int64 **)(*(_QWORD *)(v24 + 16) + 16LL);
  v67 = (DXGADAPTER *)v25;
  v68 = 0;
  if ( v25 )
  {
    _InterlockedIncrement64(v25 + 3);
    v66 = -1LL;
  }
  v26 = *(volatile signed __int64 **)(*(_QWORD *)(v24 + 16) + 16LL);
  v71 = (struct DXGADAPTER *)v26;
  v72 = 0;
  if ( v26 )
  {
    _InterlockedIncrement64(v26 + 3);
    v70 = -1LL;
  }
  v73 = v24;
  v74 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v67 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v67 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v27, &EventBlockThread, v28, 72);
      KeWaitForSingleObject((char *)v67 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v67);
  }
  v68 = 1;
  if ( *(_DWORD *)(v73 + 408) != 1 )
    goto LABEL_87;
  if ( v74 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v69);
    if ( *((_DWORD *)v71 + 44) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v69);
LABEL_87:
      COREACCESS::Release((COREACCESS *)v65);
      v58 = (_QWORD *)WdLogNewEntry5_WdEvent(v55, v54, v56, v57);
      v58[3] = -1073741130LL;
      v58[4] = v18;
      v58[5] = v9;
      WdLogEvent5_WdEvent(v58);
      goto LABEL_88;
    }
  }
  v29 = *(DXGDEVICE **)(v18 + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 2) + 16LL) + 300LL) & 0x10) == 0
    || (int)DXGDEVICE::GetDeviceExecutionState(v29, &v85) >= 0 && v85 == D3DKMT_DEVICEEXECUTION_ACTIVE )
  {
    if ( v18 != -408 && *(struct _KTHREAD **)(v18 + 416) == KeGetCurrentThread() )
    {
      v59 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v59 + 24) = 1214LL;
      WdLogEvent5_WdAssertion(v59);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v18 + 408, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v60 = *(_DWORD *)(v18 + 424);
        if ( v60 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v30, &EventBlockThread, v31, v60);
      }
      ExAcquirePushLockExclusiveEx(v18 + 408, 0LL);
    }
    *(_QWORD *)(v18 + 416) = KeGetCurrentThread();
    v86.QuadPart = -100000LL;
    v32 = SubmitPresentHistoryToken(
            a2,
            (struct COREDEVICEACCESS *)v64,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v75,
            0LL,
            0,
            &v86,
            0LL,
            0LL,
            (struct DXGCONTEXT *)v18,
            *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 16LL),
            0);
    *(_QWORD *)(v18 + 416) = 0LL;
    v33 = v32;
    ExReleasePushLockExclusiveEx(v18 + 408, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_37;
  }
LABEL_88:
  v33 = -1073741130;
LABEL_37:
  v34 = v71;
  if ( v71 )
  {
    if ( v72 )
    {
      COREACCESS::Release((COREACCESS *)v69);
      v34 = v71;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v34 + 2), v34);
  }
  v35 = v67;
  if ( v67 )
  {
    if ( v68 )
    {
      v68 = 0;
      v35 = v67;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v67 + 20) )
      {
        DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v67);
        v35 = v67;
      }
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v35 + 2), v35);
  }
  if ( v77 )
  {
    v36 = v76;
    ExReleasePushLockSharedEx((char *)v76 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v76 + 2), v76);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v22 + 104));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v61 = *(_QWORD *)(v18 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v81,
      (struct DXGDEVICE *)v61);
    v62 = *(_QWORD *)(v18 + 16);
    v80 = 0;
    v79 = *(_QWORD *)(*(_QWORD *)(v62 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v82, v61, 2, v63, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v82);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v61 + 16) + 16LL) + 176LL) != 4 )
      DXGDEVICE::DestroyContext((PERESOURCE *)v61, (struct DXGCONTEXT *)v18, (struct COREDEVICEACCESS *)v82);
    COREACCESS::~COREACCESS((COREACCESS *)v84);
    COREACCESS::~COREACCESS((COREACCESS *)v83);
    if ( v80 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
    if ( v81[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v81);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v61 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v61 + 16), (struct DXGDEVICE *)v61);
  }
LABEL_52:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v37, &EventProfilerExit, v38, 3036);
  return v33;
}
