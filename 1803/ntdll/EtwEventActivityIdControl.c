/*
 * XREFs of EtwEventActivityIdControl @ 0x18006B380
 * Callers:
 *     EtwEventWriteStartScenario @ 0x180088410 (EtwEventWriteStartScenario.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180008390 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     ZwTraceControl @ 0x18009E210 (ZwTraceControl.c)
 */

ULONG __cdecl EtwEventActivityIdControl(ULONG ControlCode, LPGUID ActivityId)
{
  NTSTATUS v2; // r8d
  ULONG v3; // ecx
  ULONG v4; // ebx
  ULONG v6; // ecx
  ULONG v7; // ecx
  GUID *p_ActivityId; // r9
  ULONG v9; // ecx
  GUID v10; // xmm1
  LONG v11; // eax
  ULONG ReturnLength; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( ActivityId )
  {
    v3 = ControlCode - 1;
    if ( v3 )
    {
      v6 = v3 - 1;
      if ( !v6 )
      {
        NtCurrentTeb()->ActivityId = *ActivityId;
        return 0;
      }
      v7 = v6 - 1;
      if ( v7 )
      {
        v9 = v7 - 1;
        if ( !v9 )
        {
          v10 = NtCurrentTeb()->ActivityId;
          NtCurrentTeb()->ActivityId = *ActivityId;
          *ActivityId = v10;
          return 0;
        }
        if ( v9 != 1 )
        {
          v2 = -1073741811;
          goto LABEL_18;
        }
        *ActivityId = NtCurrentTeb()->ActivityId;
        p_ActivityId = &NtCurrentTeb()->ActivityId;
      }
      else
      {
        p_ActivityId = ActivityId;
      }
      v2 = ZwTraceControl(EtwActivityIdCreate, 0LL, 0, p_ActivityId, 0x10u, &ReturnLength);
    }
    else
    {
      *ActivityId = NtCurrentTeb()->ActivityId;
    }
    if ( !v2 )
      return 0;
LABEL_18:
    v11 = RtlNtStatusToDosError(v2);
    v4 = v11;
    if ( v11 )
      RtlSetLastWin32Error(v11);
    return v4;
  }
  return 87;
}
