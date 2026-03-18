/*
 * XREFs of ?IsOfType@CIndirectSwapchainRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801597A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIndirectSwapchainRenderTarget::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  bool result; // al

  v2 = a2 - 79;
  result = 0;
  if ( v2 <= 0x29 )
  {
    v3 = 0x20000400001LL;
    if ( _bittest64(&v3, (int)v2) )
      return 1;
  }
  return result;
}
