/*
 * XREFs of EtwpRegisterPrivateSession @ 0x180109CA0
 * Callers:
 *     EtwpStartUmLogger @ 0x1800634C8 (EtwpStartUmLogger.c)
 * Callees:
 *     NtTraceControl @ 0x1800A37D0 (NtTraceControl.c)
 */

__int64 __fastcall EtwpRegisterPrivateSession(__int64 a1, _QWORD *a2, _WORD *a3)
{
  __int64 result; // rax
  unsigned int v6; // [rsp+30h] [rbp-18h]
  __int16 v7; // [rsp+34h] [rbp-14h]

  result = NtTraceControl();
  if ( !(_DWORD)result )
  {
    *a2 = v6;
    *a3 = v7;
  }
  return result;
}
