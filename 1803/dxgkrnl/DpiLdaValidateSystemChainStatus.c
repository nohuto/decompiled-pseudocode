/*
 * XREFs of DpiLdaValidateSystemChainStatus @ 0x1C0209E98
 * Callers:
 *     DpiSessionCreateCallback @ 0x1C01F0304 (DpiSessionCreateCallback.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01648B0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DpiLdaValidateChainStatus @ 0x1C0209DA4 (DpiLdaValidateChainStatus.c)
 */

LONG DpiLdaValidateSystemChainStatus()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  int v2; // eax
  __int64 v3; // rbp
  struct _DEVICE_OBJECT *v4; // rcx

  AcquireMiniportListMutex();
  v0 = qword_1C007A778;
  if ( *(_QWORD *)v0 != v0 )
  {
    do
    {
      KeWaitForSingleObject((PVOID)(v0 + 72), Executive, 0, 0, 0LL);
      v1 = *(_QWORD *)(v0 + 56);
      if ( *(_QWORD *)v1 != v1 )
      {
        do
        {
          if ( *(_DWORD *)(v1 + 16) != 1953656900 || *(_DWORD *)(v1 + 20) != 4 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v1 + 483) )
              DpiCheckForOutstandingD3Requests(v1);
            ExAcquireResourceSharedLite(*(PERESOURCE *)(v1 + 168), 1u);
            if ( *(_DWORD *)(v1 + 504) )
            {
              v2 = DpiLdaValidateChainStatus(*(_QWORD *)(v1 + 24));
              v3 = v2;
              if ( v2 < 0 )
              {
                v4 = *(struct _DEVICE_OBJECT **)(v1 + 152);
                *(_BYTE *)(v1 + 232) = 1;
                IoInvalidateDeviceState(v4);
                DxgCreateLiveDumpWithWdLogs(0x193u, 2053LL, v3, *(int *)(v1 + 236), *(int *)(v1 + 240));
              }
            }
            if ( *(_BYTE *)(v1 + 483) )
              DpiEnableD3Requests(*(_QWORD *)(v1 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
            KeLeaveCriticalRegion();
          }
          v1 = *(_QWORD *)v1;
        }
        while ( *(_QWORD *)v1 != *(_QWORD *)(v0 + 56) );
      }
      KeReleaseMutex((PRKMUTEX)(v0 + 72), 0);
      v0 = *(_QWORD *)v0;
    }
    while ( *(_QWORD *)v0 != qword_1C007A778 );
  }
  _InterlockedExchange64(&qword_1C007A788, 0LL);
  return KeReleaseMutex((PRKMUTEX)Mutex, 0);
}
