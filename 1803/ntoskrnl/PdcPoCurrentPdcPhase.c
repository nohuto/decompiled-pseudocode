/*
 * XREFs of PdcPoCurrentPdcPhase @ 0x140764990
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryTime @ 0x1400D3EE0 (PpmQueryTime.c)
 *     PopBatteryRefreshStatus @ 0x14016CA70 (PopBatteryRefreshStatus.c)
 *     PopFxPauseDeviceAccounting @ 0x14027593C (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x140276378 (PopFxResumeDeviceAccounting.c)
 *     PpmConvertTimeTo @ 0x14027EA84 (PpmConvertTimeTo.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x14075D7B0 (PopPowerRequestNotifyStandbyStateChanged.c)
 *     PopIdleCsStateChanged @ 0x14076C2B4 (PopIdleCsStateChanged.c)
 *     PopStatsNotifyPowerRequestDamPhase @ 0x14076F8F0 (PopStatsNotifyPowerRequestDamPhase.c)
 *     PopStatsNotifyPowerRequestLpePhase @ 0x14076F96C (PopStatsNotifyPowerRequestLpePhase.c)
 */

void __fastcall PdcPoCurrentPdcPhase(int a1, unsigned __int8 a2)
{
  int v3; // ecx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  LARGE_INTEGER Time; // rax

  PopBsdCurrentCsPhase = a1;
  v3 = a1 - 1;
  if ( v3 )
  {
    v4 = (unsigned int)(v3 - 1);
    if ( (_DWORD)v4 )
    {
      v5 = (unsigned int)(v4 - 3);
      if ( (_DWORD)v5 )
      {
        v6 = (unsigned int)(v5 - 1);
        if ( (_DWORD)v6 )
        {
          if ( (_DWORD)v6 == 1 )
          {
            Time = PpmQueryTime();
            if ( a2 )
            {
              qword_1403CDA08 = Time.QuadPart;
              if ( (PopFxDeviceAccountingLevel & 2) != 0 )
                PopFxResumeDeviceAccounting();
            }
            else
            {
              qword_1403CDA10 += PpmConvertTimeTo(Time.QuadPart - qword_1403CDA08, 0xF4240uLL);
              if ( (PopFxDeviceAccountingLevel & 2) != 0 )
                PopFxPauseDeviceAccounting();
              PopBatteryRefreshStatus();
            }
          }
        }
        else
        {
          LODWORD(v6) = a2;
          PopStatsNotifyPowerRequestLpePhase(v6);
        }
      }
      else
      {
        LODWORD(v5) = a2;
        PopStatsNotifyPowerRequestDamPhase(v5);
      }
    }
    else
    {
      LODWORD(v4) = a2 != 0;
      PopIdleCsStateChanged(v4);
    }
  }
  else
  {
    PopPowerRequestNotifyStandbyStateChanged(a2 != 0);
  }
}
