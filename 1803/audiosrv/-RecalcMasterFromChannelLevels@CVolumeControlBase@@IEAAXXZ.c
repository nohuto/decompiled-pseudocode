/*
 * XREFs of ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18004DEFC
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18004DA80 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800A2130 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x1800A3964 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800A3AE0 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800A3C50 (-SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800A3DE0 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180009650 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     pow @ 0x18006188A (pow.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qd @ 0x1800A1B30 (WPP_SF_qd.c)
 *     WPP_SF_qdg @ 0x1800A5068 (WPP_SF_qdg.c)
 */

void __fastcall CVolumeControlBase::RecalcMasterFromChannelLevels(CVolumeControlBase *this)
{
  unsigned int v2; // esi
  double v3; // xmm0_8
  CAudioSessionManager *v4; // rdi
  float v5; // xmm6_4
  float v6; // xmm1_4
  float Wiper; // xmm0_4

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids, this);
  }
  v2 = 0;
  if ( !*((_QWORD *)this + 12) )
    ATL::AtlThrowImpl(-2147024809);
  v3 = pow(10.0, *(float *)(*((_QWORD *)this + 11) + 4LL) / 20.0);
  *((_DWORD *)this + 30) = 0;
  v4 = WPP_GLOBAL_Control;
  v5 = v3;
  if ( *((_DWORD *)this + 31) )
  {
    do
    {
      if ( v4 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v4 + 7) & 0x10000) != 0
        && *((_BYTE *)v4 + 25) >= 4u )
      {
        if ( (unsigned __int64)v2 >= *((_QWORD *)this + 12) )
          ATL::AtlThrowImpl(-2147024809);
        Wiper = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 11) + 56LL * v2));
        WPP_SF_qdg(*((_QWORD *)v4 + 2), 17LL, &WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids, this, v2, Wiper);
        v4 = WPP_GLOBAL_Control;
      }
      if ( (unsigned __int64)v2 >= *((_QWORD *)this + 12) )
        ATL::AtlThrowImpl(-2147024809);
      v6 = pow(10.0, *(float *)(56LL * v2 + *((_QWORD *)this + 11) + 4) / 20.0);
      if ( v6 > v5 )
      {
        if ( (unsigned __int64)v2 >= *((_QWORD *)this + 12) )
          ATL::AtlThrowImpl(-2147024809);
        *((_DWORD *)this + 30) = v2;
        v5 = v6;
        v4 = WPP_GLOBAL_Control;
      }
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 31) );
  }
  if ( v4 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v4 + 7) & 0x10000) != 0
    && *((_BYTE *)v4 + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)v4 + 2),
      18LL,
      &WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids,
      this,
      *((_DWORD *)this + 30),
      v5);
  }
}
