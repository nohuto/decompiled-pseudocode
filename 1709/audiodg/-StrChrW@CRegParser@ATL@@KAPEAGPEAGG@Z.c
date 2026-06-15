/*
 * XREFs of ?StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z @ 0x14005532C
 * Callers:
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x140053514 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140054B14 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     <none>
 */

LPWSTR __fastcall ATL::CRegParser::StrChrW(unsigned __int16 *lpsz, __int16 a2)
{
  __int64 v2; // rbx
  LPWSTR result; // rax
  WCHAR i; // cx

  v2 = 0LL;
  result = lpsz;
  if ( lpsz )
  {
    for ( i = *lpsz; i; i = *result )
    {
      if ( i == a2 )
        return result;
      result = CharNextW(result);
    }
    return (LPWSTR)v2;
  }
  return result;
}
