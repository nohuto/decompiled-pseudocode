/*
 * XREFs of ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3450
 * Callers:
 *     DxgkDestroyAllocation @ 0x1C009C1E0 (DxgkDestroyAllocation.c)
 *     DxgkDestroyAllocation2 @ 0x1C00E31F0 (DxgkDestroyAllocation2.c)
 * Callees:
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00E2EC0 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3B00 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00F4D30 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     _lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_ @ 0x1C0150450 (_lambda_de3a9c4ca82130b89abd09a8dda67964_--_lambda_invoker_cdecl_.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocationHelper(
        struct DXGPROCESS *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7,
        char a8)
{
  unsigned int v9; // r13d
  __int64 v10; // r14
  __int64 v11; // rdx
  void *v12; // rcx
  __int64 v13; // r8
  int v14; // r12d
  char *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // edx
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // r14d
  struct _KEVENT *v25; // rbx
  struct _KEVENT *v26; // rbx
  __int64 v27; // rcx
  volatile signed __int64 *v28; // rax
  __int64 v29; // rax
  volatile signed __int64 *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r14
  OUTPUTDUPL_MGR *v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  DXGSESSIONMGR *v40; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v43; // rax
  OUTPUTDUPL_MGR *v44; // rcx
  __int64 v45; // rcx
  struct DXGGLOBAL *Global; // r14
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // r8
  struct OUTPUTDUPL_MGR_INDIRECT *v51; // rbx
  struct OUTPUTDUPL_MGR_INDIRECT *v52; // r14
  struct _KTHREAD **v53; // rbx
  int v54; // eax
  int v55; // eax
  struct DXGADAPTER *v56; // rcx
  DXGADAPTER *v57; // rcx
  unsigned int *v58; // r15
  unsigned int v59; // eax
  unsigned int v60; // r14d
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r13
  bool v66; // zf
  unsigned int v67; // ebx
  int v69; // r9d
  __int64 v70; // rax
  SIZE_T v71; // rax
  SIZE_T v72; // rax
  PVOID v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // r9d
  __int64 v78; // rax
  unsigned __int8 v79; // al
  __int64 v80; // r8
  unsigned __int8 v81; // bl
  unsigned __int8 v82; // bl
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  _QWORD *v88; // rax
  int v89; // eax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  unsigned int v96; // [rsp+68h] [rbp-A0h]
  unsigned int v97; // [rsp+6Ch] [rbp-9Ch]
  int v98; // [rsp+70h] [rbp-98h]
  struct _KTHREAD **v99; // [rsp+78h] [rbp-90h] BYREF
  char v100; // [rsp+80h] [rbp-88h]
  unsigned int v101; // [rsp+88h] [rbp-80h]
  void *v102; // [rsp+90h] [rbp-78h]
  unsigned int *v103; // [rsp+98h] [rbp-70h] BYREF
  struct DXGALLOCATION **v104; // [rsp+A0h] [rbp-68h]
  unsigned int *v105; // [rsp+A8h] [rbp-60h]
  void *v106; // [rsp+B0h] [rbp-58h]
  struct _KTHREAD **v107[2]; // [rsp+D0h] [rbp-38h] BYREF
  DXGADAPTER *v108; // [rsp+E0h] [rbp-28h]
  char v109; // [rsp+E8h] [rbp-20h]
  struct _KTHREAD **v110[2]; // [rsp+F0h] [rbp-18h] BYREF
  struct DXGADAPTER *v111; // [rsp+100h] [rbp-8h]
  char v112; // [rsp+108h] [rbp+0h]
  __int64 v113; // [rsp+110h] [rbp+8h]
  bool v114; // [rsp+118h] [rbp+10h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v115; // [rsp+128h] [rbp+20h]
  struct DXGPROCESS *v116; // [rsp+130h] [rbp+28h]
  _QWORD v117[4]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v118[256]; // [rsp+158h] [rbp+50h] BYREF
  char v119; // [rsp+258h] [rbp+150h] BYREF

  v9 = a5;
  v10 = a2;
  v116 = a1;
  v101 = a3;
  v103 = a4;
  v97 = a5;
  v115 = a7;
  memset(v118, 0, sizeof(v118));
  v105 = (unsigned int *)v118;
  v104 = (struct DXGALLOCATION **)&v119;
  v102 = 0LL;
  v106 = 0LL;
  if ( v101 && a5 )
  {
    v70 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    v67 = -1073741811;
    *(_QWORD *)(v70 + 24) = v10;
    *(_QWORD *)(v70 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v70);
    goto LABEL_91;
  }
  v96 = a5;
  v14 = 1;
  if ( a5 >= 0x41 )
  {
    v71 = 4LL * a5;
    if ( !is_mul_ok(a5, 4uLL) )
      v71 = -1LL;
    v102 = operator new[](v71, 0x4B677844u, PagedPool);
    v72 = 8LL * a5;
    if ( !is_mul_ok(a5, 8uLL) )
      v72 = -1LL;
    v73 = operator new[](v72, 0x4B677844u, PagedPool);
    v106 = v73;
    if ( !g_DxgkDestroyAllocationFailMemoryAlloc && (v12 = v102) != 0LL && v73 )
    {
      v104 = (struct DXGALLOCATION **)v73;
      v105 = (unsigned int *)v102;
    }
    else
    {
      v75 = WdLogNewEntry5_WdEvent(v12, v74);
      *(_QWORD *)(v75 + 24) = 9569LL;
      WdLogEvent5_WdEvent(v75);
      v9 = 64;
      v97 = 64;
    }
  }
  v15 = (char *)a1 + 208;
  if ( a1 != (struct DXGPROCESS *)-208LL && *((struct _KTHREAD **)a1 + 27) == KeGetCurrentThread() )
  {
    v76 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v76 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v76);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a1 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v77 = *((_DWORD *)a1 + 56);
      if ( v77 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v16, &EventBlockThread, v17, v77);
    }
    ExAcquirePushLockSharedEx((char *)a1 + 208, 0LL);
  }
  v18 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v18 < *((_DWORD *)a1 + 62)
    && (v19 = *((_QWORD *)a1 + 29),
        v20 = *(_DWORD *)(v19 + 16 * v18 + 8),
        (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60))
    && (v20 & 0x2000) == 0
    && (v20 & 0x1F) == 3 )
  {
    v21 = *(_QWORD *)(v19 + 16LL * (unsigned int)v18);
    if ( v21 )
      _InterlockedIncrement64((volatile signed __int64 *)(v21 + 64));
  }
  else
  {
    v21 = 0LL;
  }
  ExReleasePushLockSharedEx(v15, 0LL);
  KeLeaveCriticalRegion();
  if ( !v21 )
  {
    v78 = WdLogNewEntry5_WdError(v22);
    v67 = -1073741811;
    *(_QWORD *)(v78 + 24) = v10;
    *(_QWORD *)(v78 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v78);
    goto LABEL_91;
  }
  v23 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
  if ( *(int *)(v23 + 2104) >= 0x2000 || *(_BYTE *)(v23 + 2396) )
    v24 = *((_DWORD *)DXGGLOBAL::GetGlobal(v23) + 223);
  else
    v24 = 0;
  v25 = *(struct _KEVENT **)(v21 + 16);
  v98 = v24;
  if ( *(_DWORD *)(v21 + 328) == 2 )
  {
    v26 = v25 + 4;
    if ( KeReadStateEvent(v26) )
      goto LABEL_18;
  }
  else
  {
    v26 = v25 + 3;
    if ( KeReadStateEvent(v26) )
      goto LABEL_18;
  }
  KeWaitForSingleObject(v26, Executive, 0, 0, 0LL);
LABEL_18:
  KeEnterCriticalRegion();
  if ( !v24 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 104), 0) )
      goto LABEL_20;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 96LL));
    v79 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
    v81 = v79;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v80, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 104), 1u);
    if ( v81 )
      goto LABEL_135;
    goto LABEL_136;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v21 + 112, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 96LL));
    v82 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v21 + 112));
    if ( v82 )
LABEL_135:
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
LABEL_136:
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_20:
  v27 = *(_QWORD *)(v21 + 16);
  v28 = *(volatile signed __int64 **)(v27 + 16);
  v108 = (DXGADAPTER *)v28;
  v109 = 0;
  if ( v28 )
  {
    _InterlockedIncrement64(v28 + 3);
    v27 = *(_QWORD *)(v21 + 16);
    v107[1] = (struct _KTHREAD **)-1LL;
  }
  v29 = *(_QWORD *)(v21 + 1688);
  if ( v29 )
    v30 = *(volatile signed __int64 **)(v21 + 1688);
  else
    v30 = *(volatile signed __int64 **)(v27 + 16);
  v111 = (struct DXGADAPTER *)v30;
  v112 = 0;
  if ( v30 )
  {
    _InterlockedIncrement64(v30 + 3);
    v27 = *(_QWORD *)(v21 + 16);
    v29 = *(_QWORD *)(v21 + 1688);
    v110[1] = (struct _KTHREAD **)-1LL;
  }
  v113 = v21;
  v114 = v29 != *(_QWORD *)(v27 + 16) && v29;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v108 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v108 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v31, &EventBlockThread, v32, 72);
      KeWaitForSingleObject((char *)v108 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v108);
  }
  v109 = 1;
  if ( *(_DWORD *)(v113 + 424) == 1 )
  {
    if ( !v114 || (COREACCESS::AcquireShared((DXGADAPTER **)v110), *((_DWORD *)v111 + 44) == 1) )
    {
      v33 = *(_QWORD *)(v21 + 1688);
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 2456);
        v35 = *(OUTPUTDUPL_MGR **)(v34 + 104);
        if ( v35 )
        {
          if ( *(_QWORD *)v35 )
          {
            v36 = *(_QWORD *)(*(_QWORD *)v35 + 16LL);
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v36 + 160)
              && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v36 + 144)) )
            {
              v83 = WdLogNewEntry5_WdAssertion(v37);
              *(_QWORD *)(v83 + 24) = 1474LL;
              WdLogEvent5_WdAssertion(v83);
            }
          }
          if ( !*(_DWORD *)(v21 + 72) )
            ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v21 + 104));
          OUTPUTDUPL_MGR::ProcessPendingDestroy(v35, (struct DXGDEVICE *)v21, 0);
          v40 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v38) + 74);
          if ( v40 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v39);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v40,
                                               CurrentProcessSessionId);
          }
          else
          {
            SessionDataForSpecifiedSession = 0LL;
          }
          if ( SessionDataForSpecifiedSession )
          {
            v43 = *((_QWORD *)SessionDataForSpecifiedSession + 1);
            if ( v43 )
            {
              v44 = *(OUTPUTDUPL_MGR **)(v43 + 40);
              if ( v44 )
                OUTPUTDUPL_MGR::ProcessPendingDestroy(v44, (struct DXGDEVICE *)v21, 0);
            }
            else
            {
              v85 = WdLogNewEntry5_WdError(v39);
              *(_QWORD *)(v85 + 24) = 3666LL;
              WdLogEvent5_WdError(v85);
            }
          }
          else
          {
            v84 = WdLogNewEntry5_WdError(v39);
            *(_QWORD *)(v84 + 24) = 3659LL;
            WdLogEvent5_WdError(v84);
          }
        }
        v45 = *(_QWORD *)(*(_QWORD *)(v34 + 16) + 268LL);
        v117[1] = lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_;
        v117[0] = v45;
        v117[2] = v21;
        Global = DXGGLOBAL::GetGlobal(v45);
        v100 = 0;
        v99 = (struct _KTHREAD **)((char *)Global + 1072);
        if ( Global == (struct DXGGLOBAL *)-1072LL )
        {
          v86 = WdLogNewEntry5_WdAssertion(0LL);
          *(_QWORD *)(v86 + 24) = 508LL;
          WdLogEvent5_WdAssertion(v86);
        }
        CurrentThread = KeGetCurrentThread();
        if ( v99[1] == CurrentThread )
        {
          v87 = WdLogNewEntry5_WdAssertion(CurrentThread);
          *(_QWORD *)(v87 + 24) = 515LL;
          WdLogEvent5_WdAssertion(v87);
        }
        if ( v100 )
        {
          v88 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
          v88[5] = &v99;
          v88[3] = 275LL;
          v88[4] = 4LL;
          v88[6] = 0LL;
          v88[7] = 0LL;
          WdLogEvent5_WdCriticalError(v88);
        }
        v48 = v99;
        KeEnterCriticalRegion();
        if ( v48[1] == KeGetCurrentThread() )
        {
          v89 = *((_DWORD *)v48 + 6);
          if ( v89 <= 0 )
          {
            v90 = WdLogNewEntry5_WdAssertion(v49);
            *(_QWORD *)(v90 + 24) = 406LL;
            WdLogEvent5_WdAssertion(v90);
            v89 = *((_DWORD *)v48 + 6);
          }
          v14 = v89 + 1;
        }
        else
        {
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v48 + 2, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v69 = *((_DWORD *)v48 + 7);
              if ( v69 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v49, &EventBlockThread, v50, v69);
            }
            _InterlockedIncrement64((volatile signed __int64 *)v48);
            ExAcquirePushLockExclusiveEx(v48 + 2, 0LL);
          }
          if ( v48[1] )
          {
            v91 = WdLogNewEntry5_WdAssertion(v49);
            *(_QWORD *)(v91 + 24) = 430LL;
            WdLogEvent5_WdAssertion(v91);
          }
          if ( *((_DWORD *)v48 + 6) )
          {
            v92 = WdLogNewEntry5_WdAssertion(v49);
            *(_QWORD *)(v92 + 24) = 431LL;
            WdLogEvent5_WdAssertion(v92);
          }
          v48[1] = KeGetCurrentThread();
        }
        *((_DWORD *)v48 + 6) = v14;
        v51 = (struct DXGGLOBAL *)((char *)Global + 1112);
        v52 = (struct OUTPUTDUPL_MGR_INDIRECT *)*((_QWORD *)Global + 139);
        v100 = 1;
        while ( v52 != v51 && v52 )
        {
          if ( lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_(v52, v117) < 0 )
          {
            DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v99);
            goto LABEL_70;
          }
          v52 = *(struct OUTPUTDUPL_MGR_INDIRECT **)v52;
        }
        if ( v100 )
        {
          v53 = v99;
          v100 = 0;
          if ( v99[1] != KeGetCurrentThread() )
          {
            v93 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v49);
            v93[3] = 275LL;
            v93[4] = 4LL;
            v93[5] = v53;
            v93[6] = 0LL;
            v93[7] = 0LL;
            WdLogEvent5_WdCriticalError(v93);
          }
          v54 = *((_DWORD *)v53 + 6);
          if ( v54 <= 0 )
          {
            v94 = WdLogNewEntry5_WdAssertion(v49);
            *(_QWORD *)(v94 + 24) = 450LL;
            WdLogEvent5_WdAssertion(v94);
            v54 = *((_DWORD *)v53 + 6);
          }
          v55 = v54 - 1;
          *((_DWORD *)v53 + 6) = v55;
          if ( !v55 )
          {
            v53[1] = 0LL;
            ExReleasePushLockExclusiveEx(v53 + 2, 0LL);
          }
          KeLeaveCriticalRegion();
        }
      }
    }
    else
    {
      COREACCESS::Release(v110);
      COREACCESS::Release(v107);
    }
  }
  else
  {
    COREACCESS::Release(v107);
  }
LABEL_70:
  v56 = v111;
  if ( v111 )
  {
    if ( v112 )
    {
      COREACCESS::Release(v110);
      v56 = v111;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v56 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v56 + 2), v56);
  }
  v57 = v108;
  if ( v108 )
  {
    if ( v109 )
    {
      v109 = 0;
      v57 = v108;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v108 + 20) )
      {
        DXGADAPTER::ReleaseCoreResource(v108);
        v57 = v108;
      }
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v57 + 2), v57);
  }
  v58 = v103;
  v59 = a5;
  while ( 1 )
  {
    v60 = v59 < v9 ? v59 : v9;
    v61 = DxgkDestroyAllocationInternal(
            v116,
            (struct DXGDEVICE *)v21,
            v105,
            v104,
            v101,
            (const unsigned int **)&v103,
            v60,
            a6,
            v58,
            v115,
            a8);
    v65 = v61;
    if ( v61 < 0 )
      break;
    v9 = v97;
    v58 += v60;
    v66 = v96 == v60;
    v59 = v96 - v60;
    v96 -= v60;
    if ( v66 )
    {
      v67 = 0;
      goto LABEL_87;
    }
  }
  v95 = WdLogNewEntry5_WdWarning(v63, v62, v64);
  *(_QWORD *)(v95 + 24) = v65;
  WdLogEvent5_WdWarning(v95);
  v67 = v65;
LABEL_87:
  if ( v98 )
    ExReleasePushLockSharedEx(v21 + 112, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v21 + 104));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v21 + 16), (struct DXGDEVICE *)v21);
LABEL_91:
  if ( v106 )
    operator delete[](v106);
  if ( v102 )
    operator delete[](v102);
  return v67;
}
