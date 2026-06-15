/*
 * XREFs of ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x180086420
 * Callers:
 *     ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x180085EB0 (-OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18003ADF0 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18007C460 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dg @ 0x1800ADE90 (WPP_SF_dg.c)
 */

__int64 __fastcall CVolumeHardware::ReadChannelLevelsFromHardware(CVolumeHardware *this)
{
  int v1; // edi
  unsigned int i; // esi
  int v5; // [rsp+20h] [rbp-18h]
  float v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 31) )
  {
    v1 = -2147418113;
LABEL_16:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::ReadChannelLevelsFromHardware", 1331, v1);
    return (unsigned int)v1;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = *((_DWORD *)this + 29);
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x28u,
      (__int64)&WPP_14242717b50d32756585d53851505e56_Traceguids,
      this,
      v5);
  }
  for ( i = 0; i < *((_DWORD *)this + 29); CVolumeUnit::SetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56LL * i++), v6) )
  {
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 31) + 40LL))(
           *((_QWORD *)this + 31),
           i,
           &v6);
    if ( v1 < 0 )
      goto LABEL_16;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_dg(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_14242717b50d32756585d53851505e56_Traceguids, i, v6);
    }
    if ( (unsigned __int64)i >= *((_QWORD *)this + 11) )
      ATL::AtlThrowImpl(-2147024809);
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(this);
  return (unsigned int)v1;
}
