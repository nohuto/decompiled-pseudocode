/*
 * XREFs of EtwWriteStartScenario @ 0x14060C6A0
 * Callers:
 *     PopDiagTracePowerTransitionStart @ 0x1405EA9C8 (PopDiagTracePowerTransitionStart.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 *     PerfDiagInitialize @ 0x1408C82CC (PerfDiagInitialize.c)
 * Callees:
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     EtwGetProviderIdFromHandle @ 0x140169D24 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x1401AAC20 (ZwTraceControl.c)
 *     WdipStartEndScenario @ 0x14060D6D4 (WdipStartEndScenario.c)
 */

__int64 __fastcall EtwWriteStartScenario(
        PVOID *RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int ProviderIdFromHandle; // edi
  __int128 v11; // [rsp+38h] [rbp-50h] BYREF

  if ( EventDescriptor && ActivityId )
  {
    if ( EtwEventEnabled((REGHANDLE)RegHandle, EventDescriptor) )
    {
      ProviderIdFromHandle = EtwGetProviderIdFromHandle(RegHandle, 0, &v11);
      if ( ProviderIdFromHandle >= 0 )
      {
        if ( ActivityId->Data1
          || ActivityId->Data2
          || ActivityId->Data3
          || ActivityId->Data4[0]
          || ActivityId->Data4[1]
          || ActivityId->Data4[2]
          || ActivityId->Data4[3]
          || ActivityId->Data4[4]
          || ActivityId->Data4[5]
          || ActivityId->Data4[6]
          || ActivityId->Data4[7]
          || (ProviderIdFromHandle = ZwTraceControl(12LL, 0LL, 0LL), ProviderIdFromHandle >= 0) )
        {
          ProviderIdFromHandle = EtwWrite((REGHANDLE)RegHandle, EventDescriptor, ActivityId, UserDataCount, UserData);
          WdipStartEndScenario(&v11, ActivityId, EventDescriptor, 10LL);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741816;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)ProviderIdFromHandle;
}
