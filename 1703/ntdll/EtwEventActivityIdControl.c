/*
 * XREFs of EtwEventActivityIdControl @ 0x180070C40
 * Callers:
 *     EtwEventWriteStartScenario @ 0x18008F240 (EtwEventWriteStartScenario.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwTraceControl @ 0x1800A8990 (ZwTraceControl.c)
 */

ULONG __cdecl EtwEventActivityIdControl(ULONG ControlCode, LPGUID ActivityId)
{
  NTSTATUS v2; // r8d
  ULONG v3; // ecx
  ULONG v4; // ecx
  ULONG v5; // ecx
  GUID *p_ActivityId; // r9
  ULONG v7; // ebx
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
      v4 = v3 - 1;
      if ( !v4 )
      {
        NtCurrentTeb()->ActivityId = *ActivityId;
        return 0;
      }
      v5 = v4 - 1;
      if ( v5 )
      {
        v9 = v5 - 1;
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
    v7 = v11;
    if ( v11 )
      RtlSetLastWin32Error(v11);
    return v7;
  }
  return 87;
}
