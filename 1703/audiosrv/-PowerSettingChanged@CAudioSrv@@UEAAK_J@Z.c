/*
 * XREFs of ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x1800352E0
 * Callers:
 *     ServicePowerEvent @ 0x180035224 (ServicePowerEvent.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     memset @ 0x180049B8A (memset.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x180080F74 (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 *     WPP_SF_s @ 0x180082670 (WPP_SF_s.c)
 *     ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x1800B3F8C (-OnPowerStateChanged@CMonitorManager@@QEAAXE@Z.c)
 */

__int64 __fastcall CAudioSrv::PowerSettingChanged(CAudioSrv *this, UUID *Uuid1)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi
  unsigned __int8 v6; // di
  CMonitorManager *v7; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  const char *v11; // r9
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-60h] BYREF
  char v13; // [rsp+28h] [rbp-58h]
  _QWORD v14[10]; // [rsp+30h] [rbp-50h] BYREF
  RPC_STATUS Status; // [rsp+A8h] [rbp+28h] BYREF
  unsigned int v16; // [rsp+B0h] [rbp+30h] BYREF

  v2 = 0;
  Status = 0;
  if ( !Uuid1 )
    return 13LL;
  if ( Uuid1[1].Data1 == 4 && UuidEqual(Uuid1, &GUID_ACDC_POWER_SOURCE, &Status) )
  {
    v5 = *(_DWORD *)&Uuid1[1].Data2;
    v6 = -1;
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids, v5);
    }
    if ( v5 )
    {
      if ( v5 - 1 <= 1 )
        v6 = 0;
    }
    else
    {
      v6 = 1;
    }
    if ( _MonitorManager )
      CMonitorManager::OnPowerStateChanged(v7, v6);
  }
  else if ( Uuid1[1].Data1 == 4 && UuidEqual(Uuid1, &GUID_SYSTEM_AWAYMODE, &Status) )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        32LL,
        &WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids,
        *(unsigned int *)&Uuid1[1].Data2);
    }
    return CAudioSrv::ProcessAwayModeStateChange(this, *(_DWORD *)&Uuid1[1].Data2 != 0);
  }
  else
  {
    v9 = *(_QWORD *)&Uuid1->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
    if ( *(_QWORD *)&Uuid1->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
      v9 = *(_QWORD *)Uuid1->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
    if ( !v9 && Uuid1[1].Data1 == 4 )
    {
      v13 = 0;
      lpCriticalSection = (LPCRITICAL_SECTION)&g_csVadList;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      memcpy_0(&v16, &Uuid1[1].Data2, Uuid1[1].Data1);
      g_bLowPowerEpoch = v16 != 0;
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v11 = "exited";
        if ( !v16 )
          v11 = "entered";
        WPP_SF_s(*((_QWORD *)WPP_GLOBAL_Control + 2), v16 != 0, v10, v11);
      }
      if ( g_u32AEWMILogLevel >= 4 )
      {
        memset(v14, 0, 0x40uLL);
        HIDWORD(v14[5]) = 0x20000;
        LOWORD(v14[0]) = 72;
        v14[8] = v16;
        *(_OWORD *)&v14[3] = AEWMIGUID_AUDIOSRV;
        WORD2(v14[0]) = 1027;
        v14[6] = 0LL;
        LODWORD(v14[7]) = 0;
        EtwLogTraceEvent(g_hAEWMITraceHandle, v14);
      }
      if ( v13 )
        LeaveCriticalSection(lpCriticalSection);
    }
  }
  return v2;
}
