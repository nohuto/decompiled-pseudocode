/*
 * XREFs of EtwEventActivityIdControl @ 0x180070C40
 * Callers:
 *     EtwEventWriteStartScenario @ 0x18008F240 (EtwEventWriteStartScenario.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwTraceControl @ 0x1800A8990 (ZwTraceControl.c)
 */

__int64 __fastcall EtwEventActivityIdControl(int a1, struct _GUID *a2)
{
  NTSTATUS v2; // r8d
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  struct _GUID *p_ActivityId; // r9
  ULONG v7; // ebx
  int v9; // ecx
  struct _GUID ActivityId; // xmm1
  ULONG v11; // eax
  char v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
  {
    v3 = a1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( !v4 )
      {
        NtCurrentTeb()->ActivityId = *a2;
        return 0;
      }
      v5 = v4 - 1;
      if ( v5 )
      {
        v9 = v5 - 1;
        if ( !v9 )
        {
          ActivityId = NtCurrentTeb()->ActivityId;
          NtCurrentTeb()->ActivityId = *a2;
          *a2 = ActivityId;
          return 0;
        }
        if ( v9 != 1 )
        {
          v2 = -1073741811;
          goto LABEL_18;
        }
        *a2 = NtCurrentTeb()->ActivityId;
        p_ActivityId = &NtCurrentTeb()->ActivityId;
      }
      else
      {
        p_ActivityId = a2;
      }
      v2 = ZwTraceControl(12LL, 0LL, 0LL, p_ActivityId, 16, &v12);
    }
    else
    {
      *a2 = NtCurrentTeb()->ActivityId;
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
  return 87LL;
}
