/*
 * XREFs of ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_NQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C00EEF80
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkPresentRedirected @ 0x1C01B8440 (DxgkPresentRedirected.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0084890 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGSHAREDSYNCOBJECT@@_K@Z @ 0x1C0197D38 (-VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGS.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall SubmitPresentHistoryTokenPreparation(
        struct DXGADAPTERSTOPRESETLOCKSHARED *this,
        struct COREDEVICEACCESS *a2,
        struct DXGADAPTER *a3,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a4,
        HANDLE Handle,
        bool a6,
        const struct _DXGKWIN32KENG_INTERFACE *a7)
{
  __int64 v7; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  BOOL v17; // r15d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  char *v22; // rsi
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  NTSTATUS v35; // ebx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v39; // rcx
  struct DXGPROCESS *v40; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  PERESOURCE *v46; // rbx
  HANDLE hSyncObject; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  struct _DXGSHAREDSYNCOBJECT *v51; // rdi
  UINT64 FenceValue; // rax
  NTSTATUS v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  PVOID v59; // rdi
  __int64 v60; // r12
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // r9d
  _QWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rax
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+38h] [rbp-50h] BYREF
  PERESOURCE *v76; // [rsp+40h] [rbp-48h] BYREF
  char v77; // [rsp+48h] [rbp-40h]
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF
  PVOID v79; // [rsp+98h] [rbp+10h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF

  v7 = *((_QWORD *)a3 + 289);
  if ( v7 != -720 && *(struct _KTHREAD **)(v7 + 728) == KeGetCurrentThread() )
  {
    v63 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v63 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v63);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v7 + 720, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v64 = *(_DWORD *)(v7 + 736);
      if ( v64 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v13, &EventBlockThread, v14, v64);
    }
    ExAcquirePushLockSharedEx(v7 + 720, 0LL);
  }
  CurrentProcess = PsGetCurrentProcess(v13, v12);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  v17 = ProcessSessionId < *(_DWORD *)(v7 + 744) && *(_QWORD *)(*(_QWORD *)(v7 + 752) + 8LL * ProcessSessionId);
  ExReleasePushLockSharedEx(v7 + 720, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_BYTE *)this + 16) )
  {
    v21 = *((_QWORD *)this + 1) + 120LL;
    *((_BYTE *)this + 16) = 0;
    ExReleasePushLockSharedEx(v21, 0LL);
    KeLeaveCriticalRegion();
    v19 = *((_QWORD *)this + 1);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v19 + 16), (struct DXGADAPTER *)v19);
  }
  if ( *((_BYTE *)a2 + 80) )
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 40));
  v22 = (char *)a2 + 8;
  if ( !*((_BYTE *)a2 + 32) )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v20);
    v65[3] = 275LL;
    v65[4] = 4LL;
    v65[5] = v22;
    v65[6] = 0LL;
    v65[7] = 0LL;
    WdLogEvent5_WdCriticalError(v65);
  }
  v23 = *((_QWORD *)a2 + 3);
  *((_BYTE *)a2 + 32) = 0;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v23 + 160) )
    DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v23);
  if ( Handle )
  {
    v54 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &v79, 0LL);
    v59 = v79;
    v60 = v54;
    if ( v54 < 0 )
    {
      v66 = WdLogNewEntry5_WdEvent(v56, v55, v57, v58);
      *(_QWORD *)(v66 + 24) = v60;
      WdLogEvent5_WdEvent(v66);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
      COREDEVICEACCESS::AcquireSharedUncheck(a2);
      return (unsigned int)v60;
    }
    if ( a6 )
    {
      Timeout.QuadPart = 0LL;
      if ( KeWaitForSingleObject(v79, Executive, 0, 1u, &Timeout) == 258 )
      {
        ObfDereferenceObject(v59);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
        COREDEVICEACCESS::AcquireSharedUncheck(a2);
        return 3223191810LL;
      }
    }
    else
    {
      Timeout.QuadPart = -20000000LL;
      KeWaitForSingleObject(v79, Executive, 0, 1u, &Timeout);
    }
    ObfDereferenceObject(v59);
  }
  v24 = (*((__int64 (__fastcall **)(BOOL, struct _D3DKMT_PRESENTHISTORYTOKEN *))a7 + 40))(v17, a4);
  v29 = v24;
  if ( v24 >= 0 )
  {
    if ( !*((_BYTE *)this + 16) )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 1) + 24LL));
      v30 = *((_QWORD *)this + 1);
      *(_QWORD *)this = -1LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v30 + 120, 0LL);
      *((_BYTE *)this + 16) = 1;
    }
    if ( *((_BYTE *)a2 + 32) )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v25, v27);
      v68[3] = 275LL;
      v68[4] = 4LL;
      v68[5] = v22;
      v68[6] = 0LL;
      v68[7] = 0LL;
      WdLogEvent5_WdCriticalError(v68);
    }
    v31 = *((_QWORD *)a2 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v31 + 160) )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v31 + 48)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v32, &EventBlockThread, v33, 72);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)a2 + 3) + 48LL), Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a2 + 3));
    }
    *((_BYTE *)a2 + 32) = 1;
    v34 = *(unsigned int *)(*((_QWORD *)a2 + 9) + 408LL);
    if ( (_DWORD)v34 != 1 )
      goto LABEL_52;
    if ( *((_BYTE *)a2 + 80) )
    {
      COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a2 + 40));
      v34 = *(unsigned int *)(*((_QWORD *)a2 + 7) + 176LL);
      if ( (_DWORD)v34 != 1 )
      {
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 40));
LABEL_52:
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 8));
        v62 = WdLogNewEntry5_WdError(v61);
        *(_QWORD *)(v62 + 24) = -1073741130LL;
        WdLogEvent5_WdError(v62);
        COREDEVICEACCESS::AcquireSharedUncheck(a2);
        return 3221226166LL;
      }
    }
    v35 = 0;
    if ( a4->Model == D3DKMT_PM_REDIRECTED_FLIP && a4->Token.Flip.hSyncObject )
    {
      v36 = PsGetCurrentProcess(v31, v34);
      ProcessDxgProcess = PsGetProcessDxgProcess(v36, v37);
      v40 = (struct DXGPROCESS *)ProcessDxgProcess;
      if ( ProcessDxgProcess )
      {
        if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
        {
          ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
          v70 = ThreadProperty;
          if ( ThreadProperty )
          {
            ObfDereferenceObject(ThreadProperty);
            v40 = *v70;
          }
        }
      }
      Global = DXGGLOBAL::GetGlobal(v39);
      v76 = (PERESOURCE *)Global;
      v77 = 0;
      if ( !Global )
      {
        v71 = WdLogNewEntry5_WdAssertion(v42);
        *(_QWORD *)(v71 + 24) = 1946LL;
        WdLogEvent5_WdAssertion(v71);
        Global = (struct DXGGLOBAL *)v76;
      }
      if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 42)) )
      {
        v72 = WdLogNewEntry5_WdAssertion(v44);
        *(_QWORD *)(v72 + 24) = 1951LL;
        WdLogEvent5_WdAssertion(v72);
      }
      if ( v77 )
      {
        v73 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v44, v43, v45);
        v73[5] = &v76;
        v73[3] = 275LL;
        v73[4] = 4LL;
        v73[6] = 0LL;
        v73[7] = 0LL;
        WdLogEvent5_WdCriticalError(v73);
      }
      v46 = v76;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v46[42], 1u);
      hSyncObject = a4->Token.Flip.hSyncObject;
      v77 = 1;
      v35 = ObReferenceObjectByHandle(
              hSyncObject,
              0x20000u,
              g_pDxgkSharedSyncObjectType,
              1,
              &Object,
              &HandleInformation);
      if ( v35 < 0 )
      {
        v74 = WdLogNewEntry5_WdWarning(v49, v48, v50);
        *(_QWORD *)(v74 + 24) = a4->Token.Flip.hSyncObject;
        WdLogEvent5_WdWarning(v74);
      }
      else
      {
        v51 = (struct _DXGSHAREDSYNCOBJECT *)Object;
        FenceValue = *(_QWORD *)(*(_QWORD *)Object + 104LL);
        if ( FenceValue <= a4->Token.Flip.FenceValue )
          FenceValue = a4->Token.Flip.FenceValue;
        *(_QWORD *)(*(_QWORD *)Object + 104LL) = FenceValue;
        a4->Token.Flip.hSyncObject = 0LL;
        if ( *((_BYTE *)a3 + 185) )
        {
          v35 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetRedirectedFlipFenceValue(
                  (struct DXGADAPTER *)((char *)a3 + 3888),
                  v40,
                  v51,
                  a4->Token.Flip.FenceValue);
          if ( v35 < 0 )
          {
            ObfDereferenceObject(v51);
            if ( v77 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v76);
            return (unsigned int)v35;
          }
        }
        ObfDereferenceObject(v51);
      }
      if ( v77 )
      {
        v77 = 0;
        ExReleaseResourceLite(v76[42]);
        KeLeaveCriticalRegion();
      }
    }
    return (unsigned int)v35;
  }
  if ( v24 != -1071775730 && v24 != -1071775733 )
  {
    v67 = WdLogNewEntry5_WdEvent(v26, v25, v27, v28);
    *(_QWORD *)(v67 + 24) = v29;
    WdLogEvent5_WdEvent(v67);
  }
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
  COREDEVICEACCESS::AcquireSharedUncheck(a2);
  return (unsigned int)v29;
}
