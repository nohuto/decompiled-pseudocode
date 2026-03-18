/*
 * XREFs of ?IsOfType@CPlaneCaptureRenderTargetEngine@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801472F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CPlaneCaptureRenderTargetEngine::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( (unsigned int)(a2 - 94) > 1 )
    return a2 == 108;
  return v2;
}
