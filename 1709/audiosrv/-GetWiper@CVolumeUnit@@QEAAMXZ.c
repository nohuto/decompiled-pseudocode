/*
 * XREFs of ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x1800098F4
 * Callers:
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180009710 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z @ 0x180068100 (-FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z.c)
 *     ?GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x180068550 (-GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006A258 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x18006AD60 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x18000996C (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     pow @ 0x180033A60 (pow.c)
 */

float __fastcall CVolumeUnit::GetWiper(CVolumeUnit *this)
{
  double v2; // xmm0_8
  double v3; // xmm0_8

  v2 = pow(10.0, *((float *)this + 1) / 20.0);
  v3 = (CVolumeUnit::TaperFromScalar(this, v2, *((double *)this + 5)) - *((double *)this + 3))
     / (*((double *)this + 4) - *((double *)this + 3));
  if ( v3 >= 1.0 )
    v3 = DOUBLE_1_0;
  if ( v3 <= 0.0 )
    return 0.0;
  return v3;
}
