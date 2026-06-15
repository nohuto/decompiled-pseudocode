/*
 * XREFs of ?GetAt@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@PEAU__POSITION@@@Z @ 0x180080C1C
 * Callers:
 *     ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x180023E70 (-PreADGTermination@CAudioSrv@@EEAAXXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetAt(__int64 a1, __int64 a2)
{
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  return a2 + 16;
}
