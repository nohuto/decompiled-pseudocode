/*
 * XREFs of EtwEventWriteStartScenario @ 0x18008CC90
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventWrite @ 0x180019EF0 (EtwEventWrite.c)
 *     EtwpGetKmRegHandle @ 0x18006815C (EtwpGetKmRegHandle.c)
 *     EtwEventEnabled @ 0x1800681B0 (EtwEventEnabled.c)
 *     EtwEventActivityIdControl @ 0x18006E6E0 (EtwEventActivityIdControl.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A37D0 (NtTraceControl.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall EtwEventWriteStartScenario(unsigned __int64 a1, _OWORD *a2, int a3, __int64 a4)
{
  unsigned int KmRegHandle; // ebx
  _QWORD v10[6]; // [rsp+38h] [rbp-38h] BYREF

  if ( a2 )
  {
    if ( EtwEventEnabled(a1, (__int64)a2) )
    {
      memset(v10, 0, sizeof(v10));
      KmRegHandle = EtwpGetKmRegHandle(a1, v10);
      if ( !KmRegHandle )
      {
        *(_OWORD *)&v10[1] = *a2;
        *(_GUID *)&v10[3] = NtCurrentTeb()->ActivityId;
        if ( _mm_cvtsi128_si32(*(__m128i *)&v10[3])
          || HIDWORD(v10[3])
          || LOBYTE(v10[4])
          || __PAIR16__(BYTE1(v10[4]), 0) != BYTE2(v10[4])
          || *(_WORD *)((char *)&v10[4] + 3)
          || __PAIR16__(BYTE5(v10[4]), 0) != BYTE6(v10[4])
          || HIBYTE(v10[4])
          || (KmRegHandle = EtwEventActivityIdControl(3, (_GUID *)&v10[3])) == 0
          && (KmRegHandle = EtwEventActivityIdControl(2, (_GUID *)&v10[3])) == 0 )
        {
          LODWORD(v10[5]) = 10;
          KmRegHandle = EtwEventWrite(a1, (int)a2, a3, a4);
          NtTraceControl(13LL, v10, 48LL);
        }
      }
    }
    else
    {
      return 6;
    }
  }
  else
  {
    return 87;
  }
  return KmRegHandle;
}
