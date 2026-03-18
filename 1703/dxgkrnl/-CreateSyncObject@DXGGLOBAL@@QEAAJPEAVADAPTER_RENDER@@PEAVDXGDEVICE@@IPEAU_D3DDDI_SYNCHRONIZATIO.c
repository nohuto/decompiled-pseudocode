/*
 * XREFs of ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00D7AB0
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00881D8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C00FE6A4 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C00D8538 (--0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00D8724 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00D8840 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@@Z @ 0x1C00D8BD0 (--0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00D8CA0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CreateSyncObject(
        DXGGLOBAL *this,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        __int64 a4,
        struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *a5,
        bool a6,
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
  int v22; // esi
  unsigned __int64 *p_FenceValueGPUVirtualAddress; // rcx
  void **p_FenceValueCPUVirtualAddress; // rdx
  volatile signed __int64 *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // rax
  DXGSYNCOBJECT **v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v40; // rax
  unsigned int v42; // [rsp+B8h] [rbp+20h]

  v42 = a4;
  if ( !a5 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = 2041LL;
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
    v14 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 2042LL;
    WdLogEvent5_WdAssertion(v14);
    goto LABEL_8;
  }
  *a9 = 0LL;
LABEL_8:
  if ( a10 )
    *a10 = 0;
  if ( (a5->Flags.Value & 4) != 0 )
  {
    if ( *(_BYTE *)(*((_QWORD *)a2 + 2) + 186LL) )
    {
      v15 = WdLogNewEntry5_WdError(this, a2);
      *(_QWORD *)(v15 + 24) = 2070LL;
      WdLogEvent5_WdError(v15);
      return 3221225473LL;
    }
    v17 = (DXGSYNCOBJECT *)operator new(0x100uLL, 0x4B677844u, (enum _POOL_TYPE)512);
    v19 = v17;
    if ( !v17 )
      goto LABEL_54;
    DXGSYNCOBJECT::DXGSYNCOBJECT(v17, this, a5);
    v18[31] = 0LL;
    v18[30] = v18 + 29;
    v18[29] = v18 + 29;
  }
  else
  {
    PoolWithTag = (DXGSYNCOBJECT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x110uLL, 0x4B677844u);
    v19 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_54:
      v40 = WdLogNewEntry5_WdLowResource(v18);
      *(_QWORD *)(v40 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v40);
      return 3221225495LL;
    }
    DXGSYNCOBJECT::DXGSYNCOBJECT(PoolWithTag, this, a5);
    DXGADAPTERSYNCOBJECT::DXGADAPTERSYNCOBJECT((DXGADAPTERSYNCOBJECT *)(v21 + 232), a2);
  }
  if ( !v19 )
    goto LABEL_54;
  *((_BYTE *)v19 + 225) = *(_BYTE *)(*((_QWORD *)a2 + 2) + 186LL);
  v22 = DXGSYNCOBJECT::Initialize(v19, a7);
  if ( v22 < 0 )
    goto LABEL_19;
  if ( a10 || (unsigned int)(*((_DWORD *)v19 + 36) - 5) <= 1 )
  {
    if ( *((_DWORD *)v19 + 36) == 6 )
    {
      p_FenceValueGPUVirtualAddress = &a5->PeriodicMonitoredFence.FenceValueGPUVirtualAddress;
      p_FenceValueCPUVirtualAddress = &a5->PeriodicMonitoredFence.FenceValueCPUVirtualAddress;
    }
    else
    {
      p_FenceValueGPUVirtualAddress = &a5->MonitoredFence.FenceValueGPUVirtualAddress;
      p_FenceValueCPUVirtualAddress = &a5->MonitoredFence.FenceValueCPUVirtualAddress;
    }
    v22 = DXGSYNCOBJECT::Open(
            v19,
            a2,
            a3,
            a9,
            a10,
            p_FenceValueCPUVirtualAddress,
            p_FenceValueGPUVirtualAddress,
            v42,
            a11,
            a6,
            a5->Flags);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)v19 + 6);
  }
  if ( v22 < 0 )
  {
LABEL_19:
    DXGSYNCOBJECT::Destroy(v19);
    return (unsigned int)v22;
  }
  else
  {
    v25 = (volatile signed __int64 *)((char *)this + 280);
    KeEnterCriticalRegion();
    if ( *((struct _KTHREAD **)this + 36) == KeGetCurrentThread() )
    {
      if ( *((int *)this + 76) <= 0 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
        *(_QWORD *)(v30 + 24) = 351LL;
        WdLogEvent5_WdAssertion(v30);
      }
      ++*((_DWORD *)this + 76);
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 296, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v32 = *((_DWORD *)this + 77);
          if ( v32 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v31, &EventBlockThread, v28, v32);
        }
        _InterlockedIncrement64(v25);
        ExAcquirePushLockExclusiveEx((char *)this + 296, 0LL);
      }
      if ( *((_QWORD *)this + 36) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v31, v26, v28, v29);
        *(_QWORD *)(v33 + 24) = 375LL;
        WdLogEvent5_WdAssertion(v33);
      }
      if ( *((_DWORD *)this + 76) )
      {
        v34 = WdLogNewEntry5_WdAssertion(v31, v26, v28, v29);
        *(_QWORD *)(v34 + 24) = 376LL;
        WdLogEvent5_WdAssertion(v34);
      }
      *((_QWORD *)this + 36) = KeGetCurrentThread();
      *((_DWORD *)this + 76) = 1;
    }
    v35 = (DXGSYNCOBJECT **)((char *)this + 320);
    v36 = *((_QWORD *)this + 40);
    if ( *(DXGGLOBAL **)(v36 + 8) != (DXGGLOBAL *)((char *)this + 320) )
      __fastfail(3u);
    *(_QWORD *)v19 = v36;
    *((_QWORD *)v19 + 1) = v35;
    *(_QWORD *)(v36 + 8) = v19;
    *v35 = v19;
    if ( *((struct _KTHREAD **)this + 36) != KeGetCurrentThread() )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v26, v28);
      v37[3] = 275LL;
      v37[4] = 4LL;
      v37[5] = v25;
      v37[6] = 0LL;
      v37[7] = 0LL;
      WdLogEvent5_WdCriticalError(v37);
    }
    if ( *((int *)this + 76) <= 0 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v36, v26, v28, v29);
      *(_QWORD *)(v38 + 24) = 395LL;
      WdLogEvent5_WdAssertion(v38);
    }
    if ( (*((_DWORD *)this + 76))-- == 1 )
    {
      *((_QWORD *)this + 36) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 296, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( a8 )
      *a8 = v19;
    return (unsigned int)v22;
  }
}
