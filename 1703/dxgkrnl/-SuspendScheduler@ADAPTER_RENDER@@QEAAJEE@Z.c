/*
 * XREFs of ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00CD184
 * Callers:
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00D3304 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00E6CD4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C00CD27C (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::SuspendScheduler(ADAPTER_RENDER *this, char a2, __int64 a3)
{
  char v3; // di
  char v6; // al
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rax

  v3 = a3;
  if ( !*((_QWORD *)this + 55) )
    return 0LL;
  v6 = a3;
  LOBYTE(a3) = a2;
  ADAPTER_RENDER::SuspendVidMmWorkerThread(this, (unsigned int)(v6 != 0) + 1, a3);
  v8 = *((_QWORD *)this + 52);
  if ( !v8 )
    return 0LL;
  LOBYTE(v7) = v3 != 0;
  v9 = *(_QWORD *)(*((_QWORD *)this + 51) + 8LL);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v9 + 656);
  LOBYTE(v9) = a2;
  return v10(v8, v9, v7);
}
