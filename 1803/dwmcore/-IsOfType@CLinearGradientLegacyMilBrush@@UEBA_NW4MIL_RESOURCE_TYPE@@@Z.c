/*
 * XREFs of ?IsOfType@CLinearGradientLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18016F530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLinearGradientLegacyMilBrush::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  bool result; // al

  v2 = a2 - 65;
  result = 0;
  if ( v2 <= 0x17 )
  {
    v3 = 10485761;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
