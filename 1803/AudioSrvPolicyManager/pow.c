/*
 * XREFs of pow @ 0x180035AE4
 * Callers:
 *     ??0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z @ 0x18000FD48 (--0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x18001E620 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z.c)
 *     ConvertDbToEngineVolume @ 0x180027D84 (ConvertDbToEngineVolume.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x180027DC4 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJKHAEA_NAEAMAEA_J@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
