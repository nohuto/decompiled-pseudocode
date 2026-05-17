/*
 * XREFs of EtwEventWriteEndScenario @ 0x180060F20
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventWrite @ 0x18005E0F0 (EtwEventWrite.c)
 *     sub_180060FFC @ 0x180060FFC (sub_180060FFC.c)
 *     EtwEventEnabled @ 0x180061050 (EtwEventEnabled.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceControl @ 0x1800A8990 (ZwTraceControl.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall EtwEventWriteEndScenario(__int64 a1, _OWORD *a2, int a3, __int64 a4)
{
  __int64 result; // rax
  struct _GUID ActivityId; // xmm1
  int v10; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v11[6]; // [rsp+38h] [rbp-50h] BYREF

  v10 = 0;
  if ( !a2 )
    return 87LL;
  if ( !(unsigned __int8)EtwEventEnabled() )
    return 6LL;
  memset(v11, 0, sizeof(v11));
  result = sub_180060FFC(a1, v11);
  if ( !(_DWORD)result )
  {
    *(_OWORD *)&v11[1] = *a2;
    ActivityId = NtCurrentTeb()->ActivityId;
    LODWORD(v11[5]) = 11;
    *(struct _GUID *)&v11[3] = ActivityId;
    ZwTraceControl(13LL, v11, 48LL, 0LL, 0, &v10);
    return EtwEventWrite(a1, (int)a2, a3, a4);
  }
  return result;
}
