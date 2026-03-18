/*
 * XREFs of PoEndPartitionReplace @ 0x1406C9E9C
 * Callers:
 *     PnprWakeDevices @ 0x1404186F0 (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1404209B4 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPartitionReplace(_DWORD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  a1[4] = 11;
  return PopDispatchStateCallout(a1, (__int64)&v3);
}
