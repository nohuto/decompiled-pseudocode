/*
 * XREFs of ?CanForceRemoveKey@CRegParser@ATL@@IEAAHPEBG@Z @ 0x140051384
 * Callers:
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140052BB4 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CRegParser::CanForceRemoveKey(ATL::CRegParser *this, const unsigned __int16 *a2)
{
  LPCWSTR *v3; // rbx

  v3 = (LPCWSTR *)&ATL::CRegParser::rgszNeverDelete;
  while ( lstrcmpiW(a2, *v3) )
  {
    if ( (__int64)++v3 >= (__int64)&CleanupDeviceAPI )
      return 1LL;
  }
  return 0LL;
}
