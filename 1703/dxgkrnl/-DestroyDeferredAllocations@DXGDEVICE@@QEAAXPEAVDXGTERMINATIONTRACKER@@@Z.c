/*
 * XREFs of ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00C9280
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C0095E10 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C009D83C (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00FEC20 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C00FF010 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyDeferredAllocations(
        DXGDEVICE *this,
        struct DXGTERMINATIONTRACKER *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  struct DXGTERMINATIONTRACKER *v6; // r14
  void **v7; // rbx
  __int64 v8; // rcx
  _QWORD *i; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned int v14; // edi
  __int64 v15; // r12
  struct DXGPROCESS *Current; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 CurrentProcess; // rax
  __int64 v21; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // rdi
  int v29; // r15d
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  _QWORD *v44; // rax
  void **v45; // rcx
  void *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  char v49; // si
  void **v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdi
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // r15
  __int64 v58; // r12
  struct DXGPROCESS *v59; // rax
  struct DXGPROCESS *v60; // rbx
  char *v61; // rsi
  __int64 v62; // rcx
  __int64 v63; // r8
  void *v64; // rcx
  void *v65; // rbx
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdi
  __int64 v75; // rbx
  int v76; // r14d
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  unsigned __int8 v83; // r12
  __int64 v84; // rdi
  struct _KTHREAD *v85; // r15
  int v86; // edi
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // r15
  __int64 v91; // rcx
  _QWORD *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rcx
  unsigned int v103; // r8d
  __int64 j; // rax
  volatile signed __int32 *v105; // rcx
  __int64 v106; // rcx
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // r9
  int v111; // r9d
  __int64 *ThreadProperty; // rax
  __int64 v113; // rax
  int v114; // r9d
  __int64 v115; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v117; // rax
  unsigned __int8 v118; // cl
  _QWORD *v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  int v123; // r9d
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 *v126; // rax
  __int64 v127; // rax
  int v128; // r9d
  __int64 v129; // rax
  __int64 v130; // rax
  _QWORD *v131; // rax
  unsigned __int8 v132; // cl
  _QWORD *v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  int v136; // r9d
  __int64 v137; // rax
  char v138; // [rsp+38h] [rbp-D0h]
  struct DXGTERMINATIONTRACKER *v139; // [rsp+40h] [rbp-C8h]
  int v140; // [rsp+40h] [rbp-C8h]
  __int64 v141; // [rsp+40h] [rbp-C8h]
  int v142; // [rsp+40h] [rbp-C8h]
  __int64 v143; // [rsp+48h] [rbp-C0h]
  __int64 v144; // [rsp+48h] [rbp-C0h]
  __int64 v145; // [rsp+48h] [rbp-C0h]
  void **v146; // [rsp+50h] [rbp-B8h]
  unsigned __int8 CurrentIrql; // [rsp+58h] [rbp-B0h]
  __int64 v148; // [rsp+58h] [rbp-B0h]
  __int64 v149; // [rsp+60h] [rbp-A8h] BYREF
  void **v150; // [rsp+68h] [rbp-A0h]
  _QWORD v151[4]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v152[16]; // [rsp+90h] [rbp-78h] BYREF
  char v153[8]; // [rsp+A0h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-60h] BYREF
  char v155[8]; // [rsp+D8h] [rbp-30h] BYREF
  struct _KAPC_STATE v156; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v157[128]; // [rsp+118h] [rbp+10h] BYREF

  v4 = *(_QWORD *)a2;
  v6 = a2;
  v139 = a2;
  if ( !*(_QWORD *)a2 || (v7 = *(void ***)(v4 + 64), (v146 = v7) == 0LL) )
  {
    v7 = (void **)v157;
    v146 = (void **)v157;
  }
  v8 = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  if ( v4 )
  {
    v100 = WdLogNewEntry5_WdTrace(0LL, a2, a3, a4);
    *(_QWORD *)(v100 + 24) = *(_QWORD *)v6;
    a2 = *(struct DXGTERMINATIONTRACKER **)(*(_QWORD *)v6 + 8LL);
    v8 = *((_QWORD *)a2 + 5);
    *(_QWORD *)(v100 + 32) = v8;
  }
  for ( i = (_QWORD *)*((_QWORD *)v6 + 1); i; i = (_QWORD *)i[8] )
  {
    v10 = WdLogNewEntry5_WdTrace(v8, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = i;
    v11 = i[1];
    a2 = *(struct DXGTERMINATIONTRACKER **)(v11 + 40);
    *(_QWORD *)(v10 + 32) = a2;
    v12 = i[3];
    if ( v12 )
    {
      v13 = *((_QWORD *)this + 2);
      v14 = *((_DWORD *)v6 + 12);
      v15 = *(_QWORD *)(v13 + 440);
      v143 = *(_QWORD *)(v13 + 432);
      Current = DXGPROCESS::GetCurrent(v11);
      if ( Current )
      {
        if ( *((struct _KTHREAD **)Current + 15) == KeGetCurrentThread() )
        {
          Current = 0LL;
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 112, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v111 = *((_DWORD *)Current + 32);
              if ( v111 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v17, &EventBlockThread, v18, v111);
            }
            ExAcquirePushLockExclusiveEx((char *)Current + 112, 0LL);
          }
          *((_QWORD *)Current + 15) = KeGetCurrentThread();
        }
        v6 = v139;
      }
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(v143 + 8) + 160LL))(v15, v12, 0LL, v14);
      if ( Current )
      {
        *((_QWORD *)Current + 15) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 112, 0LL);
        KeLeaveCriticalRegion();
      }
      i[3] = 0LL;
    }
    v8 = i[4];
    v7 = v146;
    if ( v8 )
    {
      v146[(unsigned int)v149] = (void *)v8;
      LODWORD(v149) = v149 + 1;
      i[4] = 0LL;
    }
  }
  if ( !(_DWORD)v149 )
    goto LABEL_47;
  v19 = *((_QWORD *)this + 2);
  v144 = *((_QWORD *)this + 52);
  v150 = v7;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v8, &EventProfilerEnter, a3, 5029);
  CurrentProcess = PsGetCurrentProcess(v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v21);
  v27 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v27 = *ThreadProperty;
    }
  }
  if ( v27 )
    v28 = v27 + 88;
  else
    v28 = 0LL;
  v29 = 0;
  if ( v28 && *(struct _KTHREAD **)(v28 + 8) == KeGetCurrentThread() )
  {
    v113 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
    *(_QWORD *)(v113 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v113);
  }
  if ( v27 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v28, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v114 = *(_DWORD *)(v28 + 16);
        if ( v114 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v30, &EventBlockThread, v31, v114);
      }
      ExAcquirePushLockExclusiveEx(v28, 0LL);
    }
    v29 = 2;
    *(_QWORD *)(v28 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v19 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v19 + 16) + 3892LL));
  v36 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v115 = WdLogNewEntry5_WdAssertion(v33, v32, v34, v35);
      *(_QWORD *)(v115 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v115);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v33, v32, v34, v35);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v36 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      if ( v36 )
      {
        v140 = *(_DWORD *)(v36 + 136);
        goto LABEL_37;
      }
    }
    else
    {
      v36 = 0LL;
    }
  }
  v140 = 0;
LABEL_37:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v153,
    *(struct DXGADAPTER **)(v19 + 16));
  v40 = (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v19 + 16) + 592LL))(v144, &v149);
  if ( v153[0] )
    KeUnstackDetachProcess(&ApcState);
  v43 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v43 )
  {
    v117 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43, v39, v41);
    v117[3] = 275LL;
    v117[4] = 16LL;
    v117[5] = v19;
    v117[6] = CurrentIrql;
    v118 = KeGetCurrentIrql();
    v117[7] = v118;
    WdLogEvent5_WdCriticalError(v117);
  }
  if ( v36 && *(_DWORD *)(v36 + 136) != v140 )
  {
    v119 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43, v39, v41);
    v119[3] = 275LL;
    v119[4] = 25LL;
    v119[5] = *(int *)(v36 + 136);
    v119[6] = v140;
    v119[7] = 0LL;
    WdLogEvent5_WdCriticalError(v119);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v19 + 16) + 3892LL));
  v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v43, v39, v41, v42);
  v44[3] = v40;
  v44[4] = v144;
  v44[5] = (unsigned int)v149;
  v45 = v150;
  v46 = *v150;
  v44[6] = *v150;
  if ( (_DWORD)v40 )
  {
    v120 = WdLogNewEntry5_WdError(v45, v46);
    *(_QWORD *)(v120 + 24) = v40;
    WdLogEvent5_WdError(v120);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v19 + 16));
  if ( v29 == 2 )
  {
    *(_QWORD *)(v28 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v28, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v47, &EventProfilerExit, a3, 5029);
LABEL_47:
  v48 = *(_QWORD *)v6;
  v148 = 0LL;
  v49 = 1;
  v138 = 1;
  if ( *(_QWORD *)v6 )
  {
    v101 = *(_QWORD *)(v48 + 56);
    if ( (*(_DWORD *)(v48 + 4) & 1) != 0 )
    {
      if ( v101 )
      {
        v102 = *(_QWORD *)(v101 + 144);
        if ( v102 )
        {
          if ( *(DXGDEVICE **)(v102 + 72) == this && (*(_DWORD *)(v102 + 64))-- == 1 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v152,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 56LL) + 144LL) + 8LL),
              a3,
              a4);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v152);
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 56LL) + 144LL) + 72LL) = 0LL;
            if ( v152[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v152, v108, v109, v110);
          }
        }
        v103 = 0;
        for ( j = *(_QWORD *)(*(_QWORD *)v6 + 24LL); j; ++v103 )
          j = *(_QWORD *)(j + 64);
        v105 = *(volatile signed __int32 **)(*(_QWORD *)v6 + 56LL);
        if ( _InterlockedExchangeAdd(v105 + 15, 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v105, v146, v103);
        *(_QWORD *)(*(_QWORD *)v6 + 56LL) = 0LL;
      }
      v49 = 0;
      v138 = 0;
    }
    else
    {
      v148 = *(_QWORD *)(v48 + 56);
    }
  }
  memset(v151, 0, sizeof(v151));
  v54 = *((_QWORD *)v6 + 1);
  if ( v54 )
  {
    do
    {
      v55 = *(_QWORD *)(v54 + 64);
      v145 = v55;
      if ( (*(_DWORD *)(v54 + 72) & 0x800) != 0 )
      {
        v121 = WdLogNewEntry5_WdAssertion(v51, v50, v52, v53);
        *(_QWORD *)(v121 + 24) = 1760LL;
        WdLogEvent5_WdAssertion(v121);
      }
      if ( (*(_DWORD *)(v54 + 72) & 0x7FE) != 0 )
      {
        v122 = WdLogNewEntry5_WdAssertion(v51, v50, v52, v53);
        *(_QWORD *)(v122 + 24) = 1761LL;
        WdLogEvent5_WdAssertion(v122);
      }
      v56 = *(_QWORD *)(v54 + 48);
      if ( v56 )
      {
        if ( !v49 )
          goto LABEL_128;
        v57 = *(_QWORD *)(v56 + 8);
        if ( v57 )
        {
          v58 = *(_QWORD *)(*((_QWORD *)this + 2) + 432LL);
          v141 = *((_QWORD *)this + 74);
          v59 = DXGPROCESS::GetCurrent(v51);
          v60 = v59;
          if ( v59 )
          {
            v61 = (char *)v59 + 112;
            if ( *((struct _KTHREAD **)v59 + 15) == KeGetCurrentThread() )
            {
              v60 = 0LL;
            }
            else
            {
              KeEnterCriticalRegion();
              if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v61, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v123 = *((_DWORD *)v61 + 4);
                  if ( v123 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    Template_q(v62, &EventBlockThread, v63, v123);
                }
                ExAcquirePushLockExclusiveEx(v61, 0LL);
              }
              *((_QWORD *)v61 + 1) = KeGetCurrentThread();
            }
            v49 = v138;
          }
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v58 + 8) + 128LL))(v141, 0LL, v57);
          if ( v60 )
          {
            *((_QWORD *)v60 + 15) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v60 + 112, 0LL);
            KeLeaveCriticalRegion();
          }
          *(_QWORD *)(*(_QWORD *)(v54 + 48) + 8LL) = 0LL;
        }
        v55 = v145;
        v64 = *(void **)(*(_QWORD *)(v54 + 48) + 16LL);
        if ( v64 )
        {
          v146[LODWORD(v151[0])] = v64;
          ++LODWORD(v151[0]);
          *(_QWORD *)(*(_QWORD *)(v54 + 48) + 16LL) = 0LL;
        }
      }
      else if ( !v49 )
      {
LABEL_128:
        if ( !*(_QWORD *)v6 )
        {
          v124 = WdLogNewEntry5_WdAssertion(v51, v50, v52, v53);
          *(_QWORD *)(v124 + 24) = 1787LL;
          WdLogEvent5_WdAssertion(v124);
        }
        v106 = *(unsigned int *)(*(_QWORD *)v6 + 4LL);
        if ( (v106 & 1) == 0 )
        {
          v125 = WdLogNewEntry5_WdAssertion(v106, v50, v52, v53);
          *(_QWORD *)(v125 + 24) = 1788LL;
          WdLogEvent5_WdAssertion(v125);
        }
      }
      if ( !*(_QWORD *)v6 || (*(_DWORD *)(*(_QWORD *)v6 + 4LL) & 1) == 0 )
      {
        v65 = *(void **)(v54 + 48);
        if ( v65 )
        {
          DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*(DXGADAPTERALLOCATION **)(v54 + 48));
          operator delete(v65);
        }
      }
      DXGALLOCATION::~DXGALLOCATION((DXGALLOCATION *)v54);
      ExFreePoolWithTag((PVOID)v54, 0);
      v54 = v55;
    }
    while ( v55 );
  }
  if ( v49 )
  {
    LODWORD(v151[3]) = *(_QWORD *)v6 != 0LL;
    v51 = v148;
    v151[2] = v148;
    if ( LODWORD(v151[0]) )
    {
      v50 = v146;
      v151[1] = v146;
    }
    else
    {
      v151[1] = 0LL;
      if ( !v148 )
        goto LABEL_104;
    }
    v66 = *((_QWORD *)this + 2);
    if ( !*(_BYTE *)(*(_QWORD *)(v66 + 16) + 186LL) )
    {
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v148, &EventProfilerEnter, v52, 5005);
      v67 = PsGetCurrentProcess(v51);
      v69 = PsGetProcessDxgProcess(v67, v68);
      v74 = v69;
      if ( v69 )
      {
        if ( (*(_BYTE *)(v69 + 275) & 2) != 0 )
        {
          v126 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
          if ( v126 )
            v74 = *v126;
        }
      }
      if ( v74 )
        v75 = v74 + 88;
      else
        v75 = 0LL;
      v76 = 0;
      if ( v75 && *(struct _KTHREAD **)(v75 + 8) == KeGetCurrentThread() )
      {
        v127 = WdLogNewEntry5_WdAssertion(v71, v70, v72, v73);
        *(_QWORD *)(v127 + 24) = 1167LL;
        WdLogEvent5_WdAssertion(v127);
      }
      if ( v74 )
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v75, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v128 = *(_DWORD *)(v75 + 16);
            if ( v128 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v77, &EventBlockThread, v78, v128);
          }
          ExAcquirePushLockExclusiveEx(v75, 0LL);
        }
        v76 = 2;
        *(_QWORD *)(v75 + 8) = KeGetCurrentThread();
      }
      DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v66 + 16), 1);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v66 + 16) + 3892LL));
      v83 = KeGetCurrentIrql();
      v84 = 0LL;
      if ( v83 < 2u )
      {
        v85 = KeGetCurrentThread();
        if ( !v85 )
        {
          v129 = WdLogNewEntry5_WdAssertion(v80, v79, v81, v82);
          *(_QWORD *)(v129 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v129);
        }
        v86 = PsGetCurrentProcessSessionId(v80, v79, v81, v82);
        if ( v86
          && (unsigned int)PsGetThreadSessionId(v85) == v86
          && (v130 = PsGetThreadWin32Thread(v85)) != 0
          && *(_QWORD *)v130 )
        {
          v84 = *(_QWORD *)(*(_QWORD *)v130 + 80LL);
          if ( v84 )
          {
            v142 = *(_DWORD *)(v84 + 136);
            goto LABEL_92;
          }
        }
        else
        {
          v84 = 0LL;
        }
      }
      v142 = 0;
LABEL_92:
      DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
        (DXGVALIDATIONPROCESSATTACH *)v155,
        *(struct DXGADAPTER **)(v66 + 16));
      v90 = (*(int (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v66 + 16) + 336LL))(
              *(_QWORD *)(*(_QWORD *)(v66 + 16) + 240LL),
              v151);
      if ( v155[0] )
        KeUnstackDetachProcess(&v156);
      v91 = KeGetCurrentIrql();
      if ( v83 != (_BYTE)v91 )
      {
        v131 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v91, v87, v88);
        v131[3] = 275LL;
        v131[4] = 16LL;
        v131[5] = v66;
        v131[6] = v83;
        v132 = KeGetCurrentIrql();
        v131[7] = v132;
        WdLogEvent5_WdCriticalError(v131);
      }
      if ( v84 && *(_DWORD *)(v84 + 136) != v142 )
      {
        v133 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v91, v87, v88);
        v133[3] = 275LL;
        v133[4] = 25LL;
        v133[5] = *(int *)(v84 + 136);
        v133[6] = v142;
        v133[7] = 0LL;
        WdLogEvent5_WdCriticalError(v133);
      }
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v66 + 16) + 3892LL));
      v92 = (_QWORD *)WdLogNewEntry5_WdTrace(v91, v87, v88, v89);
      v92[3] = v90;
      v92[4] = LODWORD(v151[3]);
      v92[5] = v151[2];
      v92[6] = LODWORD(v151[0]);
      v93 = v151[1];
      if ( v151[1] )
        v94 = *(_QWORD *)v151[1];
      else
        v94 = 0LL;
      v92[7] = v94;
      if ( (_DWORD)v90 )
      {
        v134 = WdLogNewEntry5_WdError(v93, v94);
        *(_QWORD *)(v134 + 24) = v90;
        WdLogEvent5_WdError(v134);
      }
      DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v66 + 16));
      if ( v76 == 2 )
      {
        *(_QWORD *)(v75 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v75, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v51, &EventProfilerExit, v52, 5005);
    }
  }
LABEL_104:
  if ( this != (DXGDEVICE *)-136LL && *((struct _KTHREAD **)this + 18) == KeGetCurrentThread() )
  {
    v135 = WdLogNewEntry5_WdAssertion(v51, v50, v52, v53);
    *(_QWORD *)(v135 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v135);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 136, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v136 = *((_DWORD *)this + 38);
      if ( v136 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v96, &EventBlockThread, v97, v136);
    }
    ExAcquirePushLockExclusiveEx((char *)this + 136, 0LL);
  }
  *((_QWORD *)this + 18) = KeGetCurrentThread();
  if ( --*((_DWORD *)this + 456) < 0 )
  {
    v137 = WdLogNewEntry5_WdAssertion(v96, v95, v97, v98);
    *(_QWORD *)(v137 + 24) = 1127LL;
    WdLogEvent5_WdAssertion(v137);
  }
  if ( !*((_DWORD *)this + 456) )
    KeSetEvent(*((PRKEVENT *)this + 229), 0, 0);
  *((_QWORD *)this + 18) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
  KeLeaveCriticalRegion();
}
