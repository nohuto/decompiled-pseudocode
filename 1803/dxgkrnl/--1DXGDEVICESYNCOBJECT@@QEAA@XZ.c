/*
 * XREFs of ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00BD4FC
 * Callers:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0004BC4 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C00BEBC8 (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00E5B10 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00BD360 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C00F28A4 (-RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00F8670 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9F84 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0182CB8 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(DXGDEVICESYNCOBJECT *this)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGSYNCOBJECT *v12; // rbx
  DXGGLOBAL *Global; // rax
  int v14; // r9d
  __int64 *ThreadProperty; // rax
  __int64 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // rcx
  struct DXGGLOBAL *v21; // rax
  ULONG_PTR NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 84) & 2) != 0 )
    DXGDEVICE::RemoveDeviceSyncObjectFromList(*((DXGDEVICE **)this + 2), this);
  DXGDEVICESYNCOBJECT::DestroyCoreState(this);
  if ( *((_DWORD *)this + 10) )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v5 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
      {
        ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v16 = ThreadProperty;
        if ( ThreadProperty )
        {
          ObfDereferenceObject(ThreadProperty);
          v5 = *v16;
        }
      }
    }
    if ( v5 != -208 && *(struct _KTHREAD **)(v5 + 216) == KeGetCurrentThread() )
    {
      v17 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v17 + 24) = 1306LL;
      WdLogEvent5_WdAssertion(v17);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v14 = *(_DWORD *)(v5 + 224);
        if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v6, &EventBlockThread, v7, v14);
      }
      ExAcquirePushLockExclusiveEx(v5 + 208, 0LL);
    }
    *(_QWORD *)(v5 + 216) = KeGetCurrentThread();
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v5 + 232), *((_DWORD *)this + 10));
    *((_DWORD *)this + 10) = 0;
    *(_QWORD *)(v5 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 208, 0LL);
    KeLeaveCriticalRegion();
  }
  v8 = (void *)*((_QWORD *)this + 7);
  if ( v8 )
  {
    v9 = *((_QWORD *)this + 4);
    if ( *(_BYTE *)(v9 + 249) )
    {
      NumberOfBytes = 4096LL;
      MmRotatePhysicalView(v8, &NumberOfBytes, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL);
    }
    else
    {
      if ( (unsigned int)(*(_DWORD *)(v9 + 168) - 5) > 1 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v18 + 24) = 338LL;
        WdLogEvent5_WdAssertion(v18);
      }
      v10 = *((_QWORD *)this + 2);
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 40) + 72LL);
      if ( v11 )
        v11 = *(_QWORD *)(v11 + 8);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 544LL) + 8LL) + 952LL))(
        v11,
        v9 + 120);
    }
  }
  v12 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 4);
  if ( v12 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)v8);
    DXGGLOBAL::DestroySyncObject(Global, v12, 0);
  }
  if ( *((_DWORD *)this + 11) )
  {
    v19 = *((_DWORD *)DXGPROCESS::GetCurrent() + 98);
    v21 = DXGGLOBAL::GetGlobal(v20);
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(
      *((DXG_GUEST_GLOBAL_VMBUS **)v21 + 152),
      v19,
      *((_DWORD *)this + 11));
  }
  *((_QWORD *)this + 2) = 0LL;
}
