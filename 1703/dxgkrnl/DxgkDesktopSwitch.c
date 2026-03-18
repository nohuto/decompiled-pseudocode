/*
 * XREFs of DxgkDesktopSwitch @ 0x1C009D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@2I@Z@Z @ 0x1C009D910 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL.c)
 */

__int64 __fastcall DxgkDesktopSwitch(__int64 a1, __int64 a2, int a3)
{
  if ( a3 )
    a1 = 0LL;
  return OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(unsigned int),unsigned int>::RunForAdapter(a1, a2, (unsigned int)a2);
}
