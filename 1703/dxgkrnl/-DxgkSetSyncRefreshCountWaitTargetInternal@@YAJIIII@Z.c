/*
 * XREFs of ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00E4F80
 * Callers:
 *     DxgkSetSyncRefreshCountWaitTarget @ 0x1C00E4ED0 (DxgkSetSyncRefreshCountWaitTarget.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0006C14 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C000B830 (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     Template_qqqq @ 0x1C0023228 (Template_qqqq.c)
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C003B728 (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C00D3238 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00D3290 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C0103B5C (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C016C940 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0170294 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTargetInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  char v4; // r13
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  bool v25; // zf
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  volatile signed __int64 *v34; // rdi
  DXGADAPTER *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  DXGADAPTER *v38; // r14
  char v39; // r12
  __int64 v40; // rdi
  __int64 v41; // r15
  __int64 v42; // rcx
  __int64 v43; // r8
  ADAPTER_DISPLAY *v44; // rbx
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdi
  __int64 v53; // r9
  int v54; // edi
  DXGGLOBAL **v55; // rcx
  DXGGLOBAL **v56; // rcx
  ADAPTER_RENDER **v57; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 *ThreadProperty; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // r9d
  __int64 v65; // r9
  unsigned int v66; // edx
  __int64 v67; // r10
  int v68; // r8d
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 *v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // rax
  __int64 v91; // r8
  __int64 v92; // r9
  _QWORD *v93; // rax
  unsigned __int8 v94; // [rsp+40h] [rbp-C0h] BYREF
  char v95; // [rsp+41h] [rbp-BFh]
  DXGADAPTER *v96; // [rsp+48h] [rbp-B8h]
  char *v97; // [rsp+50h] [rbp-B0h]
  struct DXGDEVICE *v98; // [rsp+58h] [rbp-A8h]
  char v99[8]; // [rsp+60h] [rbp-A0h] BYREF
  char v100[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v101; // [rsp+70h] [rbp-90h]
  DXGADAPTER *v102; // [rsp+78h] [rbp-88h]
  char v103; // [rsp+80h] [rbp-80h]
  char v104[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v105; // [rsp+90h] [rbp-70h]
  struct DXGADAPTER *v106; // [rsp+98h] [rbp-68h]
  char v107; // [rsp+A0h] [rbp-60h]
  unsigned int v108; // [rsp+B0h] [rbp-50h]
  char v109[8]; // [rsp+B8h] [rbp-48h] BYREF
  char v110; // [rsp+C0h] [rbp-40h]
  char v111[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v112; // [rsp+D0h] [rbp-30h]
  char v113; // [rsp+D8h] [rbp-28h]
  char v114[8]; // [rsp+E0h] [rbp-20h] BYREF
  DXGADAPTER *v115; // [rsp+E8h] [rbp-18h]
  char v116; // [rsp+F0h] [rbp-10h]
  char v117[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v118; // [rsp+100h] [rbp+0h]
  int v119; // [rsp+108h] [rbp+8h]

  v4 = 0;
  v5 = a3;
  v98 = 0LL;
  v6 = a2;
  v7 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v9);
  v13 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v13 = *ThreadProperty;
    }
  }
  if ( !v13 )
  {
    v61 = WdLogNewEntry5_WdError(v12, v11);
    v54 = -1073741811;
    *(_QWORD *)(v61 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v61);
    return (unsigned int)v54;
  }
  if ( (*(unsigned int (**)(void))(*(_QWORD *)(v13 + 72) + 216LL))() )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v13 + 72) + 224LL))(0LL) )
    {
      v118 = v13 + 168;
      if ( v13 != -168 && *(struct _KTHREAD **)(v13 + 176) == KeGetCurrentThread() )
      {
        v63 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
        *(_QWORD *)(v63 + 24) = 1167LL;
        WdLogEvent5_WdAssertion(v63);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13 + 168, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v64 = *(_DWORD *)(v13 + 184);
          if ( v64 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v22, &EventBlockThread, v23, v64);
        }
        ExAcquirePushLockSharedEx(v13 + 168, 0LL);
      }
      v25 = (*(_BYTE *)(v13 + 275) & 4) == 0;
      v119 = 1;
      if ( v25 )
      {
        v26 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v26 < *(_DWORD *)(v13 + 208)
          && (v24 = *(_QWORD *)(v13 + 192),
              v22 = ((unsigned int)v7 >> 26) & 0x30,
              v23 = *(unsigned int *)(v24 + 16LL * (unsigned int)v26 + 8),
              (((unsigned int)v7 >> 26) & 0x30) == (*(_BYTE *)(v24 + 16LL * (unsigned int)v26 + 8) & 0x30))
          && (v23 & 0x1000) == 0
          && (v23 & 0xF) != 0
          && (*(_BYTE *)(v24 + 16LL * (unsigned int)v26 + 8) & 0xF) == 1 )
        {
          v27 = *(_QWORD *)(v24 + 16LL * (unsigned int)v26);
        }
        else
        {
          v27 = 0LL;
        }
      }
      else
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(v13 + 400) + 168LL));
        v65 = *(_QWORD *)(v13 + 400);
        v66 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
        if ( v66 < *(_DWORD *)(v65 + 208)
          && (v67 = *(_QWORD *)(v65 + 192),
              v68 = *(_DWORD *)(v67 + 16LL * v66 + 8),
              (((unsigned int)v7 >> 26) & 0x30) == (*(_BYTE *)(v67 + 16LL * v66 + 8) & 0x30))
          && (v68 & 0x1000) == 0
          && (v68 & 0xF) != 0
          && (*(_BYTE *)(v67 + 16LL * v66 + 8) & 0xF) == 1 )
        {
          v27 = *(_QWORD *)(v67 + 16LL * v66);
        }
        else
        {
          v27 = 0LL;
        }
        ExReleasePushLockSharedEx(v65 + 168, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v27 )
      {
        if ( !(_DWORD)v6 )
        {
          v28 = 0LL;
          goto LABEL_20;
        }
        v70 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v70 < *(_DWORD *)(v13 + 208) )
        {
          v24 = *(_QWORD *)(v13 + 192);
          v22 = ((unsigned int)v6 >> 26) & 0x30;
          v23 = *(unsigned int *)(v24 + 16LL * (unsigned int)v70 + 8);
          if ( (((unsigned int)v6 >> 26) & 0x30) == (*(_BYTE *)(v24 + 16LL * (unsigned int)v70 + 8) & 0x30)
            && (v23 & 0x1000) == 0
            && (v23 & 0xF) != 0 )
          {
            v22 = 2LL * (unsigned int)v70;
            if ( (*(_BYTE *)(v24 + 16LL * (unsigned int)v70 + 8) & 0xF) == 3 )
            {
              v28 = *(_QWORD *)(v24 + 16LL * (unsigned int)v70);
              v98 = (struct DXGDEVICE *)v28;
              if ( v28 )
              {
                _InterlockedIncrement64((volatile signed __int64 *)(v28 + 64));
LABEL_20:
                ExReleasePushLockSharedEx(v13 + 168, 0LL);
                KeLeaveCriticalRegion();
                v33 = *(_QWORD *)(v27 + 2280);
                if ( v33 )
                {
                  if ( (unsigned int)v5 >= *(_DWORD *)(v33 + 80) )
                  {
                    v72 = WdLogNewEntry5_WdError(v30, v29);
                    v54 = -1073741811;
                    *(_QWORD *)(v72 + 24) = v5;
                    *(_QWORD *)(v72 + 32) = -1073741811LL;
                    WdLogEvent5_WdError(v72);
LABEL_165:
                    v93 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
                    v93[5] = v54;
                    v93[3] = v27;
                    v93[4] = v5;
                    WdLogEvent5_WdError(v93);
LABEL_78:
                    v57 = (ADAPTER_RENDER **)v98;
                    if ( v98 )
                    {
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        ADAPTER_RENDER::DestroyDeviceNoLocks(v57[2], (struct DXGDEVICE *)v57);
                    }
                    return (unsigned int)v54;
                  }
                  _InterlockedIncrement64((volatile signed __int64 *)(v27 + 24));
                  if ( *(_QWORD *)(v27 + 2288) )
                  {
                    _InterlockedIncrement64((volatile signed __int64 *)(v27 + 24));
                    v34 = (volatile signed __int64 *)v27;
                    v96 = (DXGADAPTER *)v27;
                    goto LABEL_24;
                  }
                  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v109);
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v109);
                  v34 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal(v74, v73, v75, v76) + 76);
                  if ( v34 )
                  {
                    _InterlockedIncrement64(v34 + 3);
                    v96 = (DXGADAPTER *)v34;
                    if ( v110 )
                      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v109, v29, v31, v32);
LABEL_24:
                    if ( v28
                      && (v34 != *(volatile signed __int64 **)(*(_QWORD *)(v28 + 16) + 16LL)
                       || v27 != *(_QWORD *)(v28 + 1800)) )
                    {
                      v77 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
                      *(_QWORD *)(v77 + 24) = v27;
                      *(_QWORD *)(v77 + 32) = v6;
                      WdLogEvent5_WdWarning(v77);
                      v54 = -1073741811;
                      goto LABEL_78;
                    }
                    v102 = (DXGADAPTER *)v34;
                    v103 = 0;
                    _InterlockedIncrement64(v34 + 3);
                    v101 = -1LL;
                    v106 = (struct DXGADAPTER *)v27;
                    v107 = 0;
                    _InterlockedIncrement64((volatile signed __int64 *)(v27 + 24));
                    v105 = -1LL;
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v96 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v96 + 2), v96);
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v27 + 16), (struct DXGADAPTER *)v27);
                    if ( *(_DWORD *)(v27 + 136) != 1 )
                    {
LABEL_30:
                      v35 = v102;
                      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v102 + 20) )
                      {
                        if ( !KeReadStateEvent((PRKEVENT)v102 + 2) )
                        {
                          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                            Template_q(v36, &EventBlockThread, v37, 72);
                          KeWaitForSingleObject((char *)v102 + 48, Executive, 0, 0, 0LL);
                        }
                        DXGADAPTER::AcquireCoreResourceShared(v102);
                        v35 = v102;
                      }
                      v103 = 1;
                      if ( *((_DWORD *)v35 + 44) != 1 )
                        goto LABEL_140;
                      if ( v102 != v106 )
                      {
                        COREACCESS::AcquireShared((COREACCESS *)v104);
                        v35 = (DXGADAPTER *)*((unsigned int *)v106 + 44);
                        if ( (_DWORD)v35 != 1 )
                        {
                          COREACCESS::Release((COREACCESS *)v104);
LABEL_140:
                          COREACCESS::Release((COREACCESS *)v100);
                          v54 = -1073741130;
                          goto LABEL_68;
                        }
                      }
                      v38 = v96;
                      v97 = (char *)v96 + 2288;
                      if ( !*((_QWORD *)v96 + 286) )
                      {
                        v83 = WdLogNewEntry5_WdAssertion(v35, v29, v31, v32);
                        *(_QWORD *)(v83 + 24) = 4735LL;
                        WdLogEvent5_WdAssertion(v83);
                      }
                      if ( !*(_QWORD *)(v27 + 2280) )
                      {
                        v84 = WdLogNewEntry5_WdAssertion(v35, v29, v31, v32);
                        *(_QWORD *)(v84 + 24) = 4736LL;
                        WdLogEvent5_WdAssertion(v84);
                      }
                      if ( (_DWORD)v6 )
                      {
                        if ( *((_DWORD *)v98 + 102) != 1 )
                        {
                          v54 = -1073741130;
                          goto LABEL_68;
                        }
                        v38 = v96;
                      }
                      v39 = 0;
                      v25 = *(_QWORD *)(v27 + 2280) == 0LL;
                      v94 = 0;
                      v95 = 0;
                      if ( v25 )
                      {
                        v85 = WdLogNewEntry5_WdAssertion(v35, v29, v31, v32);
                        *(_QWORD *)(v85 + 24) = 8198LL;
                        WdLogEvent5_WdAssertion(v85);
                      }
                      v40 = *(_QWORD *)(v27 + 2280);
                      if ( v40 )
                      {
                        if ( (unsigned int)v5 >= *(_DWORD *)(v40 + 80) )
                        {
                          v86 = WdLogNewEntry5_WdAssertion(v35, v29, v31, v32);
                          *(_QWORD *)(v86 + 24) = 4896LL;
                          WdLogEvent5_WdAssertion(v86);
                        }
                        v41 = 3208 * v5;
                        if ( *(_BYTE *)(*(_QWORD *)(v40 + 112) + v41 + 720) )
                        {
                          if ( !*(_QWORD *)(v27 + 2288) )
                          {
                            ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(
                              *(ADAPTER_DISPLAY **)(v27 + 2280),
                              a3,
                              a4,
                              *((_DWORD *)v38 + 578),
                              &v94);
                            ADAPTER_DISPLAY::ControlVSyncAdapter(*(ADAPTER_DISPLAY **)(v27 + 2280), a3);
LABEL_57:
                            if ( v102 != v106 )
                              COREACCESS::Release((COREACCESS *)v104);
                            if ( v103 )
                            {
                              v54 = 0;
                            }
                            else
                            {
                              v89 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v50, v49, v51);
                              v54 = 0;
                              v89[5] = v100;
                              v89[3] = 275LL;
                              v89[4] = 4LL;
                              v89[6] = 0LL;
                              v89[7] = 0LL;
                              WdLogEvent5_WdCriticalError(v89);
                            }
                            v103 = 0;
                            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v102 + 20) )
                              DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v102);
                            if ( v39 && v94 )
                              DXGADAPTER::DecrementVSyncWaiter(v96);
                            if ( v95 )
                            {
                              v54 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v99);
                              if ( v54 >= 0 )
                                v54 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v97 + 408LL)
                                                                                             + 8LL)
                                                                                 + 464LL))(
                                        *(_QWORD *)(*(_QWORD *)v97 + 416LL),
                                        1LL);
                            }
                            else if ( v4 )
                            {
                              v54 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v99);
                              if ( v54 >= 0 && *((_DWORD *)v98 + 102) == 1 )
                                v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v97 + 408LL) + 8LL)
                                                                                        + 472LL))(
                                        *((_QWORD *)v98 + 75),
                                        0LL,
                                        0LL);
                            }
                            goto LABEL_68;
                          }
                          if ( (DXGADAPTER *)v27 != v38 )
                          {
                            v87 = WdLogNewEntry5_WdAssertion(v35, v29, v31, v32);
                            *(_QWORD *)(v87 + 24) = 4759LL;
                            WdLogEvent5_WdAssertion(v87);
                          }
                          _InterlockedIncrement((volatile signed __int32 *)v38 + 578);
                          v39 = 1;
                          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v97 + 408LL)
                                                                                             + 8LL)
                                                                                 + 456LL))(
                                 *(_QWORD *)(*(_QWORD *)v97 + 416LL),
                                 a3) )
                          {
LABEL_50:
                            v44 = *(ADAPTER_DISPLAY **)(v27 + 2280);
                            v108 = *((_DWORD *)v38 + 578);
                            v45 = v41 + *((_QWORD *)v44 + 14);
                            v46 = PsGetCurrentProcess(v42);
                            v48 = PsGetProcessDxgProcess(v46, v47);
                            v52 = v48;
                            if ( v48 )
                            {
                              if ( (*(_BYTE *)(v48 + 275) & 2) != 0 )
                              {
                                v88 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
                                if ( v88 )
                                  v52 = *v88;
                              }
                            }
                            v25 = *(_QWORD *)(v45 + 896) == 0LL;
                            v94 = 1;
                            if ( !v25 && (*(unsigned int (**)(void))(*(_QWORD *)(v52 + 72) + 216LL))() )
                            {
                              if ( *((_QWORD *)v44 + 33) )
                              {
                                *(_DWORD *)(v45 + 904) = a4;
                                BLTQUEUE::SetDWMTargetVsync(
                                  (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)v44 + 33) + 8LL) + 2704LL * a3),
                                  a4,
                                  v51,
                                  v53);
                              }
                              else
                              {
                                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                                  Template_qqqq(
                                    v108,
                                    &EventDWMVsyncCountWait,
                                    v51,
                                    a4,
                                    *(_DWORD *)(v45 + 908),
                                    *(_BYTE *)(v45 + 912),
                                    v108);
                                ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(v44, a3, a4, &v94);
                              }
                            }
                            goto LABEL_57;
                          }
                          LOBYTE(v43) = 1;
                          if ( v98 )
                          {
                            if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v97 + 408LL)
                                                                                            + 8LL)
                                                                                + 472LL))(
                                   *((_QWORD *)v98 + 75),
                                   0LL,
                                   v43) >= 0 )
                            {
                              v4 = 1;
                              goto LABEL_50;
                            }
                          }
                          else if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v97 + 408LL)
                                                                                                + 8LL)
                                                                                    + 464LL))(
                                      *(_QWORD *)(*(_QWORD *)v97 + 416LL),
                                      1LL,
                                      v43) >= 0 )
                          {
                            v95 = 1;
                            goto LABEL_50;
                          }
                          DXGADAPTER::DecrementVSyncWaiter(v96);
                        }
                      }
                      v54 = -1071775738;
LABEL_68:
                      if ( v106 )
                      {
                        if ( v107 )
                          COREACCESS::Release((COREACCESS *)v104);
                        v55 = (DXGGLOBAL **)v106;
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v106 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          DXGGLOBAL::DestroyAdapter(v55[2], (struct DXGADAPTER *)v55);
                      }
                      if ( v102 )
                      {
                        if ( v103 )
                          COREACCESS::Release((COREACCESS *)v100);
                        v56 = (DXGGLOBAL **)v102;
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v102 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          DXGGLOBAL::DestroyAdapter(v56[2], (struct DXGADAPTER *)v56);
                      }
                      goto LABEL_78;
                    }
                    v115 = v96;
                    v116 = 0;
                    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v114);
                    v112 = v27;
                    v113 = 0;
                    if ( (DXGADAPTER *)v27 != v96 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
                    if ( *((_DWORD *)v96 + 44) == 1 && *(_DWORD *)(v27 + 176) == 1 )
                    {
                      if ( (unsigned int)v5 < *(_DWORD *)(*(_QWORD *)(v27 + 2280) + 80LL) )
                      {
                        if ( DXGADAPTER::IsVSyncAvailable((ADAPTER_DISPLAY **)v27, (unsigned int)v5, v80, v81) )
                        {
                          if ( v113 )
                            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
                          if ( v116 )
                            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v114);
                          goto LABEL_30;
                        }
                        v54 = -1071775738;
                      }
                      else
                      {
                        v82 = WdLogNewEntry5_WdWarning(v79, v78, v80, v81);
                        v54 = -1073741811;
                        *(_QWORD *)(v82 + 24) = v5;
                        *(_QWORD *)(v82 + 32) = -1073741811LL;
                        WdLogEvent5_WdWarning(v82);
                      }
                    }
                    else
                    {
                      v54 = -1073741130;
                    }
                    if ( v113 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
                    if ( v116 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v114);
                    goto LABEL_68;
                  }
                  v90 = WdLogNewEntry5_WdError(v30, v29);
                  *(_QWORD *)(v90 + 24) = v27;
                  *(_QWORD *)(v90 + 32) = -1073741637LL;
                  WdLogEvent5_WdError(v90);
                  DXGADAPTER::ReleaseReference((DXGADAPTER *)v27);
                  if ( v110 )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v109, v29, v91, v92);
                }
                v54 = -1073741637;
                goto LABEL_165;
              }
            }
          }
        }
        v71 = WdLogNewEntry5_WdWarning(v22, v70, v23, v24);
        *(_QWORD *)(v71 + 24) = v27;
        *(_QWORD *)(v71 + 32) = v6;
        WdLogEvent5_WdWarning(v71);
        v54 = -1073741811;
      }
      else
      {
        v69 = WdLogNewEntry5_WdWarning(v22, v26, v23, v24);
        v54 = -1073741811;
        *(_QWORD *)(v69 + 24) = v7;
        *(_QWORD *)(v69 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v69);
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v117);
      return (unsigned int)v54;
    }
    Global = DXGGLOBAL::GetGlobal(v19, v18, v20, v21);
    return REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)Global + 624));
  }
  else
  {
    v62 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v62 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v62);
    return 3221225506LL;
  }
}
