/*
 * XREFs of ViGenericSetSecurity @ 0x14082FED0
 * Callers:
 *     <none>
 * Callees:
 *     ViGenericDispatchHandler @ 0x14082FA64 (ViGenericDispatchHandler.c)
 */

__int64 __fastcall ViGenericSetSecurity(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (*)(void))pXdvIRP_MJ_SET_SECURITY, 0x15u);
}
