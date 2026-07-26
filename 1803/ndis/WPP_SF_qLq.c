/*
 * XREFs of WPP_SF_qLq @ 0x1C0043C94
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000CFF0 (ndisFDoOidRequestInternal.c)
 *     ndisOidRequestComplete @ 0x1C000D290 (ndisOidRequestComplete.c)
 *     NdisMFreeSharedMemory @ 0x1C0012ED0 (NdisMFreeSharedMemory.c)
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ndisQueueRequestWorkItem @ 0x1C001F230 (ndisQueueRequestWorkItem.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C0059C10 (ndisFInvokeDirectOidRequest.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C0059D2C (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisFInvokeSynchronousOidRequest @ 0x1C0059DDC (ndisFInvokeSynchronousOidRequest.c)
 *     ndisMInvokeSynchronousOidRequest @ 0x1C00608D4 (ndisMInvokeSynchronousOidRequest.c)
 *     ndisMQueueNewWorkItem @ 0x1C0060E9C (ndisMQueueNewWorkItem.c)
 *     NdisMAllocateSharedMemory @ 0x1C00C85C0 (NdisMAllocateSharedMemory.c)
 *     ndisNotifyMiniports @ 0x1C010693C (ndisNotifyMiniports.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLq(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(a2, a1, &v4);
}
