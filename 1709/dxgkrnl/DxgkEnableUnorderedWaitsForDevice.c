/*
 * XREFs of DxgkEnableUnorderedWaitsForDevice @ 0x1C007CA80
 * Callers:
 *     <none>
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008E24 (-GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkEnableUnorderedWaitsForDevice(unsigned int a1, char a2)
{
  __int64 v3; // r14
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // r8d
  __int64 v15; // rbx
  __int64 v16; // rcx
  struct _KEVENT *v17; // rdi
  struct _KEVENT *v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *i; // rdi
  struct _VIDSCH_CONTEXT *v24; // rsi
  unsigned int v25; // esi
  __int64 *ThreadProperty; // rax
  __int64 *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r9d
  __int64 v32; // rax
  unsigned __int8 v33; // di
  __int64 v34; // r8
  __int64 v35; // rax

  v3 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v28 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v28;
      }
    }
  }
  if ( !v8 )
  {
    v29 = WdLogNewEntry5_WdError(v7);
    v25 = -1073741811;
    *(_QWORD *)(v29 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v29);
    return v25;
  }
  v9 = v8 + 200;
  if ( v8 != -200 && *(struct _KTHREAD **)(v8 + 208) == KeGetCurrentThread() )
  {
    v30 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v30 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v30);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8 + 200, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v31 = *(_DWORD *)(v8 + 216);
      if ( v31 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v10, &EventBlockThread, v11, v31);
    }
    ExAcquirePushLockSharedEx(v8 + 200, 0LL);
  }
  v12 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 < *(_DWORD *)(v8 + 240)
    && (v13 = *(_QWORD *)(v8 + 224),
        v14 = *(_DWORD *)(v13 + 16 * v12 + 8),
        (((unsigned int)v3 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60))
    && (v14 & 0x2000) == 0
    && (v14 & 0x1F) != 0
    && (*(_BYTE *)(v13 + 16LL * (unsigned int)v12 + 8) & 0x1F) == 3 )
  {
    v15 = *(_QWORD *)(v13 + 16LL * (unsigned int)v12);
    if ( v15 )
      _InterlockedIncrement64((volatile signed __int64 *)(v15 + 64));
  }
  else
  {
    v15 = 0LL;
  }
  ExReleasePushLockSharedEx(v9, 0LL);
  KeLeaveCriticalRegion();
  if ( !v15 )
  {
    v32 = WdLogNewEntry5_WdError(v16);
    v25 = -1073741811;
    *(_QWORD *)(v32 + 24) = v3;
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v32);
    return v25;
  }
  v17 = *(struct _KEVENT **)(v15 + 16);
  if ( *(_DWORD *)(v15 + 328) == 2 )
  {
    v18 = v17 + 4;
    if ( KeReadStateEvent(v18) )
      goto LABEL_18;
LABEL_47:
    KeWaitForSingleObject(v18, Executive, 0, 0, 0LL);
    goto LABEL_18;
  }
  v18 = v17 + 3;
  if ( !KeReadStateEvent(v18) )
    goto LABEL_47;
LABEL_18:
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 104), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 96LL));
    v33 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v34, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 104), 1u);
    if ( v33 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v19 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)(v19 + 24));
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v19 + 120, 0LL);
  if ( *(_DWORD *)(v15 + 408) == 1 )
  {
    *(_BYTE *)(v15 + 1691) = a2;
    if ( !a2 )
    {
      for ( i = *(__int64 **)(v15 + 344); i != (__int64 *)(v15 + 344) && i; i = (__int64 *)*i )
      {
        if ( (*((_DWORD *)i + 91) & 0x10) != 0 )
          v24 = (struct _VIDSCH_CONTEXT *)i[32];
        else
          v24 = (struct _VIDSCH_CONTEXT *)i[29];
        while ( v24 )
        {
          (*(void (__fastcall **)(struct _VIDSCH_CONTEXT *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 504LL) + 8LL)
                                                           + 752LL))(v24);
          if ( (*((_DWORD *)i + 91) & 0x10) != 0 && v24 == DXGCONTEXT::GetImplicitHwQueue((DXGCONTEXT *)i) )
            v24 = (struct _VIDSCH_CONTEXT *)i[33];
          else
            v24 = 0LL;
        }
      }
    }
    v25 = 0;
  }
  else
  {
    v35 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v35 + 24) = v3;
    *(_QWORD *)(v35 + 32) = -1073741130LL;
    WdLogEvent5_WdWarning(v35);
    v25 = -1073741130;
  }
  ExReleasePushLockSharedEx(v19 + 120, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v19 + 16), (struct DXGADAPTER *)v19);
  ExReleaseResourceLite(*(PERESOURCE *)(v15 + 104));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v15 + 16), (struct DXGDEVICE *)v15);
  return v25;
}
