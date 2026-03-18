/*
 * XREFs of PdcPoCurrentPdcPhase @ 0x1406FF060
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryTime @ 0x140092B40 (PpmQueryTime.c)
 *     PopBatteryRefreshStatus @ 0x140147440 (PopBatteryRefreshStatus.c)
 *     PopFxPauseDeviceAccounting @ 0x14023E5D8 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x14023F008 (PopFxResumeDeviceAccounting.c)
 *     PpmConvertTimeTo @ 0x1402489FC (PpmConvertTimeTo.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1406F5B90 (PopPowerRequestNotifyStandbyStateChanged.c)
 *     PopIdleCsStateChanged @ 0x14070A3E4 (PopIdleCsStateChanged.c)
 *     PopStatsNotifyPowerRequestDamPhase @ 0x14070C424 (PopStatsNotifyPowerRequestDamPhase.c)
 *     PopStatsNotifyPowerRequestLpePhase @ 0x14070C4A0 (PopStatsNotifyPowerRequestLpePhase.c)
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
              qword_140389C08 = Time.QuadPart;
              if ( (PopFxDeviceAccountingLevel & 2) != 0 )
                PopFxResumeDeviceAccounting();
            }
            else
            {
              qword_140389C10 += PpmConvertTimeTo(Time.QuadPart - qword_140389C08, 0xF4240uLL);
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
