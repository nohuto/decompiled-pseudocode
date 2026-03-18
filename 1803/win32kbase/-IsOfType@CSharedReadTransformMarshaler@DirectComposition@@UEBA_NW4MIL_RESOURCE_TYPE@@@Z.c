/*
 * XREFs of ?IsOfType@CSharedReadTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0001C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSharedReadTransformMarshaler::IsOfType(__int64 a1, int a2)
{
  char result; // al
  int v3; // ecx

  result = 0;
  switch ( a2 )
  {
    case 143:
      return 1;
    case 50:
      return 1;
    case 142:
      v3 = *(_DWORD *)(a1 + 48);
      if ( v3 == 96 || v3 == 93 )
        return 1;
      break;
  }
  return result;
}
