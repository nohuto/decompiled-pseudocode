/*
 * XREFs of ?ConvertTime@@YA_K_K00@Z @ 0x1800106E8
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ConvertTime(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
}
