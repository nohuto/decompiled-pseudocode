/*
 * XREFs of ?IsOfType@CDropShadowMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C014F0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CDropShadowMarshaler::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rcx
  bool result; // al

  result = 1;
  if ( a2 != 34 )
  {
    if ( (unsigned int)(a2 - 49) > 0x3F )
      return 0;
    v2 = 0x8010000000000001uLL;
    if ( !_bittest64((const __int64 *)&v2, a2 - 49) )
      return 0;
  }
  return result;
}
