/*
 * XREFs of ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x180062310
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     ?AEWMILOG_AUDIOSRV_EPOCH_NOTIFICATION@@YAXKPEAXEE_K@Z @ 0x1800612CC (-AEWMILOG_AUDIOSRV_EPOCH_NOTIFICATION@@YAXKPEAXEE_K@Z.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x180062504 (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_s @ 0x180064BA0 (WPP_SF_s.c)
 *     ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x1800A611C (-OnPowerStateChanged@CMonitorManager@@QEAAXE@Z.c)
 */

__int64 __fastcall CAudioSrv::PowerSettingChanged(CAudioSrv *this, UUID *Uuid1)
{
  unsigned int v2; // ebx
  unsigned int v6; // esi
  unsigned __int8 v7; // di
  CMonitorManager *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  _BOOL8 v12; // rdx
  CAudioDGProcess *v13; // rcx
  const char *v14; // r9
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v16; // [rsp+38h] [rbp-10h]
  RPC_STATUS Status; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  Status = 0;
  if ( !Uuid1 )
    return 13LL;
  if ( Uuid1[1].Data1 == 4 && UuidEqual(Uuid1, &GUID_ACDC_POWER_SOURCE, &Status) )
  {
    v6 = *(_DWORD *)&Uuid1[1].Data2;
    v7 = -1;
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids, v6);
    }
    if ( v6 )
    {
      if ( v6 - 1 <= 1 )
        v7 = 0;
    }
    else
    {
      v7 = 1;
    }
    if ( _MonitorManager )
      CMonitorManager::OnPowerStateChanged(v8, v7);
  }
  else if ( Uuid1[1].Data1 == 4 && UuidEqual(Uuid1, &GUID_SYSTEM_AWAYMODE, &Status) )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        32LL,
        &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids,
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
      v16 = 0;
      lpCriticalSection = &g_csVadList;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      memcpy_0(&v18, &Uuid1[1].Data2, Uuid1[1].Data1);
      v12 = (_DWORD)v18 != 0;
      g_bLowPowerEpoch = v18 != 0;
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v14 = "exited";
        if ( !(_DWORD)v18 )
          v14 = "entered";
        WPP_SF_s(*((_QWORD *)WPP_GLOBAL_Control + 2), v12, v10, v14);
      }
      AEWMILOG_AUDIOSRV_EPOCH_NOTIFICATION((__int64)v13, (void *)v12, v10, v11, (unsigned int)v18);
      if ( v16 )
        LeaveCriticalSection(lpCriticalSection);
    }
  }
  return v2;
}
