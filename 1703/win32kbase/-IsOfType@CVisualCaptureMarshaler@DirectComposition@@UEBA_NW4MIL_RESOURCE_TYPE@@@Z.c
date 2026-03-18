/*
 * XREFs of ?IsOfType@CVisualCaptureMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0003830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CVisualCaptureMarshaler::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( a2 != 43 )
    return (unsigned int)(a2 - 116) <= 1;
  return v2;
}
