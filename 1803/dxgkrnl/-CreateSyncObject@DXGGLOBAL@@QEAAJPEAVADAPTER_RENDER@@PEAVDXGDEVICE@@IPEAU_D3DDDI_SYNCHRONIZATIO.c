/*
 * XREFs of ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00FA230
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0097778 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C00BE814 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C01A30D4 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00F8E90 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00F9720 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00F9840 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@@Z @ 0x1C00F9C90 (--0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@@Z.c)
 *     ??0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C00FA7A0 (--0DXGADAPTERSYNCOBJECT@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
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
  DXGSYNCOBJECT *v15; // rax
  _QWORD *v16; // rcx
  DXGSYNCOBJECT *v17; // rbx
  __int64 v18; // rdx
  DXGSYNCOBJECT *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 *ThreadProperty; // rax
  __int64 *v27; // rsi
  bool v28; // al
  char v29; // al
  __int64 v30; // rax
  bool v31; // zf
  __int64 v32; // rax
  bool v33; // al
  int v34; // esi
  int v36; // eax
  volatile signed __int64 *v37; // rdi
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // r9d
  __int64 v45; // rax
  __int64 v46; // rax
  DXGSYNCOBJECT **v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  int v50; // eax
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rax
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v54; // [rsp+50h] [rbp-48h]

  if ( !a5 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v13 + 24) = 2302LL;
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
    *(_QWORD *)(v14 + 24) = 2303LL;
    WdLogEvent5_WdAssertion(v14);
    goto LABEL_8;
  }
  *a9 = 0LL;
LABEL_8:
  if ( a10 )
    *a10 = 0;
  if ( (a5->Flags.Value & 4) != 0 )
  {
    v15 = (DXGSYNCOBJECT *)operator new[](0x120uLL, 0x4B677844u, (POOL_TYPE)512);
    v17 = v15;
    if ( v15 )
    {
      DXGSYNCOBJECT::DXGSYNCOBJECT(v15, this, a5);
      v16[35] = 0LL;
      v16[34] = v16 + 33;
      v16[33] = v16 + 33;
      goto LABEL_15;
    }
LABEL_75:
    v53 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v53 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v53);
    return 3221225495LL;
  }
  v19 = (DXGSYNCOBJECT *)operator new[](0x130uLL, 0x4B677844u, (POOL_TYPE)512);
  v17 = v19;
  if ( !v19 )
    goto LABEL_75;
  DXGSYNCOBJECT::DXGSYNCOBJECT(v19, this, a5);
  DXGADAPTERSYNCOBJECT::DXGADAPTERSYNCOBJECT((DXGADAPTERSYNCOBJECT *)(v20 + 264), a2);
LABEL_15:
  if ( !v17 )
    goto LABEL_75;
  v21 = *(unsigned __int8 *)(*((_QWORD *)a2 + 2) + 185LL);
  *((_BYTE *)v17 + 249) = v21;
  CurrentProcess = PsGetCurrentProcess(v21, v18);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v25 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
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
  v28 = v25 && (*(_BYTE *)(v25 + 323) & 0xC) != 0;
  *((_BYTE *)v17 + 250) = v28;
  if ( v28 )
  {
    v29 = *(_BYTE *)(v25 + 323);
    if ( (v29 & 8) != 0 )
    {
      v30 = *(_QWORD *)(v25 + 456);
    }
    else
    {
      v31 = (v29 & 4) == 0;
      v30 = 0LL;
      if ( !v31 )
        v30 = v25;
    }
    *((_QWORD *)v17 + 32) = v30;
    if ( !v30 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v24);
      *(_QWORD *)(v32 + 24) = 5299LL;
      WdLogEvent5_WdAssertion(v32);
    }
  }
  else
  {
    *((_QWORD *)v17 + 32) = 0LL;
  }
  v33 = v25
     && (*(_BYTE *)(v25 + 323) & 8) != 0
     && (*(_BYTE *)(v25 + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled);
  *((_BYTE *)v17 + 251) = v33;
  v34 = DXGSYNCOBJECT::Initialize(v17, a7);
  if ( v34 < 0 )
    goto LABEL_40;
  if ( a10 || (unsigned int)(*((_DWORD *)v17 + 42) - 5) <= 1 )
  {
    v54.0 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)a5->Flags.Value;
    v36 = *((_DWORD *)v17 + 42) == 6
        ? DXGSYNCOBJECT::Open(
            v17,
            a2,
            a3,
            a9,
            a10,
            &a5->PeriodicMonitoredFence.FenceValueCPUVirtualAddress,
            &a5->PeriodicMonitoredFence.FenceValueGPUVirtualAddress,
            a4,
            a11,
            a6,
            v54)
        : DXGSYNCOBJECT::Open(
            v17,
            a2,
            a3,
            a9,
            a10,
            &a5->MonitoredFence.FenceValueCPUVirtualAddress,
            &a5->MonitoredFence.FenceValueGPUVirtualAddress,
            a4,
            a11,
            a6,
            v54);
    v34 = v36;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)v17 + 6);
  }
  if ( v34 < 0 )
  {
LABEL_40:
    DXGSYNCOBJECT::Destroy(v17);
    return (unsigned int)v34;
  }
  else
  {
    v37 = (volatile signed __int64 *)((char *)this + 288);
    KeEnterCriticalRegion();
    if ( *((struct _KTHREAD **)this + 37) == KeGetCurrentThread() )
    {
      v39 = *((_DWORD *)this + 78);
      if ( v39 <= 0 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v38);
        *(_QWORD *)(v40 + 24) = 406LL;
        WdLogEvent5_WdAssertion(v40);
        v39 = *((_DWORD *)this + 78);
      }
      v41 = v39 + 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 304, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v44 = *((_DWORD *)this + 79);
          if ( v44 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v42, &EventBlockThread, v43, v44);
        }
        _InterlockedIncrement64(v37);
        ExAcquirePushLockExclusiveEx((char *)this + 304, 0LL);
      }
      if ( *((_QWORD *)this + 37) )
      {
        v45 = WdLogNewEntry5_WdAssertion(v42);
        *(_QWORD *)(v45 + 24) = 430LL;
        WdLogEvent5_WdAssertion(v45);
      }
      if ( *((_DWORD *)this + 78) )
      {
        v46 = WdLogNewEntry5_WdAssertion(v42);
        *(_QWORD *)(v46 + 24) = 431LL;
        WdLogEvent5_WdAssertion(v46);
      }
      *((_QWORD *)this + 37) = KeGetCurrentThread();
      v41 = 1;
    }
    *((_DWORD *)this + 78) = v41;
    v47 = (DXGSYNCOBJECT **)((char *)this + 328);
    v48 = *((_QWORD *)this + 41);
    if ( *(DXGGLOBAL **)(v48 + 8) != (DXGGLOBAL *)((char *)this + 328) )
      __fastfail(3u);
    *(_QWORD *)v17 = v48;
    *((_QWORD *)v17 + 1) = v47;
    *(_QWORD *)(v48 + 8) = v17;
    *v47 = v17;
    if ( *((struct _KTHREAD **)this + 37) != KeGetCurrentThread() )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48);
      v49[3] = 275LL;
      v49[4] = 4LL;
      v49[5] = v37;
      v49[6] = 0LL;
      v49[7] = 0LL;
      WdLogEvent5_WdCriticalError(v49);
    }
    v50 = *((_DWORD *)this + 78);
    if ( v50 <= 0 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v48);
      *(_QWORD *)(v51 + 24) = 450LL;
      WdLogEvent5_WdAssertion(v51);
      v50 = *((_DWORD *)this + 78);
    }
    v52 = v50 - 1;
    *((_DWORD *)this + 78) = v52;
    if ( !v52 )
    {
      *((_QWORD *)this + 37) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 304, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( a8 )
      *a8 = v17;
    return (unsigned int)v34;
  }
}
