/*
 * XREFs of ?IsOfType@CTransform3DGroupMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0146CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CBaseTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C001ACAC (-IsOfType@CBaseTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall DirectComposition::CTransform3DGroupMarshaler::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( a2 == 144 )
    return 1;
  v2 = DirectComposition::CBaseTransform3DMarshaler::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
