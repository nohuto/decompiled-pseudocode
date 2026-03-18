/*
 * XREFs of ViGenericClose @ 0x14082F930
 * Callers:
 *     <none>
 * Callees:
 *     ViGenericDispatchHandler @ 0x14082FA64 (ViGenericDispatchHandler.c)
 */

__int64 __fastcall ViGenericClose(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, pXdvIRP_MJ_CLOSE, 2LL);
}
