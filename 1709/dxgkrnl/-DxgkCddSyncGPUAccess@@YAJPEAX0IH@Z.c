/*
 * XREFs of ?DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z @ 0x1C00EE160
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0084890 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddSyncGPUAccess(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct DXGPROCESS *Current; // r15
  __int64 v6; // r12
  __int64 v7; // rax
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // esi
  char *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // r9
  int v22; // r8d
  struct _EX_RUNDOWN_REF *v23; // rdx
  struct DXGALLOCATION *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v29; // rax
  int CurrentProcessSessionId; // r15d
  __int64 *ThreadWin32Thread; // rax
  __int64 v32; // rax
  struct _KTHREAD *v33; // rbx
  __int64 v34; // rax
  int v35; // r15d
  __int64 v36; // rax
  __int64 v37; // rbx
  _QWORD *v38; // rax
  struct _EX_RUNDOWN_REF *v39; // rbx
  __int64 v40; // rax
  unsigned int v41; // edi
  __int64 v42; // rcx
  ULONG_PTR Count; // r13
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  _QWORD *v47; // rax
  struct _KEVENT *v48; // rdi
  unsigned __int8 v49; // di
  __int64 v50; // r8
  __int64 v51; // r12
  __int64 v52; // rdx
  __int64 v53; // r8
  ULONG_PTR v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  _QWORD *v59; // rax
  __int64 v60; // rax
  unsigned int v61; // edi
  _QWORD *v62; // rax
  unsigned int *v63; // rcx
  DXGADAPTER *v64; // rcx
  struct _KTHREAD *v65; // rbx
  __int64 v66; // rax
  int v67; // r14d
  __int64 *v68; // rax
  __int64 v69; // rax
  struct _KTHREAD *v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rdx
  int v73; // r14d
  __int64 v74; // rax
  __int64 v75; // rbx
  _QWORD *v76; // rax
  __int64 v77; // rax
  struct DXGADAPTER *v79; // [rsp+38h] [rbp-D0h]
  struct _EX_RUNDOWN_REF *v80; // [rsp+40h] [rbp-C8h] BYREF
  DXGADAPTER *v81[2]; // [rsp+50h] [rbp-B8h] BYREF
  DXGADAPTER *v82; // [rsp+60h] [rbp-A8h]
  char v83; // [rsp+68h] [rbp-A0h]
  _QWORD v84[2]; // [rsp+70h] [rbp-98h] BYREF
  unsigned int *v85; // [rsp+80h] [rbp-88h]
  char v86; // [rsp+88h] [rbp-80h]
  struct _EX_RUNDOWN_REF *v87; // [rsp+98h] [rbp-70h] BYREF
  char v88[8]; // [rsp+A0h] [rbp-68h] BYREF
  char v89; // [rsp+A8h] [rbp-60h]
  char v90[8]; // [rsp+B8h] [rbp-50h] BYREF
  char *v91; // [rsp+C0h] [rbp-48h]
  int v92; // [rsp+C8h] [rbp-40h]
  __int64 v93; // [rsp+128h] [rbp+20h]
  char v94; // [rsp+130h] [rbp+28h]
  char v95; // [rsp+138h] [rbp+30h]

  v95 = a3;
  v93 = a1;
  Current = (struct DXGPROCESS *)a1;
  v6 = (unsigned int)a3;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 3016);
  if ( !Current )
  {
    Current = DXGPROCESS::GetCurrent(a1, a2);
    v93 = (__int64)Current;
  }
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdError(a1);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
LABEL_127:
    WdLogEvent5_WdError(v7);
    v14 = v8;
    goto LABEL_128;
  }
  v9 = *(_QWORD *)(a2 + 2304);
  if ( v9 && !*(_DWORD *)(v9 + 80) )
  {
    v10 = WdLogNewEntry5_WdError(a1);
    v8 = -1073741811;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v10);
LABEL_126:
    v7 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 32) = v8;
    goto LABEL_127;
  }
  if ( *(_QWORD *)(a2 + 2312) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a2 + 24));
    v12 = a2;
    v79 = (struct DXGADAPTER *)a2;
  }
  else
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v88);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v88);
    v12 = *((_QWORD *)DXGGLOBAL::GetGlobal(v13) + 76);
    if ( !v12 )
    {
      v77 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v77 + 24) = a2;
      *(_QWORD *)(v77 + 32) = -1073741637LL;
      WdLogEvent5_WdError(v77);
      if ( v89 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v88);
      v8 = -1073741637;
      goto LABEL_126;
    }
    _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24));
    v79 = (struct DXGADAPTER *)v12;
    if ( v89 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v88);
  }
  v14 = 0;
  if ( *(_BYTE *)(v12 + 185) )
  {
LABEL_128:
    v41 = v14;
    goto LABEL_129;
  }
  v15 = (char *)Current + 200;
  v80 = 0LL;
  v91 = (char *)Current + 200;
  if ( Current != (struct DXGPROCESS *)-200LL && *((struct _KTHREAD **)Current + 26) == KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v16 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)Current + 200, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v19 = *((_DWORD *)Current + 54);
      if ( v19 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v17, &EventBlockThread, v18, v19);
    }
    ExAcquirePushLockSharedEx((char *)Current + 200, 0LL);
  }
  v92 = 1;
  v20 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v20 < *((_DWORD *)Current + 60)
    && (v21 = *((_QWORD *)Current + 28),
        v22 = *(_DWORD *)(v21 + 16 * v20 + 8),
        (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60))
    && (v22 & 0x2000) == 0
    && (v22 & 0x1F) != 0
    && (*(_BYTE *)(v21 + 16LL * (unsigned int)v20 + 8) & 0x1F) == 5 )
  {
    v23 = *(struct _EX_RUNDOWN_REF **)(v21 + 16LL * (unsigned int)v20);
  }
  else
  {
    v23 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v87, v23);
  DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v80, (struct DXGALLOCATION **)&v87);
  v24 = (struct DXGALLOCATION *)v87;
  if ( v87 )
    ExReleaseRundownProtection(v87 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v24) + 203) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v29 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v29 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v29);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v26);
    if ( CurrentProcessSessionId )
    {
      if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v32 = *ThreadWin32Thread;
          if ( v32 )
          {
            if ( *(_QWORD *)(v32 + 80) )
            {
              v33 = KeGetCurrentThread();
              if ( !v33 )
              {
                v34 = WdLogNewEntry5_WdAssertion(v26);
                *(_QWORD *)(v34 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v34);
              }
              v35 = PsGetCurrentProcessSessionId(v26);
              if ( v35
                && (unsigned int)PsGetThreadSessionId(v33) == v35
                && !IsThreadCrossSessionAttached()
                && (v36 = PsGetThreadWin32Thread(v33)) != 0
                && *(_QWORD *)v36 )
              {
                v37 = *(_QWORD *)(*(_QWORD *)v36 + 80LL);
              }
              else
              {
                v37 = 0LL;
              }
              if ( *(_DWORD *)(v37 + 136) )
              {
                v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v25, v27);
                v38[3] = 275LL;
                v38[4] = 25LL;
                v38[5] = *(int *)(v37 + 136);
                v38[6] = 0LL;
                v38[7] = 0LL;
                WdLogEvent5_WdCriticalError(v38);
              }
            }
          }
        }
      }
    }
  }
  v39 = v80;
  if ( v80 )
  {
    Count = v80[1].Count;
    ExReleasePushLockSharedEx(v15, 0LL);
    KeLeaveCriticalRegion();
    if ( !v39[3].Count )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46);
      v41 = -1073741811;
      v47[3] = v6;
      v47[4] = v39;
      v47[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v47);
      goto LABEL_101;
    }
    v48 = (struct _KEVENT *)(*(_QWORD *)(Count + 16) + 96LL);
    v94 = 1;
    if ( !KeReadStateEvent(v48) )
      KeWaitForSingleObject(v48, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Count + 104), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL) + 96LL));
      v49 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(Count + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v50, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Count + 104), 1u);
      if ( v49 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(Count + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v51 = *(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL);
    _InterlockedIncrement64((volatile signed __int64 *)(v51 + 24));
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v51 + 120, 0LL);
    v82 = v79;
    v83 = 0;
    _InterlockedIncrement64((volatile signed __int64 *)v79 + 3);
    v81[1] = (DXGADAPTER *)-1LL;
    v85 = (unsigned int *)v79;
    v86 = 0;
    _InterlockedIncrement64((volatile signed __int64 *)v79 + 3);
    v84[1] = -1LL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v79 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v79 + 2), v79);
    COREACCESS::AcquireShared((COREACCESS *)v81);
    v54 = *((unsigned int *)v82 + 44);
    if ( (_DWORD)v54 == 1 )
    {
      if ( v82 == (DXGADAPTER *)v85 || (COREACCESS::AcquireShared((COREACCESS *)v84), v54 = v85[44], (_DWORD)v54 == 1) )
      {
        if ( !*((_QWORD *)v79 + 289) )
        {
          v60 = WdLogNewEntry5_WdAssertion(v54);
          *(_QWORD *)(v60 + 24) = 2059LL;
          WdLogEvent5_WdAssertion(v60);
        }
        v61 = 0;
        if ( a4 )
        {
          v61 = 1;
          v54 = v80[6].Count;
          *(_DWORD *)(v54 + 4) &= ~0x400u;
        }
        if ( v82 != (DXGADAPTER *)v85 )
          COREACCESS::Release((COREACCESS *)v84);
        if ( !v83 )
        {
          v62 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v54, v52, v53);
          v62[5] = v81;
          v62[3] = 275LL;
          v62[4] = 4LL;
          v62[6] = 0LL;
          v62[7] = 0LL;
          WdLogEvent5_WdCriticalError(v62);
        }
        v83 = 0;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v82 + 20) )
          DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v82);
        ExReleaseResourceLite(*(PERESOURCE *)(Count + 104));
        KeLeaveCriticalRegion();
        v94 = 0;
        v41 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v79 + 289) + 528LL)
                                                                                       + 8LL)
                                                                           + 608LL))(
                *(_QWORD *)(*((_QWORD *)v79 + 289) + 536LL),
                v39[3].Count,
                v95 & 0x3F,
                v61);
        goto LABEL_86;
      }
      COREACCESS::Release((COREACCESS *)v84);
    }
    COREACCESS::Release((COREACCESS *)v81);
    v59 = (_QWORD *)WdLogNewEntry5_WdEvent(v56, v55, v57, v58);
    v59[5] = v93;
    v59[3] = -1073741130LL;
    v59[4] = a2;
    WdLogEvent5_WdEvent(v59);
    v41 = -1073741130;
LABEL_86:
    v63 = v85;
    if ( v85 )
    {
      if ( v86 )
      {
        COREACCESS::Release((COREACCESS *)v84);
        v63 = v85;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v63 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v63 + 2), (struct DXGADAPTER *)v63);
    }
    v64 = v82;
    if ( v82 )
    {
      if ( v83 )
      {
        COREACCESS::Release((COREACCESS *)v81);
        v64 = v82;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v64 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v64 + 2), v64);
    }
    ExReleasePushLockSharedEx(v51 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v51 + 16), (struct DXGADAPTER *)v51);
    if ( v94 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(Count + 104));
      KeLeaveCriticalRegion();
    }
    v39 = v80;
    goto LABEL_101;
  }
  v40 = WdLogNewEntry5_WdWarning(v26, v25, v27);
  v41 = -1073741811;
  *(_QWORD *)(v40 + 24) = v6;
  *(_QWORD *)(v40 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v40);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v90);
LABEL_101:
  if ( v39 )
    ExReleaseRundownProtection(v39 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v42) + 203) )
  {
    v65 = KeGetCurrentThread();
    if ( !v65 )
    {
      v66 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v66 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v66);
    }
    v67 = PsGetCurrentProcessSessionId(a1);
    if ( v67 )
    {
      if ( (unsigned int)PsGetThreadSessionId(v65) == v67 && !IsThreadCrossSessionAttached() )
      {
        v68 = (__int64 *)PsGetThreadWin32Thread(v65);
        if ( v68 )
        {
          v69 = *v68;
          if ( v69 )
          {
            if ( *(_QWORD *)(v69 + 80) )
            {
              v70 = KeGetCurrentThread();
              if ( !v70 )
              {
                v71 = WdLogNewEntry5_WdAssertion(a1);
                *(_QWORD *)(v71 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v71);
              }
              v73 = PsGetCurrentProcessSessionId(a1);
              if ( v73
                && (unsigned int)PsGetThreadSessionId(v70) == v73
                && !IsThreadCrossSessionAttached()
                && (v74 = PsGetThreadWin32Thread(v70)) != 0
                && *(_QWORD *)v74 )
              {
                v75 = *(_QWORD *)(*(_QWORD *)v74 + 80LL);
              }
              else
              {
                v75 = 0LL;
              }
              if ( *(_DWORD *)(v75 + 136) )
              {
                v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v72, a3);
                v76[3] = 275LL;
                v76[4] = 25LL;
                v76[5] = *(int *)(v75 + 136);
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
LABEL_129:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerExit, a3, 3016);
  return v41;
}
