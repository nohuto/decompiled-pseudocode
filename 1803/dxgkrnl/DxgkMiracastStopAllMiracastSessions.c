/*
 * XREFs of DxgkMiracastStopAllMiracastSessions @ 0x1C0200880
 * Callers:
 *     ?DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0153E30 (-DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkSessionDisconnected @ 0x1C01A2130 (DxgkSessionDisconnected.c)
 *     DpiMiracastConnectedStandbyDelayWork @ 0x1C01FEC40 (DpiMiracastConnectedStandbyDelayWork.c)
 *     DpiMiracastHandlePowerCallback @ 0x1C01FF370 (DpiMiracastHandlePowerCallback.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x1C003CE08 (DpiMiracastAddRefMiracastDeviceContext.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C003D9C0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C003DBB0 (DpiMiracastStopMiracastSessionSync.c)
 */

LONG __fastcall DxgkMiracastStopAllMiracastSessions(char a1, union _LARGE_INTEGER *a2, unsigned int a3)
{
  char *v6; // rsi
  __int64 i; // rbx
  char *v8; // rdi
  LONG result; // eax
  size_t v10; // [rsp+28h] [rbp-20h]

  while ( 1 )
  {
    v6 = 0LL;
    AcquireMiniportListMutex();
    for ( i = qword_1C007AB38; (__int64 *)i != &qword_1C007AB38; i = *(_QWORD *)i )
    {
      v6 = (char *)i;
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(i + 32);
      *(_QWORD *)(i + 88) = KeGetCurrentThread();
      if ( (unsigned int)(*(_DWORD *)(i + 408) - 1) <= 1 )
      {
        DpiMiracastAddRefMiracastDeviceContext(i, (unsigned int)DxgkMiracastStopAllMiracastSessions);
        *(_QWORD *)(i + 88) = 0LL;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(i + 32);
        break;
      }
      *(_QWORD *)(i + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(i + 32);
    }
    v8 = 0LL;
    if ( (__int64 *)i != &qword_1C007AB38 )
      v8 = v6;
    _InterlockedExchange64(&qword_1C007A788, 0LL);
    result = KeReleaseMutex((PRKMUTEX)Mutex, 0);
    if ( !v8 )
      return result;
    LODWORD(v10) = 0;
    DpiMiracastStopMiracastSessionSync(v8, a1, a2, 0LL, a3, v10);
    DpiMiracastReleaseMiracastDeviceContext((int *)v8, (unsigned int)DxgkMiracastStopAllMiracastSessions);
  }
}
