/*
 * XREFs of ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00A9BB0
 * Callers:
 *     DxgkSetSyncRefreshCountWaitTarget @ 0x1C00A9B00 (DxgkSetSyncRefreshCountWaitTarget.c)
 * Callees:
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C0001140 (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C00020FC (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C00079F0 (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqq @ 0x1C00215BC (McTemplateK0qqqq.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C008483C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0084890 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00AC14C (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C00AC4D4 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C0104444 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTargetInternal(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  volatile signed __int64 *v27; // rdi
  DXGADAPTER *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  DXGADAPTER *v31; // r14
  char v32; // r12
  __int64 v33; // rdi
  __int64 v34; // r13
  __int64 v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  ADAPTER_DISPLAY *v39; // rdi
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rbx
  int v48; // edi
  DXGGLOBAL **v49; // rcx
  DXGGLOBAL **v50; // rcx
  ADAPTER_RENDER **v51; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v54; // rcx
  struct DXGGLOBAL *v55; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // r9d
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rbx
  int v65; // r8d
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 *v81; // rax
  __int64 *v82; // r15
  _QWORD *v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rax
  unsigned __int8 v86; // [rsp+40h] [rbp-C0h] BYREF
  char v87; // [rsp+41h] [rbp-BFh]
  char v88; // [rsp+42h] [rbp-BEh]
  DXGADAPTER *v89; // [rsp+48h] [rbp-B8h]
  char *v90; // [rsp+50h] [rbp-B0h]
  struct DXGDEVICE *v91; // [rsp+58h] [rbp-A8h]
  char v92[8]; // [rsp+60h] [rbp-A0h] BYREF
  char v93[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v94; // [rsp+70h] [rbp-90h]
  DXGADAPTER *v95; // [rsp+78h] [rbp-88h]
  char v96; // [rsp+80h] [rbp-80h]
  char v97[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v98; // [rsp+90h] [rbp-70h]
  struct DXGADAPTER *v99; // [rsp+98h] [rbp-68h]
  char v100; // [rsp+A0h] [rbp-60h]
  unsigned int v101; // [rsp+B0h] [rbp-50h]
  char v102[8]; // [rsp+B8h] [rbp-48h] BYREF
  char v103; // [rsp+C0h] [rbp-40h]
  char v104[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v105; // [rsp+D0h] [rbp-30h]
  char v106; // [rsp+D8h] [rbp-28h]
  char v107[8]; // [rsp+E0h] [rbp-20h] BYREF
  DXGADAPTER *v108; // [rsp+E8h] [rbp-18h]
  char v109; // [rsp+F0h] [rbp-10h]
  char v110[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v111; // [rsp+100h] [rbp+0h]
  int v112; // [rsp+108h] [rbp+8h]

  v4 = a3;
  v91 = 0LL;
  v5 = (unsigned int)a2;
  v6 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v8);
  v13 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v57 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v13 = *v57;
      }
    }
  }
  if ( !v13 )
  {
    v58 = WdLogNewEntry5_WdError(v11);
    v48 = -1073741811;
    *(_QWORD *)(v58 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v58);
    return (unsigned int)v48;
  }
  if ( *(_BYTE *)(v13 + 306) )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v13 + 96) + 224LL))(0LL) )
    {
      v111 = v13 + 200;
      if ( v13 != -200 && *(struct _KTHREAD **)(v13 + 208) == KeGetCurrentThread() )
      {
        v60 = WdLogNewEntry5_WdAssertion(v14);
        *(_QWORD *)(v60 + 24) = 1214LL;
        WdLogEvent5_WdAssertion(v60);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13 + 200, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v61 = *(_DWORD *)(v13 + 216);
          if ( v61 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v16, &EventBlockThread, v17, v61);
        }
        ExAcquirePushLockSharedEx(v13 + 200, 0LL);
      }
      v18 = (*(_BYTE *)(v13 + 307) & 8) == 0;
      v112 = 1;
      if ( v18 )
      {
        v19 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v19 < *(_DWORD *)(v13 + 240)
          && (v20 = *(_QWORD *)(v13 + 224),
              v15 = (unsigned int)v19,
              v16 = ((unsigned int)v6 >> 25) & 0x60,
              v17 = *(unsigned int *)(v20 + 16 * v19 + 8),
              (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60))
          && (v17 & 0x2000) == 0
          && (v17 & 0x1F) != 0
          && (v15 = 2LL * (unsigned int)v19, (*(_BYTE *)(v20 + 16LL * (unsigned int)v19 + 8) & 0x1F) == 1) )
        {
          v21 = *(_QWORD *)(v20 + 16LL * (unsigned int)v19);
        }
        else
        {
          v21 = 0LL;
        }
      }
      else
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(v13 + 440) + 200LL));
        v62 = *(_QWORD *)(v13 + 440);
        v63 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v63 < *(_DWORD *)(v62 + 240)
          && (v64 = *(_QWORD *)(v62 + 224),
              v65 = *(_DWORD *)(v64 + 16 * v63 + 8),
              (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v64 + 16 * v63 + 8) & 0x60))
          && (v65 & 0x2000) == 0
          && (v65 & 0x1F) != 0
          && (*(_BYTE *)(v64 + 16LL * (unsigned int)v63 + 8) & 0x1F) == 1 )
        {
          v21 = *(_QWORD *)(v64 + 16LL * (unsigned int)v63);
        }
        else
        {
          v21 = 0LL;
        }
        ExReleasePushLockSharedEx(v62 + 200, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v21 )
      {
        if ( !(_DWORD)v5 )
        {
          v22 = 0LL;
          goto LABEL_20;
        }
        v67 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v67 < *(_DWORD *)(v13 + 240) )
        {
          v68 = *(_QWORD *)(v13 + 224);
          v15 = (unsigned int)v67;
          v16 = ((unsigned int)v5 >> 25) & 0x60;
          v17 = *(unsigned int *)(v68 + 16 * v67 + 8);
          if ( (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v68 + 16 * v67 + 8) & 0x60)
            && (v17 & 0x2000) == 0
            && (v17 & 0x1F) != 0 )
          {
            v15 = 2LL * (unsigned int)v67;
            if ( (*(_BYTE *)(v68 + 16LL * (unsigned int)v67 + 8) & 0x1F) == 3 )
            {
              v22 = *(_QWORD *)(v68 + 16LL * (unsigned int)v67);
              v91 = (struct DXGDEVICE *)v22;
              if ( v22 )
              {
                _InterlockedIncrement64((volatile signed __int64 *)(v22 + 64));
LABEL_20:
                ExReleasePushLockSharedEx(v13 + 200, 0LL);
                KeLeaveCriticalRegion();
                v26 = *(_QWORD *)(v21 + 2304);
                if ( v26 )
                {
                  if ( (unsigned int)v4 >= *(_DWORD *)(v26 + 80) )
                  {
                    v70 = WdLogNewEntry5_WdError(v24);
                    v48 = -1073741811;
                    *(_QWORD *)(v70 + 24) = v4;
                    *(_QWORD *)(v70 + 32) = -1073741811LL;
                    WdLogEvent5_WdError(v70);
LABEL_165:
                    v85 = (_QWORD *)WdLogNewEntry5_WdError(v24);
                    v85[5] = v48;
                    v85[3] = v21;
                    v85[4] = v4;
                    WdLogEvent5_WdError(v85);
LABEL_80:
                    v51 = (ADAPTER_RENDER **)v91;
                    if ( v91 )
                    {
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v91 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        ADAPTER_RENDER::DestroyDeviceNoLocks(v51[2], (struct DXGDEVICE *)v51);
                    }
                    return (unsigned int)v48;
                  }
                  _InterlockedIncrement64((volatile signed __int64 *)(v21 + 24));
                  if ( *(_QWORD *)(v21 + 2312) )
                  {
                    _InterlockedIncrement64((volatile signed __int64 *)(v21 + 24));
                    v27 = (volatile signed __int64 *)v21;
                    v89 = (DXGADAPTER *)v21;
                    goto LABEL_24;
                  }
                  Global = DXGGLOBAL::GetGlobal(v24);
                  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v102, (struct DXGGLOBAL *)((char *)Global + 136));
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v102);
                  v27 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal(v54) + 76);
                  if ( v27 )
                  {
                    _InterlockedIncrement64(v27 + 3);
                    v89 = (DXGADAPTER *)v27;
                    if ( v103 )
                      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v102);
LABEL_24:
                    if ( v22
                      && (v27 != *(volatile signed __int64 **)(*(_QWORD *)(v22 + 16) + 16LL)
                       || v21 != *(_QWORD *)(v22 + 1672)) )
                    {
                      v71 = WdLogNewEntry5_WdWarning(v24, v23, v25);
                      *(_QWORD *)(v71 + 24) = v21;
                      *(_QWORD *)(v71 + 32) = v5;
                      WdLogEvent5_WdWarning(v71);
                      v48 = -1073741811;
                      goto LABEL_80;
                    }
                    v95 = (DXGADAPTER *)v27;
                    v96 = 0;
                    _InterlockedIncrement64(v27 + 3);
                    v94 = -1LL;
                    v99 = (struct DXGADAPTER *)v21;
                    v100 = 0;
                    _InterlockedIncrement64((volatile signed __int64 *)(v21 + 24));
                    v98 = -1LL;
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v89 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v89 + 2), v89);
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v21 + 16), (struct DXGADAPTER *)v21);
                    if ( *(_DWORD *)(v21 + 136) != 1 )
                    {
LABEL_30:
                      v28 = v95;
                      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v95 + 20) )
                      {
                        if ( !KeReadStateEvent((PRKEVENT)v95 + 2) )
                        {
                          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                            McTemplateK0q(v29, &EventBlockThread, v30, 72);
                          KeWaitForSingleObject((char *)v95 + 48, Executive, 0, 0, 0LL);
                        }
                        DXGADAPTER::AcquireCoreResourceShared(v95);
                        v28 = v95;
                      }
                      v96 = 1;
                      if ( *((_DWORD *)v28 + 44) != 1 )
                        goto LABEL_143;
                      if ( v95 != v99 )
                      {
                        COREACCESS::AcquireShared((COREACCESS *)v97);
                        v28 = (DXGADAPTER *)*((unsigned int *)v99 + 44);
                        if ( (_DWORD)v28 != 1 )
                        {
                          COREACCESS::Release((COREACCESS *)v97);
LABEL_143:
                          COREACCESS::Release((COREACCESS *)v93);
                          v48 = -1073741130;
                          goto LABEL_70;
                        }
                      }
                      v31 = v89;
                      v90 = (char *)v89 + 2312;
                      if ( !*((_QWORD *)v89 + 289) )
                      {
                        v76 = WdLogNewEntry5_WdAssertion(v28);
                        *(_QWORD *)(v76 + 24) = 5020LL;
                        WdLogEvent5_WdAssertion(v76);
                      }
                      if ( !*(_QWORD *)(v21 + 2304) )
                      {
                        v77 = WdLogNewEntry5_WdAssertion(v28);
                        *(_QWORD *)(v77 + 24) = 5021LL;
                        WdLogEvent5_WdAssertion(v77);
                      }
                      if ( (_DWORD)v5 )
                      {
                        if ( *((_DWORD *)v91 + 102) != 1 )
                        {
                          v48 = -1073741130;
                          goto LABEL_70;
                        }
                        v31 = v89;
                      }
                      v32 = 0;
                      v86 = 0;
                      v87 = 0;
                      v88 = 0;
                      if ( !*(_QWORD *)(v21 + 2304) )
                      {
                        v78 = WdLogNewEntry5_WdAssertion(v28);
                        *(_QWORD *)(v78 + 24) = 8208LL;
                        WdLogEvent5_WdAssertion(v78);
                      }
                      v33 = *(_QWORD *)(v21 + 2304);
                      if ( v33 )
                      {
                        if ( (unsigned int)v4 >= *(_DWORD *)(v33 + 80) )
                        {
                          v79 = WdLogNewEntry5_WdAssertion(v28);
                          *(_QWORD *)(v79 + 24) = 5083LL;
                          WdLogEvent5_WdAssertion(v79);
                        }
                        v34 = v4;
                        v35 = 3760 * v4;
                        if ( *(_BYTE *)(*(_QWORD *)(v33 + 112) + v35 + 720) )
                        {
                          if ( !*(_QWORD *)(v21 + 2312) )
                          {
                            ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(
                              *(ADAPTER_DISPLAY **)(v21 + 2304),
                              a3,
                              a4,
                              *((_DWORD *)v31 + 584),
                              &v86);
                            ADAPTER_DISPLAY::ControlVSyncAdapter(*(ADAPTER_DISPLAY **)(v21 + 2304), a3);
LABEL_59:
                            if ( v95 != v99 )
                              COREACCESS::Release((COREACCESS *)v97);
                            if ( v96 )
                            {
                              v48 = 0;
                            }
                            else
                            {
                              v83 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45, v44, v46);
                              v48 = 0;
                              v83[5] = v93;
                              v83[3] = 275LL;
                              v83[4] = 4LL;
                              v83[6] = 0LL;
                              v83[7] = 0LL;
                              WdLogEvent5_WdCriticalError(v83);
                            }
                            v96 = 0;
                            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v95 + 20) )
                              DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v95);
                            if ( v32 && v86 )
                              DXGADAPTER::DecrementVSyncWaiter(v89);
                            if ( v87 )
                            {
                              v48 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v92);
                              if ( v48 >= 0 )
                                v48 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v90 + 504LL)
                                                                                             + 8LL)
                                                                                 + 464LL))(
                                        *(_QWORD *)(*(_QWORD *)v90 + 512LL),
                                        1LL);
                            }
                            else if ( v88 )
                            {
                              v48 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v92);
                              if ( v48 >= 0 && *((_DWORD *)v91 + 102) == 1 )
                                v48 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v90 + 504LL) + 8LL)
                                                                                        + 472LL))(
                                        *((_QWORD *)v91 + 75),
                                        0LL,
                                        0LL);
                            }
                            goto LABEL_70;
                          }
                          if ( (DXGADAPTER *)v21 != v31 )
                          {
                            v80 = WdLogNewEntry5_WdAssertion(v28);
                            *(_QWORD *)(v80 + 24) = 5044LL;
                            WdLogEvent5_WdAssertion(v80);
                          }
                          _InterlockedIncrement((volatile signed __int32 *)v31 + 584);
                          v32 = 1;
                          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v90 + 504LL)
                                                                                             + 8LL)
                                                                                 + 456LL))(
                                 *(_QWORD *)(*(_QWORD *)v90 + 512LL),
                                 a3) )
                          {
LABEL_50:
                            v39 = *(ADAPTER_DISPLAY **)(v21 + 2304);
                            v101 = *((_DWORD *)v31 + 584);
                            v40 = v35 + *((_QWORD *)v39 + 14);
                            v41 = PsGetCurrentProcess(v37, v36);
                            v43 = PsGetProcessDxgProcess(v41, v42);
                            v47 = v43;
                            if ( v43 )
                            {
                              if ( (*(_BYTE *)(v43 + 307) & 4) != 0 )
                              {
                                v81 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
                                v82 = v81;
                                if ( v81 )
                                {
                                  ObfDereferenceObject(v81);
                                  v47 = *v82;
                                }
                              }
                            }
                            v18 = *(_QWORD *)(v40 + 936) == 0LL;
                            v86 = 1;
                            if ( !v18 && *(_BYTE *)(v47 + 306) )
                            {
                              if ( *((_QWORD *)v39 + 33) )
                              {
                                *(_DWORD *)(v40 + 944) = a4;
                                BLTQUEUE::SetDWMTargetVsync(
                                  (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)v39 + 33) + 8LL) + 2704 * v34),
                                  a4);
                              }
                              else
                              {
                                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                                  McTemplateK0qqqq(
                                    v101,
                                    &EventDWMVsyncCountWait,
                                    v46,
                                    a4,
                                    *(_DWORD *)(v40 + 948),
                                    *(_BYTE *)(v40 + 952),
                                    v101);
                                ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(v39, a3, a4, &v86);
                              }
                            }
                            goto LABEL_59;
                          }
                          LOBYTE(v38) = 1;
                          if ( v91 )
                          {
                            if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v90 + 504LL)
                                                                                            + 8LL)
                                                                                + 472LL))(
                                   *((_QWORD *)v91 + 75),
                                   0LL,
                                   v38) >= 0 )
                            {
                              v88 = 1;
                              goto LABEL_50;
                            }
                          }
                          else if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v90 + 504LL)
                                                                                                + 8LL)
                                                                                    + 464LL))(
                                      *(_QWORD *)(*(_QWORD *)v90 + 512LL),
                                      1LL,
                                      v38) >= 0 )
                          {
                            v87 = 1;
                            goto LABEL_50;
                          }
                          DXGADAPTER::DecrementVSyncWaiter(v89);
                        }
                      }
                      v48 = -1071775738;
LABEL_70:
                      if ( v99 )
                      {
                        if ( v100 )
                          COREACCESS::Release((COREACCESS *)v97);
                        v49 = (DXGGLOBAL **)v99;
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          DXGGLOBAL::DestroyAdapter(v49[2], (struct DXGADAPTER *)v49);
                      }
                      if ( v95 )
                      {
                        if ( v96 )
                          COREACCESS::Release((COREACCESS *)v93);
                        v50 = (DXGGLOBAL **)v95;
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v95 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          DXGGLOBAL::DestroyAdapter(v50[2], (struct DXGADAPTER *)v50);
                      }
                      goto LABEL_80;
                    }
                    v108 = v89;
                    v109 = 0;
                    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
                    v105 = v21;
                    v106 = 0;
                    if ( (DXGADAPTER *)v21 != v89 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
                    if ( *((_DWORD *)v89 + 44) == 1 && *(_DWORD *)(v21 + 176) == 1 )
                    {
                      if ( (unsigned int)v4 < *(_DWORD *)(*(_QWORD *)(v21 + 2304) + 80LL) )
                      {
                        if ( DXGADAPTER::IsVSyncAvailable((ADAPTER_DISPLAY **)v21, v4) )
                        {
                          if ( v106 )
                            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
                          if ( v109 )
                            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
                          goto LABEL_30;
                        }
                        v48 = -1071775738;
                      }
                      else
                      {
                        v75 = WdLogNewEntry5_WdWarning(v73, v72, v74);
                        v48 = -1073741811;
                        *(_QWORD *)(v75 + 24) = v4;
                        *(_QWORD *)(v75 + 32) = -1073741811LL;
                        WdLogEvent5_WdWarning(v75);
                      }
                    }
                    else
                    {
                      v48 = -1073741130;
                    }
                    if ( v106 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
                    if ( v109 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v107);
                    goto LABEL_70;
                  }
                  v84 = WdLogNewEntry5_WdError(v24);
                  *(_QWORD *)(v84 + 24) = v21;
                  *(_QWORD *)(v84 + 32) = -1073741637LL;
                  WdLogEvent5_WdError(v84);
                  DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v21);
                  if ( v103 )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v102);
                }
                v48 = -1073741637;
                goto LABEL_165;
              }
            }
          }
        }
        v69 = WdLogNewEntry5_WdWarning(v16, v15, v17);
        *(_QWORD *)(v69 + 24) = v21;
        *(_QWORD *)(v69 + 32) = v5;
        WdLogEvent5_WdWarning(v69);
        v48 = -1073741811;
      }
      else
      {
        v66 = WdLogNewEntry5_WdWarning(v16, v15, v17);
        v48 = -1073741811;
        *(_QWORD *)(v66 + 24) = v6;
        *(_QWORD *)(v66 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v66);
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v110);
      return (unsigned int)v48;
    }
    v55 = DXGGLOBAL::GetGlobal(v14);
    return REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)v55 + 624));
  }
  else
  {
    v59 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v59 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v59);
    return 3221225506LL;
  }
}
