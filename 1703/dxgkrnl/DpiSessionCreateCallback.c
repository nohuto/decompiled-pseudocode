/*
 * XREFs of DpiSessionCreateCallback @ 0x1C00A6BA0
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C00A6B30 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     DpiFdoStartAdapterThread @ 0x1C0114BE0 (DpiFdoStartAdapterThread.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0121BA4 (DpiLdaValidateSystemChainStatus.c)
 */

__int64 DpiSessionCreateCallback()
{
  __int64 v0; // rbx
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax

  LODWORD(v0) = 0;
  if ( !byte_1C006F9D3 )
  {
    byte_1C006F9D3 = 1;
    v2 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v0 = v2;
    if ( v2 )
    {
      v5 = WdLogNewEntry5_WdError(v4, v3);
      *(_QWORD *)(v5 + 24) = v0;
      WdLogEvent5_WdError(v5);
      LODWORD(v0) = 0;
    }
    DpiFdoStartAdapterThread(0LL);
    DpiLdaValidateSystemChainStatus();
  }
  return (unsigned int)v0;
}
