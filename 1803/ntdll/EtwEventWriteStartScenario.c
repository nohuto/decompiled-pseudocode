/*
 * XREFs of EtwEventWriteStartScenario @ 0x180088410
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x1800047F0 (EtwEventEnabled.c)
 *     sub_180004868 @ 0x180004868 (sub_180004868.c)
 *     EtwEventWrite @ 0x180007400 (EtwEventWrite.c)
 *     EtwEventActivityIdControl @ 0x18006B380 (EtwEventActivityIdControl.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x18009E210 (ZwTraceControl.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall EtwEventWriteStartScenario(unsigned __int64 a1, _OWORD *a2, int a3, __int64 a4)
{
  unsigned int v8; // ebx
  _QWORD v10[6]; // [rsp+38h] [rbp-38h] BYREF

  if ( a2 )
  {
    if ( EtwEventEnabled(a1, (__int64)a2) )
    {
      memset(v10, 0, sizeof(v10));
      v8 = sub_180004868(a1, v10);
      if ( !v8 )
      {
        *(_OWORD *)&v10[1] = *a2;
        *(struct _GUID *)&v10[3] = NtCurrentTeb()->ActivityId;
        if ( _mm_cvtsi128_si32(*(__m128i *)&v10[3])
          || HIDWORD(v10[3])
          || LOBYTE(v10[4])
          || __PAIR16__(BYTE1(v10[4]), 0) != BYTE2(v10[4])
          || *(_WORD *)((char *)&v10[4] + 3)
          || __PAIR16__(BYTE5(v10[4]), 0) != BYTE6(v10[4])
          || HIBYTE(v10[4])
          || (v8 = EtwEventActivityIdControl(3, (struct _GUID *)&v10[3])) == 0
          && (v8 = EtwEventActivityIdControl(2, (struct _GUID *)&v10[3])) == 0 )
        {
          LODWORD(v10[5]) = 10;
          v8 = EtwEventWrite(a1, (int)a2, a3, a4);
          ZwTraceControl(13LL, v10, 48LL);
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
  return v8;
}
