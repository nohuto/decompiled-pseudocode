/*
 * XREFs of ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00CF8C0
 * Callers:
 *     DxgkWaitForVerticalBlankEvent @ 0x1C00CF7D0 (DxgkWaitForVerticalBlankEvent.c)
 *     DxgkWaitForVerticalBlankEvent2 @ 0x1C0169AF0 (DxgkWaitForVerticalBlankEvent2.c)
 * Callees:
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
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
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00F4D30 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C010DC8C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z @ 0x1C0146F84 (-WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01512D8 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C01BC4E0 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C01E6BC0 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEventInternal(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct _KEVENT **a5)
{
  __int64 v5; // r12
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // ebx
  __int64 v19; // r8
  __int64 v20; // rbx
  int v21; // edx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  volatile signed __int64 *v31; // rsi
  volatile signed __int64 *v32; // r14
  signed __int64 v33; // rcx
  DXGADAPTER *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  DXGADAPTER *v37; // r15
  int v38; // esi
  __int64 v39; // r14
  char v40; // r13
  __int64 v41; // r12
  char *v42; // r14
  __int64 v43; // rcx
  __int64 v44; // r8
  char v45; // r15
  ADAPTER_DISPLAY *v46; // rcx
  __int64 v47; // rax
  union _LARGE_INTEGER v48; // rax
  __int64 v49; // rcx
  DXGGLOBAL **v50; // rcx
  DXGGLOBAL **v51; // rcx
  int v53; // r9d
  __int64 *ThreadProperty; // rax
  __int64 *v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v59; // rax
  __int64 v60; // r15
  __int64 v61; // r8
  __int64 v62; // rbx
  int v63; // edx
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  REMOTE_VSYNC *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rax
  unsigned int v87; // eax
  _QWORD *v88; // rax
  int v89; // eax
  __int64 v90; // rax
  _QWORD *v91; // rax
  char v92; // [rsp+30h] [rbp-B1h]
  unsigned int v93; // [rsp+34h] [rbp-ADh]
  char *v94; // [rsp+38h] [rbp-A9h]
  DXGADAPTER *v95; // [rsp+40h] [rbp-A1h]
  struct DXGDEVICE *v96; // [rsp+48h] [rbp-99h] BYREF
  struct DXGDEVICE *v97; // [rsp+50h] [rbp-91h] BYREF
  char v98[8]; // [rsp+60h] [rbp-81h] BYREF
  struct _KTHREAD **v99[2]; // [rsp+68h] [rbp-79h] BYREF
  DXGADAPTER *v100; // [rsp+78h] [rbp-69h]
  char v101; // [rsp+80h] [rbp-61h]
  struct _KTHREAD **v102[2]; // [rsp+88h] [rbp-59h] BYREF
  struct DXGADAPTER *v103; // [rsp+98h] [rbp-49h]
  char v104; // [rsp+A0h] [rbp-41h]
  union _LARGE_INTEGER Timeout; // [rsp+B0h] [rbp-31h] BYREF
  char v106[8]; // [rsp+B8h] [rbp-29h] BYREF
  char v107; // [rsp+C0h] [rbp-21h]
  char v108[8]; // [rsp+C8h] [rbp-19h] BYREF
  __int64 v109; // [rsp+D0h] [rbp-11h]
  char v110; // [rsp+D8h] [rbp-9h]
  char v111[8]; // [rsp+E0h] [rbp-1h] BYREF
  DXGADAPTER *v112; // [rsp+E8h] [rbp+7h]
  char v113; // [rsp+F0h] [rbp+Fh]

  v5 = a2;
  v96 = 0LL;
  v6 = a4;
  v7 = a3;
  v8 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v14 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v55 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v14 = *v55;
    }
    v6 = a4;
  }
  if ( !v14 )
  {
    v56 = WdLogNewEntry5_WdError(v12);
    v38 = -1073741811;
    *(_QWORD *)(v56 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v56);
    return (unsigned int)v38;
  }
  if ( !v6 || *(_BYTE *)(v14 + 322) )
  {
    KeEnterCriticalRegion();
    if ( !(_DWORD)v8 && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v14 + 104) + 224LL))(0LL) )
    {
      Global = DXGGLOBAL::GetGlobal(v15);
      v38 = REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)Global + 632));
LABEL_89:
      KeLeaveCriticalRegion();
      return (unsigned int)v38;
    }
    if ( v14 != -208 && *(struct _KTHREAD **)(v14 + 216) == KeGetCurrentThread() )
    {
      v59 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v59 + 24) = 1306LL;
      WdLogEvent5_WdAssertion(v59);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v53 = *(_DWORD *)(v14 + 224);
        if ( v53 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v16, &EventBlockThread, v17, v53);
      }
      ExAcquirePushLockSharedEx(v14 + 208, 0LL);
    }
    v18 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( (*(_BYTE *)(v14 + 323) & 8) != 0 )
    {
      v60 = *(_QWORD *)(v14 + 456);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v60 + 208));
      if ( v18 < *(_DWORD *)(v60 + 248)
        && (v61 = v18,
            v62 = *(_QWORD *)(v60 + 232),
            v63 = *(_DWORD *)(v62 + 16LL * (unsigned int)v61 + 8),
            (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v62 + 16LL * (unsigned int)v61 + 8) & 0x60))
        && (v63 & 0x2000) == 0
        && (v63 & 0x1F) != 0
        && (v64 = 2 * v61, (v63 & 0x1F) == 1) )
      {
        v23 = *(_QWORD *)(v62 + 8 * v64);
      }
      else
      {
        v23 = 0LL;
      }
      ExReleasePushLockSharedEx(v60 + 208, 0LL);
      KeLeaveCriticalRegion();
      v7 = a3;
    }
    else if ( v18 < *(_DWORD *)(v14 + 248)
           && (v19 = v18,
               v20 = *(_QWORD *)(v14 + 232),
               v21 = *(_DWORD *)(v20 + 16LL * (unsigned int)v19 + 8),
               (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16LL * (unsigned int)v19 + 8) & 0x60))
           && (v21 & 0x2000) == 0
           && (v21 & 0x1F) != 0
           && (v22 = 2 * v19, (v21 & 0x1F) == 1) )
    {
      v23 = *(_QWORD *)(v20 + 8 * v22);
    }
    else
    {
      v23 = 0LL;
    }
    if ( v23 )
      _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
    ExReleasePushLockSharedEx(v14 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( !v23 )
    {
      v65 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      v38 = -1073741811;
      *(_QWORD *)(v65 + 24) = v8;
      *(_QWORD *)(v65 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v65);
      goto LABEL_89;
    }
    if ( (_DWORD)v5 )
    {
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v97, v5, (struct _KTHREAD **)v14, &v96);
      if ( !v96 )
      {
        v69 = WdLogNewEntry5_WdWarning(v67, v66, v68);
        *(_QWORD *)(v69 + 24) = v23;
        *(_QWORD *)(v69 + 32) = v5;
        WdLogEvent5_WdWarning(v69);
        if ( v97 && _InterlockedExchangeAdd64((volatile signed __int64 *)v97 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v97 + 2), v97);
        v38 = -1073741811;
        goto LABEL_87;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v96 + 8);
      if ( v97 && _InterlockedExchangeAdd64((volatile signed __int64 *)v97 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v97 + 2), v97);
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v14 + 104) + 224LL))(0LL) )
    {
      if ( *(_BYTE *)(v23 + 185) && DXGVAILOBJECT::IsFeatureEnabled() )
        v70 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v28) + 696);
      else
        v70 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v28) + 632);
      v38 = REMOTE_VSYNC::WaitForVSync(v70);
      goto LABEL_86;
    }
    v30 = *(_QWORD *)(v23 + 2456);
    if ( v30 )
    {
      if ( v7 >= *(_DWORD *)(v30 + 80) )
      {
        v71 = WdLogNewEntry5_WdError(v28);
        v38 = -1073741811;
        *(_QWORD *)(v71 + 24) = v7;
        *(_QWORD *)(v71 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v71);
LABEL_185:
        v91 = (_QWORD *)WdLogNewEntry5_WdError(v28);
        v91[4] = v7;
        v91[5] = v38;
        v91[3] = v23;
        WdLogEvent5_WdError(v91);
        goto LABEL_86;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
      if ( *(_QWORD *)(v23 + 2464) )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
        v31 = (volatile signed __int64 *)v23;
        v95 = (DXGADAPTER *)v23;
        v32 = (volatile signed __int64 *)v23;
        goto LABEL_26;
      }
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v106);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v106);
      v31 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal(v72) + 77);
      v32 = v31;
      if ( v31 )
      {
        _InterlockedIncrement64(v31 + 3);
        v95 = (DXGADAPTER *)v31;
        if ( v107 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v106);
LABEL_26:
        if ( !v32 )
        {
          v73 = WdLogNewEntry5_WdAssertion(v28);
          *(_QWORD *)(v73 + 24) = 5995LL;
          WdLogEvent5_WdAssertion(v73);
        }
        if ( v96 && (v31 != *(volatile signed __int64 **)(*((_QWORD *)v96 + 2) + 16LL) || v23 != *((_QWORD *)v96 + 211)) )
        {
          v74 = WdLogNewEntry5_WdWarning(v96, v27, v29);
          *(_QWORD *)(v74 + 24) = v23;
          *(_QWORD *)(v74 + 32) = v5;
          WdLogEvent5_WdWarning(v74);
          v38 = -1073741811;
LABEL_86:
          if ( v96 && _InterlockedExchangeAdd64((volatile signed __int64 *)v96 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v96 + 2), v96);
LABEL_87:
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v23 + 16), (struct DXGADAPTER *)v23);
          goto LABEL_89;
        }
        v100 = (DXGADAPTER *)v31;
        v101 = 0;
        _InterlockedIncrement64(v31 + 3);
        v99[1] = (struct _KTHREAD **)-1LL;
        v103 = (struct DXGADAPTER *)v23;
        v104 = 0;
        _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
        v102[1] = (struct _KTHREAD **)-1LL;
        v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)v95 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        if ( v33 == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v95 + 2), v95);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v23 + 16), (struct DXGADAPTER *)v23);
        if ( *(_DWORD *)(v23 + 136) != 1 )
        {
LABEL_34:
          if ( v101 )
          {
            v79 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33);
            v79[5] = v99;
            v79[3] = 275LL;
            v79[4] = 4LL;
            v79[6] = 0LL;
            v79[7] = 0LL;
            WdLogEvent5_WdCriticalError(v79);
          }
          v34 = v100;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v100 + 20) )
          {
            if ( !KeReadStateEvent((PRKEVENT)v100 + 2) )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v35, &EventBlockThread, v36, 72);
              KeWaitForSingleObject((char *)v100 + 48, Executive, 0, 0, 0LL);
            }
            DXGADAPTER::AcquireCoreResourceShared(v100);
            v34 = v100;
          }
          v101 = 1;
          if ( *((_DWORD *)v34 + 44) != 1 )
            goto LABEL_157;
          if ( v100 != v103 )
          {
            COREACCESS::AcquireShared((DXGADAPTER **)v102);
            v34 = (DXGADAPTER *)*((unsigned int *)v103 + 44);
            if ( (_DWORD)v34 != 1 )
            {
              COREACCESS::Release(v102);
LABEL_157:
              COREACCESS::Release(v99);
LABEL_158:
              v38 = -1073741130;
LABEL_76:
              if ( v103 )
              {
                if ( v104 )
                  COREACCESS::Release(v102);
                v50 = (DXGGLOBAL **)v103;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v103 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(v50[2], (struct DXGADAPTER *)v50);
              }
              if ( v100 )
              {
                if ( v101 )
                  COREACCESS::Release(v99);
                v51 = (DXGGLOBAL **)v100;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v100 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(v51[2], (struct DXGADAPTER *)v51);
              }
              goto LABEL_86;
            }
          }
          v37 = v95;
          v38 = 0;
          v94 = (char *)v95 + 2464;
          if ( !*((_QWORD *)v95 + 308) )
          {
            v80 = WdLogNewEntry5_WdAssertion(v34);
            *(_QWORD *)(v80 + 24) = 6054LL;
            WdLogEvent5_WdAssertion(v80);
          }
          if ( !*(_QWORD *)(v23 + 2456) )
          {
            v81 = WdLogNewEntry5_WdAssertion(v34);
            *(_QWORD *)(v81 + 24) = 6055LL;
            WdLogEvent5_WdAssertion(v81);
          }
          if ( (_DWORD)v5 )
          {
            v34 = (DXGADAPTER *)*((unsigned int *)v96 + 106);
            if ( (_DWORD)v34 != 1 )
              goto LABEL_158;
            v37 = v95;
          }
          v39 = *(_QWORD *)(v23 + 2456);
          v40 = 0;
          v92 = 0;
          v93 = 0;
          if ( v39
            || (v82 = WdLogNewEntry5_WdAssertion(v34),
                *(_QWORD *)(v82 + 24) = 8641LL,
                WdLogEvent5_WdAssertion(v82),
                (v39 = *(_QWORD *)(v23 + 2456)) != 0) )
          {
            if ( a3 >= *(_DWORD *)(v39 + 80) )
            {
              v83 = WdLogNewEntry5_WdAssertion(v34);
              *(_QWORD *)(v83 + 24) = 5429LL;
              WdLogEvent5_WdAssertion(v83);
            }
            v41 = 3760LL * a3;
            if ( *(_BYTE *)(*(_QWORD *)(v39 + 112) + v41 + 720) )
            {
              if ( !*(_QWORD *)(v23 + 2464) )
              {
                ADAPTER_DISPLAY::ControlVSyncAdapter(*(ADAPTER_DISPLAY **)(v23 + 2456), a3);
                v42 = (char *)v95 + 2464;
LABEL_54:
                v45 = 0;
                goto LABEL_55;
              }
              if ( (DXGADAPTER *)v23 != v37 )
              {
                v84 = WdLogNewEntry5_WdAssertion(v34);
                *(_QWORD *)(v84 + 24) = 6077LL;
                WdLogEvent5_WdAssertion(v84);
              }
              _InterlockedIncrement((volatile signed __int32 *)v37 + 622);
              v42 = (char *)v95 + 2464;
              v40 = 1;
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v94 + 520LL)
                                                                                 + 8LL)
                                                                     + 552LL))(
                     *(_QWORD *)(*(_QWORD *)v94 + 528LL),
                     a3) )
              {
                goto LABEL_54;
              }
              LOBYTE(v44) = 1;
              v85 = *(_QWORD *)v94;
              if ( !v96 )
              {
                if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v85 + 520) + 8LL) + 560LL))(
                       *(_QWORD *)(v85 + 528),
                       1LL,
                       v44) < 0 )
                {
                  DXGADAPTER::DecrementVSyncWaiter(v95);
                  v38 = -1071775738;
                  goto LABEL_76;
                }
                v92 = 1;
                goto LABEL_54;
              }
              if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v85 + 520) + 8LL) + 568LL))(
                     *((_QWORD *)v96 + 77),
                     0LL,
                     v44) >= 0 )
              {
                v45 = 1;
LABEL_55:
                if ( v100 != v103 )
                  COREACCESS::Release(v102);
                if ( !v101 )
                {
                  v86 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43);
                  v86[5] = v99;
                  v86[3] = 275LL;
                  v86[4] = 4LL;
                  v86[6] = 0LL;
                  v86[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v86);
                }
                v101 = 0;
                if ( KeGetCurrentThread() != *((struct _KTHREAD **)v100 + 20) )
                  DXGADAPTER::ReleaseCoreResource(v100);
                v46 = *(ADAPTER_DISPLAY **)(v23 + 2456);
                if ( a4 )
                {
                  v87 = ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent(v46, a3, 1, a4, a5);
                  v38 = v87;
                  if ( v87 <= 0x3E )
                  {
                    v49 = v87;
                    v93 = v87;
LABEL_67:
                    if ( v40 )
                    {
                      if ( _InterlockedDecrement((volatile signed __int32 *)v95 + 622) < 0 )
                      {
                        v88 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v49);
                        v88[5] = v95;
                        v88[3] = 275LL;
                        v88[4] = 37LL;
                        v88[6] = *((unsigned int *)v95 + 622);
                        v88[7] = 0LL;
                        WdLogEvent5_WdCriticalError(v88);
                        LODWORD(v49) = v93;
                      }
                      v42 = (char *)v95 + 2464;
                    }
                    if ( v92 )
                    {
                      v38 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v98);
                      if ( v38 < 0 )
                        goto LABEL_76;
                      v89 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 520LL)
                                                                                           + 8LL)
                                                                               + 560LL))(
                              *(_QWORD *)(*(_QWORD *)v42 + 528LL),
                              1LL,
                              0LL);
                    }
                    else
                    {
                      if ( !v45 )
                      {
LABEL_73:
                        if ( v38 >= 0 && (_DWORD)v49 )
                          v38 = v49;
                        goto LABEL_76;
                      }
                      v38 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v98);
                      if ( v38 < 0 )
                        goto LABEL_76;
                      if ( *((_DWORD *)v96 + 106) != 1 )
                      {
LABEL_181:
                        LODWORD(v49) = v93;
                        goto LABEL_73;
                      }
                      v89 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 520LL)
                                                                                          + 8LL)
                                                                              + 568LL))(
                              *((_QWORD *)v96 + 77),
                              0LL,
                              0LL);
                    }
                    v38 = v89;
                    goto LABEL_181;
                  }
                }
                else
                {
                  v47 = *((_QWORD *)v46 + 2);
                  if ( *(_QWORD *)(v47 + 2456) && *(_QWORD *)(v47 + 560) )
                    v48.QuadPart = -1000000LL;
                  else
                    v48.QuadPart = -5000000LL;
                  Timeout = v48;
                  KeWaitForSingleObject((PVOID)(*((_QWORD *)v46 + 14) + v41 + 912), UserRequest, 0, 0, &Timeout);
                }
                v49 = 0LL;
                goto LABEL_67;
              }
              DXGADAPTER::DecrementVSyncWaiter(v95);
            }
          }
          v38 = -1071775738;
          goto LABEL_76;
        }
        v112 = v95;
        v113 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
        v109 = v23;
        v110 = 0;
        if ( (DXGADAPTER *)v23 != v95 )
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v108);
        if ( *((_DWORD *)v95 + 44) == 1 && *(_DWORD *)(v23 + 176) == 1 )
        {
          if ( v7 < *(_DWORD *)(*(_QWORD *)(v23 + 2456) + 80LL) )
          {
            if ( DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)v23, v7) )
            {
              if ( v110 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v108);
              if ( v113 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
              goto LABEL_34;
            }
            v38 = -1071775738;
          }
          else
          {
            v78 = WdLogNewEntry5_WdWarning(v76, v75, v77);
            v38 = -1073741811;
            *(_QWORD *)(v78 + 24) = v7;
            *(_QWORD *)(v78 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v78);
          }
        }
        else
        {
          v38 = -1073741130;
        }
        if ( v110 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v108);
        if ( v113 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
        goto LABEL_76;
      }
      v90 = WdLogNewEntry5_WdError(v28);
      *(_QWORD *)(v90 + 24) = v23;
      *(_QWORD *)(v90 + 32) = -1073741637LL;
      WdLogEvent5_WdError(v90);
      DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v23);
      if ( v107 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v106);
    }
    v38 = -1073741637;
    goto LABEL_185;
  }
  v57 = WdLogNewEntry5_WdWarning(v12, v11, v13);
  *(_QWORD *)(v57 + 24) = -1073741790LL;
  WdLogEvent5_WdWarning(v57);
  return 3221225506LL;
}
