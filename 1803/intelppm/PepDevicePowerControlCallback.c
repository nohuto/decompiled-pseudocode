/*
 * XREFs of PepDevicePowerControlCallback @ 0x1C000E610
 * Callers:
 *     <none>
 * Callees:
 *     PepPlatformIdleVeto @ 0x1C000D90C (PepPlatformIdleVeto.c)
 *     PepProcessorIdleVeto @ 0x1C000D994 (PepProcessorIdleVeto.c)
 *     PepUpdateIdleState @ 0x1C000DAB0 (PepUpdateIdleState.c)
 *     PepUpdatePlatformState @ 0x1C000DBD0 (PepUpdatePlatformState.c)
 *     PepUpdatePerformanceConstraint @ 0x1C000E570 (PepUpdatePerformanceConstraint.c)
 *     PepGetParkingPageInfo @ 0x1C0034C38 (PepGetParkingPageInfo.c)
 */

NTSTATUS __fastcall PepDevicePowerControlCallback(
        __int64 a1,
        _QWORD *a2,
        unsigned int *a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // rax
  NTSTATUS result; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  *a7 = 0LL;
  v7 = *a2 - *(_QWORD *)&GUID_PPM_PERF_CONSTRAINT_CHANGE.Data1;
  if ( *a2 == *(_QWORD *)&GUID_PPM_PERF_CONSTRAINT_CHANGE.Data1 )
    v7 = a2[1] - *(_QWORD *)GUID_PPM_PERF_CONSTRAINT_CHANGE.Data4;
  if ( !v7 )
    return PepUpdatePerformanceConstraint(a1);
  v9 = *a2 - PEP_PPM_POWER_CONTROL_QUERY_PARKING_PAGE;
  if ( *a2 == PEP_PPM_POWER_CONTROL_QUERY_PARKING_PAGE )
    v9 = a2[1] + 0xC20B498CB535555LL;
  if ( v9 )
  {
    v10 = *a2 - *(_QWORD *)&GUID_PROCESSOR_IDLE_VETO.Data1;
    if ( *a2 == *(_QWORD *)&GUID_PROCESSOR_IDLE_VETO.Data1 )
      v10 = a2[1] - *(_QWORD *)GUID_PROCESSOR_IDLE_VETO.Data4;
    if ( v10 )
    {
      v11 = *a2 - *(_QWORD *)&GUID_PLATFORM_IDLE_VETO.Data1;
      if ( *a2 == *(_QWORD *)&GUID_PLATFORM_IDLE_VETO.Data1 )
        v11 = a2[1] - *(_QWORD *)GUID_PLATFORM_IDLE_VETO.Data4;
      if ( v11 )
      {
        v12 = *a2 - *(_QWORD *)&GUID_PROCESSOR_IDLE_UPDATE.Data1;
        if ( *a2 == *(_QWORD *)&GUID_PROCESSOR_IDLE_UPDATE.Data1 )
          v12 = a2[1] - *(_QWORD *)GUID_PROCESSOR_IDLE_UPDATE.Data4;
        if ( v12 )
        {
          v13 = *a2 - *(_QWORD *)&GUID_PLATFORM_IDLE_UPDATE.Data1;
          if ( *a2 == *(_QWORD *)&GUID_PLATFORM_IDLE_UPDATE.Data1 )
            v13 = a2[1] - *(_QWORD *)GUID_PLATFORM_IDLE_UPDATE.Data4;
          if ( v13 )
            return -1073741637;
          if ( a4 >= 0xC )
            return PepUpdatePlatformState(a1, a3);
        }
        else if ( a4 >= 0xC )
        {
          return PepUpdateIdleState(a1, a3);
        }
      }
      else if ( a4 >= 0xC )
      {
        return PepPlatformIdleVeto(a1, (__int64)a3);
      }
    }
    else if ( a4 >= 0xC )
    {
      return PepProcessorIdleVeto(a1, (__int64 *)a3);
    }
    return -1073741789;
  }
  if ( a6 >= 0x10 )
  {
    result = PepGetParkingPageInfo(a1, a5);
    if ( result < 0 )
      *a7 = 0LL;
  }
  else
  {
    *a7 = 16LL;
    return -1073741670;
  }
  return result;
}
