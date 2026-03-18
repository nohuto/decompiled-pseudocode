/*
 * XREFs of PdcPoCurrentPdcPhase @ 0x1406CB0E0
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryTime @ 0x140087060 (PpmQueryTime.c)
 *     PopFxPauseDeviceAccounting @ 0x14022B25C (PopFxPauseDeviceAccounting.c)
 *     PpmConvertTimeTo @ 0x140233688 (PpmConvertTimeTo.c)
 *     PopCsStateChanged @ 0x1406C5874 (PopCsStateChanged.c)
 */

void __fastcall PdcPoCurrentPdcPhase(int a1, char a2)
{
  int v3; // ecx
  __int64 v4; // rcx
  LARGE_INTEGER Time; // rax

  PopBsdCurrentCsPhase = a1;
  v3 = a1 - 1;
  if ( v3 )
  {
    v4 = (unsigned int)(v3 - 1);
    if ( (_DWORD)v4 )
    {
      if ( (_DWORD)v4 == 5 )
      {
        Time = PpmQueryTime();
        if ( a2 )
        {
          qword_14036E188 = Time.QuadPart;
          if ( (PopFxDeviceAccountingLevel & 2) != 0 )
            PopFxResumeDeviceAccounting();
        }
        else
        {
          qword_14036E190 += PpmConvertTimeTo(Time.QuadPart - qword_14036E188, 0xF4240uLL);
          if ( (PopFxDeviceAccountingLevel & 2) != 0 )
            PopFxPauseDeviceAccounting();
          PopBatteryRefreshStatus();
        }
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
    PopCsStateChanged(a2 != 0);
  }
}
