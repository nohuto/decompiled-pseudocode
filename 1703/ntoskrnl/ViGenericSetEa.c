/*
 * XREFs of ViGenericSetEa @ 0x140780790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericSetEa(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (__fastcall *)(__int64, __int64, ULONG_PTR))pXdvIRP_MJ_SET_EA, 8u);
}
