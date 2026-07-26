/*
 * XREFs of WPP_SF_qLq @ 0x1C004ED08
 * Callers:
 *     NdisMFreeSharedMemory @ 0x1C0001D60 (NdisMFreeSharedMemory.c)
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     ndisFDoOidRequestInternal @ 0x1C000C1D0 (ndisFDoOidRequestInternal.c)
 *     ndisOidRequestComplete @ 0x1C000C470 (ndisOidRequestComplete.c)
 *     ndisQueueRequestWorkItem @ 0x1C0019FD4 (ndisQueueRequestWorkItem.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C0059504 (ndisFInvokeDirectOidRequest.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C0059620 (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisMInvokeSynchronousOidRequest @ 0x1C005FE98 (ndisMInvokeSynchronousOidRequest.c)
 *     ndisMQueueNewWorkItem @ 0x1C006048C (ndisMQueueNewWorkItem.c)
 *     NdisMAllocateSharedMemory @ 0x1C00C4A60 (NdisMAllocateSharedMemory.c)
 *     ndisNotifyMiniports @ 0x1C0101878 (ndisNotifyMiniports.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLq(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(a2, a1, &v4);
}
