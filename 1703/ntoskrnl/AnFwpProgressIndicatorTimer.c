/*
 * XREFs of AnFwpProgressIndicatorTimer @ 0x1407577C0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x1401406BC (BgpFwQueryPerformanceCounter.c)
 *     BgpFwReleaseLock @ 0x1401406CC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayCharacter @ 0x14014076C (BgpTxtDisplayCharacter.c)
 *     LogFwStat @ 0x140757900 (LogFwStat.c)
 */

void __fastcall AnFwpProgressIndicatorTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  LARGE_INTEGER v4; // rax
  __int16 v5; // r9
  LARGE_INTEGER v6; // rbx
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-18h] BYREF

  BgpFwAcquireLock();
  if ( byte_14036F158 )
  {
    v4 = BgpFwQueryPerformanceCounter(&PerformanceFrequency);
    v5 = word_14033E0CC;
    v6 = v4;
    if ( word_14033E0CC != -7989
      && (qword_14036E360 + 10 * (PerformanceFrequency.QuadPart / 33) / 100 - v4.QuadPart)
       / (PerformanceFrequency.QuadPart
        / 33) >= 2 )
    {
      v5 = ++word_14033E0CC;
    }
    if ( (unsigned __int16)(v5 + 8110) <= 0x79u )
    {
      LogFwStat(1LL, 0LL, &PerformanceFrequency);
      BgpTxtDisplayCharacter(qword_140341AE0, (unsigned __int16)word_14033E0CC, 0, 0LL, 0LL);
      LogFwStat(0LL, 0LL, &PerformanceFrequency);
      v5 = word_14033E0CC;
    }
    if ( v5 == -7989 )
      word_14033E0CC = -8118;
    else
      word_14033E0CC = v5 + 1;
    qword_14036E360 = v6.QuadPart;
  }
  BgpFwReleaseLock();
}
