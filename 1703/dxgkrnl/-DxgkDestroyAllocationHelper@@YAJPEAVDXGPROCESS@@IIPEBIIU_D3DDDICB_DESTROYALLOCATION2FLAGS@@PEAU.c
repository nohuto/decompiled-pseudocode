/*
 * XREFs of ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB320
 * Callers:
 *     DxgkDestroyAllocation2 @ 0x1C00DB120 (DxgkDestroyAllocation2.c)
 *     DxgkDestroyAllocation @ 0x1C017FE30 (DxgkDestroyAllocation.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00D3290 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB900 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C00DCF90 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     _lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_ @ 0x1C016FA80 (_lambda_de3a9c4ca82130b89abd09a8dda67964_--_lambda_invoker_cdecl_.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
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
  PVOID v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // edx
  __int64 v19; // r9
  int v20; // r8d
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  int v27; // ebx
  bool v28; // zf
  struct _KEVENT *v29; // r14
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  volatile signed __int64 *v33; // rcx
  volatile signed __int64 *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rbx
  OUTPUTDUPL_MGR *v40; // rcx
  char *v41; // r14
  __int64 v42; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  int *v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  struct OUTPUTDUPL_MGR_INDIRECT *v49; // rbx
  struct OUTPUTDUPL_MGR_INDIRECT *i; // r14
  int *v51; // rbx
  struct DXGADAPTER *v52; // rcx
  DXGADAPTER *v53; // rcx
  unsigned int *v54; // r15
  unsigned int v55; // eax
  unsigned int v56; // r14d
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r13
  unsigned int v63; // ebx
  __int64 v65; // rax
  SIZE_T v66; // rax
  SIZE_T v67; // rax
  PVOID v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  int v71; // r9d
  __int64 v72; // rax
  struct _KEVENT *v73; // rcx
  unsigned __int8 v74; // bl
  __int64 v75; // r8
  unsigned __int8 v76; // bl
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rax
  int v82; // r9d
  __int64 v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  unsigned int v88; // [rsp+68h] [rbp-A0h]
  unsigned int v89; // [rsp+6Ch] [rbp-9Ch]
  struct _KTHREAD **v90; // [rsp+70h] [rbp-98h] BYREF
  int v91; // [rsp+78h] [rbp-90h]
  unsigned int v92; // [rsp+80h] [rbp-88h]
  PVOID v93; // [rsp+88h] [rbp-80h]
  unsigned int *v94; // [rsp+90h] [rbp-78h] BYREF
  struct DXGALLOCATION **v95; // [rsp+98h] [rbp-70h]
  unsigned int *v96; // [rsp+A0h] [rbp-68h]
  PVOID P; // [rsp+A8h] [rbp-60h]
  char v98[8]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v99; // [rsp+C8h] [rbp-40h]
  DXGADAPTER *v100; // [rsp+D0h] [rbp-38h]
  char v101; // [rsp+D8h] [rbp-30h]
  char v102[8]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v103; // [rsp+E8h] [rbp-20h]
  struct DXGADAPTER *v104; // [rsp+F0h] [rbp-18h]
  char v105; // [rsp+F8h] [rbp-10h]
  __int64 v106; // [rsp+100h] [rbp-8h]
  bool v107; // [rsp+108h] [rbp+0h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v108; // [rsp+118h] [rbp+10h]
  struct DXGPROCESS *v109; // [rsp+120h] [rbp+18h]
  int v110; // [rsp+130h] [rbp+28h]
  _QWORD v111[4]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v112[256]; // [rsp+158h] [rbp+50h] BYREF
  char v113; // [rsp+258h] [rbp+150h] BYREF

  v9 = a5;
  v10 = a2;
  v109 = a1;
  v92 = a3;
  v94 = a4;
  v89 = a5;
  v108 = a7;
  memset(v112, 0, sizeof(v112));
  v96 = (unsigned int *)v112;
  v95 = (struct DXGALLOCATION **)&v113;
  v93 = 0LL;
  P = 0LL;
  if ( v92 && a5 )
  {
    v65 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    v63 = -1073741811;
    *(_QWORD *)(v65 + 24) = v10;
    *(_QWORD *)(v65 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v65);
    goto LABEL_83;
  }
  v88 = a5;
  if ( a5 >= 0x41 )
  {
    v66 = 4LL * a5;
    if ( !is_mul_ok(a5, 4uLL) )
      v66 = -1LL;
    v93 = operator new(v66, 0x4B677844u, PagedPool);
    v67 = 8LL * a5;
    if ( !is_mul_ok(a5, 8uLL) )
      v67 = -1LL;
    v68 = operator new(v67, 0x4B677844u, PagedPool);
    P = v68;
    if ( !g_DxgkDestroyAllocationFailMemoryAlloc && (v12 = v93) != 0LL && v68 )
    {
      v95 = (struct DXGALLOCATION **)v68;
      v96 = (unsigned int *)v93;
    }
    else
    {
      v69 = WdLogNewEntry5_WdEvent(v12);
      *(_QWORD *)(v69 + 24) = 8557LL;
      WdLogEvent5_WdEvent(v69);
      v9 = 64;
      v89 = 64;
    }
  }
  v15 = (char *)a1 + 168;
  if ( a1 != (struct DXGPROCESS *)-168LL && *((struct _KTHREAD **)a1 + 22) == KeGetCurrentThread() )
  {
    v70 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v70 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v70);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a1 + 168, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v71 = *((_DWORD *)a1 + 46);
      if ( v71 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v16, &EventBlockThread, v17, v71);
    }
    ExAcquirePushLockSharedEx((char *)a1 + 168, 0LL);
  }
  v18 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( v18 < *((_DWORD *)a1 + 52)
    && (v19 = *((_QWORD *)a1 + 24),
        v20 = *(_DWORD *)(v19 + 16LL * v18 + 8),
        (((unsigned int)v10 >> 26) & 0x30) == (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0x30))
    && (v20 & 0x1000) == 0
    && (v20 & 0xF) != 0
    && (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0xF) == 3 )
  {
    v21 = *(_QWORD *)(v19 + 16LL * v18);
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
    v72 = WdLogNewEntry5_WdError(v23, v22);
    v63 = -1073741811;
    *(_QWORD *)(v72 + 24) = v10;
    *(_QWORD *)(v72 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v72);
    goto LABEL_83;
  }
  v26 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
  if ( *(int *)(v26 + 1944) >= 0x2000 || *(_BYTE *)(v26 + 2228) )
    v27 = *((_DWORD *)DXGGLOBAL::GetGlobal(v26, v22, v24, v25) + 203);
  else
    v27 = 0;
  v28 = *(_DWORD *)(v21 + 328) == 2;
  v29 = *(struct _KEVENT **)(v21 + 16);
  v110 = v27;
  if ( v28 )
  {
    if ( KeReadStateEvent(v29 + 4) )
      goto LABEL_19;
    v73 = v29 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v29 + 3) )
      goto LABEL_19;
    v73 = v29 + 3;
  }
  KeWaitForSingleObject(v73, Executive, 0, 0, 0LL);
LABEL_19:
  KeEnterCriticalRegion();
  if ( !v27 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 104), 0) )
      goto LABEL_21;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 96LL));
    v74 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v75, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 104), 1u);
    if ( v74 )
      goto LABEL_123;
    goto LABEL_124;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v21 + 112, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 96LL));
    v76 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v21 + 112));
    if ( v76 )
LABEL_123:
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
LABEL_124:
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_21:
  v33 = *(volatile signed __int64 **)(*(_QWORD *)(v21 + 16) + 16LL);
  v100 = (DXGADAPTER *)v33;
  v101 = 0;
  if ( v33 )
  {
    _InterlockedIncrement64(v33 + 3);
    v99 = -1LL;
  }
  v34 = *(volatile signed __int64 **)(v21 + 1800);
  if ( !v34 )
    v34 = *(volatile signed __int64 **)(*(_QWORD *)(v21 + 16) + 16LL);
  v104 = (struct DXGADAPTER *)v34;
  v105 = 0;
  if ( v34 )
  {
    _InterlockedIncrement64(v34 + 3);
    v103 = -1LL;
  }
  v106 = v21;
  v35 = *(_QWORD *)(v21 + 1800);
  v107 = v35 != *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) && v35;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v100 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v100 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v36, &EventBlockThread, v37, 72);
      KeWaitForSingleObject((char *)v100 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v100);
  }
  v101 = 1;
  if ( *(_DWORD *)(v106 + 408) == 1 )
  {
    if ( !v107 || (COREACCESS::AcquireShared((COREACCESS *)v102), *((_DWORD *)v104 + 44) == 1) )
    {
      v38 = *(_QWORD *)(v21 + 1800);
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 2280);
        v40 = *(OUTPUTDUPL_MGR **)(v39 + 104);
        if ( !v40
          || (int)lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_(v40, (struct DXGDEVICE *)v21) >= 0 )
        {
          v41 = (char *)DXGGLOBAL::m_pGlobal;
          v42 = *(_QWORD *)(*(_QWORD *)(v39 + 16) + 268LL);
          v111[1] = lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_;
          v111[0] = v42;
          v111[2] = v21;
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v77 = WdLogNewEntry5_WdAssertion(v42, v30, v31, v32);
            *(_QWORD *)(v77 + 24) = 1815LL;
            WdLogEvent5_WdAssertion(v77);
            v41 = (char *)DXGGLOBAL::m_pGlobal;
          }
          LOBYTE(v91) = 0;
          v90 = (struct _KTHREAD **)(v41 + 992);
          if ( v41 == (char *)-992LL )
          {
            v78 = WdLogNewEntry5_WdAssertion(v42, v30, v31, v32);
            *(_QWORD *)(v78 + 24) = 453LL;
            WdLogEvent5_WdAssertion(v78);
          }
          CurrentThread = KeGetCurrentThread();
          if ( v90[1] == CurrentThread )
          {
            v79 = WdLogNewEntry5_WdAssertion(CurrentThread, v30, v31, v32);
            *(_QWORD *)(v79 + 24) = 460LL;
            WdLogEvent5_WdAssertion(v79);
          }
          if ( (_BYTE)v91 )
          {
            v80 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v30, v31);
            v80[5] = &v90;
            v80[3] = 275LL;
            v80[4] = 4LL;
            v80[6] = 0LL;
            v80[7] = 0LL;
            WdLogEvent5_WdCriticalError(v80);
          }
          v44 = (int *)v90;
          KeEnterCriticalRegion();
          if ( *((struct _KTHREAD **)v44 + 1) == KeGetCurrentThread() )
          {
            if ( v44[6] <= 0 )
            {
              v81 = WdLogNewEntry5_WdAssertion(v46, v45, v47, v48);
              *(_QWORD *)(v81 + 24) = 351LL;
              WdLogEvent5_WdAssertion(v81);
            }
            ++v44[6];
          }
          else
          {
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v44 + 4, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v82 = v44[7];
                if ( v82 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  Template_q(v46, &EventBlockThread, v47, v82);
              }
              _InterlockedIncrement64((volatile signed __int64 *)v44);
              ExAcquirePushLockExclusiveEx(v44 + 4, 0LL);
            }
            if ( *((_QWORD *)v44 + 1) )
            {
              v83 = WdLogNewEntry5_WdAssertion(v46, v45, v47, v48);
              *(_QWORD *)(v83 + 24) = 375LL;
              WdLogEvent5_WdAssertion(v83);
            }
            if ( v44[6] )
            {
              v84 = WdLogNewEntry5_WdAssertion(v46, v45, v47, v48);
              *(_QWORD *)(v84 + 24) = 376LL;
              WdLogEvent5_WdAssertion(v84);
            }
            *((_QWORD *)v44 + 1) = KeGetCurrentThread();
            v44[6] = 1;
          }
          v49 = (struct OUTPUTDUPL_MGR_INDIRECT *)(v41 + 1032);
          LOBYTE(v91) = 1;
          for ( i = (struct OUTPUTDUPL_MGR_INDIRECT *)*((_QWORD *)v41 + 129);
                i != v49 && i;
                i = *(struct OUTPUTDUPL_MGR_INDIRECT **)i )
          {
            if ( lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_(i, v111) < 0 )
            {
              if ( (_BYTE)v91 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v90, v45, v47, v48);
              goto LABEL_62;
            }
          }
          if ( (_BYTE)v91 )
          {
            v51 = (int *)v90;
            LOBYTE(v91) = 0;
            if ( v90[1] != KeGetCurrentThread() )
            {
              v85 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v45, v47);
              v85[3] = 275LL;
              v85[4] = 4LL;
              v85[5] = v51;
              v85[6] = 0LL;
              v85[7] = 0LL;
              WdLogEvent5_WdCriticalError(v85);
            }
            if ( v51[6] <= 0 )
            {
              v86 = WdLogNewEntry5_WdAssertion(v46, v45, v47, v48);
              *(_QWORD *)(v86 + 24) = 395LL;
              WdLogEvent5_WdAssertion(v86);
            }
            v28 = v51[6]-- == 1;
            if ( v28 )
            {
              *((_QWORD *)v51 + 1) = 0LL;
              ExReleasePushLockExclusiveEx(v51 + 4, 0LL);
            }
            KeLeaveCriticalRegion();
          }
        }
      }
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v102);
      COREACCESS::Release((COREACCESS *)v98);
    }
  }
  else
  {
    COREACCESS::Release((COREACCESS *)v98);
  }
LABEL_62:
  v52 = v104;
  if ( v104 )
  {
    if ( v105 )
    {
      COREACCESS::Release((COREACCESS *)v102);
      v52 = v104;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v52 + 2), v52);
  }
  v53 = v100;
  if ( v100 )
  {
    if ( v101 )
    {
      v101 = 0;
      v53 = v100;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v100 + 20) )
      {
        DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v100);
        v53 = v100;
      }
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v53 + 2), v53);
  }
  v54 = v94;
  v55 = a5;
  while ( 1 )
  {
    v56 = v55 < v9 ? v55 : v9;
    v57 = DxgkDestroyAllocationInternal(
            v109,
            (struct DXGDEVICE *)v21,
            v96,
            v95,
            v92,
            (const unsigned int **)&v94,
            v56,
            a6,
            v54,
            v108,
            a8);
    v62 = v57;
    if ( v57 < 0 )
      break;
    v9 = v89;
    v54 += v56;
    v28 = v88 == v56;
    v55 = v88 - v56;
    v88 -= v56;
    if ( v28 )
    {
      v63 = 0;
      goto LABEL_79;
    }
  }
  v87 = WdLogNewEntry5_WdWarning(v59, v58, v60, v61);
  *(_QWORD *)(v87 + 24) = v62;
  WdLogEvent5_WdWarning(v87);
  v63 = v62;
LABEL_79:
  if ( v110 )
    ExReleasePushLockSharedEx(v21 + 112, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v21 + 104));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v21 + 16), (struct DXGDEVICE *)v21);
LABEL_83:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v93 )
    ExFreePoolWithTag(v93, 0);
  return v63;
}
