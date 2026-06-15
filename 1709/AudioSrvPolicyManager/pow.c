/*
 * XREFs of pow @ 0x180027604
 * Callers:
 *     ??0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z @ 0x18000B018 (--0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x180015AC0 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z.c)
 *     ConvertDbToEngineVolume @ 0x18001EA18 (ConvertDbToEngineVolume.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x18002465C (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
