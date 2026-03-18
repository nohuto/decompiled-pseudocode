/*
 * XREFs of ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C009CB10
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C007FDE0 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C009127C (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C0091444 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C00F1E74 (--1DXGALLOCATION@@QEAA@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyDeferredAllocations(DXGDEVICE *this, struct DXGTERMINATIONTRACKER *a2, __int64 a3)
{
  __int64 v3; // rax
  struct DXGTERMINATIONTRACKER *v4; // rsi
  DXGDEVICE *v5; // r12
  void **v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *i; // rbx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 *ThreadProperty; // rax
  __int64 *v19; // rdi
  __int64 v20; // rdi
  int v21; // r12d
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  __int64 v26; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v28; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v30; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v33; // esi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r14
  __int64 v37; // rcx
  _QWORD *v38; // rax
  unsigned __int8 v39; // cl
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  void **v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdx
  char v47; // r13
  __int64 v48; // rax
  __int64 v49; // rax
  bool v50; // zf
  __int64 j; // rax
  __int64 v52; // rdi
  __int64 v53; // r14
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r14
  __int64 v58; // rax
  __int64 v59; // r12
  __int64 v60; // r15
  struct DXGPROCESS *Current; // rbx
  __int64 v62; // rcx
  __int64 v63; // r8
  int v64; // r9d
  void *v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  void *v69; // rbx
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 *v76; // rax
  __int64 *v77; // rbx
  __int64 v78; // rbx
  int v79; // r13d
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // r8
  int v83; // r9d
  __int64 v84; // rcx
  unsigned __int8 v85; // r12
  __int64 v86; // rdi
  struct _KTHREAD *v87; // rdi
  __int64 v88; // rax
  int v89; // r14d
  __int64 v90; // rax
  int v91; // r14d
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r15
  __int64 v95; // rcx
  _QWORD *v96; // rax
  unsigned __int8 v97; // cl
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  void *v100; // rcx
  __int64 v101; // rax
  __int64 v102; // r8
  char *v103; // rbx
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // r8
  int v107; // r9d
  __int64 v109; // rax
  struct DXGTERMINATIONTRACKER *v111; // [rsp+40h] [rbp-C8h]
  __int64 v112; // [rsp+48h] [rbp-C0h]
  __int64 v113; // [rsp+48h] [rbp-C0h]
  void **v114; // [rsp+50h] [rbp-B8h]
  __int64 v115; // [rsp+58h] [rbp-B0h] BYREF
  void **v116; // [rsp+60h] [rbp-A8h]
  __int64 v117; // [rsp+68h] [rbp-A0h] BYREF
  void **v118; // [rsp+70h] [rbp-98h]
  __int64 v119; // [rsp+78h] [rbp-90h]
  __int64 v120; // [rsp+80h] [rbp-88h]
  __int64 v121; // [rsp+88h] [rbp-80h]
  _BYTE v122[16]; // [rsp+90h] [rbp-78h] BYREF
  char v123[8]; // [rsp+A0h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-60h] BYREF
  char v125[8]; // [rsp+D8h] [rbp-30h] BYREF
  struct _KAPC_STATE v126; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v127[128]; // [rsp+118h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = a2;
  v5 = this;
  v111 = a2;
  if ( !*(_QWORD *)a2 || (v6 = *(void ***)(v3 + 64), (v114 = v6) == 0LL) )
  {
    v6 = (void **)v127;
    v114 = (void **)v127;
  }
  v7 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  if ( v3 )
  {
    v8 = WdLogNewEntry5_WdTrace(0LL, a2);
    *(_QWORD *)(v8 + 24) = *(_QWORD *)v4;
    a2 = *(struct DXGTERMINATIONTRACKER **)(*(_QWORD *)v4 + 8LL);
    v7 = *((_QWORD *)a2 + 5);
    *(_QWORD *)(v8 + 32) = v7;
  }
  for ( i = (_QWORD *)*((_QWORD *)v4 + 1); i; i = (_QWORD *)i[8] )
  {
    v10 = WdLogNewEntry5_WdTrace(v7, a2);
    *(_QWORD *)(v10 + 24) = i;
    *(_QWORD *)(v10 + 32) = *(_QWORD *)(i[1] + 40LL);
    a2 = (struct DXGTERMINATIONTRACKER *)i[3];
    if ( a2 )
    {
      (*(void (__fastcall **)(_QWORD, struct DXGTERMINATIONTRACKER *, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 528LL)
                                                                                                 + 8LL)
                                                                                     + 160LL))(
        *(_QWORD *)(*((_QWORD *)v5 + 2) + 536LL),
        a2,
        0LL,
        *((unsigned int *)v4 + 12));
      i[3] = 0LL;
    }
    v7 = i[4];
    if ( v7 )
    {
      v6[(unsigned int)v115] = (void *)v7;
      LODWORD(v115) = v115 + 1;
      i[4] = 0LL;
    }
  }
  if ( (_DWORD)v115 )
  {
    v11 = *((_QWORD *)v5 + 52);
    v12 = *((_QWORD *)v5 + 2);
    v112 = v11;
    v116 = v6;
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v7, &EventProfilerEnter, a3, 5029);
    CurrentProcess = PsGetCurrentProcess(v7, a2);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v14);
    v17 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
      {
        ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v19 = ThreadProperty;
        if ( ThreadProperty )
        {
          ObfDereferenceObject(ThreadProperty);
          v17 = *v19;
        }
      }
    }
    v20 = v17 + 112;
    v21 = 0;
    if ( !v17 )
      v20 = 0LL;
    if ( v20 && *(struct _KTHREAD **)(v20 + 8) == KeGetCurrentThread() )
    {
      v22 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v22 + 24) = 1214LL;
      WdLogEvent5_WdAssertion(v22);
    }
    if ( v17 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v20, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v25 = *(_DWORD *)(v20 + 16);
          if ( v25 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v23, &EventBlockThread, v24, v25);
        }
        ExAcquirePushLockExclusiveEx(v20, 0LL);
      }
      v21 = 2;
      *(_QWORD *)(v20 + 8) = KeGetCurrentThread();
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v12 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 16) + 3924LL));
    CurrentIrql = KeGetCurrentIrql();
    v28 = 0LL;
    if ( CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v30 = WdLogNewEntry5_WdAssertion(v26);
        *(_QWORD *)(v30 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v30);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      if ( CurrentProcessSessionId
        && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && !IsThreadCrossSessionAttached()
        && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
        && *(_QWORD *)ThreadWin32Thread )
      {
        v28 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
        if ( v28 )
        {
          v33 = *(_DWORD *)(v28 + 136);
LABEL_45:
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v123,
            *(struct DXGADAPTER **)(v12 + 16));
          v36 = (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v12 + 16) + 592LL))(v11, &v115);
          if ( v123[0] )
            KeUnstackDetachProcess(&ApcState);
          v37 = KeGetCurrentIrql();
          if ( CurrentIrql != (_BYTE)v37 )
          {
            v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v34, v35);
            v38[3] = 275LL;
            v38[4] = 16LL;
            v38[5] = v12;
            v38[6] = CurrentIrql;
            v39 = KeGetCurrentIrql();
            v38[7] = v39;
            WdLogEvent5_WdCriticalError(v38);
          }
          if ( v28 && *(_DWORD *)(v28 + 136) != v33 )
          {
            v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v34, v35);
            v40[3] = 275LL;
            v40[4] = 25LL;
            v40[5] = *(int *)(v28 + 136);
            v40[6] = v33;
            v40[7] = 0LL;
            WdLogEvent5_WdCriticalError(v40);
          }
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 16) + 3924LL));
          v41 = (_QWORD *)WdLogNewEntry5_WdTrace(v37, v34);
          v41[3] = v36;
          v41[4] = v112;
          v41[5] = (unsigned int)v115;
          v42 = v116;
          v41[6] = *v116;
          if ( (_DWORD)v36 )
          {
            v43 = WdLogNewEntry5_WdError(v42);
            *(_QWORD *)(v43 + 24) = v36;
            WdLogEvent5_WdError(v43);
          }
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v12 + 16));
          if ( v21 == 2 )
          {
            *(_QWORD *)(v20 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v20, 0LL);
            KeLeaveCriticalRegion();
          }
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v44, &EventProfilerExit, a3, 5029);
          v4 = v111;
          v5 = this;
          goto LABEL_60;
        }
      }
      else
      {
        v28 = 0LL;
      }
    }
    v33 = 0;
    goto LABEL_45;
  }
LABEL_60:
  v45 = *(_QWORD *)v4;
  v46 = 0LL;
  v113 = 0LL;
  v47 = 1;
  if ( *(_QWORD *)v4 )
  {
    if ( (*(_DWORD *)(v45 + 4) & 1) != 0 )
    {
      v48 = *(_QWORD *)(v45 + 56);
      if ( v48 )
      {
        v49 = *(_QWORD *)(v48 + 144);
        if ( v49 )
        {
          if ( *(DXGDEVICE **)(v49 + 72) == v5 )
          {
            v50 = (*(_DWORD *)(v49 + 64))-- == 1;
            if ( v50 )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)v122,
                (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 56LL) + 144LL) + 8LL));
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v122);
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 56LL) + 144LL) + 72LL) = 0LL;
              if ( v122[8] )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v122);
            }
          }
        }
        a3 = 0LL;
        for ( j = *(_QWORD *)(*(_QWORD *)v4 + 24LL); j; a3 = (unsigned int)(a3 + 1) )
          j = *(_QWORD *)(j + 64);
        v45 = *(_QWORD *)(*(_QWORD *)v4 + 56LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 60), 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v45, v114, a3);
        v46 = 0LL;
        *(_QWORD *)(*(_QWORD *)v4 + 56LL) = 0LL;
      }
      v47 = 0;
    }
    else
    {
      v46 = *(_QWORD *)(v45 + 56);
      v113 = v46;
    }
  }
  v52 = *((_QWORD *)v4 + 1);
  v117 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  if ( v52 )
  {
    while ( 1 )
    {
      v50 = (*(_DWORD *)(v52 + 72) & 0x800) == 0;
      v53 = *(_QWORD *)(v52 + 64);
      v121 = v53;
      if ( !v50 )
      {
        v54 = WdLogNewEntry5_WdAssertion(v45);
        *(_QWORD *)(v54 + 24) = 1832LL;
        WdLogEvent5_WdAssertion(v54);
      }
      if ( (*(_DWORD *)(v52 + 72) & 0x7FE) != 0 )
      {
        v55 = WdLogNewEntry5_WdAssertion(v45);
        *(_QWORD *)(v55 + 24) = 1833LL;
        WdLogEvent5_WdAssertion(v55);
      }
      v56 = *(_QWORD *)(v52 + 48);
      if ( v56 )
      {
        if ( !v47 )
          goto LABEL_100;
        v57 = *(_QWORD *)(v56 + 8);
        if ( v57 )
        {
          v58 = *((_QWORD *)v5 + 2);
          v59 = *((_QWORD *)v5 + 74);
          v60 = *(_QWORD *)(v58 + 528);
          Current = DXGPROCESS::GetCurrent();
          if ( Current )
          {
            if ( *((struct _KTHREAD **)Current + 18) == KeGetCurrentThread() )
            {
              Current = 0LL;
            }
            else
            {
              KeEnterCriticalRegion();
              if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 136, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v64 = *((_DWORD *)Current + 38);
                  if ( v64 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0q(v62, &EventBlockThread, v63, v64);
                }
                ExAcquirePushLockExclusiveEx((char *)Current + 136, 0LL);
              }
              *((_QWORD *)Current + 18) = KeGetCurrentThread();
            }
            v4 = v111;
          }
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v60 + 8) + 128LL))(v59, 0LL, v57);
          if ( Current )
          {
            *((_QWORD *)Current + 18) = 0LL;
            ExReleasePushLockExclusiveEx((char *)Current + 136, 0LL);
            KeLeaveCriticalRegion();
          }
          *(_QWORD *)(*(_QWORD *)(v52 + 48) + 8LL) = 0LL;
        }
        v53 = v121;
        v65 = *(void **)(*(_QWORD *)(v52 + 48) + 16LL);
        if ( v65 )
        {
          v114[(unsigned int)v117] = v65;
          LODWORD(v117) = v117 + 1;
          *(_QWORD *)(*(_QWORD *)(v52 + 48) + 16LL) = 0LL;
        }
      }
      else if ( !v47 )
      {
LABEL_100:
        if ( !*(_QWORD *)v4 )
        {
          v66 = WdLogNewEntry5_WdAssertion(v45);
          *(_QWORD *)(v66 + 24) = 1859LL;
          WdLogEvent5_WdAssertion(v66);
        }
        v67 = *(unsigned int *)(*(_QWORD *)v4 + 4LL);
        if ( (v67 & 1) == 0 )
        {
          v68 = WdLogNewEntry5_WdAssertion(v67);
          *(_QWORD *)(v68 + 24) = 1860LL;
          WdLogEvent5_WdAssertion(v68);
        }
      }
      if ( !*(_QWORD *)v4 || (*(_DWORD *)(*(_QWORD *)v4 + 4LL) & 1) == 0 )
      {
        v69 = *(void **)(v52 + 48);
        if ( v69 )
        {
          DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*(DXGADAPTERALLOCATION **)(v52 + 48));
          operator delete(v69);
        }
      }
      DXGALLOCATION::~DXGALLOCATION((DXGALLOCATION *)v52);
      ExFreePoolWithTag((PVOID)v52, 0);
      v5 = this;
      v52 = v53;
      if ( !v53 )
      {
        v46 = v113;
        break;
      }
    }
  }
  if ( v47 )
  {
    v50 = *(_QWORD *)v4 == 0LL;
    v119 = v46;
    LODWORD(v120) = !v50;
    if ( (_DWORD)v117 )
    {
      v45 = (__int64)v114;
      v118 = v114;
    }
    else
    {
      v118 = 0LL;
      if ( !v46 )
        goto LABEL_165;
    }
    v70 = *((_QWORD *)this + 2);
    if ( *(_BYTE *)(*(_QWORD *)(v70 + 16) + 185LL) )
      goto LABEL_165;
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v45, &EventProfilerEnter, a3, 5005);
    v71 = PsGetCurrentProcess(v45, v46);
    v73 = PsGetProcessDxgProcess(v71, v72);
    v75 = v73;
    if ( v73 )
    {
      if ( (*(_BYTE *)(v73 + 307) & 4) != 0 )
      {
        v76 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v77 = v76;
        if ( v76 )
        {
          ObfDereferenceObject(v76);
          v75 = *v77;
        }
      }
    }
    v78 = v75 + 112;
    v79 = 0;
    if ( !v75 )
      v78 = 0LL;
    if ( v78 && *(struct _KTHREAD **)(v78 + 8) == KeGetCurrentThread() )
    {
      v80 = WdLogNewEntry5_WdAssertion(v74);
      *(_QWORD *)(v80 + 24) = 1214LL;
      WdLogEvent5_WdAssertion(v80);
    }
    if ( v75 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v78, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v83 = *(_DWORD *)(v78 + 16);
          if ( v83 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v81, &EventBlockThread, v82, v83);
        }
        ExAcquirePushLockExclusiveEx(v78, 0LL);
      }
      v79 = 2;
      *(_QWORD *)(v78 + 8) = KeGetCurrentThread();
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v70 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v70 + 16) + 3924LL));
    v85 = KeGetCurrentIrql();
    v86 = 0LL;
    if ( v85 < 2u )
    {
      v87 = KeGetCurrentThread();
      if ( !v87 )
      {
        v88 = WdLogNewEntry5_WdAssertion(v84);
        *(_QWORD *)(v88 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v88);
      }
      v89 = PsGetCurrentProcessSessionId();
      if ( v89
        && (unsigned int)PsGetThreadSessionId(v87) == v89
        && !IsThreadCrossSessionAttached()
        && (v90 = PsGetThreadWin32Thread(v87)) != 0
        && *(_QWORD *)v90 )
      {
        v86 = *(_QWORD *)(*(_QWORD *)v90 + 80LL);
        if ( v86 )
        {
          v91 = *(_DWORD *)(v86 + 136);
LABEL_148:
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v125,
            *(struct DXGADAPTER **)(v70 + 16));
          v94 = (*(int (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v70 + 16) + 336LL))(
                  *(_QWORD *)(*(_QWORD *)(v70 + 16) + 240LL),
                  &v117);
          if ( v125[0] )
            KeUnstackDetachProcess(&v126);
          v95 = KeGetCurrentIrql();
          if ( v85 != (_BYTE)v95 )
          {
            v96 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v95, v92, v93);
            v96[3] = 275LL;
            v96[4] = 16LL;
            v96[5] = v70;
            v96[6] = v85;
            v97 = KeGetCurrentIrql();
            v96[7] = v97;
            WdLogEvent5_WdCriticalError(v96);
          }
          if ( v86 && *(_DWORD *)(v86 + 136) != v91 )
          {
            v98 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v95, v92, v93);
            v98[3] = 275LL;
            v98[4] = 25LL;
            v98[5] = *(int *)(v86 + 136);
            v98[6] = v91;
            v98[7] = 0LL;
            WdLogEvent5_WdCriticalError(v98);
          }
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v70 + 16) + 3924LL));
          v99 = (_QWORD *)WdLogNewEntry5_WdTrace(v95, v92);
          v99[3] = v94;
          v99[4] = (unsigned int)v120;
          v99[5] = v119;
          v99[6] = (unsigned int)v117;
          if ( v118 )
            v100 = *v118;
          else
            v100 = 0LL;
          v99[7] = v100;
          if ( (_DWORD)v94 )
          {
            v101 = WdLogNewEntry5_WdError(v100);
            *(_QWORD *)(v101 + 24) = v94;
            WdLogEvent5_WdError(v101);
          }
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v70 + 16));
          if ( v79 == 2 )
          {
            *(_QWORD *)(v78 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v78, 0LL);
            KeLeaveCriticalRegion();
          }
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v45, &EventProfilerExit, v102, 5005);
          goto LABEL_165;
        }
      }
      else
      {
        v86 = 0LL;
      }
    }
    v91 = 0;
    goto LABEL_148;
  }
LABEL_165:
  v103 = (char *)this + 136;
  if ( this != (DXGDEVICE *)-136LL && *((struct _KTHREAD **)this + 18) == KeGetCurrentThread() )
  {
    v104 = WdLogNewEntry5_WdAssertion(v45);
    *(_QWORD *)(v104 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v104);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v103, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v107 = *((_DWORD *)this + 38);
      if ( v107 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v105, &EventBlockThread, v106, v107);
    }
    ExAcquirePushLockExclusiveEx(v103, 0LL);
  }
  *((_QWORD *)this + 18) = KeGetCurrentThread();
  if ( --*((_DWORD *)this + 424) < 0 )
  {
    v109 = WdLogNewEntry5_WdAssertion(v105);
    *(_QWORD *)(v109 + 24) = 1194LL;
    WdLogEvent5_WdAssertion(v109);
  }
  if ( !*((_DWORD *)this + 424) )
    KeSetEvent(*((PRKEVENT *)this + 213), 0, 0);
  *((_QWORD *)this + 18) = 0LL;
  ExReleasePushLockExclusiveEx(v103, 0LL);
  KeLeaveCriticalRegion();
}
