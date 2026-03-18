/*
 * XREFs of DpiSessionCreateCallback @ 0x1C01F0304
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C01CF980 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     DpiFdoStartAdapterThread @ 0x1C01FA590 (DpiFdoStartAdapterThread.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0209E98 (DpiLdaValidateSystemChainStatus.c)
 */

__int64 DpiSessionCreateCallback()
{
  __int64 v0; // rbx
  NTSTATUS v1; // eax
  __int64 v2; // rcx
  __int64 v3; // rax

  LODWORD(v0) = 0;
  if ( !byte_1C007A753 )
  {
    byte_1C007A753 = 1;
    v1 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v0 = v1;
    if ( v1 )
    {
      v3 = WdLogNewEntry5_WdError(v2);
      *(_QWORD *)(v3 + 24) = v0;
      WdLogEvent5_WdError(v3);
      LODWORD(v0) = 0;
    }
    DpiFdoStartAdapterThread(0LL);
    DpiLdaValidateSystemChainStatus();
  }
  return (unsigned int)v0;
}
