/*
 * XREFs of ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C008BE80
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C007A948 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C0091A90 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C008AB70 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C008B2C0 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C008B3E0 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@@Z @ 0x1C008B7A0 (--0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@@Z.c)
 *     ??0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C008C438 (--0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CreateSyncObject(
        DXGGLOBAL *this,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        unsigned int a4,
        struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *a5,
        char a6,
        struct DXGPAGINGQUEUE *a7,
        struct DXGSYNCOBJECT **a8,
        struct DXGDEVICESYNCOBJECT **a9,
        unsigned int *a10,
        struct DXGADAPTERSYNCOBJECT **a11)
{
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  DXGSYNCOBJECT *v17; // rax
  _QWORD *v18; // rcx
  DXGSYNCOBJECT *v19; // rdi
  DXGSYNCOBJECT *PoolWithTag; // rax
  __int64 v21; // rcx
  __int64 CurrentProcess; // rax
  __int64 v23; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v25; // rsi
  __int64 *ThreadProperty; // rax
  __int64 *v27; // r15
  int v28; // esi
  unsigned __int64 *p_FenceValueGPUVirtualAddress; // rcx
  void **p_FenceValueCPUVirtualAddress; // rdx
  volatile signed __int64 *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // r9d
  __int64 v38; // rax
  __int64 v39; // rax
  DXGSYNCOBJECT **v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v45; // rax

  if ( !a5 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v13 + 24) = 2135LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( a8 )
  {
    *a8 = 0LL;
    if ( !a9 )
      goto LABEL_8;
  }
  else if ( !a9 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 2136LL;
    WdLogEvent5_WdAssertion(v14);
    goto LABEL_8;
  }
  *a9 = 0LL;
LABEL_8:
  if ( a10 )
    *a10 = 0;
  if ( (a5->Flags.Value & 4) != 0 )
  {
    if ( *(_BYTE *)(*((_QWORD *)a2 + 2) + 185LL) )
    {
      v15 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v15 + 24) = 2164LL;
      WdLogEvent5_WdError(v15);
      return 3221225473LL;
    }
    v17 = (DXGSYNCOBJECT *)operator new(0x110uLL, 0x4B677844u, (POOL_TYPE)512);
    v19 = v17;
    if ( !v17 )
      goto LABEL_58;
    DXGSYNCOBJECT::DXGSYNCOBJECT(v17, this, a5);
    v18[33] = 0LL;
    v18[32] = v18 + 31;
    v18[31] = v18 + 31;
  }
  else
  {
    PoolWithTag = (DXGSYNCOBJECT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x120uLL, 0x4B677844u);
    v19 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_58:
      v45 = WdLogNewEntry5_WdLowResource(v18);
      *(_QWORD *)(v45 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v45);
      return 3221225495LL;
    }
    DXGSYNCOBJECT::DXGSYNCOBJECT(PoolWithTag, this, a5);
    DXGADAPTERSYNCOBJECT::DXGADAPTERSYNCOBJECT((DXGADAPTERSYNCOBJECT *)(v21 + 248), a2);
  }
  if ( !v19 )
    goto LABEL_58;
  *((_BYTE *)v19 + 241) = *(_BYTE *)(*((_QWORD *)a2 + 2) + 185LL);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v23);
  v25 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v27 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v25 = *v27;
      }
    }
  }
  *((_BYTE *)v19 + 242) = (*(_BYTE *)(v25 + 307) & 8) != 0;
  v28 = DXGSYNCOBJECT::Initialize(v19, a7);
  if ( v28 < 0 )
    goto LABEL_23;
  if ( a10 || (unsigned int)(*((_DWORD *)v19 + 40) - 5) <= 1 )
  {
    if ( *((_DWORD *)v19 + 40) == 6 )
    {
      p_FenceValueGPUVirtualAddress = &a5->PeriodicMonitoredFence.FenceValueGPUVirtualAddress;
      p_FenceValueCPUVirtualAddress = &a5->PeriodicMonitoredFence.FenceValueCPUVirtualAddress;
    }
    else
    {
      p_FenceValueGPUVirtualAddress = &a5->MonitoredFence.FenceValueGPUVirtualAddress;
      p_FenceValueCPUVirtualAddress = &a5->MonitoredFence.FenceValueCPUVirtualAddress;
    }
    v28 = DXGSYNCOBJECT::Open(
            v19,
            a2,
            a3,
            a9,
            a10,
            p_FenceValueCPUVirtualAddress,
            p_FenceValueGPUVirtualAddress,
            a4,
            a11,
            a6,
            a5->Flags);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)v19 + 6);
  }
  if ( v28 < 0 )
  {
LABEL_23:
    DXGSYNCOBJECT::Destroy(v19);
    return (unsigned int)v28;
  }
  else
  {
    v31 = (volatile signed __int64 *)((char *)this + 280);
    KeEnterCriticalRegion();
    if ( *((struct _KTHREAD **)this + 36) == KeGetCurrentThread() )
    {
      if ( *((int *)this + 76) <= 0 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v33);
        *(_QWORD *)(v35 + 24) = 362LL;
        WdLogEvent5_WdAssertion(v35);
      }
      ++*((_DWORD *)this + 76);
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 296, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v37 = *((_DWORD *)this + 77);
          if ( v37 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v36, &EventBlockThread, v34, v37);
        }
        _InterlockedIncrement64(v31);
        ExAcquirePushLockExclusiveEx((char *)this + 296, 0LL);
      }
      if ( *((_QWORD *)this + 36) )
      {
        v38 = WdLogNewEntry5_WdAssertion(v36);
        *(_QWORD *)(v38 + 24) = 386LL;
        WdLogEvent5_WdAssertion(v38);
      }
      if ( *((_DWORD *)this + 76) )
      {
        v39 = WdLogNewEntry5_WdAssertion(v36);
        *(_QWORD *)(v39 + 24) = 387LL;
        WdLogEvent5_WdAssertion(v39);
      }
      *((_QWORD *)this + 36) = KeGetCurrentThread();
      *((_DWORD *)this + 76) = 1;
    }
    v40 = (DXGSYNCOBJECT **)((char *)this + 320);
    v41 = *((_QWORD *)this + 40);
    if ( *(DXGGLOBAL **)(v41 + 8) != (DXGGLOBAL *)((char *)this + 320) )
      __fastfail(3u);
    *(_QWORD *)v19 = v41;
    *((_QWORD *)v19 + 1) = v40;
    *(_QWORD *)(v41 + 8) = v19;
    *v40 = v19;
    if ( *((struct _KTHREAD **)this + 36) != KeGetCurrentThread() )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v41, v32, v34);
      v42[3] = 275LL;
      v42[4] = 4LL;
      v42[5] = v31;
      v42[6] = 0LL;
      v42[7] = 0LL;
      WdLogEvent5_WdCriticalError(v42);
    }
    if ( *((int *)this + 76) <= 0 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v41);
      *(_QWORD *)(v43 + 24) = 406LL;
      WdLogEvent5_WdAssertion(v43);
    }
    if ( (*((_DWORD *)this + 76))-- == 1 )
    {
      *((_QWORD *)this + 36) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 296, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( a8 )
      *a8 = v19;
    return (unsigned int)v28;
  }
}
