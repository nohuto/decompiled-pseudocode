/*
 * XREFs of ViGenericDirectoryControl @ 0x1407C24D0
 * Callers:
 *     <none>
 * Callees:
 *     ViGenericDispatchHandler @ 0x1407C24F4 (ViGenericDispatchHandler.c)
 */

__int64 __fastcall ViGenericDirectoryControl(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, pXdvIRP_MJ_DIRECTORY_CONTROL, 12LL);
}
