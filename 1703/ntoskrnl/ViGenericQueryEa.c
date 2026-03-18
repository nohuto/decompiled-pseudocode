/*
 * XREFs of ViGenericQueryEa @ 0x1407806D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericQueryEa(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (__fastcall *)(__int64, __int64, ULONG_PTR))pXdvIRP_MJ_QUERY_EA, 7u);
}
