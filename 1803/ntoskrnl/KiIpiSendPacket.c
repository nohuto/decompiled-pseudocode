/*
 * XREFs of KiIpiSendPacket @ 0x1400A4018
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x1400607C0 (KeQueryTotalCycleTimeThread.c)
 *     KeSynchronizeAddressPolicy @ 0x1400A3DEC (KeSynchronizeAddressPolicy.c)
 *     KeFlushProcessWriteBuffers @ 0x1400A3F28 (KeFlushProcessWriteBuffers.c)
 *     KeUpdateThreadTag @ 0x140143DE0 (KeUpdateThreadTag.c)
 *     KeIpiGenericCall @ 0x14016C6C0 (KeIpiGenericCall.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140484800 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiSendRequest @ 0x1400362B0 (KiIpiSendRequest.c)
 */

__int64 __fastcall KiIpiSendPacket(
        unsigned int a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+48h] [rbp-10h]

  *((_QWORD *)&v7 + 1) = a5;
  v9 = a3;
  *(_QWORD *)&v7 = a4;
  v8 = a6;
  return KiIpiSendRequest((__int64)KeGetCurrentPrcb(), a1, a2, &v7, 0, 5LL);
}
