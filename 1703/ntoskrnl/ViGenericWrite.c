/*
 * XREFs of ViGenericWrite @ 0x140780870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericWrite(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (__fastcall *)(__int64, __int64, ULONG_PTR))pXdvIRP_MJ_WRITE, 4u);
}
