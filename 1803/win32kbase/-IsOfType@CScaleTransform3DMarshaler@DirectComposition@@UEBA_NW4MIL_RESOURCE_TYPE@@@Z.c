/*
 * XREFs of ?IsOfType@CScaleTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0146B50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CBaseTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C001ACAC (-IsOfType@CBaseTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall DirectComposition::CScaleTransform3DMarshaler::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( a2 == 127 )
    return 1;
  v2 = DirectComposition::CBaseTransform3DMarshaler::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
