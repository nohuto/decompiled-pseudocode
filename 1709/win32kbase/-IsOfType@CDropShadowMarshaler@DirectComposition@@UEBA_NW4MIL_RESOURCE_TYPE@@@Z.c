/*
 * XREFs of ?IsOfType@CDropShadowMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0001230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CDropShadowMarshaler::IsOfType(__int64 a1, int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = (unsigned int)(a2 - 32) <= 0x3E && (v2 = 0x4000000000001001LL, _bittest64(&v2, a2 - 32)) || a2 == 102;
  return result;
}
