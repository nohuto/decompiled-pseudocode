/*
 * XREFs of ?s_TokenThreadMain@CSurfaceManager@@CAKPEAX@Z @ 0x180131850
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x180119BD4 (-ProcessKernelTokens@CSurfaceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CSurfaceManager::s_TokenThreadMain(CSurfaceManager *Parameter)
{
  CSurfaceManager::ProcessKernelTokens(Parameter);
  return 0LL;
}
