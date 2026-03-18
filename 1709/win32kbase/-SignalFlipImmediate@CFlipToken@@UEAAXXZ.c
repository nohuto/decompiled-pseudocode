/*
 * XREFs of ?SignalFlipImmediate@CFlipToken@@UEAAXXZ @ 0x1C0038180
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C0037E38 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C0038660 (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 */

void __fastcall CFlipToken::SignalFlipImmediate(CompositionSurfaceObject **this)
{
  char AnalogExclusive; // al

  AnalogExclusive = CompositionSurfaceObject::GetAnalogExclusive(this[4]);
  CFlipToken::SignalGpuFenceAndPresentLimitSemaphore((CFlipToken *)this, AnalogExclusive);
}
