/*
 * XREFs of ?AtlHresultFromWin32@ATL@@YAJK@Z @ 0x140051374
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140050D7C (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140052BB4 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::AtlHresultFromWin32(int a1)
{
  if ( a1 > 0 )
    return (unsigned __int16)a1 | 0x80070000;
  return (unsigned int)a1;
}
