/*
 * XREFs of WPP_SF_qLq @ 0x1C005013C
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000B2E0 (ndisFDoOidRequestInternal.c)
 *     ndisOidRequestComplete @ 0x1C000B560 (ndisOidRequestComplete.c)
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ndisQueueRequestWorkItem @ 0x1C001AEE0 (ndisQueueRequestWorkItem.c)
 *     NdisMFreeSharedMemory @ 0x1C0025D10 (NdisMFreeSharedMemory.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C005A180 (ndisFInvokeDirectOidRequest.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C005A29C (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisMQueueNewWorkItem @ 0x1C0060450 (ndisMQueueNewWorkItem.c)
 *     NdisMAllocateSharedMemory @ 0x1C00BC310 (NdisMAllocateSharedMemory.c)
 *     ndisNotifyMiniports @ 0x1C00F9EE8 (ndisNotifyMiniports.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLq(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(a2, a1, &v4);
}
