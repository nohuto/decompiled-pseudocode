/*
 * XREFs of ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x1800B6FB4
 * Callers:
 *     ?OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x1800B3E30 (-OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?GetPowerStatus@CMonitor@@AEAA_NPEAE@Z @ 0x1800B5748 (-GetPowerStatus@CMonitor@@AEAA_NPEAE@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1800B76D8 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x1800B7F2C (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitor::OnPauseOnBatteryChanged(CMonitor *this, struct IMMDevice *a2)
{
  int v4; // eax
  bool v5; // al
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-28h] BYREF
  char v7; // [rsp+40h] [rbp-20h]
  PROPVARIANT pvar; // [rsp+48h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp-10h]
  __int64 v10; // [rsp+58h] [rbp-8h]
  unsigned __int8 v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+90h] [rbp+30h] BYREF

  v12 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Eu,
      (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
      this,
      *((_DWORD *)this + 14));
  }
  if ( (unsigned int)(*((_DWORD *)this + 14) - 2) <= 2 )
  {
    pvar = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v4 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(a2, 0LL, &v12);
    if ( v4 < 0
      || (v4 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v12 + 40LL))(
                 v12,
                 &PKEY_MonitorPauseOnBattery,
                 &pvar),
          v4 < 0) )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Fu,
          (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
          v4);
      }
    }
    else if ( (_WORD)pvar == 11 )
    {
      v5 = (_WORD)v9 == 0xFFFF;
      *((_BYTE *)this + 61) = v5;
      if ( v5 )
      {
        if ( CMonitor::GetPowerStatus(this, &v11) && *((_DWORD *)this + 14) == 3 && (v11 & 0xFD) == 0 )
          CMonitor::Stop(this);
      }
      else if ( *((_DWORD *)this + 14) == 4 )
      {
        CMonitor::Start(this);
      }
    }
    PropVariantClear(&pvar);
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
}
