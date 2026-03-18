/*
 * XREFs of ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@IH@Z @ 0x1C00D0300
 * Callers:
 *     ?DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z @ 0x1C00D0250 (-DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z.c)
 *     ?VmBusCddSyncGpuAccess@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017CB30 (-VmBusCddSyncGpuAccess@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00F4D30 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0185834 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkpCddSyncGPUAccess(struct _KTHREAD **a1, struct DXGADAPTER *a2, unsigned int a3, int a4)
{
  __int64 v4; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  char *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rax
  struct _KTHREAD *v21; // r9
  int v22; // edx
  struct DXGALLOCATION *v23; // rdx
  struct DXGALLOCATION *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct _KTHREAD *CurrentThread; // r14
  __int64 v29; // rax
  int CurrentProcessSessionId; // r15d
  __int64 *ThreadWin32Thread; // rax
  __int64 v32; // rax
  struct _KTHREAD *v33; // r14
  __int64 v34; // rax
  int v35; // r15d
  __int64 v36; // rax
  __int64 v37; // r14
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  ULONG_PTR Count; // r15
  struct _KEVENT *v42; // rbx
  unsigned __int8 v43; // bl
  __int64 v44; // r8
  __int64 v45; // r13
  volatile signed __int64 *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  struct _MDL *v49; // r9
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  _QWORD *v53; // rax
  struct DXGADAPTER *v54; // rcx
  DXGADAPTER *v55; // rcx
  __int64 v56; // rcx
  struct _KTHREAD *v57; // rsi
  __int64 v58; // rax
  int v59; // r14d
  __int64 *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  struct _KTHREAD *v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rcx
  int v66; // r14d
  __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rax
  struct VMBCHANNEL__ *v70; // rcx
  struct _EX_RUNDOWN_REF *v71; // rbx
  _QWORD *v72; // rax
  unsigned int v73; // r12d
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  struct DXGADAPTER *v79; // [rsp+30h] [rbp-D0h]
  struct _EX_RUNDOWN_REF *v80; // [rsp+38h] [rbp-C8h] BYREF
  struct _KTHREAD **v81[2]; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v82; // [rsp+68h] [rbp-98h]
  char v83; // [rsp+70h] [rbp-90h]
  struct _KTHREAD **v84[2]; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *v85; // [rsp+88h] [rbp-78h]
  char v86; // [rsp+90h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v87; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v88[8]; // [rsp+A8h] [rbp-58h] BYREF
  char v89; // [rsp+B0h] [rbp-50h]
  __int64 v90; // [rsp+B8h] [rbp-48h] BYREF
  int v91; // [rsp+C0h] [rbp-40h]
  int v92; // [rsp+C4h] [rbp-3Ch]
  int v93; // [rsp+C8h] [rbp-38h]
  int v94; // [rsp+D0h] [rbp-30h]
  bool v95; // [rsp+D4h] [rbp-2Ch]
  _BYTE v96[8]; // [rsp+D8h] [rbp-28h] BYREF
  char *v97; // [rsp+E0h] [rbp-20h]
  int v98; // [rsp+E8h] [rbp-18h]
  char v100; // [rsp+148h] [rbp+48h]
  char v101; // [rsp+150h] [rbp+50h]
  unsigned int v102; // [rsp+150h] [rbp+50h]

  v101 = a3;
  v4 = a3;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v7 + 24) = 7046LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)a2 + 307);
  if ( v8 && !*(_DWORD *)(v8 + 80) )
  {
    v9 = WdLogNewEntry5_WdError(a1);
    v10 = -1073741811;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_125:
    v77 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v77 + 32) = (int)v10;
    *(_QWORD *)(v77 + 24) = a2;
    WdLogEvent5_WdError(v77);
    return v10;
  }
  if ( *((_QWORD *)a2 + 308) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a2 + 3);
    v79 = a2;
    v12 = a2;
  }
  else
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v88);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v88);
    v12 = (struct DXGADAPTER *)*((_QWORD *)DXGGLOBAL::GetGlobal(v13) + 77);
    if ( !v12 )
    {
      v76 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v76 + 24) = a2;
      *(_QWORD *)(v76 + 32) = -1073741637LL;
      WdLogEvent5_WdError(v76);
      if ( v89 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v88);
      v10 = -1073741637;
      goto LABEL_125;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v12 + 3);
    v79 = v12;
    if ( v89 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v88);
  }
  if ( !v12 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v14 + 24) = 2020LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = (char *)(a1 + 26);
  v80 = 0LL;
  v97 = (char *)(a1 + 26);
  if ( a1 != (struct _KTHREAD **)-208LL && a1[27] == KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v16 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(a1 + 26, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v19 = *((_DWORD *)a1 + 56);
      if ( v19 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v17, &EventBlockThread, v18, v19);
    }
    ExAcquirePushLockSharedEx(a1 + 26, 0LL);
  }
  v98 = 1;
  v20 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v20 < *((_DWORD *)a1 + 62)
    && (v21 = a1[29],
        v22 = *((_DWORD *)v21 + 4 * v20 + 2),
        (((unsigned int)v4 >> 25) & 0x60) == (*((_BYTE *)v21 + 16 * v20 + 8) & 0x60))
    && (v22 & 0x2000) == 0
    && (v22 & 0x1F) == 5 )
  {
    v23 = (struct DXGALLOCATION *)*((_QWORD *)v21 + 2 * (unsigned int)v20);
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
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v24) + 223) )
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
                v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26);
                v38[3] = 275LL;
                v38[4] = 38LL;
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
  if ( v80 )
  {
    Count = v80[1].Count;
    ExReleasePushLockSharedEx(v15, 0LL);
    KeLeaveCriticalRegion();
    v42 = (struct _KEVENT *)(*(_QWORD *)(Count + 16) + 96LL);
    v100 = 1;
    if ( !KeReadStateEvent(v42) )
      KeWaitForSingleObject(v42, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Count + 104), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL) + 96LL));
      v43 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(Count + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v44, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Count + 104), 1u);
      if ( v43 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(Count + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v45 = *(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL);
    _InterlockedIncrement64((volatile signed __int64 *)(v45 + 24));
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v45 + 120, 0LL);
    v46 = (volatile signed __int64 *)v79;
    v82 = v79;
    v83 = 0;
    if ( v79 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v79 + 3);
      v46 = (volatile signed __int64 *)v79;
      v81[1] = (struct _KTHREAD **)-1LL;
    }
    v85 = (struct DXGADAPTER *)v46;
    v86 = 0;
    if ( v46 )
    {
      _InterlockedIncrement64(v46 + 3);
      v46 = (volatile signed __int64 *)v79;
      v84[1] = (struct _KTHREAD **)-1LL;
    }
    if ( _InterlockedExchangeAdd64(v46 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v79 + 2), v79);
    COREACCESS::AcquireShared((DXGADAPTER **)v81);
    v50 = *((unsigned int *)v82 + 44);
    if ( (_DWORD)v50 == 1 )
    {
      if ( v82 == v85
        || (COREACCESS::AcquireShared((DXGADAPTER **)v84), v50 = *((unsigned int *)v85 + 44), (_DWORD)v50 == 1) )
      {
        if ( !*((_QWORD *)v79 + 308) )
        {
          v69 = WdLogNewEntry5_WdAssertion(v50);
          *(_QWORD *)(v69 + 24) = 2068LL;
          WdLogEvent5_WdAssertion(v69);
        }
        if ( *((_BYTE *)v79 + 185) )
        {
          v90 = 0LL;
          v92 = 0;
          v95 = a4 != 0;
          v70 = (struct VMBCHANNEL__ *)*((_QWORD *)v79 + 510);
          v91 = *((_DWORD *)a1 + 98);
          v93 = 48;
          v94 = v80[12].Count;
          v10 = VmBusSendSyncMessageStatusReturn(v70, (struct DXGKVMB_COMMAND_BASE *)&v90, 0x20u, v49);
        }
        else
        {
          v71 = v80;
          if ( v80[3].Count )
          {
            v73 = 0;
            if ( a4 )
            {
              v73 = 1;
              *(_DWORD *)(v80[6].Count + 4) &= ~0x400u;
            }
            if ( v82 != v85 )
              COREACCESS::Release(v84);
            if ( !v83 )
            {
              v74 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v50);
              v74[5] = v81;
              v74[3] = 275LL;
              v74[4] = 4LL;
              v74[6] = 0LL;
              v74[7] = 0LL;
              WdLogEvent5_WdCriticalError(v74);
            }
            v102 = v101 & 0x3F;
            v83 = 0;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v82 + 20) )
              DXGADAPTER::ReleaseCoreResource(v82);
            ExReleaseResourceLite(*(PERESOURCE *)(Count + 104));
            KeLeaveCriticalRegion();
            v100 = 0;
            v10 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v79 + 308) + 544LL)
                                                                                           + 8LL)
                                                                               + 608LL))(
                    *(_QWORD *)(*((_QWORD *)v79 + 308) + 552LL),
                    v71[3].Count,
                    v102,
                    v73);
          }
          else
          {
            v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v47, v48);
            v72[4] = v71;
            v10 = -1073741811;
            v72[5] = -1073741811LL;
            v72[3] = v4;
            WdLogEvent5_WdWarning(v72);
          }
        }
        goto LABEL_72;
      }
      COREACCESS::Release(v84);
    }
    COREACCESS::Release(v81);
    v53 = (_QWORD *)WdLogNewEntry5_WdEvent(v52, v51);
    v10 = -1073741130;
    v53[5] = a1;
    v53[3] = -1073741130LL;
    v53[4] = a2;
    WdLogEvent5_WdEvent(v53);
LABEL_72:
    v54 = v85;
    if ( v85 )
    {
      if ( v86 )
      {
        COREACCESS::Release(v84);
        v54 = v85;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v54 + 2), v54);
    }
    v55 = v82;
    if ( v82 )
    {
      if ( v83 )
      {
        COREACCESS::Release(v81);
        v55 = v82;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v55 + 2), v55);
    }
    ExReleasePushLockSharedEx(v45 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v45 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v45 + 16), (struct DXGADAPTER *)v45);
    if ( v100 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(Count + 104));
      KeLeaveCriticalRegion();
    }
    ExReleaseRundownProtection(v80 + 11);
    goto LABEL_87;
  }
  v39 = WdLogNewEntry5_WdWarning(v26, v25, v27);
  v10 = -1073741811;
  *(_QWORD *)(v39 + 24) = v4;
  *(_QWORD *)(v39 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v39);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v96);
LABEL_87:
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v40) + 223) )
  {
    v57 = KeGetCurrentThread();
    if ( !v57 )
    {
      v58 = WdLogNewEntry5_WdAssertion(v56);
      *(_QWORD *)(v58 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v58);
    }
    v59 = PsGetCurrentProcessSessionId(v56);
    if ( v59 )
    {
      if ( (unsigned int)PsGetThreadSessionId(v57) == v59 && !IsThreadCrossSessionAttached() )
      {
        v60 = (__int64 *)PsGetThreadWin32Thread(v57);
        if ( v60 )
        {
          v62 = *v60;
          if ( v62 )
          {
            if ( *(_QWORD *)(v62 + 80) )
            {
              v63 = KeGetCurrentThread();
              if ( !v63 )
              {
                v64 = WdLogNewEntry5_WdAssertion(v61);
                *(_QWORD *)(v64 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v64);
              }
              v66 = PsGetCurrentProcessSessionId(v61);
              if ( v66
                && (unsigned int)PsGetThreadSessionId(v63) == v66
                && !IsThreadCrossSessionAttached()
                && (v67 = PsGetThreadWin32Thread(v63)) != 0
                && *(_QWORD *)v67 )
              {
                v68 = *(_QWORD *)(*(_QWORD *)v67 + 80LL);
              }
              else
              {
                v68 = 0LL;
              }
              if ( *(_DWORD *)(v68 + 136) )
              {
                v75 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v65);
                v75[3] = 275LL;
                v75[4] = 38LL;
                v75[5] = *(int *)(v68 + 136);
                v75[6] = 0LL;
                v75[7] = 0LL;
                WdLogEvent5_WdCriticalError(v75);
              }
            }
          }
        }
      }
    }
  }
  return v10;
}
