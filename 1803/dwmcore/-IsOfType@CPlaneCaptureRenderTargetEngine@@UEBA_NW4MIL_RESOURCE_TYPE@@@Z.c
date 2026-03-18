/*
 * XREFs of ?IsOfType@CPlaneCaptureRenderTargetEngine@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18015C0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CPlaneCaptureRenderTargetEngine::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  bool result; // al

  v2 = a2 - 101;
  result = 0;
  if ( v2 <= 0x13 )
  {
    v3 = 524293;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
