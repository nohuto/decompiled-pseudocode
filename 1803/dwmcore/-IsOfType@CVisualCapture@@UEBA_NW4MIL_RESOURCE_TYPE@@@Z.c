/*
 * XREFs of ?IsOfType@CVisualCapture@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18000CAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVisualCapture::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  bool result; // al

  v2 = a2 - 101;
  result = 0;
  if ( v2 <= 0x33 )
  {
    v3 = 0x8000000080001LL;
    if ( _bittest64(&v3, (int)v2) )
      return 1;
  }
  return result;
}
