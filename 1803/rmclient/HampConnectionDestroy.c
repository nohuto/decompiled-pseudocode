/*
 * XREFs of HampConnectionDestroy @ 0x18000D468
 * Callers:
 *     HampConnectionCreate @ 0x180004D74 (HampConnectionCreate.c)
 *     HamConnectToServer @ 0x180004F10 (HamConnectToServer.c)
 *     HamConnectForDebugging @ 0x18000C840 (HamConnectForDebugging.c)
 *     HamConnectForExtendedExecution @ 0x18000C8C0 (HamConnectForExtendedExecution.c)
 *     HamConnectForServicing @ 0x18000C940 (HamConnectForServicing.c)
 *     HamConnectForSessionState @ 0x18000C9A0 (HamConnectForSessionState.c)
 *     HamConnectForStateChangeNotifications @ 0x18000CA00 (HamConnectForStateChangeNotifications.c)
 *     HamDisconnectForDebugging @ 0x18000CD60 (HamDisconnectForDebugging.c)
 * Callees:
 *     HampConnectionCleanup @ 0x18000D350 (HampConnectionCleanup.c)
 *     HamIpcChannelRundown @ 0x18000D7FC (HamIpcChannelRundown.c)
 *     RmpClientWnfDestroySubscription @ 0x18000D930 (RmpClientWnfDestroySubscription.c)
 */

BOOLEAN __fastcall HampConnectionDestroy(__int64 a1)
{
  int v1; // eax
  void *v3; // rcx

  v1 = *(_DWORD *)(a1 + 112);
  if ( v1 >= 0 )
  {
    if ( v1 <= 2 )
    {
      HamIpcChannelRundown(a1 + 16);
    }
    else if ( v1 == 5 )
    {
      v3 = *(void **)(a1 + 16);
      if ( v3 )
        RmpClientWnfDestroySubscription(v3);
    }
  }
  HampConnectionCleanup(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
