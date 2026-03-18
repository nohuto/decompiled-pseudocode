/*
 * XREFs of KiIpiSendPacket @ 0x140120534
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x140007340 (KeQueryTotalCycleTimeThread.c)
 *     KeFlushProcessWriteBuffers @ 0x140120444 (KeFlushProcessWriteBuffers.c)
 *     KeUpdateThreadTag @ 0x1401307B0 (KeUpdateThreadTag.c)
 *     KeIpiGenericCall @ 0x140147FF0 (KeIpiGenericCall.c)
 *     KeSynchronizeAddressPolicy @ 0x14017BA00 (KeSynchronizeAddressPolicy.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140418DA0 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiSendRequest @ 0x140120590 (KiIpiSendRequest.c)
 */

__int64 __fastcall KiIpiSendPacket(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  v7[1] = a5;
  v7[3] = a3;
  v7[0] = a4;
  v7[2] = a6;
  return KiIpiSendRequest((unsigned int)KeGetCurrentPrcb(), a1, a2, (unsigned int)v7, 0, 5LL);
}
