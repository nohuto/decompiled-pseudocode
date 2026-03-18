/*
 * XREFs of ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00F1260
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C00A2DD0 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00024F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00161C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0016230 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00BF75C (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C00D3598 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C00E318C (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyDeferredAllocations(
        DXGDEVICE *this,
        struct DXGTERMINATIONTRACKER *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  struct DXGTERMINATIONTRACKER *v5; // rsi
  DXGDEVICE *v6; // r12
  void **v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *i; // rbx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 *ThreadProperty; // rax
  __int64 *v21; // rdi
  __int64 v22; // rdi
  int v23; // r12d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r9d
  __int64 v28; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v30; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v32; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v35; // esi
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r14
  __int64 v40; // rcx
  _QWORD *v41; // rax
  unsigned __int8 v42; // cl
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  void **v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rdx
  char v50; // r13
  __int64 v51; // rax
  __int64 v52; // rax
  bool v53; // zf
  __int64 j; // rax
  __int64 v55; // rdi
  __int64 v56; // r14
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r14
  __int64 v62; // rax
  __int64 v63; // r12
  __int64 v64; // r15
  struct DXGPROCESS *Current; // rbx
  __int64 v66; // rcx
  __int64 v67; // r8
  int v68; // r9d
  void *v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  void *v73; // rbx
  __int64 v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rbx
  __int64 *v81; // rax
  __int64 *v82; // rdi
  __int64 v83; // rdi
  int v84; // r13d
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // r8
  int v88; // r9d
  __int64 v89; // rcx
  unsigned __int8 v90; // r12
  __int64 v91; // rbx
  struct _KTHREAD *v92; // rbx
  __int64 v93; // rax
  int v94; // r14d
  __int64 v95; // rax
  int v96; // r14d
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // r15
  __int64 v101; // rcx
  _QWORD *v102; // rax
  unsigned __int8 v103; // cl
  _QWORD *v104; // rax
  _QWORD *v105; // rax
  void *v106; // rcx
  __int64 v107; // rax
  __int64 v108; // r8
  char *v109; // rbx
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // r8
  int v113; // r9d
  int v114; // eax
  __int64 v115; // rax
  struct DXGTERMINATIONTRACKER *v117; // [rsp+40h] [rbp-C8h]
  __int64 v118; // [rsp+48h] [rbp-C0h]
  __int64 v119; // [rsp+48h] [rbp-C0h]
  void **v120; // [rsp+50h] [rbp-B8h]
  __int64 v121; // [rsp+58h] [rbp-B0h] BYREF
  void **v122; // [rsp+60h] [rbp-A8h]
  __int64 v123; // [rsp+68h] [rbp-A0h] BYREF
  void **v124; // [rsp+70h] [rbp-98h]
  __int64 v125; // [rsp+78h] [rbp-90h]
  __int64 v126; // [rsp+80h] [rbp-88h]
  __int64 v127; // [rsp+88h] [rbp-80h]
  int v128; // [rsp+90h] [rbp-78h] BYREF
  __int64 v129; // [rsp+98h] [rbp-70h]
  int v130; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v131; // [rsp+A8h] [rbp-60h]
  _BYTE v132[16]; // [rsp+B0h] [rbp-58h] BYREF
  char v133[8]; // [rsp+C0h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-40h] BYREF
  char v135[8]; // [rsp+F8h] [rbp-10h] BYREF
  struct _KAPC_STATE v136; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v137[128]; // [rsp+138h] [rbp+30h] BYREF

  v4 = *(_QWORD *)a2;
  v5 = a2;
  v6 = this;
  v117 = a2;
  if ( !*(_QWORD *)a2 || (v7 = *(void ***)(v4 + 64), (v120 = v7) == 0LL) )
  {
    v7 = (void **)v137;
    v120 = (void **)v137;
  }
  v8 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  if ( v4 )
  {
    v9 = WdLogNewEntry5_WdTrace(0LL, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = *(_QWORD *)v5;
    a2 = *(struct DXGTERMINATIONTRACKER **)(*(_QWORD *)v5 + 8LL);
    v8 = *((_QWORD *)a2 + 5);
    *(_QWORD *)(v9 + 32) = v8;
  }
  for ( i = (_QWORD *)*((_QWORD *)v5 + 1); i; i = (_QWORD *)i[8] )
  {
    v11 = WdLogNewEntry5_WdTrace(v8, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = i;
    *(_QWORD *)(v11 + 32) = *(_QWORD *)(i[1] + 40LL);
    a2 = (struct DXGTERMINATIONTRACKER *)i[3];
    if ( a2 )
    {
      (*(void (__fastcall **)(_QWORD, struct DXGTERMINATIONTRACKER *, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 544LL)
                                                                                                 + 8LL)
                                                                                     + 160LL))(
        *(_QWORD *)(*((_QWORD *)v6 + 2) + 552LL),
        a2,
        0LL,
        *((unsigned int *)v5 + 12));
      i[3] = 0LL;
    }
    v8 = i[4];
    if ( v8 )
    {
      v7[(unsigned int)v121] = (void *)v8;
      LODWORD(v121) = v121 + 1;
      i[4] = 0LL;
    }
  }
  if ( (_DWORD)v121 )
  {
    v12 = *((_QWORD *)v6 + 54);
    v13 = *((_QWORD *)v6 + 2);
    v118 = v12;
    v122 = v7;
    v129 = 0LL;
    v128 = 5029;
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v8, &EventProfilerEnter, a3, 5029);
    DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v128, 5029);
    CurrentProcess = PsGetCurrentProcess(v15, v14);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v19 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
      {
        ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v21 = ThreadProperty;
        if ( ThreadProperty )
        {
          ObfDereferenceObject(ThreadProperty);
          v19 = *v21;
        }
      }
    }
    v22 = v19 + 120;
    v23 = 0;
    if ( !v19 )
      v22 = 0LL;
    if ( v22 && *(struct _KTHREAD **)(v22 + 8) == KeGetCurrentThread() )
    {
      v24 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v24 + 24) = 1306LL;
      WdLogEvent5_WdAssertion(v24);
    }
    if ( v19 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v22, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v27 = *(_DWORD *)(v22 + 16);
          if ( v27 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v25, &EventBlockThread, v26, v27);
        }
        ExAcquirePushLockExclusiveEx(v22, 0LL);
      }
      v23 = 2;
      *(_QWORD *)(v22 + 8) = KeGetCurrentThread();
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v13 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 16) + 4168LL));
    CurrentIrql = KeGetCurrentIrql();
    v30 = 0LL;
    if ( CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v32 = WdLogNewEntry5_WdAssertion(v28);
        *(_QWORD *)(v32 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v32);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v28);
      if ( CurrentProcessSessionId
        && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && !IsThreadCrossSessionAttached()
        && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
        && *(_QWORD *)ThreadWin32Thread )
      {
        v30 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
        if ( v30 )
        {
          v35 = *(_DWORD *)(v30 + 136);
LABEL_45:
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v133,
            *(struct DXGADAPTER **)(v13 + 16));
          v39 = (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v13 + 16) + 592LL))(v12, &v121);
          if ( v133[0] )
            KeUnstackDetachProcess(&ApcState);
          v40 = KeGetCurrentIrql();
          if ( CurrentIrql != (_BYTE)v40 )
          {
            v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40);
            v41[3] = 275LL;
            v41[4] = 16LL;
            v41[5] = v13;
            v41[6] = CurrentIrql;
            v42 = KeGetCurrentIrql();
            v41[7] = v42;
            WdLogEvent5_WdCriticalError(v41);
          }
          if ( v30 && *(_DWORD *)(v30 + 136) != v35 )
          {
            v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40);
            v43[3] = 275LL;
            v43[4] = 38LL;
            v43[5] = *(int *)(v30 + 136);
            v43[6] = v35;
            v43[7] = 0LL;
            WdLogEvent5_WdCriticalError(v43);
          }
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 16) + 4168LL));
          v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v40, v36, v37, v38);
          v44[3] = v39;
          v44[4] = v118;
          v44[5] = (unsigned int)v121;
          v45 = v122;
          v44[6] = *v122;
          if ( (_DWORD)v39 )
          {
            v46 = WdLogNewEntry5_WdError(v45);
            *(_QWORD *)(v46 + 24) = v39;
            WdLogEvent5_WdError(v46);
          }
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v13 + 16));
          if ( v23 == 2 )
          {
            *(_QWORD *)(v22 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v22, 0LL);
            KeLeaveCriticalRegion();
          }
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v128);
          if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v47, &EventProfilerExit, a3, v128);
          v5 = v117;
          v6 = this;
          goto LABEL_60;
        }
      }
      else
      {
        v30 = 0LL;
      }
    }
    v35 = 0;
    goto LABEL_45;
  }
LABEL_60:
  v48 = *(_QWORD *)v5;
  v49 = 0LL;
  v119 = 0LL;
  v50 = 1;
  if ( *(_QWORD *)v5 )
  {
    if ( (*(_DWORD *)(v48 + 4) & 1) != 0 )
    {
      v51 = *(_QWORD *)(v48 + 56);
      if ( v51 )
      {
        v52 = *(_QWORD *)(v51 + 144);
        if ( v52 )
        {
          if ( *(DXGDEVICE **)(v52 + 72) == v6 )
          {
            v53 = (*(_DWORD *)(v52 + 64))-- == 1;
            if ( v53 )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)v132,
                (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 56LL) + 144LL) + 8LL),
                0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v132);
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 56LL) + 144LL) + 72LL) = 0LL;
              if ( v132[8] )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v132);
            }
          }
        }
        a3 = 0LL;
        for ( j = *(_QWORD *)(*(_QWORD *)v5 + 24LL); j; a3 = (unsigned int)(a3 + 1) )
          j = *(_QWORD *)(j + 64);
        v48 = *(_QWORD *)(*(_QWORD *)v5 + 56LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v48 + 60), 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v48, v120, a3);
        v49 = 0LL;
        *(_QWORD *)(*(_QWORD *)v5 + 56LL) = 0LL;
      }
      v50 = 0;
    }
    else
    {
      v49 = *(_QWORD *)(v48 + 56);
      v119 = v49;
    }
  }
  v55 = *((_QWORD *)v5 + 1);
  v123 = 0LL;
  v124 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  if ( v55 )
  {
    while ( 1 )
    {
      v56 = *(_QWORD *)(v55 + 64);
      v57 = *(_DWORD *)(v55 + 72);
      v127 = v56;
      if ( (v57 & 0x800) != 0 )
      {
        v58 = WdLogNewEntry5_WdAssertion(v48);
        *(_QWORD *)(v58 + 24) = 1892LL;
        WdLogEvent5_WdAssertion(v58);
        v57 = *(_DWORD *)(v55 + 72);
      }
      if ( (v57 & 0x7FE) != 0 )
      {
        v59 = WdLogNewEntry5_WdAssertion(v48);
        *(_QWORD *)(v59 + 24) = 1893LL;
        WdLogEvent5_WdAssertion(v59);
      }
      v60 = *(_QWORD *)(v55 + 48);
      if ( v60 )
      {
        if ( !v50 )
          goto LABEL_100;
        v61 = *(_QWORD *)(v60 + 8);
        if ( v61 )
        {
          v62 = *((_QWORD *)v6 + 2);
          v63 = *((_QWORD *)v6 + 76);
          v64 = *(_QWORD *)(v62 + 544);
          Current = DXGPROCESS::GetCurrent(v48, v49);
          if ( Current )
          {
            if ( *((struct _KTHREAD **)Current + 19) == KeGetCurrentThread() )
            {
              Current = 0LL;
            }
            else
            {
              KeEnterCriticalRegion();
              if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 144, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v68 = *((_DWORD *)Current + 40);
                  if ( v68 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0q(v66, &EventBlockThread, v67, v68);
                }
                ExAcquirePushLockExclusiveEx((char *)Current + 144, 0LL);
              }
              *((_QWORD *)Current + 19) = KeGetCurrentThread();
            }
            v5 = v117;
          }
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v64 + 8) + 128LL))(v63, 0LL, v61);
          if ( Current )
          {
            *((_QWORD *)Current + 19) = 0LL;
            ExReleasePushLockExclusiveEx((char *)Current + 144, 0LL);
            KeLeaveCriticalRegion();
          }
          *(_QWORD *)(*(_QWORD *)(v55 + 48) + 8LL) = 0LL;
          v60 = *(_QWORD *)(v55 + 48);
        }
        v69 = *(void **)(v60 + 16);
        v56 = v127;
        if ( v69 )
        {
          v120[(unsigned int)v123] = v69;
          LODWORD(v123) = v123 + 1;
          *(_QWORD *)(*(_QWORD *)(v55 + 48) + 16LL) = 0LL;
        }
      }
      else if ( !v50 )
      {
LABEL_100:
        v70 = *(_QWORD *)v5;
        if ( !*(_QWORD *)v5 )
        {
          v71 = WdLogNewEntry5_WdAssertion(v48);
          *(_QWORD *)(v71 + 24) = 1919LL;
          WdLogEvent5_WdAssertion(v71);
          v70 = *(_QWORD *)v5;
        }
        if ( (*(_DWORD *)(v70 + 4) & 1) == 0 )
        {
          v72 = WdLogNewEntry5_WdAssertion(v48);
          *(_QWORD *)(v72 + 24) = 1920LL;
          WdLogEvent5_WdAssertion(v72);
        }
      }
      if ( !*(_QWORD *)v5 || (*(_DWORD *)(*(_QWORD *)v5 + 4LL) & 1) == 0 )
      {
        v73 = *(void **)(v55 + 48);
        if ( v73 )
        {
          DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*(void ***)(v55 + 48));
          operator delete(v73);
        }
      }
      DXGALLOCATION::~DXGALLOCATION((DXGALLOCATION *)v55);
      ExFreePoolWithTag((PVOID)v55, 0);
      v6 = this;
      v55 = v56;
      if ( !v56 )
      {
        v49 = v119;
        break;
      }
    }
  }
  if ( v50 )
  {
    v53 = *(_QWORD *)v5 == 0LL;
    v125 = v49;
    LODWORD(v126) = !v53;
    if ( (_DWORD)v123 )
    {
      v48 = (__int64)v120;
      v124 = v120;
    }
    else
    {
      v124 = 0LL;
      if ( !v49 )
        goto LABEL_165;
    }
    v74 = *((_QWORD *)this + 2);
    if ( *(_BYTE *)(*(_QWORD *)(v74 + 16) + 185LL) )
      goto LABEL_165;
    v131 = 0LL;
    v130 = 5005;
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v48, &EventProfilerEnter, a3, 5005);
    DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v130, 5005);
    v77 = PsGetCurrentProcess(v76, v75);
    v78 = PsGetProcessDxgProcess(v77);
    v80 = v78;
    if ( v78 )
    {
      if ( (*(_BYTE *)(v78 + 323) & 4) != 0 )
      {
        v81 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v82 = v81;
        if ( v81 )
        {
          ObfDereferenceObject(v81);
          v80 = *v82;
        }
      }
    }
    v83 = v80 + 120;
    v84 = 0;
    if ( !v80 )
      v83 = 0LL;
    if ( v83 && *(struct _KTHREAD **)(v83 + 8) == KeGetCurrentThread() )
    {
      v85 = WdLogNewEntry5_WdAssertion(v79);
      *(_QWORD *)(v85 + 24) = 1306LL;
      WdLogEvent5_WdAssertion(v85);
    }
    if ( v80 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v83, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v88 = *(_DWORD *)(v83 + 16);
          if ( v88 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v86, &EventBlockThread, v87, v88);
        }
        ExAcquirePushLockExclusiveEx(v83, 0LL);
      }
      v84 = 2;
      *(_QWORD *)(v83 + 8) = KeGetCurrentThread();
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v74 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v74 + 16) + 4168LL));
    v90 = KeGetCurrentIrql();
    v91 = 0LL;
    if ( v90 < 2u )
    {
      v92 = KeGetCurrentThread();
      if ( !v92 )
      {
        v93 = WdLogNewEntry5_WdAssertion(v89);
        *(_QWORD *)(v93 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v93);
      }
      v94 = PsGetCurrentProcessSessionId(v89);
      if ( v94
        && (unsigned int)PsGetThreadSessionId(v92) == v94
        && !IsThreadCrossSessionAttached()
        && (v95 = PsGetThreadWin32Thread(v92)) != 0
        && *(_QWORD *)v95 )
      {
        v91 = *(_QWORD *)(*(_QWORD *)v95 + 80LL);
        if ( v91 )
        {
          v96 = *(_DWORD *)(v91 + 136);
LABEL_148:
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v135,
            *(struct DXGADAPTER **)(v74 + 16));
          v100 = (*(int (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v74 + 16) + 336LL))(
                   *(_QWORD *)(*(_QWORD *)(v74 + 16) + 240LL),
                   &v123);
          if ( v135[0] )
            KeUnstackDetachProcess(&v136);
          v101 = KeGetCurrentIrql();
          if ( v90 != (_BYTE)v101 )
          {
            v102 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v101);
            v102[3] = 275LL;
            v102[4] = 16LL;
            v102[5] = v74;
            v102[6] = v90;
            v103 = KeGetCurrentIrql();
            v102[7] = v103;
            WdLogEvent5_WdCriticalError(v102);
          }
          if ( v91 && *(_DWORD *)(v91 + 136) != v96 )
          {
            v104 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v101);
            v104[3] = 275LL;
            v104[4] = 38LL;
            v104[5] = *(int *)(v91 + 136);
            v104[6] = v96;
            v104[7] = 0LL;
            WdLogEvent5_WdCriticalError(v104);
          }
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v74 + 16) + 4168LL));
          v105 = (_QWORD *)WdLogNewEntry5_WdTrace(v101, v97, v98, v99);
          v105[3] = v100;
          v105[4] = (unsigned int)v126;
          v105[5] = v125;
          v105[6] = (unsigned int)v123;
          if ( v124 )
            v106 = *v124;
          else
            v106 = 0LL;
          v105[7] = v106;
          if ( (_DWORD)v100 )
          {
            v107 = WdLogNewEntry5_WdError(v106);
            *(_QWORD *)(v107 + 24) = v100;
            WdLogEvent5_WdError(v107);
          }
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v74 + 16));
          if ( v84 == 2 )
          {
            *(_QWORD *)(v83 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v83, 0LL);
            KeLeaveCriticalRegion();
          }
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v130);
          if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v48, &EventProfilerExit, v108, v130);
          goto LABEL_165;
        }
      }
      else
      {
        v91 = 0LL;
      }
    }
    v96 = 0;
    goto LABEL_148;
  }
LABEL_165:
  v109 = (char *)this + 136;
  if ( this != (DXGDEVICE *)-136LL && *((struct _KTHREAD **)this + 18) == KeGetCurrentThread() )
  {
    v110 = WdLogNewEntry5_WdAssertion(v48);
    *(_QWORD *)(v110 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v110);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v109, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v113 = *((_DWORD *)this + 38);
      if ( v113 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v111, &EventBlockThread, v112, v113);
    }
    ExAcquirePushLockExclusiveEx(v109, 0LL);
  }
  *((_QWORD *)this + 18) = KeGetCurrentThread();
  v114 = *((_DWORD *)this + 428) - 1;
  *((_DWORD *)this + 428) = v114;
  if ( v114 < 0 )
  {
    v115 = WdLogNewEntry5_WdAssertion(v111);
    *(_QWORD *)(v115 + 24) = 1224LL;
    WdLogEvent5_WdAssertion(v115);
    v114 = *((_DWORD *)this + 428);
  }
  if ( !v114 )
    KeSetEvent(*((PRKEVENT *)this + 215), 0, 0);
  *((_QWORD *)this + 18) = 0LL;
  ExReleasePushLockExclusiveEx(v109, 0LL);
  KeLeaveCriticalRegion();
}
