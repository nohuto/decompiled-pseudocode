/*
 * XREFs of ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00B03EC
 * Callers:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0007E1C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C0091DF0 (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00A1CA0 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C008A250 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00B024C (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0196474 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(DXGDEVICESYNCOBJECT *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  DXGDEVICESYNCOBJECT *v7; // rax
  DXGDEVICESYNCOBJECT **v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  void *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct DXGSYNCOBJECT *v22; // rbx
  PERESOURCE *Global; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v27; // rbx
  __int64 v28; // rax
  int v29; // r9d
  __int64 v30; // rax
  unsigned int v31; // ebx
  __int64 v32; // rcx
  struct DXGGLOBAL *v33; // rax
  ULONG_PTR NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 84) & 2) != 0 )
  {
    v4 = *((_QWORD *)this + 2);
    if ( !*(_DWORD *)(v4 + 72)
      && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v4 + 104))
      && !*(_BYTE *)(v4 + 1729) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v24 + 24) = 7338LL;
      WdLogEvent5_WdAssertion(v24);
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v4 + 16) + 16LL)) )
    {
      v25 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v25 + 24) = 7339LL;
      WdLogEvent5_WdAssertion(v25);
    }
    v7 = *(DXGDEVICESYNCOBJECT **)this;
    if ( *(DXGDEVICESYNCOBJECT **)(*(_QWORD *)this + 8LL) != this
      || (v8 = (DXGDEVICESYNCOBJECT **)*((_QWORD *)this + 1), *v8 != this) )
    {
      __fastfail(3u);
    }
    *v8 = v7;
    *((_QWORD *)v7 + 1) = v8;
  }
  DXGDEVICESYNCOBJECT::DestroyCoreState(this, a2, a3);
  if ( *((_DWORD *)this + 10) )
  {
    CurrentProcess = PsGetCurrentProcess(v10, v9);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v12);
    v15 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
      {
        ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v27 = ThreadProperty;
        if ( ThreadProperty )
        {
          ObfDereferenceObject(ThreadProperty);
          v15 = *v27;
        }
      }
    }
    if ( v15 != -200 && *(struct _KTHREAD **)(v15 + 208) == KeGetCurrentThread() )
    {
      v28 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v28 + 24) = 1214LL;
      WdLogEvent5_WdAssertion(v28);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v15 + 200, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v29 = *(_DWORD *)(v15 + 216);
        if ( v29 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v16, &EventBlockThread, v17, v29);
      }
      ExAcquirePushLockExclusiveEx(v15 + 200, 0LL);
    }
    *(_QWORD *)(v15 + 208) = KeGetCurrentThread();
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v15 + 224), *((_DWORD *)this + 10));
    *((_DWORD *)this + 10) = 0;
    *(_QWORD *)(v15 + 208) = 0LL;
    ExReleasePushLockExclusiveEx(v15 + 200, 0LL);
    KeLeaveCriticalRegion();
  }
  v18 = (void *)*((_QWORD *)this + 7);
  if ( v18 )
  {
    v19 = *((_QWORD *)this + 4);
    if ( *(_BYTE *)(v19 + 241) )
    {
      NumberOfBytes = 4096LL;
      MmRotatePhysicalView(v18, &NumberOfBytes, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL);
    }
    else
    {
      if ( (unsigned int)(*(_DWORD *)(v19 + 160) - 5) > 1 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v18);
        *(_QWORD *)(v30 + 24) = 329LL;
        WdLogEvent5_WdAssertion(v30);
      }
      v20 = *((_QWORD *)this + 2);
      v21 = *(_QWORD *)(*(_QWORD *)(v20 + 40) + 64LL);
      if ( v21 )
        v21 = *(_QWORD *)(v21 + 8);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 528LL) + 8LL) + 944LL))(
        v21,
        v19 + 112);
    }
  }
  v22 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 4);
  if ( v22 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v18);
    DXGGLOBAL::DestroySyncObject(Global, v22, 0);
  }
  if ( *((_DWORD *)this + 11) )
  {
    v31 = *((_DWORD *)DXGPROCESS::GetCurrent((__int64)v18, v9) + 106);
    v33 = DXGGLOBAL::GetGlobal(v32);
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(
      *((DXG_GUEST_GLOBAL_VMBUS **)v33 + 142),
      v31,
      *((_DWORD *)this + 11));
  }
  *((_QWORD *)this + 2) = 0LL;
}
