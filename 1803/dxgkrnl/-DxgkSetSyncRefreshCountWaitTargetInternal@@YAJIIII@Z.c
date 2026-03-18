/*
 * XREFs of ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00E03F0
 * Callers:
 *     DxgkSetSyncRefreshCountWaitTarget @ 0x1C00E0310 (DxgkSetSyncRefreshCountWaitTarget.c)
 * Callees:
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C0014CD8 (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0015A44 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqq @ 0x1C0028B04 (McTemplateK0qqqq.c)
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C0036CCC (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00F4D30 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C010DC8C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C0147094 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01512D8 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C01BC4E0 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C01E6BC0 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTargetInternal(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // rbx
  int v18; // edx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  volatile signed __int64 *v28; // rsi
  volatile signed __int64 *v29; // r14
  signed __int64 v30; // rcx
  DXGADAPTER *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  DXGADAPTER *v34; // r14
  bool v35; // zf
  __int64 v36; // rsi
  char v37; // r13
  char v38; // r15
  __int64 v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  ADAPTER_DISPLAY *v43; // r15
  __int64 v44; // r14
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rsi
  int v50; // esi
  DXGGLOBAL **v51; // rcx
  DXGGLOBAL **v52; // rcx
  __int64 *ThreadProperty; // rax
  __int64 *v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v59; // rax
  int v60; // r9d
  __int64 v61; // r13
  __int64 v62; // r8
  __int64 v63; // rbx
  int v64; // edx
  __int64 v65; // r8
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rax
  REMOTE_VSYNC *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 *v87; // rax
  __int64 *v88; // r12
  _QWORD *v89; // rax
  __int64 v90; // rax
  _QWORD *v91; // rax
  char v92; // [rsp+40h] [rbp-99h]
  unsigned __int8 v93; // [rsp+41h] [rbp-98h] BYREF
  char v94; // [rsp+42h] [rbp-97h]
  char *v95; // [rsp+48h] [rbp-91h]
  DXGADAPTER *v96; // [rsp+50h] [rbp-89h]
  struct DXGDEVICE *v97; // [rsp+58h] [rbp-81h] BYREF
  struct DXGDEVICE *v98; // [rsp+60h] [rbp-79h] BYREF
  unsigned int v99; // [rsp+68h] [rbp-71h]
  char v100[8]; // [rsp+70h] [rbp-69h] BYREF
  struct _KTHREAD **v101[2]; // [rsp+78h] [rbp-61h] BYREF
  DXGADAPTER *v102; // [rsp+88h] [rbp-51h]
  char v103; // [rsp+90h] [rbp-49h]
  struct _KTHREAD **v104[2]; // [rsp+98h] [rbp-41h] BYREF
  struct DXGADAPTER *v105; // [rsp+A8h] [rbp-31h]
  char v106; // [rsp+B0h] [rbp-29h]
  char v107[8]; // [rsp+C0h] [rbp-19h] BYREF
  char v108; // [rsp+C8h] [rbp-11h]
  char v109[8]; // [rsp+D0h] [rbp-9h] BYREF
  __int64 v110; // [rsp+D8h] [rbp-1h]
  char v111; // [rsp+E0h] [rbp+7h]
  char v112[8]; // [rsp+E8h] [rbp+Fh] BYREF
  DXGADAPTER *v113; // [rsp+F0h] [rbp+17h]
  char v114; // [rsp+F8h] [rbp+1Fh]

  v4 = a3;
  v97 = 0LL;
  v5 = (unsigned int)a2;
  v6 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v55 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v12 = *v55;
      }
    }
  }
  if ( !v12 )
  {
    v56 = WdLogNewEntry5_WdError(v10);
    v50 = -1073741811;
    *(_QWORD *)(v56 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v56);
    return (unsigned int)v50;
  }
  if ( !*(_BYTE *)(v12 + 322) )
  {
    v57 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v57 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v57);
    return 3221225506LL;
  }
  if ( (_DWORD)v6 || !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v12 + 104) + 224LL))(0LL) )
  {
    if ( v12 != -208 && *(struct _KTHREAD **)(v12 + 216) == KeGetCurrentThread() )
    {
      v59 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v59 + 24) = 1306LL;
      WdLogEvent5_WdAssertion(v59);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v60 = *(_DWORD *)(v12 + 224);
        if ( v60 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v13, &EventBlockThread, v14, v60);
      }
      ExAcquirePushLockSharedEx(v12 + 208, 0LL);
    }
    v15 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
    if ( (*(_BYTE *)(v12 + 323) & 8) != 0 )
    {
      v61 = *(_QWORD *)(v12 + 456);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v61 + 208));
      if ( v15 < *(_DWORD *)(v61 + 248)
        && (v62 = v15,
            v63 = *(_QWORD *)(v61 + 232),
            v64 = *(_DWORD *)(v63 + 16LL * (unsigned int)v62 + 8),
            (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v63 + 16LL * (unsigned int)v62 + 8) & 0x60))
        && (v64 & 0x2000) == 0
        && (v64 & 0x1F) != 0
        && (v65 = 2 * v62, (v64 & 0x1F) == 1) )
      {
        v20 = *(_QWORD *)(v63 + 8 * v65);
      }
      else
      {
        v20 = 0LL;
      }
      ExReleasePushLockSharedEx(v61 + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    else if ( v15 < *(_DWORD *)(v12 + 248)
           && (v16 = v15,
               v17 = *(_QWORD *)(v12 + 232),
               v18 = *(_DWORD *)(v17 + 16LL * (unsigned int)v16 + 8),
               (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16LL * (unsigned int)v16 + 8) & 0x60))
           && (v18 & 0x2000) == 0
           && (v18 & 0x1F) != 0
           && (v19 = 2 * v16, (v18 & 0x1F) == 1) )
    {
      v20 = *(_QWORD *)(v17 + 8 * v19);
    }
    else
    {
      v20 = 0LL;
    }
    if ( v20 )
      _InterlockedIncrement64((volatile signed __int64 *)(v20 + 24));
    ExReleasePushLockSharedEx(v12 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( v20 )
    {
      if ( (_DWORD)v5 )
      {
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v98, v5, (struct _KTHREAD **)v12, &v97);
        if ( !v97 )
        {
          v70 = WdLogNewEntry5_WdWarning(v68, v67, v69);
          *(_QWORD *)(v70 + 24) = v20;
          *(_QWORD *)(v70 + 32) = v5;
          WdLogEvent5_WdWarning(v70);
          if ( v98 && _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v98 + 2), v98);
          v50 = -1073741811;
          goto LABEL_86;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v97 + 8);
        if ( v98 && _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v98 + 2), v98);
      }
      if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v12 + 104) + 224LL))(0LL) )
      {
        if ( *(_BYTE *)(v20 + 185) && DXGVAILOBJECT::IsFeatureEnabled() )
          v71 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v25) + 696);
        else
          v71 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v25) + 632);
        v50 = REMOTE_VSYNC::WaitForVSync(v71);
        goto LABEL_85;
      }
      v27 = *(_QWORD *)(v20 + 2456);
      if ( v27 )
      {
        if ( (unsigned int)v4 >= *(_DWORD *)(v27 + 80) )
        {
          v72 = WdLogNewEntry5_WdError(v25);
          v50 = -1073741811;
          *(_QWORD *)(v72 + 24) = v4;
          *(_QWORD *)(v72 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v72);
LABEL_180:
          v91 = (_QWORD *)WdLogNewEntry5_WdError(v25);
          v91[5] = v50;
          v91[3] = v20;
          v91[4] = v4;
          WdLogEvent5_WdError(v91);
          goto LABEL_85;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v20 + 24));
        if ( *(_QWORD *)(v20 + 2464) )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v20 + 24));
          v28 = (volatile signed __int64 *)v20;
          v96 = (DXGADAPTER *)v20;
          v29 = (volatile signed __int64 *)v20;
          goto LABEL_26;
        }
        DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v107);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v107);
        v28 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal(v73) + 77);
        v29 = v28;
        if ( v28 )
        {
          _InterlockedIncrement64(v28 + 3);
          v96 = (DXGADAPTER *)v28;
          if ( v108 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v107);
LABEL_26:
          if ( !v29 )
          {
            v74 = WdLogNewEntry5_WdAssertion(v25);
            *(_QWORD *)(v74 + 24) = 5679LL;
            WdLogEvent5_WdAssertion(v74);
          }
          if ( v97
            && (v28 != *(volatile signed __int64 **)(*((_QWORD *)v97 + 2) + 16LL) || v20 != *((_QWORD *)v97 + 211)) )
          {
            v75 = WdLogNewEntry5_WdWarning(v97, v24, v26);
            *(_QWORD *)(v75 + 24) = v20;
            *(_QWORD *)(v75 + 32) = v5;
            WdLogEvent5_WdWarning(v75);
            v50 = -1073741811;
LABEL_85:
            if ( v97 && _InterlockedExchangeAdd64((volatile signed __int64 *)v97 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v97 + 2), v97);
LABEL_86:
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v20 + 16), (struct DXGADAPTER *)v20);
            return (unsigned int)v50;
          }
          v102 = (DXGADAPTER *)v28;
          v103 = 0;
          _InterlockedIncrement64(v28 + 3);
          v101[1] = (struct _KTHREAD **)-1LL;
          v105 = (struct DXGADAPTER *)v20;
          v106 = 0;
          _InterlockedIncrement64((volatile signed __int64 *)(v20 + 24));
          v104[1] = (struct _KTHREAD **)-1LL;
          v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)v96 + 3, 0xFFFFFFFFFFFFFFFFuLL);
          if ( v30 == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v96 + 2), v96);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v20 + 16), (struct DXGADAPTER *)v20);
          if ( *(_DWORD *)(v20 + 136) != 1 )
          {
LABEL_34:
            if ( v103 )
            {
              v80 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30);
              v80[5] = v101;
              v80[3] = 275LL;
              v80[4] = 4LL;
              v80[6] = 0LL;
              v80[7] = 0LL;
              WdLogEvent5_WdCriticalError(v80);
            }
            v31 = v102;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v102 + 20) )
            {
              if ( !KeReadStateEvent((PRKEVENT)v102 + 2) )
              {
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q(v32, &EventBlockThread, v33, 72);
                KeWaitForSingleObject((char *)v102 + 48, Executive, 0, 0, 0LL);
              }
              DXGADAPTER::AcquireCoreResourceShared(v102);
              v31 = v102;
            }
            v103 = 1;
            if ( *((_DWORD *)v31 + 44) != 1 )
              goto LABEL_153;
            if ( v102 != v105 )
            {
              COREACCESS::AcquireShared((DXGADAPTER **)v104);
              v31 = (DXGADAPTER *)*((unsigned int *)v105 + 44);
              if ( (_DWORD)v31 != 1 )
              {
                COREACCESS::Release(v104);
LABEL_153:
                COREACCESS::Release(v101);
LABEL_154:
                v50 = -1073741130;
LABEL_75:
                if ( v105 )
                {
                  if ( v106 )
                    COREACCESS::Release(v104);
                  v51 = (DXGGLOBAL **)v105;
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    DXGGLOBAL::DestroyAdapter(v51[2], (struct DXGADAPTER *)v51);
                }
                if ( v102 )
                {
                  if ( v103 )
                    COREACCESS::Release(v101);
                  v52 = (DXGGLOBAL **)v102;
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v102 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    DXGGLOBAL::DestroyAdapter(v52[2], (struct DXGADAPTER *)v52);
                }
                goto LABEL_85;
              }
            }
            v34 = v96;
            v35 = *((_QWORD *)v96 + 308) == 0LL;
            v95 = (char *)v96 + 2464;
            if ( v35 )
            {
              v81 = WdLogNewEntry5_WdAssertion(v31);
              *(_QWORD *)(v81 + 24) = 5738LL;
              WdLogEvent5_WdAssertion(v81);
            }
            if ( !*(_QWORD *)(v20 + 2456) )
            {
              v82 = WdLogNewEntry5_WdAssertion(v31);
              *(_QWORD *)(v82 + 24) = 5739LL;
              WdLogEvent5_WdAssertion(v82);
            }
            if ( (_DWORD)v5 )
            {
              v31 = (DXGADAPTER *)*((unsigned int *)v97 + 106);
              if ( (_DWORD)v31 != 1 )
                goto LABEL_154;
              v34 = v96;
            }
            v36 = *(_QWORD *)(v20 + 2456);
            v37 = 0;
            v38 = 0;
            v93 = 0;
            v94 = 0;
            v92 = 0;
            if ( v36
              || (v83 = WdLogNewEntry5_WdAssertion(v31),
                  *(_QWORD *)(v83 + 24) = 8641LL,
                  WdLogEvent5_WdAssertion(v83),
                  (v36 = *(_QWORD *)(v20 + 2456)) != 0) )
            {
              if ( (unsigned int)v4 >= *(_DWORD *)(v36 + 80) )
              {
                v84 = WdLogNewEntry5_WdAssertion(v31);
                *(_QWORD *)(v84 + 24) = 5429LL;
                WdLogEvent5_WdAssertion(v84);
              }
              v39 = 3760 * v4;
              if ( *(_BYTE *)(*(_QWORD *)(v36 + 112) + v39 + 720) )
              {
                if ( !*(_QWORD *)(v20 + 2464) )
                {
                  ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(
                    *(ADAPTER_DISPLAY **)(v20 + 2456),
                    a3,
                    a4,
                    *((_DWORD *)v34 + 622),
                    &v93);
                  ADAPTER_DISPLAY::ControlVSyncAdapter(*(ADAPTER_DISPLAY **)(v20 + 2456), a3);
LABEL_64:
                  if ( v102 != v105 )
                    COREACCESS::Release(v104);
                  if ( v103 )
                  {
                    v50 = 0;
                  }
                  else
                  {
                    v89 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47);
                    v50 = 0;
                    v89[5] = v101;
                    v89[3] = 275LL;
                    v89[4] = 4LL;
                    v89[6] = 0LL;
                    v89[7] = 0LL;
                    WdLogEvent5_WdCriticalError(v89);
                  }
                  v103 = 0;
                  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v102 + 20) )
                    DXGADAPTER::ReleaseCoreResource(v102);
                  if ( v37 && v93 )
                    DXGADAPTER::DecrementVSyncWaiter(v96);
                  if ( v94 )
                  {
                    v50 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v100);
                    if ( v50 >= 0 )
                      v50 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v95 + 520LL)
                                                                                   + 8LL)
                                                                       + 560LL))(
                              *(_QWORD *)(*(_QWORD *)v95 + 528LL),
                              1LL);
                  }
                  else if ( v38 )
                  {
                    v50 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v100);
                    if ( v50 >= 0 && *((_DWORD *)v97 + 106) == 1 )
                      v50 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v95 + 520LL)
                                                                                          + 8LL)
                                                                              + 568LL))(
                              *((_QWORD *)v97 + 77),
                              0LL,
                              0LL);
                  }
                  goto LABEL_75;
                }
                if ( (DXGADAPTER *)v20 != v34 )
                {
                  v85 = WdLogNewEntry5_WdAssertion(v31);
                  *(_QWORD *)(v85 + 24) = 5762LL;
                  WdLogEvent5_WdAssertion(v85);
                }
                _InterlockedIncrement((volatile signed __int32 *)v34 + 622);
                v37 = 1;
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v95 + 520LL)
                                                                                   + 8LL)
                                                                       + 552LL))(
                       *(_QWORD *)(*(_QWORD *)v95 + 528LL),
                       a3) )
                {
LABEL_54:
                  v43 = *(ADAPTER_DISPLAY **)(v20 + 2456);
                  v99 = *((_DWORD *)v34 + 622);
                  v44 = v39 + *((_QWORD *)v43 + 14);
                  v45 = PsGetCurrentProcess(v41, v40);
                  v46 = PsGetProcessDxgProcess(v45);
                  v49 = v46;
                  if ( v46 )
                  {
                    if ( (*(_BYTE *)(v46 + 323) & 4) != 0 )
                    {
                      v87 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
                      v88 = v87;
                      if ( v87 )
                      {
                        ObfDereferenceObject(v87);
                        v49 = *v88;
                      }
                    }
                  }
                  v35 = *(_QWORD *)(v44 + 936) == 0LL;
                  v93 = 1;
                  if ( !v35 && *(_BYTE *)(v49 + 322) )
                  {
                    if ( *((_QWORD *)v43 + 33) )
                    {
                      *(_DWORD *)(v44 + 944) = a4;
                      BLTQUEUE::SetDWMTargetVsync(
                        (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)v43 + 33) + 8LL) + 2704LL * a3),
                        a4);
                    }
                    else
                    {
                      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                        McTemplateK0qqqq(
                          v99,
                          &EventDWMVsyncCountWait,
                          v48,
                          a4,
                          *(_DWORD *)(v44 + 948),
                          *(_BYTE *)(v44 + 952),
                          v99);
                      ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(v43, a3, a4, &v93);
                    }
                  }
                  v38 = v92;
                  goto LABEL_64;
                }
                LOBYTE(v42) = 1;
                v86 = *(_QWORD *)v95;
                if ( !v97 )
                {
                  if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v86 + 520) + 8LL)
                                                                       + 560LL))(
                         *(_QWORD *)(v86 + 528),
                         1LL,
                         v42) < 0 )
                  {
                    DXGADAPTER::DecrementVSyncWaiter(v96);
                    v50 = -1071775738;
                    goto LABEL_75;
                  }
                  v94 = 1;
                  goto LABEL_54;
                }
                if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v86 + 520) + 8LL) + 568LL))(
                       *((_QWORD *)v97 + 77),
                       0LL,
                       v42) >= 0 )
                {
                  v92 = 1;
                  goto LABEL_54;
                }
                DXGADAPTER::DecrementVSyncWaiter(v96);
              }
            }
            v50 = -1071775738;
            goto LABEL_75;
          }
          v113 = v96;
          v114 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v112);
          v110 = v20;
          v111 = 0;
          if ( (DXGADAPTER *)v20 != v96 )
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v109);
          if ( *((_DWORD *)v96 + 44) == 1 && *(_DWORD *)(v20 + 176) == 1 )
          {
            if ( (unsigned int)v4 < *(_DWORD *)(*(_QWORD *)(v20 + 2456) + 80LL) )
            {
              if ( DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)v20, v4) )
              {
                if ( v111 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v109);
                if ( v114 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v112);
                goto LABEL_34;
              }
              v50 = -1071775738;
            }
            else
            {
              v79 = WdLogNewEntry5_WdWarning(v77, v76, v78);
              v50 = -1073741811;
              *(_QWORD *)(v79 + 24) = v4;
              *(_QWORD *)(v79 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v79);
            }
          }
          else
          {
            v50 = -1073741130;
          }
          if ( v111 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v109);
          if ( v114 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v112);
          goto LABEL_75;
        }
        v90 = WdLogNewEntry5_WdError(v25);
        *(_QWORD *)(v90 + 24) = v20;
        *(_QWORD *)(v90 + 32) = -1073741637LL;
        WdLogEvent5_WdError(v90);
        DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v20);
        if ( v108 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v107);
      }
      v50 = -1073741637;
      goto LABEL_180;
    }
    v66 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    v50 = -1073741811;
    *(_QWORD *)(v66 + 24) = v6;
    *(_QWORD *)(v66 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v66);
    return (unsigned int)v50;
  }
  Global = DXGGLOBAL::GetGlobal(v10);
  return REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)Global + 632));
}
