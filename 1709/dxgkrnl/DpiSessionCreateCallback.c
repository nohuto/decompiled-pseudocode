/*
 * XREFs of DpiSessionCreateCallback @ 0x1C00FA5A0
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C00FA530 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     DpiFdoStartAdapterThread @ 0x1C011BC30 (DpiFdoStartAdapterThread.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0121708 (DpiLdaValidateSystemChainStatus.c)
 */

__int64 DpiSessionCreateCallback()
{
  __int64 v0; // rbx
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rax

  LODWORD(v0) = 0;
  if ( !byte_1C0060853 )
  {
    byte_1C0060853 = 1;
    v2 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v0 = v2;
    if ( v2 )
    {
      v4 = WdLogNewEntry5_WdError(v3);
      *(_QWORD *)(v4 + 24) = v0;
      WdLogEvent5_WdError(v4);
      LODWORD(v0) = 0;
    }
    DpiFdoStartAdapterThread(0LL);
    DpiLdaValidateSystemChainStatus();
  }
  return (unsigned int)v0;
}
