/*
 * XREFs of ?IsOfType@CSharedReadTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C007F550
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
    case 128:
      return 1;
    case 45:
      return 1;
    case 127:
      v3 = *(_DWORD *)(a1 + 48);
      if ( v3 == 86 || v3 == 89 )
        return 1;
      break;
  }
  return result;
}
