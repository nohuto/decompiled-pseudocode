/*
 * XREFs of EtwEventActivityIdControl @ 0x18006E6E0
 * Callers:
 *     EtwEventWriteStartScenario @ 0x18008CC90 (EtwEventWriteStartScenario.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x1800A37D0 (NtTraceControl.c)
 */

__int64 __fastcall EtwEventActivityIdControl(int a1, _GUID *a2)
{
  NTSTATUS v2; // r8d
  int v3; // ecx
  ULONG v4; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  _GUID ActivityId; // xmm1
  ULONG v10; // eax

  v2 = 0;
  if ( a2 )
  {
    v3 = a1 - 1;
    if ( v3 )
    {
      v6 = v3 - 1;
      if ( !v6 )
      {
        NtCurrentTeb()->ActivityId = *a2;
        return 0;
      }
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( !v8 )
        {
          ActivityId = NtCurrentTeb()->ActivityId;
          NtCurrentTeb()->ActivityId = *a2;
          *a2 = ActivityId;
          return 0;
        }
        if ( v8 != 1 )
        {
          v2 = -1073741811;
          goto LABEL_17;
        }
        *a2 = NtCurrentTeb()->ActivityId;
      }
      v2 = NtTraceControl(12LL, 0LL, 0LL);
    }
    else
    {
      *a2 = NtCurrentTeb()->ActivityId;
    }
    if ( !v2 )
      return 0;
LABEL_17:
    v10 = RtlNtStatusToDosError(v2);
    v4 = v10;
    if ( v10 )
      RtlSetLastWin32Error(v10);
    return v4;
  }
  return 87LL;
}
