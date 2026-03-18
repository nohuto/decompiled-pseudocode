/*
 * XREFs of AnFwpProgressAnimationManual @ 0x140840924
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x14083D254 (AnFwDisplayProgressIndicator.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x140165588 (BgpFwQueryPerformanceCounter.c)
 *     BgpTxtDisplayCharacter @ 0x1401736FC (BgpTxtDisplayCharacter.c)
 *     LogFwStat @ 0x14083B8CC (LogFwStat.c)
 */

LONGLONG AnFwpProgressAnimationManual()
{
  LARGE_INTEGER v0; // rdi
  LONGLONG v1; // rbx
  LONGLONG v2; // rdx
  LONGLONG result; // rax
  __int16 v4; // cx
  __int16 v5; // ax
  __int64 v6; // rbx
  LARGE_INTEGER v7; // [rsp+60h] [rbp+8h] BYREF

  v0 = BgpFwQueryPerformanceCounter(&v7);
  v1 = v7.QuadPart / 33;
  v2 = 10 * (v7.QuadPart / 33) / 100;
  result = qword_1403D1810;
  if ( v2 + v0.QuadPart >= qword_1403D1810 + v7.QuadPart / 33 )
  {
    v4 = word_14039B808;
    if ( word_14039B808 != -7989 && (qword_1403D1810 - v2 - v0.QuadPart) / v1 >= 2 )
      v4 = ++word_14039B808;
    if ( (unsigned __int16)(v4 + 8110) <= 0x79u )
    {
      LogFwStat(1, 1, 0LL);
      BgpTxtDisplayCharacter(qword_14039D8B0, word_14039B808, 0, 0LL, 0LL);
      LogFwStat(0, 1, 0LL);
      v4 = word_14039B808;
    }
    v5 = -8118;
    if ( v4 != -7989 )
      v5 = v4 + 1;
    word_14039B808 = v5;
    qword_1403D1810 = v0.QuadPart;
    v6 = v1 / 2;
    result = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - v0.QuadPart;
    if ( result > v6 )
    {
      result = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - v6;
      qword_1403D1810 = result;
    }
  }
  return result;
}
