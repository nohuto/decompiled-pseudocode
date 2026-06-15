/*
 * XREFs of ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x1800A3964
 * Callers:
 *     ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x1800A3370 (-OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18004DEFC (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18004E398 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qd @ 0x1800A1B30 (WPP_SF_qd.c)
 *     WPP_SF_dg @ 0x1800D3DD4 (WPP_SF_dg.c)
 */

__int64 __fastcall CVolumeHardware::ReadChannelLevelsFromHardware(CVolumeHardware *this)
{
  int v1; // edi
  unsigned int i; // esi
  int v5; // [rsp+20h] [rbp-18h]
  float v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 32) )
  {
    v1 = -2147418113;
LABEL_16:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::ReadChannelLevelsFromHardware", 1490, v1);
    return (unsigned int)v1;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = *((_DWORD *)this + 31);
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x28u,
      (__int64)&WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids,
      this,
      v5);
  }
  for ( i = 0; i < *((_DWORD *)this + 31); CVolumeUnit::SetDB((CVolumeUnit *)(*((_QWORD *)this + 11) + 56LL * i++), v6) )
  {
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 32) + 40LL))(
           *((_QWORD *)this + 32),
           i,
           &v6);
    if ( v1 < 0 )
      goto LABEL_16;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_dg(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids, i, v6);
    }
    if ( (unsigned __int64)i >= *((_QWORD *)this + 12) )
      ATL::AtlThrowImpl(-2147024809);
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(this);
  return (unsigned int)v1;
}
