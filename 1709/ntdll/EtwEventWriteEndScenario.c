/*
 * XREFs of EtwEventWriteEndScenario @ 0x180068080
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventWrite @ 0x180019EF0 (EtwEventWrite.c)
 *     EtwpGetKmRegHandle @ 0x18006815C (EtwpGetKmRegHandle.c)
 *     EtwEventEnabled @ 0x1800681B0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A37D0 (NtTraceControl.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall EtwEventWriteEndScenario(__int64 a1, _OWORD *a2, int a3, __int64 a4)
{
  __int64 result; // rax
  _GUID ActivityId; // xmm1
  _QWORD v10[6]; // [rsp+38h] [rbp-50h] BYREF

  if ( !a2 )
    return 87LL;
  if ( !(unsigned __int8)EtwEventEnabled() )
    return 6LL;
  memset(v10, 0, sizeof(v10));
  result = EtwpGetKmRegHandle(a1, v10);
  if ( !(_DWORD)result )
  {
    *(_OWORD *)&v10[1] = *a2;
    ActivityId = NtCurrentTeb()->ActivityId;
    LODWORD(v10[5]) = 11;
    *(_GUID *)&v10[3] = ActivityId;
    NtTraceControl(13LL, v10, 48LL);
    return EtwEventWrite(a1, (int)a2, a3, a4);
  }
  return result;
}
