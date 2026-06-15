/*
 * XREFs of pow @ 0x180049B90
 * Callers:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180003F14 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x180003F8C (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18003ADF0 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18003B440 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18003B800 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x18003B8BC (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z.c)
 *     ?ScalarFromTaper@CVolumeUnit@@IEAANNN@Z @ 0x18007C39C (-ScalarFromTaper@CVolumeUnit@@IEAANNN@Z.c)
 *     ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x18007C414 (-ConvertScalarToDb@CVolumeUnit@@IEAANN@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x180087390 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 *     ConvertDbToEngineVolume @ 0x1800B0724 (ConvertDbToEngineVolume.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
