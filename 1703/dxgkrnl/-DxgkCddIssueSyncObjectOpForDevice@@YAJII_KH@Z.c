/*
 * XREFs of ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C0089A10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C008DBB0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00D3290 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00D38B0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddIssueSyncObjectOpForDevice(unsigned int a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  __int64 v6; // rsi
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // edx
  __int64 v18; // r9
  int v19; // r8d
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _KEVENT *v23; // rcx
  unsigned __int64 v24; // rdx
  volatile signed __int64 *v25; // rcx
  volatile signed __int64 *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r15
  __int64 **v30; // rdi
  __int64 **v31; // rax
  unsigned int v32; // r14d
  _BYTE *PoolWithTag; // r15
  __int64 v34; // rcx
  __int64 v35; // r9
  const unsigned int *v36; // r15
  __int64 *v37; // rdx
  __int64 v38; // r8
  __int64 *i; // rdi
  unsigned int v40; // eax
  int v41; // eax
  int v42; // eax
  unsigned int v43; // edi
  struct DXGADAPTER *v44; // rcx
  DXGADAPTER *v45; // rcx
  __int64 *ThreadProperty; // rax
  __int64 v48; // rbx
  __int64 v49; // rax
  int v50; // r9d
  _QWORD *v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned int v59; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v60[3]; // [rsp+6Ch] [rbp-94h] BYREF
  _BYTE v61[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v62; // [rsp+80h] [rbp-80h]
  DXGADAPTER *v63; // [rsp+88h] [rbp-78h]
  char v64; // [rsp+90h] [rbp-70h]
  _BYTE v65[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-60h]
  struct DXGADAPTER *v67; // [rsp+A8h] [rbp-58h]
  char v68; // [rsp+B0h] [rbp-50h]
  __int64 v69; // [rsp+B8h] [rbp-48h]
  char v70; // [rsp+C0h] [rbp-40h]
  int v71; // [rsp+D0h] [rbp-30h]
  PVOID P; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v73[64]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v74; // [rsp+128h] [rbp+28h]

  v6 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v8);
  v14 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v14 = *ThreadProperty;
    }
  }
  if ( !v14 )
  {
    v43 = -1073741811;
    v48 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v48 + 24) = -1073741811LL;
    *(_QWORD *)(v48 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v48);
    return v43;
  }
  if ( v14 != -168 && *(struct _KTHREAD **)(v14 + 176) == KeGetCurrentThread() )
  {
    v49 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v49 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v49);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14 + 168, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v50 = *(_DWORD *)(v14 + 184);
      if ( v50 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v15, &EventBlockThread, v16, v50);
    }
    ExAcquirePushLockSharedEx(v14 + 168, 0LL);
  }
  v17 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( v17 < *(_DWORD *)(v14 + 208)
    && (v18 = *(_QWORD *)(v14 + 192),
        v19 = *(_DWORD *)(v18 + 16LL * v17 + 8),
        (((unsigned int)v6 >> 26) & 0x30) == (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x30))
    && (v19 & 0x1000) == 0
    && (v19 & 0xF) != 0
    && (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0xF) == 3 )
  {
    v20 = *(_QWORD *)(v18 + 16LL * v17);
    if ( v20 )
      _InterlockedIncrement64((volatile signed __int64 *)(v20 + 64));
  }
  else
  {
    v20 = 0LL;
  }
  ExReleasePushLockSharedEx(v14 + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( !v20 )
  {
    v43 = -1073741811;
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v51[3] = -1073741811LL;
    v52 = PsGetCurrentProcess();
    v51[5] = v6;
    v51[4] = v52;
    WdLogEvent5_WdError(v51);
    return v43;
  }
  v23 = *(struct _KEVENT **)(v20 + 16);
  if ( *(_DWORD *)(v20 + 328) == 2 )
  {
    if ( !KeReadStateEvent(v23 + 4) )
      goto LABEL_78;
  }
  else if ( !KeReadStateEvent(v23 + 3) )
  {
    goto LABEL_78;
  }
  KeEnterCriticalRegion();
  if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 104), 0) )
  {
    v25 = *(volatile signed __int64 **)(*(_QWORD *)(v20 + 16) + 16LL);
    v63 = (DXGADAPTER *)v25;
    v64 = 0;
    if ( v25 )
    {
      _InterlockedIncrement64(v25 + 3);
      v62 = -1LL;
    }
    v26 = *(volatile signed __int64 **)(*(_QWORD *)(v20 + 16) + 16LL);
    v67 = (struct DXGADAPTER *)v26;
    v68 = 0;
    if ( v26 )
    {
      _InterlockedIncrement64(v26 + 3);
      v66 = -1LL;
    }
    v69 = v20;
    v70 = 0;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v63 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v63 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v27, &EventBlockThread, v28, 72);
        KeWaitForSingleObject((char *)v63 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v63);
    }
    v64 = 1;
    if ( *(_DWORD *)(v69 + 408) != 1 )
      goto LABEL_86;
    if ( v70 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v65);
      if ( *((_DWORD *)v67 + 44) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v65);
LABEL_86:
        COREACCESS::Release((COREACCESS *)v61);
        v54 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v54 + 24) = -1073741130LL;
        *(_QWORD *)(v54 + 32) = v14;
        WdLogEvent5_WdEvent(v54);
        v43 = -1073741130;
        goto LABEL_52;
      }
    }
    LODWORD(v29) = -1073741823;
    if ( !a4 )
    {
      for ( i = *(__int64 **)(v20 + 344); i != (__int64 *)(v20 + 344) && i; i = (__int64 *)*i )
      {
        v40 = *((_DWORD *)i + 6);
        v60[0] = a2;
        v41 = WaitForSynchronizationObjectFromGpu(1u, v60, 0LL, a3, v40, (struct DXGPROCESS *)v14, 0, 1, 0);
        v29 = v41;
        if ( v41 < 0 )
        {
          v57 = WdLogNewEntry5_WdEvent();
          *(_QWORD *)(v57 + 24) = v20;
          *(_QWORD *)(v57 + 32) = v29;
          WdLogEvent5_WdEvent(v57);
          goto LABEL_51;
        }
      }
      goto LABEL_51;
    }
    v59 = a2;
    v30 = (__int64 **)(v20 + 344);
    v31 = *(__int64 ***)(v20 + 344);
    v32 = 0;
    while ( v31 != v30 && v31 )
    {
      v31 = (__int64 **)*v31;
      ++v32;
    }
    P = 0LL;
    v74 = 0;
    if ( v32 > 0x10 )
    {
      v24 = 0xFFFFFFFFFFFFFFFFuLL % v32;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v32 < 4 )
        goto LABEL_89;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v32, 0x4B677844u);
      P = PoolWithTag;
    }
    else
    {
      PoolWithTag = v73;
      P = v73;
    }
    v74 = v32;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 4LL * v32);
      v36 = (const unsigned int *)P;
      if ( P )
      {
        v37 = *v30;
        v38 = 0LL;
        while ( v37 != (__int64 *)v30 && v37 )
        {
          v34 = (unsigned int)v38;
          v38 = (unsigned int)(v38 + 1);
          v36[v34] = *((_DWORD *)v37 + 6);
          v37 = (__int64 *)*v37;
        }
        if ( v32 != (_DWORD)v38 )
        {
          v55 = WdLogNewEntry5_WdAssertion(v34, v37, v38, v35);
          *(_QWORD *)(v55 + 24) = 5590LL;
          WdLogEvent5_WdAssertion(v55);
        }
        v71 = 0;
        v42 = SignalSynchronizationObjectInternal(1u, &v59, 0, v32, v36, 0LL, a3, 0LL, (struct DXGPROCESS *)v14, 0, 1);
        v29 = v42;
        if ( v42 < 0 )
        {
          v56 = WdLogNewEntry5_WdEvent();
          *(_QWORD *)(v56 + 24) = v20;
          *(_QWORD *)(v56 + 32) = v29;
          WdLogEvent5_WdEvent(v56);
        }
        if ( P != v73 && P )
          ExFreePoolWithTag(P, 0);
LABEL_51:
        v43 = v29;
LABEL_52:
        v44 = v67;
        if ( v67 )
        {
          if ( v68 )
          {
            COREACCESS::Release((COREACCESS *)v65);
            v44 = v67;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v44 + 2), v44);
        }
        v45 = v63;
        if ( v63 )
        {
          if ( v64 )
          {
            v64 = 0;
            v45 = v63;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v63 + 20) )
            {
              DXGADAPTER::ReleaseCoreResource(v63);
              v45 = v63;
            }
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v45 + 2), v45);
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v20 + 104));
        KeLeaveCriticalRegion();
        goto LABEL_64;
      }
    }
LABEL_89:
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P, v24);
    v43 = -1073741801;
    goto LABEL_52;
  }
  KeLeaveCriticalRegion();
LABEL_78:
  v53 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v53 + 24) = v20;
  WdLogEvent5_WdEvent(v53);
  v43 = -2147483631;
LABEL_64:
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v20 + 16), (struct DXGDEVICE *)v20);
  return v43;
}
