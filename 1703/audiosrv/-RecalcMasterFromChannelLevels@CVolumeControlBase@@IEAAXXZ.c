/*
 * XREFs of ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18003ADF0
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18003B440 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180085080 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x180086420 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x1800865A0 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@@Z.c)
 *     ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x1800866A0 (-SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x180086820 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180003F14 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     pow @ 0x180049B90 (pow.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qdg @ 0x1800878A0 (WPP_SF_qdg.c)
 */

void __fastcall CVolumeControlBase::RecalcMasterFromChannelLevels(CVolumeControlBase *this)
{
  unsigned int v2; // esi
  double v3; // xmm0_8
  CVolumeStrip *v4; // rdi
  float v5; // xmm6_4
  float v6; // xmm1_4
  float Wiper; // xmm0_4
  double v8; // xmm0_8

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_14242717b50d32756585d53851505e56_Traceguids,
      this,
      *((_DWORD *)this + 29));
  }
  v2 = 0;
  if ( !*((_QWORD *)this + 11) )
    ATL::AtlThrowImpl(-2147024809);
  v3 = pow(10.0, *(float *)(*((_QWORD *)this + 10) + 4LL) / 20.0);
  *((_DWORD *)this + 28) = 0;
  v4 = WPP_GLOBAL_Control;
  v5 = v3;
  if ( *((_DWORD *)this + 29) )
  {
    do
    {
      if ( v4 != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v4 + 7) & 0x10000) != 0
        && *((_BYTE *)v4 + 25) >= 4u )
      {
        if ( (unsigned __int64)v2 >= *((_QWORD *)this + 11) )
          ATL::AtlThrowImpl(-2147024809);
        Wiper = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 10) + 56LL * v2));
        WPP_SF_qdg(*((_QWORD *)v4 + 2), 17LL, &WPP_14242717b50d32756585d53851505e56_Traceguids, this, v2, Wiper);
        v4 = WPP_GLOBAL_Control;
      }
      if ( (unsigned __int64)v2 >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      v6 = pow(10.0, *(float *)(56LL * v2 + *((_QWORD *)this + 10) + 4) / 20.0);
      if ( v6 > v5 )
      {
        if ( (unsigned __int64)v2 >= *((_QWORD *)this + 11) )
          ATL::AtlThrowImpl(-2147024809);
        v8 = pow(10.0, *(float *)(56LL * v2 + *((_QWORD *)this + 10) + 4) / 20.0);
        *((_DWORD *)this + 28) = v2;
        v4 = WPP_GLOBAL_Control;
        v5 = v8;
      }
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 29) );
  }
  if ( v4 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_DWORD *)v4 + 7) & 0x10000) != 0 && *((_BYTE *)v4 + 25) >= 4u )
    WPP_SF_qdg(
      *((_QWORD *)v4 + 2),
      18LL,
      &WPP_14242717b50d32756585d53851505e56_Traceguids,
      this,
      *((_DWORD *)this + 28),
      v5);
}
