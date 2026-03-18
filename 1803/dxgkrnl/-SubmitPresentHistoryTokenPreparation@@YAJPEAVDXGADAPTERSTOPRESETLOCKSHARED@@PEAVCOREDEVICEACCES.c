/*
 * XREFs of ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C00DFA9C
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkPresentRedirected @ 0x1C01B5100 (DxgkPresentRedirected.c)
 * Callees:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0014020 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C004BA98 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00F4D30 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGSHAREDSYNCOBJECT@@_K@Z @ 0x1C01849A0 (-VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGS.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall SubmitPresentHistoryTokenPreparation(
        struct DXGADAPTERSTOPRESETLOCKSHARED *this,
        struct COREDEVICEACCESS *a2,
        struct DXGADAPTER *a3,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a4,
        HANDLE Handle,
        bool a6)
{
  __int64 v6; // r15
  struct DXGADAPTER *v8; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v16; // rdx
  BOOL v17; // r13d
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct _KTHREAD **v20; // rcx
  int SwapChainBindingStatus; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  PERESOURCE *v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v30; // rcx
  struct DXGPROCESS *v31; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  HANDLE hSyncObject; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  struct _DXGSHAREDSYNCOBJECT *v39; // rdi
  UINT64 FenceValue; // rax
  NTSTATUS v42; // eax
  PVOID v43; // r12
  __int64 v44; // rax
  int v45; // r9d
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  PVOID Object; // [rsp+30h] [rbp-30h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+40h] [rbp-20h] BYREF
  PERESOURCE *v59; // [rsp+48h] [rbp-18h] BYREF
  char v60; // [rsp+50h] [rbp-10h]
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+40h] BYREF
  PVOID v62; // [rsp+A8h] [rbp+48h] BYREF
  struct DXGADAPTER *v63; // [rsp+B0h] [rbp+50h]

  v63 = a3;
  v6 = *((_QWORD *)a3 + 308);
  v8 = a3;
  if ( v6 != -736 && *(struct _KTHREAD **)(v6 + 744) == KeGetCurrentThread() )
  {
    v44 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v44 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v44);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v6 + 736, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v45 = *(_DWORD *)(v6 + 752);
      if ( v45 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v12, &EventBlockThread, v13, v45);
    }
    ExAcquirePushLockSharedEx(v6 + 736, 0LL);
  }
  CurrentProcess = PsGetCurrentProcess(v12, v11);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  if ( ProcessSessionId >= *(_DWORD *)(v6 + 760)
    || (v16 = *(_QWORD *)(*(_QWORD *)(v6 + 768) + 8LL * ProcessSessionId)) == 0 )
  {
    v16 = 0LL;
  }
  v17 = v16 != 0;
  ExReleasePushLockSharedEx(v6 + 736, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_BYTE *)this + 16) )
  {
    v19 = *((_QWORD *)this + 1) + 120LL;
    *((_BYTE *)this + 16) = 0;
    ExReleasePushLockSharedEx(v19, 0LL);
    KeLeaveCriticalRegion();
    v18 = *((_QWORD *)this + 1);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v18 + 16), (struct DXGADAPTER *)v18);
  }
  if ( *((_BYTE *)a2 + 80) )
    COREACCESS::Release((struct _KTHREAD ***)a2 + 5);
  if ( !*((_BYTE *)a2 + 32) )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18);
    v46[3] = 275LL;
    v46[4] = 4LL;
    v46[5] = (char *)a2 + 8;
    v46[6] = 0LL;
    v46[7] = 0LL;
    WdLogEvent5_WdCriticalError(v46);
  }
  v20 = (struct _KTHREAD **)*((_QWORD *)a2 + 3);
  *((_BYTE *)a2 + 32) = 0;
  if ( KeGetCurrentThread() != v20[20] )
    DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v20);
  if ( Handle )
  {
    v42 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &v62, 0LL);
    v43 = v62;
    v24 = (PERESOURCE *)v42;
    if ( v42 < 0 )
    {
LABEL_57:
      v47 = WdLogNewEntry5_WdEvent(v23, v22);
      *(_QWORD *)(v47 + 24) = v24;
      WdLogEvent5_WdEvent(v47);
      goto LABEL_58;
    }
    if ( a6 )
    {
      Timeout.QuadPart = 0LL;
      if ( KeWaitForSingleObject(v62, Executive, 0, 1u, &Timeout) == 258 )
      {
        ObfDereferenceObject(v43);
        LODWORD(v24) = -1071775486;
LABEL_58:
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
        COREDEVICEACCESS::AcquireSharedUncheck(a2);
        return (unsigned int)v24;
      }
    }
    else
    {
      Timeout.QuadPart = -20000000LL;
      KeWaitForSingleObject(v62, Executive, 0, 1u, &Timeout);
    }
    ObfDereferenceObject(v43);
    v8 = v63;
  }
  SwapChainBindingStatus = DxgkQuerySwapChainBindingStatus(v17, a4);
  v24 = (PERESOURCE *)SwapChainBindingStatus;
  if ( SwapChainBindingStatus < 0 )
  {
    if ( SwapChainBindingStatus == -1071775733 || SwapChainBindingStatus == -1071775730 )
      goto LABEL_58;
    goto LABEL_57;
  }
  if ( !a4 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v23);
    *(_QWORD *)(v48 + 24) = 124LL;
    WdLogEvent5_WdAssertion(v48);
  }
  if ( !*((_BYTE *)this + 16) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 1) + 24LL));
    *(_QWORD *)this = -1LL;
    v25 = *((_QWORD *)this + 1);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v25 + 120, 0LL);
    *((_BYTE *)this + 16) = 1;
  }
  COREACCESS::AcquireShared((DXGADAPTER **)a2 + 1);
  v27 = *(unsigned int *)(*((_QWORD *)a2 + 9) + 424LL);
  if ( (_DWORD)v27 != 1 )
    goto LABEL_61;
  if ( *((_BYTE *)a2 + 80) )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)a2 + 5);
    v26 = *(unsigned int *)(*((_QWORD *)a2 + 7) + 176LL);
    if ( (_DWORD)v26 != 1 )
    {
      COREACCESS::Release((struct _KTHREAD ***)a2 + 5);
LABEL_61:
      COREACCESS::Release((struct _KTHREAD ***)a2 + 1);
      v50 = WdLogNewEntry5_WdError(v49);
      LODWORD(v24) = -1073741130;
      *(_QWORD *)(v50 + 24) = -1073741130LL;
      WdLogEvent5_WdError(v50);
      COREDEVICEACCESS::AcquireSharedUncheck(a2);
      goto LABEL_62;
    }
  }
  LODWORD(v24) = 0;
  if ( a4->Model == D3DKMT_PM_REDIRECTED_FLIP && a4->Token.Flip.hSyncObject )
  {
    v28 = PsGetCurrentProcess(v27, v26);
    ProcessDxgProcess = PsGetProcessDxgProcess(v28);
    v31 = (struct DXGPROCESS *)ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
      {
        ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v52 = ThreadProperty;
        if ( ThreadProperty )
        {
          ObfDereferenceObject(ThreadProperty);
          v31 = *v52;
        }
      }
    }
    Global = DXGGLOBAL::GetGlobal(v30);
    v59 = (PERESOURCE *)Global;
    v60 = 0;
    if ( !Global )
    {
      v53 = WdLogNewEntry5_WdAssertion(v33);
      *(_QWORD *)(v53 + 24) = 2138LL;
      WdLogEvent5_WdAssertion(v53);
      Global = (struct DXGGLOBAL *)v59;
    }
    if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 43)) )
    {
      v54 = WdLogNewEntry5_WdAssertion(v34);
      *(_QWORD *)(v54 + 24) = 2143LL;
      WdLogEvent5_WdAssertion(v54);
    }
    if ( v60 )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34);
      v55[5] = &v59;
      v55[3] = 275LL;
      v55[4] = 4LL;
      v55[6] = 0LL;
      v55[7] = 0LL;
      WdLogEvent5_WdCriticalError(v55);
    }
    v24 = v59;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v24[43], 1u);
    hSyncObject = a4->Token.Flip.hSyncObject;
    v60 = 1;
    LODWORD(v24) = ObReferenceObjectByHandle(
                     hSyncObject,
                     0x20000u,
                     g_pDxgkSharedSyncObjectType,
                     1,
                     &Object,
                     &HandleInformation);
    if ( (int)v24 < 0 )
    {
      v56 = WdLogNewEntry5_WdWarning(v37, v36, v38);
      *(_QWORD *)(v56 + 24) = a4->Token.Flip.hSyncObject;
      WdLogEvent5_WdWarning(v56);
    }
    else
    {
      v39 = (struct _DXGSHAREDSYNCOBJECT *)Object;
      FenceValue = *(_QWORD *)(*(_QWORD *)Object + 112LL);
      if ( FenceValue <= a4->Token.Flip.FenceValue )
        FenceValue = a4->Token.Flip.FenceValue;
      *(_QWORD *)(*(_QWORD *)Object + 112LL) = FenceValue;
      a4->Token.Flip.hSyncObject = 0LL;
      if ( *((_BYTE *)v8 + 185) )
      {
        LODWORD(v24) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetRedirectedFlipFenceValue(
                         (struct DXGADAPTER *)((char *)v8 + 4080),
                         v31,
                         v39,
                         a4->Token.Flip.FenceValue);
        if ( (int)v24 < 0 )
        {
          ObfDereferenceObject(v39);
          if ( v60 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v59);
          goto LABEL_62;
        }
      }
      ObfDereferenceObject(v39);
    }
    if ( v60 )
    {
      v60 = 0;
      ExReleaseResourceLite(v59[43]);
      KeLeaveCriticalRegion();
    }
  }
  if ( (int)v24 < 0 )
LABEL_62:
    DxgkCancelSwapChainBinding(a4);
  return (unsigned int)v24;
}
