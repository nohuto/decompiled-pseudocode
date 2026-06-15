/*
 * XREFs of pow @ 0x180033A60
 * Callers:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x1800098F4 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x18000996C (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x1800680B4 (-ConvertScalarToDb@CVolumeUnit@@IEAANN@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006A258 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?ScalarFromTaper@CVolumeUnit@@IEAANNN@Z @ 0x18006A490 (-ScalarFromTaper@CVolumeUnit@@IEAANNN@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x18006AA14 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x18006B0F8 (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x18006B510 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 *     ConvertDbToEngineVolume @ 0x1800A1E5C (ConvertDbToEngineVolume.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
