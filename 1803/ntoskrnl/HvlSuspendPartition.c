/*
 * XREFs of HvlSuspendPartition @ 0x14022AA70
 * Callers:
 *     <none>
 * Callees:
 *     HvlSetPartitionProperty @ 0x14022A814 (HvlSetPartitionProperty.c)
 */

__int64 __fastcall HvlSuspendPartition(__int64 a1, __int64 a2)
{
  return HvlSetPartitionProperty(a1, a2, 1LL);
}
