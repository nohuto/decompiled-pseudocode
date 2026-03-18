/*
 * XREFs of DpiFdoStopMiracastSession @ 0x1C01019A0
 * Callers:
 *     DpiFdoHandleSystemPower @ 0x1C01011E8 (DpiFdoHandleSystemPower.c)
 *     DpiFdoHandleDevicePower @ 0x1C0101690 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleStopDevice @ 0x1C01DDF40 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x1C002ED1C (DpiMiracastAddRefMiracastDeviceContext.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C002F8D0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C002FAC0 (DpiMiracastStopMiracastSessionSync.c)
 */

void __fastcall DpiFdoStopMiracastSession(__int64 a1, char a2, union _LARGE_INTEGER *a3, unsigned int a4)
{
  __int64 v4; // rbx
  char *v5; // rdi
  __int64 v9; // rcx
  __int64 v10; // rbx
  size_t v11; // [rsp+28h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  if ( v4 && *(_DWORD *)(v4 + 16) == 1953656900 )
  {
    if ( *(_DWORD *)(v4 + 20) == 3 )
    {
      v10 = *(_QWORD *)(v4 + 2592);
      if ( !v10 )
        return;
      v4 = *(_QWORD *)(v10 + 64);
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
    v9 = *(_QWORD *)(v4 + 3096);
    if ( v9 && *(_DWORD *)(v4 + 3808) != 1 && *(_DWORD *)(v4 + 284) == 1 )
    {
      DpiMiracastAddRefMiracastDeviceContext(v9, (unsigned int)DpiFdoStopMiracastSession);
      v5 = *(char **)(v4 + 3096);
    }
    if ( *(_BYTE *)(v4 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
    KeLeaveCriticalRegion();
    _InterlockedExchange64(&qword_1C0060888, 0LL);
    KeReleaseMutex(Mutex, 0);
    if ( v5 )
    {
      LODWORD(v11) = 0;
      DpiMiracastStopMiracastSessionSync(v5, a2, a3, 0LL, a4, v11);
      DpiMiracastReleaseMiracastDeviceContext((int *)v5, (unsigned int)DpiFdoStopMiracastSession);
    }
  }
}
