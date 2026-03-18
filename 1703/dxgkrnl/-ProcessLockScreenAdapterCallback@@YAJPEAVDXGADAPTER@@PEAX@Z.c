/*
 * XREFs of ?ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01AE8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1C01AED68 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_M.c)
 */

__int64 __fastcall ProcessLockScreenAdapterCallback(struct DXGADAPTER *a1, void *a2, int a3, int a4)
{
  return OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(void)>::RunForAdapter(
           (_DWORD)a1,
           (_DWORD)a2,
           a3,
           a4,
           (__int64)lambda_24165b48034e0debd75238722db370e3_::_lambda_invoker_cdecl_);
}
