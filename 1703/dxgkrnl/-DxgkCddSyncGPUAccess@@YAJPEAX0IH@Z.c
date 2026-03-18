/*
 * XREFs of ?DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z @ 0x1C0094ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00D3290 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddSyncGPUAccess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGPROCESS *Current; // r13
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // r9
  int v13; // r8d
  struct DXGALLOCATION *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGALLOCATION *v18; // rcx
  _DWORD *v19; // rax
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // r14d
  __int64 *ThreadWin32Thread; // rax
  __int64 v23; // rax
  struct _KTHREAD *v24; // rbx
  int v25; // r14d
  __int64 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  struct _EX_RUNDOWN_REF *v29; // rbx
  ULONG_PTR Count; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct _KEVENT *v35; // rdi
  volatile signed __int64 *v36; // r14
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  ULONG_PTR v40; // rcx
  unsigned int v41; // r13d
  __int64 v42; // rax
  ULONG_PTR v43; // rdx
  unsigned int v44; // r15d
  struct DXGADAPTER *v45; // rcx
  DXGADAPTER *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r9
  _DWORD *v49; // rax
  struct _KTHREAD *v50; // rbx
  int v51; // edi
  __int64 *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r9
  __int64 v55; // rax
  struct _KTHREAD *v56; // rbx
  __int64 v57; // rdx
  int v58; // edi
  __int64 *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rbx
  unsigned __int8 v63; // di
  __int64 v64; // r8
  __int64 v65; // rax
  int v66; // r15d
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  unsigned int v70; // eax
  __int64 v71; // rax
  int v72; // r9d
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rax
  __int64 v87; // r8
  __int64 v88; // r9
  DXGADAPTER *v89[2]; // [rsp+40h] [rbp-C8h] BYREF
  DXGADAPTER *v90; // [rsp+50h] [rbp-B8h]
  char v91; // [rsp+58h] [rbp-B0h]
  struct DXGADAPTER *v92[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct DXGADAPTER *v93; // [rsp+70h] [rbp-98h]
  char v94; // [rsp+78h] [rbp-90h]
  struct DXGALLOCATION *v95[2]; // [rsp+88h] [rbp-80h] BYREF
  char v96[8]; // [rsp+98h] [rbp-70h] BYREF
  char v97; // [rsp+A0h] [rbp-68h]
  char *v98; // [rsp+A8h] [rbp-60h]
  char v99; // [rsp+B8h] [rbp-50h]
  char v100[8]; // [rsp+C0h] [rbp-48h] BYREF
  char *v101; // [rsp+C8h] [rbp-40h]
  int v102; // [rsp+D0h] [rbp-38h]
  struct DXGADAPTER *v103; // [rsp+E0h] [rbp-28h]
  struct DXGADAPTER *v104; // [rsp+138h] [rbp+30h]
  struct _EX_RUNDOWN_REF *v105; // [rsp+140h] [rbp+38h] BYREF
  int v106; // [rsp+150h] [rbp+48h]

  v106 = a4;
  Current = (struct DXGPROCESS *)a1;
  v6 = (unsigned int)a3;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3016);
  if ( !Current )
    Current = DXGPROCESS::GetCurrent();
  if ( !a2 )
  {
    v65 = WdLogNewEntry5_WdError(a1, a2);
    v66 = -1073741811;
    *(_QWORD *)(v65 + 24) = -1073741811LL;
LABEL_130:
    WdLogEvent5_WdError(v65);
    v70 = v66;
    goto LABEL_131;
  }
  v7 = *(_QWORD *)(a2 + 2280);
  if ( v7 && !*(_DWORD *)(v7 + 80) )
  {
    v67 = WdLogNewEntry5_WdError(a1, a2);
    v66 = -1073741811;
    *(_QWORD *)(v67 + 24) = 0LL;
    *(_QWORD *)(v67 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v67);
LABEL_129:
    v65 = WdLogNewEntry5_WdError(v69, v68);
    *(_QWORD *)(v65 + 24) = a2;
    *(_QWORD *)(v65 + 32) = v66;
    goto LABEL_130;
  }
  if ( *(_QWORD *)(a2 + 2288) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a2 + 24));
    v8 = a2;
    v104 = (struct DXGADAPTER *)a2;
    goto LABEL_9;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v96);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v96);
  v8 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 76);
  if ( !v8 )
  {
    v86 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v86 + 24) = a2;
    *(_QWORD *)(v86 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v86);
    if ( v97 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v96, v68, v87, v88);
    v66 = -1073741637;
    goto LABEL_129;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v8 + 24));
  v104 = (struct DXGADAPTER *)v8;
  if ( v97 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v96, a2, a3, a4);
LABEL_9:
  if ( *(_BYTE *)(v8 + 186) )
  {
    v70 = 0;
LABEL_131:
    v44 = v70;
    goto LABEL_97;
  }
  v105 = 0LL;
  v101 = (char *)Current + 168;
  if ( Current != (struct DXGPROCESS *)-168LL && *((struct _KTHREAD **)Current + 22) == KeGetCurrentThread() )
  {
    v71 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v71 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v71);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)Current + 168, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v72 = *((_DWORD *)Current + 46);
      if ( v72 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v9, &EventBlockThread, v10, v72);
    }
    ExAcquirePushLockSharedEx((char *)Current + 168, 0LL);
  }
  v102 = 1;
  v11 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( v11 < *((_DWORD *)Current + 52)
    && (v12 = *((_QWORD *)Current + 24),
        v13 = *(_DWORD *)(v12 + 16LL * v11 + 8),
        (((unsigned int)v6 >> 26) & 0x30) == (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x30))
    && (v13 & 0x1000) == 0
    && (v13 & 0xF) != 0
    && (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0xF) == 5 )
  {
    v14 = *(struct DXGALLOCATION **)(v12 + 16LL * v11);
  }
  else
  {
    v14 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v95, v14);
  DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v105, v95);
  v18 = v95[0];
  if ( v95[0] )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v95[0] + 11);
  v19 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v73 = WdLogNewEntry5_WdAssertion(v18, v15, v16, v17);
    *(_QWORD *)(v73 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v73);
    v19 = DXGGLOBAL::m_pGlobal;
  }
  if ( v19[203] )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v74 = WdLogNewEntry5_WdAssertion(v18, v15, v16, v17);
      *(_QWORD *)(v74 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v74);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    if ( CurrentProcessSessionId )
    {
      if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v23 = *ThreadWin32Thread;
          if ( v23 )
          {
            if ( *(_QWORD *)(v23 + 80) )
            {
              v24 = KeGetCurrentThread();
              if ( !v24 )
              {
                v75 = WdLogNewEntry5_WdAssertion(v18, v15, v16, v17);
                *(_QWORD *)(v75 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v75);
              }
              v25 = PsGetCurrentProcessSessionId();
              if ( v25
                && (unsigned int)PsGetThreadSessionId(v24) == v25
                && (v26 = (__int64 *)PsGetThreadWin32Thread(v24)) != 0LL
                && (v27 = *v26) != 0 )
              {
                v28 = *(_QWORD *)(v27 + 80);
              }
              else
              {
                v28 = 0LL;
              }
              if ( *(_DWORD *)(v28 + 136) )
              {
                v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v15, v16);
                v76[3] = 275LL;
                v76[4] = 25LL;
                v76[5] = *(int *)(v28 + 136);
                v76[6] = 0LL;
                v76[7] = 0LL;
                WdLogEvent5_WdCriticalError(v76);
              }
            }
          }
        }
      }
    }
  }
  v29 = v105;
  if ( v105 )
  {
    Count = v105[1].Count;
    ExReleasePushLockSharedEx((char *)Current + 168, 0LL);
    KeLeaveCriticalRegion();
    if ( v29[3].Count )
    {
      v35 = (struct _KEVENT *)(*(_QWORD *)(Count + 16) + 96LL);
      v99 = 1;
      if ( !KeReadStateEvent(v35) )
        KeWaitForSingleObject(v35, Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Count + 104), 0) )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL) + 96LL));
        v63 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(Count + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v64, 40);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Count + 104), 1u);
        if ( v63 )
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(Count + 16) + 16LL));
        ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL) + 96LL, 0LL);
        KeLeaveCriticalRegion();
      }
      v36 = *(volatile signed __int64 **)(*(_QWORD *)(Count + 16) + 16LL);
      v103 = (struct DXGADAPTER *)v36;
      _InterlockedIncrement64(v36 + 3);
      KeEnterCriticalRegion();
      v98 = (char *)v103 + 120;
      ExAcquirePushLockSharedEx((char *)v103 + 120, 0LL);
      v90 = v104;
      v91 = 0;
      _InterlockedIncrement64((volatile signed __int64 *)v104 + 3);
      v89[1] = (DXGADAPTER *)-1LL;
      v93 = v104;
      v94 = 0;
      _InterlockedIncrement64((volatile signed __int64 *)v104 + 3);
      v92[1] = (struct DXGADAPTER *)-1LL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v104 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v104 + 2), v104);
      COREACCESS::AcquireShared((COREACCESS *)v89);
      v40 = *((unsigned int *)v90 + 44);
      if ( (_DWORD)v40 == 1 )
      {
        if ( v90 == v93
          || (COREACCESS::AcquireShared((COREACCESS *)v92), v40 = *((unsigned int *)v93 + 44), (_DWORD)v40 == 1) )
        {
          if ( !*((_QWORD *)v104 + 286) )
          {
            v80 = WdLogNewEntry5_WdAssertion(v40, v37, v38, v39);
            *(_QWORD *)(v80 + 24) = 2024LL;
            WdLogEvent5_WdAssertion(v80);
          }
          v41 = 0;
          if ( v106 )
          {
            v41 = 1;
            v40 = v105[6].Count;
            *(_DWORD *)(v40 + 4) &= ~0x400u;
          }
          if ( v90 != v93 )
            COREACCESS::Release((COREACCESS *)v92);
          if ( !v91 )
          {
            v81 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v37, v38);
            v81[5] = v89;
            v81[3] = 275LL;
            v81[4] = 4LL;
            v81[6] = 0LL;
            v81[7] = 0LL;
            WdLogEvent5_WdCriticalError(v81);
          }
          v91 = 0;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v90 + 20) )
            DXGADAPTER::ReleaseCoreResource(v90);
          ExReleaseResourceLite(*(PERESOURCE *)(Count + 104));
          KeLeaveCriticalRegion();
          v42 = *((_QWORD *)v104 + 286);
          v43 = v29[3].Count;
          v99 = 0;
          v44 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v42 + 432) + 8LL)
                                                                              + 608LL))(
                  *(_QWORD *)(v42 + 440),
                  v43,
                  v6 & 0x3F,
                  v41);
          goto LABEL_61;
        }
        COREACCESS::Release((COREACCESS *)v92);
      }
      COREACCESS::Release((COREACCESS *)v89);
      v79 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v79[3] = -1073741130LL;
      v79[4] = a2;
      v79[5] = Current;
      WdLogEvent5_WdEvent(v79);
      v44 = -1073741130;
LABEL_61:
      v45 = v93;
      if ( v93 )
      {
        if ( v94 )
        {
          COREACCESS::Release((COREACCESS *)v92);
          v45 = v93;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v45 + 2), v45);
      }
      v46 = v90;
      if ( v90 )
      {
        if ( v91 )
        {
          COREACCESS::Release((COREACCESS *)v89);
          v46 = v90;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v46 + 2), v46);
      }
      ExReleasePushLockSharedEx(v98, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64(v36 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v103 + 2), v103);
      if ( v99 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(Count + 104));
        KeLeaveCriticalRegion();
      }
      v29 = v105;
      goto LABEL_76;
    }
    v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
    v78[3] = v6;
    v44 = -1073741811;
    v78[5] = -1073741811LL;
    v78[4] = v29;
    WdLogEvent5_WdWarning(v78);
  }
  else
  {
    v77 = WdLogNewEntry5_WdWarning(v18, v15, v16, v17);
    *(_QWORD *)(v77 + 24) = v6;
    v44 = -1073741811;
    *(_QWORD *)(v77 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v77);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v100);
  }
LABEL_76:
  if ( v29 )
    ExReleaseRundownProtection(v29 + 11);
  v49 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v82 = WdLogNewEntry5_WdAssertion(a1, v47, a3, v48);
    *(_QWORD *)(v82 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v82);
    v49 = DXGGLOBAL::m_pGlobal;
  }
  if ( v49[203] )
  {
    v50 = KeGetCurrentThread();
    if ( !v50 )
    {
      v83 = WdLogNewEntry5_WdAssertion(a1, v47, a3, v48);
      *(_QWORD *)(v83 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v83);
    }
    v51 = PsGetCurrentProcessSessionId();
    if ( v51 )
    {
      if ( (unsigned int)PsGetThreadSessionId(v50) == v51 )
      {
        v52 = (__int64 *)PsGetThreadWin32Thread(v50);
        if ( v52 )
        {
          v55 = *v52;
          if ( v55 )
          {
            if ( *(_QWORD *)(v55 + 80) )
            {
              v56 = KeGetCurrentThread();
              if ( !v56 )
              {
                v84 = WdLogNewEntry5_WdAssertion(a1, v53, a3, v54);
                *(_QWORD *)(v84 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v84);
              }
              v58 = PsGetCurrentProcessSessionId();
              if ( v58
                && (unsigned int)PsGetThreadSessionId(v56) == v58
                && (v59 = (__int64 *)PsGetThreadWin32Thread(v56)) != 0LL
                && (v60 = *v59) != 0 )
              {
                v61 = *(_QWORD *)(v60 + 80);
              }
              else
              {
                v61 = 0LL;
              }
              if ( *(_DWORD *)(v61 + 136) )
              {
                v85 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v57, a3);
                v85[3] = 275LL;
                v85[4] = 25LL;
                v85[5] = *(int *)(v61 + 136);
                v85[6] = 0LL;
                v85[7] = 0LL;
                WdLogEvent5_WdCriticalError(v85);
              }
            }
          }
        }
      }
    }
  }
LABEL_97:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerExit, a3, 3016);
  return v44;
}
