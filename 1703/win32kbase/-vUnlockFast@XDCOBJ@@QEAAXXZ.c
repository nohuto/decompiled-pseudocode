/*
 * XREFs of ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0031DF4
 * Callers:
 *     GreSelectBrushInternal @ 0x1C009F940 (GreSelectBrushInternal.c)
 *     GreSelectPenInternal @ 0x1C009F9C0 (GreSelectPenInternal.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C00FAAF0 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C00FAD40 (NtGdiGetGammaRampCapability.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::vUnlockFast(XDCOBJ *this)
{
  XDCOBJ::RestoreAttributes(this);
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
