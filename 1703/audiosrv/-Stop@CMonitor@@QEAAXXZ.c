/*
 * XREFs of ?Stop@CMonitor@@QEAAXXZ @ 0x1800B7F2C
 * Callers:
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x18007AB98 (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z @ 0x1800B48BC (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x1800B4FE8 (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x1800B58F4 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x1800B6ED4 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x1800B6FB4 (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x1800B7164 (-OnPowerStateChanged@CMonitor@@IEAAXE@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1800B76D8 (-Start@CMonitor@@QEAAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAUSampleDataBlock@CMonitor@@XZ @ 0x18007D1D0 (-RemoveHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMoni.c)
 *     ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x1800B5594 (--_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CMonitor::Stop(CMonitor *this)
{
  CVolumeStrip *v2; // rcx
  void **v3; // rax
  void **v4; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-28h] BYREF
  char v6; // [rsp+30h] [rbp-20h]
  LPCRITICAL_SECTION v7; // [rsp+38h] [rbp-18h] BYREF
  char v8; // [rsp+40h] [rbp-10h]

  v7 = (LPCRITICAL_SECTION)((char *)this + 16);
  v8 = 0;
  ATL::CCritSecLock::Lock(&v7);
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Cu,
      (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
      this,
      -2LL);
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 14) == 3 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 88LL))(*((_QWORD *)this + 9));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 88LL))(*((_QWORD *)this + 22));
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 392);
    v6 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    while ( *((_QWORD *)this + 39) )
    {
      v3 = (void **)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::RemoveHead((__int64)this + 296);
      if ( v3 )
        CMonitor::SampleDataBlock::`scalar deleting destructor'(v3);
    }
    while ( *((_QWORD *)this + 45) )
    {
      v4 = (void **)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::RemoveHead((__int64)this + 344);
      if ( v4 )
        CMonitor::SampleDataBlock::`scalar deleting destructor'(v4);
    }
    if ( v6 )
      LeaveCriticalSection(lpCriticalSection);
    *((_DWORD *)this + 14) = 4;
  }
  else if ( v2 != (CVolumeStrip *)&WPP_GLOBAL_Control
         && (*((_DWORD *)v2 + 7) & 0x800000) != 0
         && *((_BYTE *)v2 + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)v2 + 2), 0x3Du, (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids, this);
  }
  if ( v8 )
    LeaveCriticalSection(v7);
}
