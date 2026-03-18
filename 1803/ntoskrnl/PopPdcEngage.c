/*
 * XREFs of PopPdcEngage @ 0x140765154
 * Callers:
 *     PopPowerAggregatorExecuteActiveCallback @ 0x14076A950 (PopPowerAggregatorExecuteActiveCallback.c)
 *     PopPowerAggregatorExecuteModernStandbyCallback @ 0x14076A970 (PopPowerAggregatorExecuteModernStandbyCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 (*PopPdcEngage())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1403D1478;
  if ( qword_1403D1478 )
    return (__int64 (*)(void))qword_1403D1478();
  return result;
}
