/*
 * XREFs of ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C0098AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0098E10 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00F4D30 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddIssueSyncObjectOpForDevice(unsigned int a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // edx
  __int64 v17; // rbx
  __int64 v18; // rcx
  struct _KEVENT *v19; // rcx
  volatile signed __int64 *v20; // rcx
  volatile signed __int64 *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // esi
  struct DXGADAPTER *v25; // rcx
  DXGADAPTER *v26; // rcx
  __int64 *ThreadProperty; // rax
  __int64 *v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // r9d
  _QWORD *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  struct _KTHREAD **v37[2]; // [rsp+48h] [rbp-21h] BYREF
  DXGADAPTER *v38; // [rsp+58h] [rbp-11h]
  char v39; // [rsp+60h] [rbp-9h]
  struct _KTHREAD **v40[2]; // [rsp+68h] [rbp-1h] BYREF
  struct DXGADAPTER *v41; // [rsp+78h] [rbp+Fh]
  char v42; // [rsp+80h] [rbp+17h]
  __int64 v43; // [rsp+88h] [rbp+1Fh]
  char v44; // [rsp+90h] [rbp+27h]

  v5 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v29 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v11 = *v29;
      }
    }
  }
  if ( !v11 )
  {
    v24 = -1073741811;
    v30 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    *(_QWORD *)(v30 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v30);
    return v24;
  }
  if ( v11 != -208 && *(struct _KTHREAD **)(v11 + 216) == KeGetCurrentThread() )
  {
    v31 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v31 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v31);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v11 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v32 = *(_DWORD *)(v11 + 224);
      if ( v32 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v12, &EventBlockThread, v13, v32);
    }
    ExAcquirePushLockSharedEx(v11 + 208, 0LL);
  }
  v14 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 < *(_DWORD *)(v11 + 248)
    && (v15 = *(_QWORD *)(v11 + 232),
        v16 = *(_DWORD *)(v15 + 16 * v14 + 8),
        (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60))
    && (v16 & 0x2000) == 0
    && (v16 & 0x1F) == 3 )
  {
    v17 = *(_QWORD *)(v15 + 16LL * (unsigned int)v14);
    if ( v17 )
      _InterlockedIncrement64((volatile signed __int64 *)(v17 + 64));
  }
  else
  {
    v17 = 0LL;
  }
  ExReleasePushLockSharedEx(v11 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v17 )
  {
    v24 = -1073741811;
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v33[3] = -1073741811LL;
    v34 = PsGetCurrentProcess();
    v33[5] = v5;
    v33[4] = v34;
    WdLogEvent5_WdError(v33);
    return v24;
  }
  v19 = *(struct _KEVENT **)(v17 + 16);
  if ( *(_DWORD *)(v17 + 328) == 2 )
  {
    if ( !KeReadStateEvent(v19 + 4) )
      goto LABEL_54;
  }
  else if ( !KeReadStateEvent(v19 + 3) )
  {
    goto LABEL_54;
  }
  KeEnterCriticalRegion();
  if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 104), 0) )
  {
    v20 = *(volatile signed __int64 **)(*(_QWORD *)(v17 + 16) + 16LL);
    v38 = (DXGADAPTER *)v20;
    v39 = 0;
    if ( v20 )
    {
      _InterlockedIncrement64(v20 + 3);
      v37[1] = (struct _KTHREAD **)-1LL;
    }
    v21 = *(volatile signed __int64 **)(*(_QWORD *)(v17 + 16) + 16LL);
    v41 = (struct DXGADAPTER *)v21;
    v42 = 0;
    if ( v21 )
    {
      _InterlockedIncrement64(v21 + 3);
      v40[1] = (struct _KTHREAD **)-1LL;
    }
    v43 = v17;
    v44 = 0;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v38 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v38 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v22, &EventBlockThread, v23, 72);
        KeWaitForSingleObject((char *)v38 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v38);
    }
    v39 = 1;
    if ( *(_DWORD *)(v43 + 424) == 1 )
    {
      if ( !v44 || (COREACCESS::AcquireShared((DXGADAPTER **)v40), *((_DWORD *)v41 + 44) == 1) )
      {
        v24 = DXGDEVICE::IssueSyncObjectOpForAllContexts((DXGDEVICE *)v17, (struct DXGPROCESS *)v11, a2, a3, a4);
LABEL_28:
        v25 = v41;
        if ( v41 )
        {
          if ( v42 )
          {
            COREACCESS::Release(v40);
            v25 = v41;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v25 + 2), v25);
        }
        v26 = v38;
        if ( v38 )
        {
          if ( v39 )
          {
            v39 = 0;
            v26 = v38;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v38 + 20) )
            {
              DXGADAPTER::ReleaseCoreResource(v38);
              v26 = v38;
            }
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v26 + 2), v26);
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v17 + 104));
        KeLeaveCriticalRegion();
        goto LABEL_40;
      }
      COREACCESS::Release(v40);
    }
    COREACCESS::Release(v37);
    v36 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v36 + 24) = -1073741130LL;
    *(_QWORD *)(v36 + 32) = v11;
    WdLogEvent5_WdEvent(v36);
    v24 = -1073741130;
    goto LABEL_28;
  }
  KeLeaveCriticalRegion();
LABEL_54:
  v35 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v35 + 24) = v17;
  WdLogEvent5_WdEvent(v35);
  v24 = -2147483631;
LABEL_40:
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v17 + 16), (struct DXGDEVICE *)v17);
  return v24;
}
