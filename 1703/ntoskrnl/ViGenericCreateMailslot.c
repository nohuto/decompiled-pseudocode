/*
 * XREFs of ViGenericCreateMailslot @ 0x1407803F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericCreateMailslot(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, pXdvIRP_MJ_CREATE_MAILSLOT, 19LL);
}
