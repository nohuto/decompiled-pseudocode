/*
 * XREFs of ViGenericShutdown @ 0x14082FF30
 * Callers:
 *     <none>
 * Callees:
 *     ViGenericDispatchHandler @ 0x14082FA64 (ViGenericDispatchHandler.c)
 */

__int64 __fastcall ViGenericShutdown(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (*)(void))pXdvIRP_MJ_SHUTDOWN, 0x10u);
}
