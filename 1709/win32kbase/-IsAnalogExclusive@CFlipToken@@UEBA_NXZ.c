/*
 * XREFs of ?IsAnalogExclusive@CFlipToken@@UEBA_NXZ @ 0x1C0037CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C0038660 (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 */

bool __fastcall CFlipToken::IsAnalogExclusive(CompositionSurfaceObject **this)
{
  return CompositionSurfaceObject::GetAnalogExclusive(this[4]);
}
