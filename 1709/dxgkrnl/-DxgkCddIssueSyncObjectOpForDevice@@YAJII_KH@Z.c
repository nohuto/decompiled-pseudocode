/*
 * XREFs of ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C007C640
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0084890 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0086FA0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C00E9300 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddIssueSyncObjectOpForDevice(unsigned int a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  __int64 v6; // rsi
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // r8d
  __int64 v17; // rbx
  __int64 v18; // rcx
  struct _KEVENT *v19; // rcx
  unsigned __int64 v20; // rdx
  volatile signed __int64 *v21; // rcx
  volatile signed __int64 *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r15
  __int64 **v26; // rdi
  __int64 **v27; // rax
  unsigned int v28; // r14d
  _BYTE *PoolWithTag; // r15
  __int64 v30; // rcx
  const unsigned int *v31; // r15
  __int64 *v32; // rdx
  unsigned int v33; // r8d
  __int64 *i; // rdi
  unsigned int v35; // eax
  int v36; // eax
  int v37; // eax
  unsigned int v38; // edi
  struct DXGADAPTER *v39; // rcx
  DXGADAPTER *v40; // rcx
  __int64 *ThreadProperty; // rax
  __int64 *v43; // rbx
  __int64 v44; // rbx
  __int64 v45; // rax
  int v46; // r9d
  _QWORD *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v55; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v56[3]; // [rsp+6Ch] [rbp-94h] BYREF
  char v57[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v58; // [rsp+80h] [rbp-80h]
  DXGADAPTER *v59; // [rsp+88h] [rbp-78h]
  char v60; // [rsp+90h] [rbp-70h]
  char v61[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-60h]
  struct DXGADAPTER *v63; // [rsp+A8h] [rbp-58h]
  char v64; // [rsp+B0h] [rbp-50h]
  __int64 v65; // [rsp+B8h] [rbp-48h]
  char v66; // [rsp+C0h] [rbp-40h]
  int v67; // [rsp+D0h] [rbp-30h]
  PVOID P; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v69[64]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v70; // [rsp+128h] [rbp+28h]

  v6 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v8);
  v11 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v43 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v11 = *v43;
      }
    }
  }
  if ( !v11 )
  {
    v38 = -1073741811;
    v44 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v44 + 24) = -1073741811LL;
    *(_QWORD *)(v44 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v44);
    return v38;
  }
  if ( v11 != -200 && *(struct _KTHREAD **)(v11 + 208) == KeGetCurrentThread() )
  {
    v45 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v45 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v45);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v11 + 200, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v46 = *(_DWORD *)(v11 + 216);
      if ( v46 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v12, &EventBlockThread, v13, v46);
    }
    ExAcquirePushLockSharedEx(v11 + 200, 0LL);
  }
  v14 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 < *(_DWORD *)(v11 + 240)
    && (v15 = *(_QWORD *)(v11 + 224),
        v16 = *(_DWORD *)(v15 + 16 * v14 + 8),
        (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60))
    && (v16 & 0x2000) == 0
    && (v16 & 0x1F) != 0
    && (*(_BYTE *)(v15 + 16LL * (unsigned int)v14 + 8) & 0x1F) == 3 )
  {
    v17 = *(_QWORD *)(v15 + 16LL * (unsigned int)v14);
    if ( v17 )
      _InterlockedIncrement64((volatile signed __int64 *)(v17 + 64));
  }
  else
  {
    v17 = 0LL;
  }
  ExReleasePushLockSharedEx(v11 + 200, 0LL);
  KeLeaveCriticalRegion();
  if ( !v17 )
  {
    v38 = -1073741811;
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v47[3] = -1073741811LL;
    v48 = PsGetCurrentProcess();
    v47[5] = v6;
    v47[4] = v48;
    WdLogEvent5_WdError(v47);
    return v38;
  }
  v19 = *(struct _KEVENT **)(v17 + 16);
  if ( *(_DWORD *)(v17 + 328) == 2 )
  {
    if ( !KeReadStateEvent(v19 + 4) )
      goto LABEL_78;
  }
  else if ( !KeReadStateEvent(v19 + 3) )
  {
    goto LABEL_78;
  }
  KeEnterCriticalRegion();
  if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 104), 0) )
  {
    v21 = *(volatile signed __int64 **)(*(_QWORD *)(v17 + 16) + 16LL);
    v59 = (DXGADAPTER *)v21;
    v60 = 0;
    if ( v21 )
    {
      _InterlockedIncrement64(v21 + 3);
      v58 = -1LL;
    }
    v22 = *(volatile signed __int64 **)(*(_QWORD *)(v17 + 16) + 16LL);
    v63 = (struct DXGADAPTER *)v22;
    v64 = 0;
    if ( v22 )
    {
      _InterlockedIncrement64(v22 + 3);
      v62 = -1LL;
    }
    v65 = v17;
    v66 = 0;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v59 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v59 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v23, &EventBlockThread, v24, 72);
        KeWaitForSingleObject((char *)v59 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v59);
    }
    v60 = 1;
    if ( *(_DWORD *)(v65 + 408) != 1 )
      goto LABEL_86;
    if ( v66 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v61);
      if ( *((_DWORD *)v63 + 44) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v61);
LABEL_86:
        COREACCESS::Release((COREACCESS *)v57);
        v50 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v50 + 24) = -1073741130LL;
        *(_QWORD *)(v50 + 32) = v11;
        WdLogEvent5_WdEvent(v50);
        v38 = -1073741130;
        goto LABEL_52;
      }
    }
    LODWORD(v25) = -1073741823;
    if ( !a4 )
    {
      for ( i = *(__int64 **)(v17 + 344); i != (__int64 *)(v17 + 344) && i; i = (__int64 *)*i )
      {
        v35 = *((_DWORD *)i + 6);
        v56[0] = a2;
        v36 = WaitForSynchronizationObjectFromGpu(1u, v56, 0LL, a3, v35, (struct DXGPROCESS *)v11, 0, 1, 0);
        v25 = v36;
        if ( v36 < 0 )
        {
          v53 = WdLogNewEntry5_WdEvent();
          *(_QWORD *)(v53 + 24) = v17;
          *(_QWORD *)(v53 + 32) = v25;
          WdLogEvent5_WdEvent(v53);
          goto LABEL_51;
        }
      }
      goto LABEL_51;
    }
    v55 = a2;
    v26 = (__int64 **)(v17 + 344);
    v27 = *(__int64 ***)(v17 + 344);
    v28 = 0;
    while ( v27 != v26 && v27 )
    {
      v27 = (__int64 **)*v27;
      ++v28;
    }
    P = 0LL;
    v70 = 0;
    if ( v28 > 0x10 )
    {
      v20 = 0xFFFFFFFFFFFFFFFFuLL % v28;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v28 < 4 )
        goto LABEL_89;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v28, 0x4B677844u);
      P = PoolWithTag;
    }
    else
    {
      PoolWithTag = v69;
      P = v69;
    }
    v70 = v28;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 4LL * v28);
      v31 = (const unsigned int *)P;
      if ( P )
      {
        v32 = *v26;
        v33 = 0;
        while ( v32 != (__int64 *)v26 && v32 )
        {
          v30 = v33++;
          v31[v30] = *((_DWORD *)v32 + 6);
          v32 = (__int64 *)*v32;
        }
        if ( v28 != v33 )
        {
          v51 = WdLogNewEntry5_WdAssertion(v30);
          *(_QWORD *)(v51 + 24) = 5576LL;
          WdLogEvent5_WdAssertion(v51);
        }
        v67 = 0;
        v37 = SignalSynchronizationObjectInternal(1u, &v55, 0, v28, v31, 0LL, a3, 0LL, (struct DXGPROCESS *)v11, 0, 1);
        v25 = v37;
        if ( v37 < 0 )
        {
          v52 = WdLogNewEntry5_WdEvent();
          *(_QWORD *)(v52 + 24) = v17;
          *(_QWORD *)(v52 + 32) = v25;
          WdLogEvent5_WdEvent(v52);
        }
        if ( P != v69 && P )
          ExFreePoolWithTag(P, 0);
LABEL_51:
        v38 = v25;
LABEL_52:
        v39 = v63;
        if ( v63 )
        {
          if ( v64 )
          {
            COREACCESS::Release((COREACCESS *)v61);
            v39 = v63;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v39 + 2), v39);
        }
        v40 = v59;
        if ( v59 )
        {
          if ( v60 )
          {
            v60 = 0;
            v40 = v59;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v59 + 20) )
            {
              DXGADAPTER::ReleaseCoreResource(v59);
              v40 = v59;
            }
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v40 + 2), v40);
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v17 + 104));
        KeLeaveCriticalRegion();
        goto LABEL_64;
      }
    }
LABEL_89:
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P, v20);
    v38 = -1073741801;
    goto LABEL_52;
  }
  KeLeaveCriticalRegion();
LABEL_78:
  v49 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v49 + 24) = v17;
  WdLogEvent5_WdEvent(v49);
  v38 = -2147483631;
LABEL_64:
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v17 + 16), (struct DXGDEVICE *)v17);
  return v38;
}
