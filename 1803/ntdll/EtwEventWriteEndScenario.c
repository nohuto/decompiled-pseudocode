/*
 * XREFs of EtwEventWriteEndScenario @ 0x1800048C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x1800047F0 (EtwEventEnabled.c)
 *     sub_180004868 @ 0x180004868 (sub_180004868.c)
 *     EtwEventWrite @ 0x180007400 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x18009E210 (ZwTraceControl.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall EtwEventWriteEndScenario(unsigned __int64 a1, _OWORD *a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  struct _GUID ActivityId; // xmm1
  _QWORD v10[6]; // [rsp+38h] [rbp-50h] BYREF

  if ( !a2 )
    return 87LL;
  if ( !EtwEventEnabled(a1, (__int64)a2) )
    return 6LL;
  memset(v10, 0, sizeof(v10));
  result = sub_180004868(a1, v10);
  if ( !(_DWORD)result )
  {
    *(_OWORD *)&v10[1] = *a2;
    ActivityId = NtCurrentTeb()->ActivityId;
    LODWORD(v10[5]) = 11;
    *(struct _GUID *)&v10[3] = ActivityId;
    ZwTraceControl(13LL, v10, 48LL);
    return EtwEventWrite(a1, a2, a3, a4);
  }
  return result;
}
