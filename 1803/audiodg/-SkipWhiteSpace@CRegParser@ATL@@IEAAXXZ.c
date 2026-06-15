/*
 * XREFs of ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x140052F90
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x14005082C (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140051C44 (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x1400523AC (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 *     ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140052F08 (-SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CRegParser::SkipWhiteSpace(LPCWSTR *this)
{
  unsigned int v2; // eax

  while ( 1 )
  {
    v2 = **this;
    if ( v2 < 9 || v2 > 0xA && v2 != 13 && v2 != 32 )
      break;
    *this = CharNextW(*this);
  }
}
