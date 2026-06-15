/*
 * XREFs of ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18003B800
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18003B440 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18003B9CC (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x1800865A0 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x180086820 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x180086C70 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     _o_log10_0 @ 0x180049B7E (_o_log10_0.c)
 *     pow @ 0x180049B90 (pow.c)
 */

__int64 __fastcall CVolumeUnit::SetWiper(CVolumeUnit *this, float a2)
{
  double v3; // xmm6_8
  double v4; // xmm1_8
  double v5; // xmm0_8
  double v6; // xmm0_8
  float v7; // xmm0_4
  __int64 result; // rax

  if ( a2 < 0.0 || a2 > 1.0 )
    return 2147942487LL;
  v3 = (*((double *)this + 4) - *((double *)this + 3)) * a2 + *((double *)this + 3);
  if ( *(_DWORD *)this == 1 )
  {
    if ( v3 > 1.0 )
    {
      v4 = DOUBLE_N1_75;
      v5 = 2.0 - v3;
    }
    else
    {
      v4 = DOUBLE_1_75;
      v5 = v3;
    }
    v3 = pow(v5, v4);
  }
  else if ( *(_DWORD *)this == 2 )
  {
    v3 = pow(v3, 1.75) * *((double *)this + 5);
  }
  if ( pow(10.0, -9.6) > v3 )
    v6 = DOUBLE_N192_0;
  else
    v6 = o_log10_0(v3) * 20.0;
  v7 = v6;
  result = 0LL;
  *((float *)this + 1) = fminf(v7, *((float *)this + 5));
  return result;
}
