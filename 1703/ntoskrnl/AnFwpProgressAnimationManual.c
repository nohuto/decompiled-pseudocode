/*
 * XREFs of AnFwpProgressAnimationManual @ 0x1407551BC
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140757A8C (AnFwDisplayProgressIndicator.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x1401406BC (BgpFwQueryPerformanceCounter.c)
 *     BgpTxtDisplayCharacter @ 0x14014076C (BgpTxtDisplayCharacter.c)
 *     LogFwStat @ 0x140757900 (LogFwStat.c)
 */

LONGLONG AnFwpProgressAnimationManual()
{
  LARGE_INTEGER v0; // rdi
  LONGLONG v1; // rbx
  LONGLONG v2; // rdx
  LONGLONG result; // rax
  __int16 v4; // cx
  __int64 v5; // rbx
  LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp+8h] BYREF

  v0 = BgpFwQueryPerformanceCounter(&PerformanceFrequency);
  v1 = PerformanceFrequency.QuadPart / 33;
  v2 = 10 * (PerformanceFrequency.QuadPart / 33) / 100;
  result = qword_14036E360;
  if ( v2 + v0.QuadPart >= qword_14036E360 + PerformanceFrequency.QuadPart / 33 )
  {
    v4 = word_14033E0CC;
    if ( word_14033E0CC != -7989 && (qword_14036E360 - v2 - v0.QuadPart) / v1 >= 2 )
      v4 = ++word_14033E0CC;
    if ( (unsigned __int16)(v4 + 8110) <= 0x79u )
    {
      LogFwStat(1LL, 1LL, 0LL);
      BgpTxtDisplayCharacter(qword_140341AE0, (unsigned __int16)word_14033E0CC, 0, 0LL, 0LL);
      LogFwStat(0LL, 1LL, 0LL);
      v4 = word_14033E0CC;
    }
    if ( v4 == -7989 )
      word_14033E0CC = -8118;
    else
      word_14033E0CC = v4 + 1;
    qword_14036E360 = v0.QuadPart;
    v5 = v1 / 2;
    result = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - v0.QuadPart;
    if ( result > v5 )
    {
      result = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - v5;
      qword_14036E360 = result;
    }
  }
  return result;
}
