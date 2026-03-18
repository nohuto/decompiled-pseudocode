/*
 * XREFs of DpiGetSchedulerCallbackState @ 0x1C0001B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetSchedulerCallbackState(__int64 a1)
{
  return (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 64) + 3724LL), 0, 0);
}
