/*
 * XREFs of ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C008DD70
 * Callers:
 *     DxgkDestroyAllocation2 @ 0x1C008E3A0 (DxgkDestroyAllocation2.c)
 *     DxgkDestroyAllocation @ 0x1C0183EF0 (DxgkDestroyAllocation.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0084890 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C008CDD0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C008F740 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     _lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_ @ 0x1C01732A0 (_lambda_de3a9c4ca82130b89abd09a8dda67964_--_lambda_invoker_cdecl_.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
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
  char *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // r8d
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // r14d
  struct _KEVENT *v24; // rbx
  struct _KEVENT *v25; // rbx
  volatile signed __int64 *v26; // rcx
  volatile signed __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  struct DXGADAPTER *v32; // rcx
  DXGADAPTER *v33; // rcx
  unsigned int *v34; // r15
  unsigned int v35; // eax
  unsigned int v36; // r14d
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r13
  bool v42; // zf
  unsigned int v43; // ebx
  __int64 v45; // rbx
  OUTPUTDUPL_MGR *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  struct DXGGLOBAL *Global; // r14
  struct _KTHREAD *CurrentThread; // rcx
  int *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  struct OUTPUTDUPL_MGR_INDIRECT *v56; // rbx
  struct OUTPUTDUPL_MGR_INDIRECT *i; // r14
  int *v58; // rbx
  int v59; // r9d
  __int64 v60; // rax
  SIZE_T v61; // rax
  SIZE_T v62; // rax
  void *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // r9d
  __int64 v67; // rax
  unsigned __int8 v68; // bl
  __int64 v69; // r8
  unsigned __int8 v70; // bl
  __int64 v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  unsigned int v80; // [rsp+68h] [rbp-A0h]
  unsigned int v81; // [rsp+6Ch] [rbp-9Ch]
  int v82; // [rsp+70h] [rbp-98h]
  struct _KTHREAD **v83; // [rsp+78h] [rbp-90h] BYREF
  char v84; // [rsp+80h] [rbp-88h]
  unsigned int v85; // [rsp+88h] [rbp-80h]
  PVOID v86; // [rsp+90h] [rbp-78h]
  unsigned int *v87; // [rsp+98h] [rbp-70h] BYREF
  struct DXGALLOCATION **v88; // [rsp+A0h] [rbp-68h]
  unsigned int *v89; // [rsp+A8h] [rbp-60h]
  PVOID P; // [rsp+B0h] [rbp-58h]
  char v91[8]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v92; // [rsp+D8h] [rbp-30h]
  DXGADAPTER *v93; // [rsp+E0h] [rbp-28h]
  char v94; // [rsp+E8h] [rbp-20h]
  char v95[8]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v96; // [rsp+F8h] [rbp-10h]
  struct DXGADAPTER *v97; // [rsp+100h] [rbp-8h]
  char v98; // [rsp+108h] [rbp+0h]
  __int64 v99; // [rsp+110h] [rbp+8h]
  bool v100; // [rsp+118h] [rbp+10h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v101; // [rsp+128h] [rbp+20h]
  struct DXGPROCESS *v102; // [rsp+130h] [rbp+28h]
  _QWORD v103[4]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v104[256]; // [rsp+158h] [rbp+50h] BYREF
  char v105; // [rsp+258h] [rbp+150h] BYREF

  v9 = a5;
  v10 = a2;
  v102 = a1;
  v85 = a3;
  v87 = a4;
  v81 = a5;
  v101 = a7;
  memset(v104, 0, sizeof(v104));
  v89 = (unsigned int *)v104;
  v88 = (struct DXGALLOCATION **)&v105;
  v86 = 0LL;
  P = 0LL;
  if ( v85 && a5 )
  {
    v60 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    v43 = -1073741811;
    *(_QWORD *)(v60 + 24) = v10;
    *(_QWORD *)(v60 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v60);
    goto LABEL_57;
  }
  v80 = a5;
  if ( a5 >= 0x41 )
  {
    v61 = 4LL * a5;
    if ( !is_mul_ok(a5, 4uLL) )
      v61 = -1LL;
    v86 = operator new(v61, 0x4B677844u, PagedPool);
    v62 = 8LL * a5;
    if ( !is_mul_ok(a5, 8uLL) )
      v62 = -1LL;
    v63 = operator new(v62, 0x4B677844u, PagedPool);
    P = v63;
    if ( !g_DxgkDestroyAllocationFailMemoryAlloc && (v12 = v86) != 0LL && v63 )
    {
      v88 = (struct DXGALLOCATION **)v63;
      v89 = (unsigned int *)v86;
    }
    else
    {
      v64 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v64 + 24) = 9426LL;
      WdLogEvent5_WdEvent(v64);
      v9 = 64;
      v81 = 64;
    }
  }
  v14 = (char *)a1 + 200;
  if ( a1 != (struct DXGPROCESS *)-200LL && *((struct _KTHREAD **)a1 + 26) == KeGetCurrentThread() )
  {
    v65 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v65 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v65);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a1 + 200, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v66 = *((_DWORD *)a1 + 54);
      if ( v66 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v15, &EventBlockThread, v16, v66);
    }
    ExAcquirePushLockSharedEx((char *)a1 + 200, 0LL);
  }
  v17 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 < *((_DWORD *)a1 + 60)
    && (v18 = *((_QWORD *)a1 + 28),
        v19 = *(_DWORD *)(v18 + 16 * v17 + 8),
        (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60))
    && (v19 & 0x2000) == 0
    && (v19 & 0x1F) != 0
    && (*(_BYTE *)(v18 + 16LL * (unsigned int)v17 + 8) & 0x1F) == 3 )
  {
    v20 = *(_QWORD *)(v18 + 16LL * (unsigned int)v17);
    if ( v20 )
      _InterlockedIncrement64((volatile signed __int64 *)(v20 + 64));
  }
  else
  {
    v20 = 0LL;
  }
  ExReleasePushLockSharedEx(v14, 0LL);
  KeLeaveCriticalRegion();
  if ( !v20 )
  {
    v67 = WdLogNewEntry5_WdError(v21);
    v43 = -1073741811;
    *(_QWORD *)(v67 + 24) = v10;
    *(_QWORD *)(v67 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v67);
    goto LABEL_57;
  }
  v22 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL);
  if ( *(int *)(v22 + 1968) >= 0x2000 || *(_BYTE *)(v22 + 2252) )
    v23 = *((_DWORD *)DXGGLOBAL::GetGlobal(v22) + 203);
  else
    v23 = 0;
  v24 = *(struct _KEVENT **)(v20 + 16);
  v82 = v23;
  if ( *(_DWORD *)(v20 + 328) == 2 )
  {
    v25 = v24 + 4;
    if ( KeReadStateEvent(v25) )
      goto LABEL_19;
  }
  else
  {
    v25 = v24 + 3;
    if ( KeReadStateEvent(v25) )
      goto LABEL_19;
  }
  KeWaitForSingleObject(v25, Executive, 0, 0, 0LL);
LABEL_19:
  KeEnterCriticalRegion();
  if ( !v23 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 104), 0) )
      goto LABEL_21;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 96LL));
    v68 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v69, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 104), 1u);
    if ( v68 )
      goto LABEL_124;
    goto LABEL_125;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v20 + 112, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 96LL));
    v70 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v20 + 112));
    if ( v70 )
LABEL_124:
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
LABEL_125:
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_21:
  v26 = *(volatile signed __int64 **)(*(_QWORD *)(v20 + 16) + 16LL);
  v93 = (DXGADAPTER *)v26;
  v94 = 0;
  if ( v26 )
  {
    _InterlockedIncrement64(v26 + 3);
    v92 = -1LL;
  }
  v27 = *(volatile signed __int64 **)(v20 + 1672);
  if ( !v27 )
    v27 = *(volatile signed __int64 **)(*(_QWORD *)(v20 + 16) + 16LL);
  v97 = (struct DXGADAPTER *)v27;
  v98 = 0;
  if ( v27 )
  {
    _InterlockedIncrement64(v27 + 3);
    v96 = -1LL;
  }
  v99 = v20;
  v28 = *(_QWORD *)(v20 + 1672);
  v100 = v28 != *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) && v28;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v93 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v93 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v29, &EventBlockThread, v30, 72);
      KeWaitForSingleObject((char *)v93 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v93);
  }
  v94 = 1;
  if ( *(_DWORD *)(v99 + 408) == 1 )
  {
    if ( !v100 || (COREACCESS::AcquireShared((COREACCESS *)v95), *((_DWORD *)v97 + 44) == 1) )
    {
      v31 = *(_QWORD *)(v20 + 1672);
      if ( v31 )
      {
        v45 = *(_QWORD *)(v31 + 2304);
        v46 = *(OUTPUTDUPL_MGR **)(v45 + 104);
        if ( !v46
          || (int)lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_(v46, (struct DXGDEVICE *)v20) >= 0 )
        {
          v47 = *(_QWORD *)(*(_QWORD *)(v45 + 16) + 268LL);
          v103[1] = lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_;
          v103[0] = v47;
          v103[2] = v20;
          Global = DXGGLOBAL::GetGlobal(v47);
          v84 = 0;
          v83 = (struct _KTHREAD **)((char *)Global + 992);
          if ( Global == (struct DXGGLOBAL *)-992LL )
          {
            v71 = WdLogNewEntry5_WdAssertion(0LL);
            *(_QWORD *)(v71 + 24) = 464LL;
            WdLogEvent5_WdAssertion(v71);
          }
          CurrentThread = KeGetCurrentThread();
          if ( v83[1] == CurrentThread )
          {
            v72 = WdLogNewEntry5_WdAssertion(CurrentThread);
            *(_QWORD *)(v72 + 24) = 471LL;
            WdLogEvent5_WdAssertion(v72);
          }
          if ( v84 )
          {
            v73 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v48, v49);
            v73[5] = &v83;
            v73[3] = 275LL;
            v73[4] = 4LL;
            v73[6] = 0LL;
            v73[7] = 0LL;
            WdLogEvent5_WdCriticalError(v73);
          }
          v52 = (int *)v83;
          KeEnterCriticalRegion();
          if ( *((struct _KTHREAD **)v52 + 1) == KeGetCurrentThread() )
          {
            if ( v52[6] <= 0 )
            {
              v74 = WdLogNewEntry5_WdAssertion(v54);
              *(_QWORD *)(v74 + 24) = 362LL;
              WdLogEvent5_WdAssertion(v74);
            }
            ++v52[6];
          }
          else
          {
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v52 + 4, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v59 = v52[7];
                if ( v59 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q(v54, &EventBlockThread, v55, v59);
              }
              _InterlockedIncrement64((volatile signed __int64 *)v52);
              ExAcquirePushLockExclusiveEx(v52 + 4, 0LL);
            }
            if ( *((_QWORD *)v52 + 1) )
            {
              v75 = WdLogNewEntry5_WdAssertion(v54);
              *(_QWORD *)(v75 + 24) = 386LL;
              WdLogEvent5_WdAssertion(v75);
            }
            if ( v52[6] )
            {
              v76 = WdLogNewEntry5_WdAssertion(v54);
              *(_QWORD *)(v76 + 24) = 387LL;
              WdLogEvent5_WdAssertion(v76);
            }
            *((_QWORD *)v52 + 1) = KeGetCurrentThread();
            v52[6] = 1;
          }
          v56 = (struct DXGGLOBAL *)((char *)Global + 1032);
          v84 = 1;
          for ( i = (struct OUTPUTDUPL_MGR_INDIRECT *)*((_QWORD *)Global + 129);
                i != v56 && i;
                i = *(struct OUTPUTDUPL_MGR_INDIRECT **)i )
          {
            if ( lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_(i, v103) < 0 )
            {
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v83);
              goto LABEL_36;
            }
          }
          if ( v84 )
          {
            v58 = (int *)v83;
            v84 = 0;
            if ( v83[1] != KeGetCurrentThread() )
            {
              v77 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v54, v53, v55);
              v77[3] = 275LL;
              v77[4] = 4LL;
              v77[5] = v58;
              v77[6] = 0LL;
              v77[7] = 0LL;
              WdLogEvent5_WdCriticalError(v77);
            }
            if ( v58[6] <= 0 )
            {
              v78 = WdLogNewEntry5_WdAssertion(v54);
              *(_QWORD *)(v78 + 24) = 406LL;
              WdLogEvent5_WdAssertion(v78);
            }
            v42 = v58[6]-- == 1;
            if ( v42 )
            {
              *((_QWORD *)v58 + 1) = 0LL;
              ExReleasePushLockExclusiveEx(v58 + 4, 0LL);
            }
            KeLeaveCriticalRegion();
          }
        }
      }
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v95);
      COREACCESS::Release((COREACCESS *)v91);
    }
  }
  else
  {
    COREACCESS::Release((COREACCESS *)v91);
  }
LABEL_36:
  v32 = v97;
  if ( v97 )
  {
    if ( v98 )
    {
      COREACCESS::Release((COREACCESS *)v95);
      v32 = v97;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v32 + 2), v32);
  }
  v33 = v93;
  if ( v93 )
  {
    if ( v94 )
    {
      v94 = 0;
      v33 = v93;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v93 + 20) )
      {
        DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v93);
        v33 = v93;
      }
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v33 + 2), v33);
  }
  v34 = v87;
  v35 = a5;
  while ( 1 )
  {
    v36 = v35 < v9 ? v35 : v9;
    v37 = DxgkDestroyAllocationInternal(
            (struct _KTHREAD **)v102,
            (struct DXGDEVICE *)v20,
            (char *)v89,
            v88,
            v85,
            &v87,
            v36,
            a6,
            (char *)v34,
            v101,
            a8);
    v41 = v37;
    if ( v37 < 0 )
      break;
    v9 = v81;
    v34 += v36;
    v42 = v80 == v36;
    v35 = v80 - v36;
    v80 -= v36;
    if ( v42 )
    {
      v43 = 0;
      goto LABEL_53;
    }
  }
  v79 = WdLogNewEntry5_WdWarning(v39, v38, v40);
  *(_QWORD *)(v79 + 24) = v41;
  WdLogEvent5_WdWarning(v79);
  v43 = v41;
LABEL_53:
  if ( v82 )
    ExReleasePushLockSharedEx(v20 + 112, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v20 + 104));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v20 + 16), (struct DXGDEVICE *)v20);
LABEL_57:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v86 )
    ExFreePoolWithTag(v86, 0);
  return v43;
}
