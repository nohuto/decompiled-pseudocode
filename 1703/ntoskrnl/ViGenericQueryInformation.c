/*
 * XREFs of ViGenericQueryInformation @ 0x1407806F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericQueryInformation(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(
           a1,
           a2,
           (__int64 (__fastcall *)(__int64, __int64, ULONG_PTR))pXdvIRP_MJ_QUERY_INFORMATION,
           5u);
}
