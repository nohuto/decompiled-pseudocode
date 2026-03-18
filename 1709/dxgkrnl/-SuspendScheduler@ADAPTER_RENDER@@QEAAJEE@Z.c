/*
 * XREFs of ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C0083CB8
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0079574 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C0084910 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C0083DE0 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::SuspendScheduler(ADAPTER_RENDER *this, __int64 a2, __int64 a3)
{
  char v3; // si
  char v4; // bp
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx

  v3 = a3;
  v4 = a2;
  if ( *((_DWORD *)this + 131) )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v12[3] = 275LL;
    v12[4] = 32LL;
    v12[5] = *((_QWORD *)this + 2);
    v13 = *((unsigned int *)this + 131);
    v12[7] = 0LL;
    v12[6] = v13;
    WdLogEvent5_WdCriticalError(v12);
  }
  v6 = 0;
  if ( !*((_QWORD *)this + 67) )
    goto LABEL_6;
  LOBYTE(a3) = v4;
  ADAPTER_RENDER::SuspendVidMmWorkerThread(this, (unsigned int)(v3 != 0) + 1, a3);
  v8 = *((_QWORD *)this + 64);
  if ( !v8
    || (LOBYTE(v7) = v3 != 0,
        v9 = *(_QWORD *)(*((_QWORD *)this + 63) + 8LL),
        v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v9 + 656),
        LOBYTE(v9) = v4,
        v6 = v10(v8, v9, v7),
        v6 >= 0) )
  {
LABEL_6:
    *((_DWORD *)this + 131) = 0xFFFF;
  }
  return (unsigned int)v6;
}
