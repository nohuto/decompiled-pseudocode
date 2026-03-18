/*
 * XREFs of AnFwpProgressIndicatorTimer @ 0x1407CFBD0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x14013B95C (BgpFwQueryPerformanceCounter.c)
 *     BgpFwReleaseLock @ 0x14013B974 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14013B9B8 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayCharacter @ 0x14013BA14 (BgpTxtDisplayCharacter.c)
 *     LogFwStat @ 0x1407CFD10 (LogFwStat.c)
 */

void __fastcall AnFwpProgressIndicatorTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int16 v5; // r9
  LARGE_INTEGER v6; // rbx
  LARGE_INTEGER v7[3]; // [rsp+40h] [rbp-18h] BYREF

  BgpFwAcquireLock();
  if ( byte_14038D870 )
  {
    PerformanceCounter = BgpFwQueryPerformanceCounter(v7);
    v5 = word_1403581C4;
    v6 = PerformanceCounter;
    if ( word_1403581C4 != -7989
      && (qword_14038D878 + 10 * (v7[0].QuadPart / 33) / 100 - PerformanceCounter.QuadPart) / (v7[0].QuadPart / 33) >= 2 )
    {
      v5 = ++word_1403581C4;
    }
    if ( (unsigned __int16)(v5 + 8110) <= 0x79u )
    {
      LogFwStat(1LL, 0LL, v7);
      BgpTxtDisplayCharacter(qword_14035A260, (unsigned __int16)word_1403581C4, 0, 0LL, 0LL);
      LogFwStat(0LL, 0LL, v7);
      v5 = word_1403581C4;
    }
    if ( v5 == -7989 )
      word_1403581C4 = -8118;
    else
      word_1403581C4 = v5 + 1;
    qword_14038D878 = v6.QuadPart;
  }
  BgpFwReleaseLock();
}
