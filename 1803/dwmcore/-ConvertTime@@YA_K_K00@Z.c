/*
 * XREFs of ?ConvertTime@@YA_K_K00@Z @ 0x1800D1740
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ConvertTime(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
}
