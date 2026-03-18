/*
 * XREFs of ViGenericFileSystemControl @ 0x1407C2690
 * Callers:
 *     <none>
 * Callees:
 *     ViGenericDispatchHandler @ 0x1407C24F4 (ViGenericDispatchHandler.c)
 */

__int64 __fastcall ViGenericFileSystemControl(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (*)(void))pXdvIRP_MJ_FILE_SYSTEM_CONTROL, 0xDu);
}
