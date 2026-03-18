/*
 * XREFs of BuildManipulationInputInfo @ 0x1C0129630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BuildManipulationInputInfo(CTouchProcessor *a1, __int64 a2, struct CPointerInputFrame *a3)
{
  if ( (gdwMitConfig & 4) != 0 )
    CTouchProcessor::BuildManipulationInputInfo(a1, a1, a2, a3);
  else
    EditionBuildManipulationInputInfo(a1, a2, a3);
}
