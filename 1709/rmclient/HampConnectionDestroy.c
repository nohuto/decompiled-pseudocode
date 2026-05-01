/*
 * XREFs of HampConnectionDestroy @ 0x18000169C
 * Callers:
 *     HamDisconnectForExtendedExecution @ 0x180001800 (HamDisconnectForExtendedExecution.c)
 *     HamConnectToServer @ 0x180003F30 (HamConnectToServer.c)
 *     HampConnectionCreate @ 0x180003FA0 (HampConnectionCreate.c)
 *     HamConnectForExtendedExecution @ 0x180004660 (HamConnectForExtendedExecution.c)
 *     HamConnectForStateChangeNotifications @ 0x1800063D0 (HamConnectForStateChangeNotifications.c)
 * Callees:
 *     HampConnectionCleanup @ 0x180001624 (HampConnectionCleanup.c)
 *     HamIpcChannelRundown @ 0x1800016E4 (HamIpcChannelRundown.c)
 *     RmpClientWnfDestroySubscription @ 0x180001748 (RmpClientWnfDestroySubscription.c)
 */

BOOLEAN __fastcall HampConnectionDestroy(__int64 a1)
{
  int v1; // eax
  void *v4; // rcx

  v1 = *(_DWORD *)(a1 + 112);
  if ( v1 >= 0 )
  {
    if ( v1 > 1 )
    {
      if ( v1 == 2 )
      {
        v4 = *(void **)(a1 + 16);
        if ( v4 )
          RmpClientWnfDestroySubscription(v4);
      }
    }
    else
    {
      HamIpcChannelRundown(a1 + 16);
    }
  }
  HampConnectionCleanup(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
