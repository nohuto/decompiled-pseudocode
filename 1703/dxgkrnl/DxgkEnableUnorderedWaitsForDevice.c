/*
 * XREFs of DxgkEnableUnorderedWaitsForDevice @ 0x1C0089E60
 * Callers:
 *     <none>
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkEnableUnorderedWaitsForDevice(unsigned int a1, char a2)
{
  __int64 v3; // r14
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // edx
  __int64 v16; // r9
  int v17; // r8d
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KEVENT *v21; // rdi
  struct _KEVENT *v22; // rdi
  __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *i; // rdi
  unsigned int v29; // esi
  __int64 *ThreadProperty; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // r9d
  __int64 v35; // rax
  unsigned __int8 v36; // di
  __int64 v37; // r8
  __int64 v38; // rax

  v3 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v11 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v11 = *ThreadProperty;
    }
  }
  if ( !v11 )
  {
    v32 = WdLogNewEntry5_WdError(v8, v7);
    v29 = -1073741811;
    *(_QWORD *)(v32 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v32);
    return v29;
  }
  v12 = v11 + 168;
  if ( v11 != -168 && *(struct _KTHREAD **)(v11 + 176) == KeGetCurrentThread() )
  {
    v33 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v33 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v33);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v11 + 168, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v34 = *(_DWORD *)(v11 + 184);
      if ( v34 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v13, &EventBlockThread, v14, v34);
    }
    ExAcquirePushLockSharedEx(v11 + 168, 0LL);
  }
  v15 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
  if ( v15 < *(_DWORD *)(v11 + 208)
    && (v16 = *(_QWORD *)(v11 + 192),
        v17 = *(_DWORD *)(v16 + 16LL * v15 + 8),
        (((unsigned int)v3 >> 26) & 0x30) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x30))
    && (v17 & 0x1000) == 0
    && (v17 & 0xF) != 0
    && (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0xF) == 3 )
  {
    v18 = *(_QWORD *)(v16 + 16LL * v15);
    if ( v18 )
      _InterlockedIncrement64((volatile signed __int64 *)(v18 + 64));
  }
  else
  {
    v18 = 0LL;
  }
  ExReleasePushLockSharedEx(v12, 0LL);
  KeLeaveCriticalRegion();
  if ( !v18 )
  {
    v35 = WdLogNewEntry5_WdError(v20, v19);
    v29 = -1073741811;
    *(_QWORD *)(v35 + 24) = v3;
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    return v29;
  }
  v21 = *(struct _KEVENT **)(v18 + 16);
  if ( *(_DWORD *)(v18 + 328) == 2 )
  {
    v22 = v21 + 4;
    if ( KeReadStateEvent(v22) )
      goto LABEL_18;
LABEL_42:
    KeWaitForSingleObject(v22, Executive, 0, 0, 0LL);
    goto LABEL_18;
  }
  v22 = v21 + 3;
  if ( !KeReadStateEvent(v22) )
    goto LABEL_42;
LABEL_18:
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v18 + 104), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 96LL));
    v36 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v18 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v37, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v18 + 104), 1u);
    if ( v36 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v18 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v23 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v23 + 120, 0LL);
  if ( *(_DWORD *)(v18 + 408) == 1 )
  {
    *(_BYTE *)(v18 + 1819) = a2;
    if ( !a2 )
    {
      for ( i = *(_QWORD **)(v18 + 344); i != (_QWORD *)(v18 + 344) && i; i = (_QWORD *)*i )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 408LL) + 8LL) + 752LL))(i[29]);
    }
    v29 = 0;
  }
  else
  {
    v38 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    *(_QWORD *)(v38 + 24) = v3;
    *(_QWORD *)(v38 + 32) = -1073741130LL;
    WdLogEvent5_WdWarning(v38);
    v29 = -1073741130;
  }
  ExReleasePushLockSharedEx(v23 + 120, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v23 + 16), (struct DXGADAPTER *)v23);
  ExReleaseResourceLite(*(PERESOURCE *)(v18 + 104));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v18 + 16), (struct DXGDEVICE *)v18);
  return v29;
}
