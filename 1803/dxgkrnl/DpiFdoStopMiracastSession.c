/*
 * XREFs of DpiFdoStopMiracastSession @ 0x1C01FB3E0
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01F05A0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleSystemPower @ 0x1C01F0CCC (DpiFdoHandleSystemPower.c)
 *     DpiFdoHandleStopDevice @ 0x1C01F5E10 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x1C003CE08 (DpiMiracastAddRefMiracastDeviceContext.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C003D9C0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C003DBB0 (DpiMiracastStopMiracastSessionSync.c)
 */

void __fastcall DpiFdoStopMiracastSession(__int64 a1, char a2, union _LARGE_INTEGER *a3, unsigned int a4)
{
  __int64 v4; // rbx
  char *v5; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  size_t v11; // [rsp+28h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  if ( v4 && *(_DWORD *)(v4 + 16) == 1953656900 )
  {
    if ( *(_DWORD *)(v4 + 20) == 3 )
    {
      v9 = *(_QWORD *)(v4 + 2592);
      if ( !v9 )
        return;
      v4 = *(_QWORD *)(v9 + 64);
    }
    else if ( *(_DWORD *)(v4 + 20) != 2 )
    {
      return;
    }
    AcquireMiniportListMutex();
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
    v10 = *(_QWORD *)(v4 + 3096);
    if ( v10 && *(_DWORD *)(v4 + 3808) != 1 && *(_DWORD *)(v4 + 284) == 1 )
    {
      DpiMiracastAddRefMiracastDeviceContext(v10, (unsigned int)DpiFdoStopMiracastSession);
      v5 = *(char **)(v4 + 3096);
    }
    if ( *(_BYTE *)(v4 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
    KeLeaveCriticalRegion();
    _InterlockedExchange64(&qword_1C007A788, 0LL);
    KeReleaseMutex((PRKMUTEX)Mutex, 0);
    if ( v5 )
    {
      LODWORD(v11) = 0;
      DpiMiracastStopMiracastSessionSync(v5, a2, a3, 0LL, a4, v11);
      DpiMiracastReleaseMiracastDeviceContext((int *)v5, (unsigned int)DpiFdoStopMiracastSession);
    }
  }
}
