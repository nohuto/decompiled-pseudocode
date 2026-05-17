/*
 * XREFs of EtwEventWriteStartScenario @ 0x18008F240
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventWrite @ 0x18005E0F0 (EtwEventWrite.c)
 *     sub_180060FFC @ 0x180060FFC (sub_180060FFC.c)
 *     EtwEventEnabled @ 0x180061050 (EtwEventEnabled.c)
 *     EtwEventActivityIdControl @ 0x180070C40 (EtwEventActivityIdControl.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceControl @ 0x1800A8990 (ZwTraceControl.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall EtwEventWriteStartScenario(unsigned __int64 a1, _OWORD *a2, int a3, __int64 a4)
{
  unsigned int v8; // ebx
  int v10; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v11[6]; // [rsp+38h] [rbp-38h] BYREF

  v10 = 0;
  if ( a2 )
  {
    if ( EtwEventEnabled(a1, (__int64)a2) )
    {
      memset(v11, 0, sizeof(v11));
      v8 = sub_180060FFC(a1, v11);
      if ( !v8 )
      {
        *(_OWORD *)&v11[1] = *a2;
        *(struct _GUID *)&v11[3] = NtCurrentTeb()->ActivityId;
        if ( _mm_cvtsi128_si32(*(__m128i *)&v11[3])
          || HIDWORD(v11[3])
          || LOBYTE(v11[4])
          || __PAIR16__(BYTE1(v11[4]), 0) != BYTE2(v11[4])
          || *(_WORD *)((char *)&v11[4] + 3)
          || __PAIR16__(BYTE5(v11[4]), 0) != BYTE6(v11[4])
          || HIBYTE(v11[4])
          || (v8 = EtwEventActivityIdControl(3, (struct _GUID *)&v11[3])) == 0
          && (v8 = EtwEventActivityIdControl(2, (struct _GUID *)&v11[3])) == 0 )
        {
          LODWORD(v11[5]) = 10;
          v8 = EtwEventWrite(a1, (int)a2, a3, a4);
          ZwTraceControl(13LL, v11, 48LL, 0LL, 0, &v10);
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
