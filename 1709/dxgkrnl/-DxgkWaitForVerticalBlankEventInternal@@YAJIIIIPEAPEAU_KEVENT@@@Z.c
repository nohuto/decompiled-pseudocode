/*
 * XREFs of ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00ECDD0
 * Callers:
 *     DxgkWaitForVerticalBlankEvent @ 0x1C00ECD10 (DxgkWaitForVerticalBlankEvent.c)
 *     DxgkWaitForVerticalBlankEvent2 @ 0x1C0181EA0 (DxgkWaitForVerticalBlankEvent2.c)
 * Callees:
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
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C008483C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0084890 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00AC14C (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C0104444 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z @ 0x1C0170098 (-WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEventInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        struct _KEVENT **a5)
{
  __int64 v5; // r13
  unsigned int v6; // ebx
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  volatile signed __int64 *v29; // rdi
  DXGADAPTER *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // edi
  DXGADAPTER *v34; // r15
  char v35; // r12
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  char v41; // r14
  char v42; // r15
  ADAPTER_DISPLAY *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rcx
  DXGGLOBAL **v48; // rcx
  DXGGLOBAL **v49; // rcx
  struct DXGGLOBAL *v51; // rax
  __int64 v52; // rcx
  struct DXGGLOBAL *Global; // rax
  int v54; // r9d
  __int64 *ThreadProperty; // rax
  __int64 *v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rbx
  int v63; // r8d
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rax
  unsigned int v80; // eax
  _QWORD *v81; // rax
  int v82; // eax
  __int64 v83; // rax
  _QWORD *v84; // rax
  unsigned int v85; // [rsp+30h] [rbp-B1h]
  DXGADAPTER *v86; // [rsp+38h] [rbp-A9h]
  char *v87; // [rsp+40h] [rbp-A1h]
  struct DXGDEVICE *v88; // [rsp+48h] [rbp-99h]
  char v89[8]; // [rsp+50h] [rbp-91h] BYREF
  char v90[8]; // [rsp+58h] [rbp-89h] BYREF
  __int64 v91; // [rsp+60h] [rbp-81h]
  DXGADAPTER *v92; // [rsp+68h] [rbp-79h]
  char v93; // [rsp+70h] [rbp-71h]
  char v94[8]; // [rsp+78h] [rbp-69h] BYREF
  __int64 v95; // [rsp+80h] [rbp-61h]
  struct DXGADAPTER *v96; // [rsp+88h] [rbp-59h]
  char v97; // [rsp+90h] [rbp-51h]
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-41h] BYREF
  char v99[8]; // [rsp+A8h] [rbp-39h] BYREF
  char v100; // [rsp+B0h] [rbp-31h]
  char v101[8]; // [rsp+B8h] [rbp-29h] BYREF
  __int64 v102; // [rsp+C0h] [rbp-21h]
  char v103; // [rsp+C8h] [rbp-19h]
  char v104[8]; // [rsp+D0h] [rbp-11h] BYREF
  DXGADAPTER *v105; // [rsp+D8h] [rbp-9h]
  char v106; // [rsp+E0h] [rbp-1h]
  char v107[8]; // [rsp+E8h] [rbp+7h] BYREF
  __int64 v108; // [rsp+F0h] [rbp+Fh]
  int v109; // [rsp+F8h] [rbp+17h]

  v5 = a3;
  v88 = 0LL;
  v6 = a4;
  v7 = (unsigned int)a2;
  v8 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v10);
  v15 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v56 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v15 = *v56;
    }
    v6 = a4;
  }
  if ( !v15 )
  {
    v57 = WdLogNewEntry5_WdError(v13);
    v33 = -1073741811;
    *(_QWORD *)(v57 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v57);
    return (unsigned int)v33;
  }
  if ( !v6 || *(_BYTE *)(v15 + 306) )
  {
    KeEnterCriticalRegion();
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v15 + 96) + 224LL))(0LL) )
    {
      Global = DXGGLOBAL::GetGlobal(v16);
      v33 = REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)Global + 624));
    }
    else
    {
      v108 = v15 + 200;
      if ( v15 != -200 && *(struct _KTHREAD **)(v15 + 208) == KeGetCurrentThread() )
      {
        v59 = WdLogNewEntry5_WdAssertion(v16);
        *(_QWORD *)(v59 + 24) = 1214LL;
        WdLogEvent5_WdAssertion(v59);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v15 + 200, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v54 = *(_DWORD *)(v15 + 216);
          if ( v54 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v18, &EventBlockThread, v19, v54);
        }
        ExAcquirePushLockSharedEx(v15 + 200, 0LL);
      }
      v20 = (*(_BYTE *)(v15 + 307) & 8) == 0;
      v109 = 1;
      if ( v20 )
      {
        v21 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v21 < *(_DWORD *)(v15 + 240)
          && (v22 = *(_QWORD *)(v15 + 224),
              v17 = (unsigned int)v21,
              v18 = ((unsigned int)v8 >> 25) & 0x60,
              v19 = *(unsigned int *)(v22 + 16 * v21 + 8),
              (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60))
          && (v19 & 0x2000) == 0
          && (v19 & 0x1F) != 0
          && (v17 = 2LL * (unsigned int)v21, (*(_BYTE *)(v22 + 16LL * (unsigned int)v21 + 8) & 0x1F) == 1) )
        {
          v23 = *(_QWORD *)(v22 + 16LL * (unsigned int)v21);
        }
        else
        {
          v23 = 0LL;
        }
      }
      else
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(v15 + 440) + 200LL));
        v60 = *(_QWORD *)(v15 + 440);
        v61 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v61 < *(_DWORD *)(v60 + 240)
          && (v62 = *(_QWORD *)(v60 + 224),
              v63 = *(_DWORD *)(v62 + 16 * v61 + 8),
              (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v62 + 16 * v61 + 8) & 0x60))
          && (v63 & 0x2000) == 0
          && (v63 & 0x1F) != 0
          && (*(_BYTE *)(v62 + 16LL * (unsigned int)v61 + 8) & 0x1F) == 1 )
        {
          v23 = *(_QWORD *)(v62 + 16LL * (unsigned int)v61);
        }
        else
        {
          v23 = 0LL;
        }
        ExReleasePushLockSharedEx(v60 + 200, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v23 )
      {
        if ( !(_DWORD)v7 )
        {
          v24 = 0LL;
          goto LABEL_20;
        }
        v65 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v65 < *(_DWORD *)(v15 + 240) )
        {
          v66 = *(_QWORD *)(v15 + 224);
          v17 = (unsigned int)v65;
          v18 = ((unsigned int)v7 >> 25) & 0x60;
          v19 = *(unsigned int *)(v66 + 16 * v65 + 8);
          if ( (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v66 + 16 * v65 + 8) & 0x60)
            && (v19 & 0x2000) == 0
            && (v19 & 0x1F) != 0 )
          {
            v17 = 2LL * (unsigned int)v65;
            if ( (*(_BYTE *)(v66 + 16LL * (unsigned int)v65 + 8) & 0x1F) == 3 )
            {
              v24 = *(_QWORD *)(v66 + 16LL * (unsigned int)v65);
              v88 = (struct DXGDEVICE *)v24;
              if ( v24 )
              {
                _InterlockedIncrement64((volatile signed __int64 *)(v24 + 64));
LABEL_20:
                ExReleasePushLockSharedEx(v15 + 200, 0LL);
                KeLeaveCriticalRegion();
                v28 = *(_QWORD *)(v23 + 2304);
                if ( v28 )
                {
                  if ( (unsigned int)v5 >= *(_DWORD *)(v28 + 80) )
                  {
                    v68 = WdLogNewEntry5_WdError(v26);
                    v33 = -1073741811;
                    *(_QWORD *)(v68 + 24) = v5;
                    *(_QWORD *)(v68 + 32) = -1073741811LL;
                    WdLogEvent5_WdError(v68);
LABEL_171:
                    v84 = (_QWORD *)WdLogNewEntry5_WdError(v26);
                    v84[5] = v33;
                    v84[3] = v23;
                    v84[4] = v5;
                    WdLogEvent5_WdError(v84);
LABEL_81:
                    if ( v88 )
                    {
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v88 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v88 + 2), v88);
                    }
                    goto LABEL_82;
                  }
                  _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
                  if ( *(_QWORD *)(v23 + 2312) )
                  {
                    _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
                    v29 = (volatile signed __int64 *)v23;
                    v86 = (DXGADAPTER *)v23;
                    goto LABEL_24;
                  }
                  v51 = DXGGLOBAL::GetGlobal(v26);
                  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v99, (struct DXGGLOBAL *)((char *)v51 + 136));
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v99);
                  v29 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal(v52) + 76);
                  if ( v29 )
                  {
                    _InterlockedIncrement64(v29 + 3);
                    v86 = (DXGADAPTER *)v29;
                    if ( v100 )
                      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v99);
LABEL_24:
                    if ( v24
                      && (v29 != *(volatile signed __int64 **)(*(_QWORD *)(v24 + 16) + 16LL)
                       || v23 != *(_QWORD *)(v24 + 1672)) )
                    {
                      v69 = WdLogNewEntry5_WdWarning(v26, v25, v27);
                      *(_QWORD *)(v69 + 24) = v23;
                      *(_QWORD *)(v69 + 32) = v7;
                      WdLogEvent5_WdWarning(v69);
                      v33 = -1073741811;
                      goto LABEL_81;
                    }
                    v92 = (DXGADAPTER *)v29;
                    v93 = 0;
                    _InterlockedIncrement64(v29 + 3);
                    v91 = -1LL;
                    v96 = (struct DXGADAPTER *)v23;
                    v97 = 0;
                    _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
                    v95 = -1LL;
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v86 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v86 + 2), v86);
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v23 + 16), (struct DXGADAPTER *)v23);
                    if ( *(_DWORD *)(v23 + 136) != 1 )
                    {
LABEL_30:
                      v30 = v92;
                      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v92 + 20) )
                      {
                        if ( !KeReadStateEvent((PRKEVENT)v92 + 2) )
                        {
                          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                            McTemplateK0q(v31, &EventBlockThread, v32, 72);
                          KeWaitForSingleObject((char *)v92 + 48, Executive, 0, 0, 0LL);
                        }
                        DXGADAPTER::AcquireCoreResourceShared(v92);
                        v30 = v92;
                      }
                      v93 = 1;
                      if ( *((_DWORD *)v30 + 44) != 1 )
                        goto LABEL_148;
                      if ( v92 != v96 )
                      {
                        COREACCESS::AcquireShared((COREACCESS *)v94);
                        v30 = (DXGADAPTER *)*((unsigned int *)v96 + 44);
                        if ( (_DWORD)v30 != 1 )
                        {
                          COREACCESS::Release((COREACCESS *)v94);
LABEL_148:
                          COREACCESS::Release((COREACCESS *)v90);
                          v33 = -1073741130;
                          goto LABEL_71;
                        }
                      }
                      v33 = 0;
                      v34 = v86;
                      v87 = (char *)v86 + 2312;
                      if ( !*((_QWORD *)v86 + 289) )
                      {
                        v74 = WdLogNewEntry5_WdAssertion(v30);
                        *(_QWORD *)(v74 + 24) = 5329LL;
                        WdLogEvent5_WdAssertion(v74);
                      }
                      if ( !*(_QWORD *)(v23 + 2304) )
                      {
                        v75 = WdLogNewEntry5_WdAssertion(v30);
                        *(_QWORD *)(v75 + 24) = 5330LL;
                        WdLogEvent5_WdAssertion(v75);
                      }
                      if ( (_DWORD)v7 )
                      {
                        if ( *(_DWORD *)(v24 + 408) != 1 )
                        {
                          v33 = -1073741130;
                          goto LABEL_71;
                        }
                        v34 = v86;
                      }
                      v35 = 0;
                      v85 = 0;
                      if ( !*(_QWORD *)(v23 + 2304) )
                      {
                        v76 = WdLogNewEntry5_WdAssertion(v30);
                        *(_QWORD *)(v76 + 24) = 8208LL;
                        WdLogEvent5_WdAssertion(v76);
                      }
                      v36 = *(_QWORD *)(v23 + 2304);
                      if ( v36 )
                      {
                        if ( (unsigned int)v5 >= *(_DWORD *)(v36 + 80) )
                        {
                          v77 = WdLogNewEntry5_WdAssertion(v30);
                          *(_QWORD *)(v77 + 24) = 5083LL;
                          WdLogEvent5_WdAssertion(v77);
                        }
                        v37 = 3760 * v5;
                        if ( *(_BYTE *)(*(_QWORD *)(v36 + 112) + v37 + 720) )
                        {
                          if ( !*(_QWORD *)(v23 + 2312) )
                          {
                            ADAPTER_DISPLAY::ControlVSyncAdapter(*(ADAPTER_DISPLAY **)(v23 + 2304), a3);
LABEL_50:
                            v41 = 0;
LABEL_51:
                            v42 = 0;
                            goto LABEL_52;
                          }
                          if ( (DXGADAPTER *)v23 != v34 )
                          {
                            v78 = WdLogNewEntry5_WdAssertion(v30);
                            *(_QWORD *)(v78 + 24) = 5352LL;
                            WdLogEvent5_WdAssertion(v78);
                          }
                          _InterlockedIncrement((volatile signed __int32 *)v34 + 584);
                          v35 = 1;
                          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 504LL)
                                                                                             + 8LL)
                                                                                 + 456LL))(
                                 *(_QWORD *)(*(_QWORD *)v87 + 512LL),
                                 a3) )
                          {
                            goto LABEL_50;
                          }
                          LOBYTE(v40) = 1;
                          if ( v88 )
                          {
                            if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 504LL)
                                                                                            + 8LL)
                                                                                + 472LL))(
                                   *((_QWORD *)v88 + 75),
                                   0LL,
                                   v40) >= 0 )
                            {
                              v41 = 1;
                              goto LABEL_51;
                            }
                          }
                          else if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 504LL)
                                                                                                + 8LL)
                                                                                    + 464LL))(
                                      *(_QWORD *)(*(_QWORD *)v87 + 512LL),
                                      1LL,
                                      v40) >= 0 )
                          {
                            v42 = 1;
                            v41 = 0;
LABEL_52:
                            if ( v92 != v96 )
                              COREACCESS::Release((COREACCESS *)v94);
                            if ( !v93 )
                            {
                              v79 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39, v38, v40);
                              v79[5] = v90;
                              v79[3] = 275LL;
                              v79[4] = 4LL;
                              v79[6] = 0LL;
                              v79[7] = 0LL;
                              WdLogEvent5_WdCriticalError(v79);
                            }
                            v93 = 0;
                            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v92 + 20) )
                              DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v92);
                            v43 = *(ADAPTER_DISPLAY **)(v23 + 2304);
                            if ( a4 )
                            {
                              v80 = ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent(v43, a3, 1, a4, a5);
                              v33 = v80;
                              if ( v80 > 0x3E )
                              {
                                v47 = 0LL;
                              }
                              else
                              {
                                v47 = v80;
                                v85 = v80;
                              }
                            }
                            else
                            {
                              v44 = *((_QWORD *)v43 + 2);
                              if ( *(_QWORD *)(v44 + 2304) && *(_QWORD *)(v44 + 560) )
                                Timeout.QuadPart = -1000000LL;
                              else
                                Timeout.QuadPart = -5000000LL;
                              KeWaitForSingleObject(
                                (PVOID)(*((_QWORD *)v43 + 14) + v37 + 912),
                                UserRequest,
                                0,
                                0,
                                &Timeout);
                              v47 = 0LL;
                            }
                            if ( v35 && _InterlockedDecrement((volatile signed __int32 *)v86 + 584) < 0 )
                            {
                              v81 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v45, v46);
                              v81[5] = v86;
                              v81[3] = 275LL;
                              v81[4] = 28LL;
                              v81[6] = *((unsigned int *)v86 + 584);
                              v81[7] = 0LL;
                              WdLogEvent5_WdCriticalError(v81);
                              LODWORD(v47) = v85;
                            }
                            if ( v42 )
                            {
                              v33 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v89);
                              if ( v33 < 0 )
                                goto LABEL_71;
                              v82 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 504LL) + 8LL)
                                                                                       + 464LL))(
                                      *(_QWORD *)(*(_QWORD *)v87 + 512LL),
                                      1LL,
                                      0LL);
                            }
                            else
                            {
                              if ( !v41 )
                              {
LABEL_68:
                                if ( v33 >= 0 && (_DWORD)v47 )
                                  v33 = v47;
                                goto LABEL_71;
                              }
                              v33 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v89);
                              if ( v33 < 0 )
                                goto LABEL_71;
                              if ( *((_DWORD *)v88 + 102) != 1 )
                              {
LABEL_166:
                                LODWORD(v47) = v85;
                                goto LABEL_68;
                              }
                              v82 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 504LL)
                                                                                                  + 8LL)
                                                                                      + 472LL))(
                                      *((_QWORD *)v88 + 75),
                                      0LL,
                                      0LL);
                            }
                            v33 = v82;
                            goto LABEL_166;
                          }
                          DXGADAPTER::DecrementVSyncWaiter(v86);
                        }
                      }
                      v33 = -1071775738;
LABEL_71:
                      if ( v96 )
                      {
                        if ( v97 )
                          COREACCESS::Release((COREACCESS *)v94);
                        v48 = (DXGGLOBAL **)v96;
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v96 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          DXGGLOBAL::DestroyAdapter(v48[2], (struct DXGADAPTER *)v48);
                      }
                      if ( v92 )
                      {
                        if ( v93 )
                          COREACCESS::Release((COREACCESS *)v90);
                        v49 = (DXGGLOBAL **)v92;
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          DXGGLOBAL::DestroyAdapter(v49[2], (struct DXGADAPTER *)v49);
                      }
                      goto LABEL_81;
                    }
                    v105 = v86;
                    v106 = 0;
                    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
                    v102 = v23;
                    v103 = 0;
                    if ( (DXGADAPTER *)v23 != v86 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
                    if ( *((_DWORD *)v86 + 44) == 1 && *(_DWORD *)(v23 + 176) == 1 )
                    {
                      if ( (unsigned int)v5 < *(_DWORD *)(*(_QWORD *)(v23 + 2304) + 80LL) )
                      {
                        if ( DXGADAPTER::IsVSyncAvailable((ADAPTER_DISPLAY **)v23, v5) )
                        {
                          if ( v103 )
                            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
                          if ( v106 )
                            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
                          goto LABEL_30;
                        }
                        v33 = -1071775738;
                      }
                      else
                      {
                        v73 = WdLogNewEntry5_WdWarning(v71, v70, v72);
                        v33 = -1073741811;
                        *(_QWORD *)(v73 + 24) = v5;
                        *(_QWORD *)(v73 + 32) = -1073741811LL;
                        WdLogEvent5_WdWarning(v73);
                      }
                    }
                    else
                    {
                      v33 = -1073741130;
                    }
                    if ( v103 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
                    if ( v106 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
                    goto LABEL_71;
                  }
                  v83 = WdLogNewEntry5_WdError(v26);
                  *(_QWORD *)(v83 + 24) = v23;
                  *(_QWORD *)(v83 + 32) = -1073741637LL;
                  WdLogEvent5_WdError(v83);
                  DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v23);
                  if ( v100 )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v99);
                }
                v33 = -1073741637;
                goto LABEL_171;
              }
            }
          }
        }
        v67 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v67 + 24) = v23;
        *(_QWORD *)(v67 + 32) = v7;
        WdLogEvent5_WdWarning(v67);
        v33 = -1073741811;
      }
      else
      {
        v64 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        v33 = -1073741811;
        *(_QWORD *)(v64 + 24) = v8;
        *(_QWORD *)(v64 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v64);
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v107);
    }
LABEL_82:
    KeLeaveCriticalRegion();
    return (unsigned int)v33;
  }
  v58 = WdLogNewEntry5_WdWarning(v13, v12, v14);
  *(_QWORD *)(v58 + 24) = -1073741790LL;
  WdLogEvent5_WdWarning(v58);
  return 3221225506LL;
}
