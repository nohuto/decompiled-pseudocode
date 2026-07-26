/*
 * XREFs of ndisFreeReceiveQueue @ 0x1C003B538
 * Callers:
 *     ndisOidPostRcvFilterAllocateQueue @ 0x1C003B630 (ndisOidPostRcvFilterAllocateQueue.c)
 *     ndisOidPostRcvFilterFreeQueue @ 0x1C003B8A0 (ndisOidPostRcvFilterFreeQueue.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisDereferenceReceiveQueue @ 0x1C003B378 (ndisDereferenceReceiveQueue.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C003B508 (ndisFindReceiveQueueByQueueId.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C007EA58 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ndisFreeReceiveQueue(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  __int64 *ReceiveQueueByQueueId; // rax
  __int64 *v6; // r14
  KIRQL v7; // r10

  v4 = 0;
  if ( (unsigned __int8)byte_1C0099620 >= 4u )
    WPP_SF_qD(0x12u, &WPP_968189b415313035a5e13c3867538638_Traceguids, a1, a2);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2688165;
  ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(a1, a2);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  v6 = ReceiveQueueByQueueId;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
  if ( v6 )
  {
    if ( (unsigned int)ndisDereferenceReceiveQueue(v6) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  else
  {
    v4 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C0099620 >= 4u )
    WPP_SF_qdD(19LL, &WPP_968189b415313035a5e13c3867538638_Traceguids, a1, a2, v4);
  return v4;
}
