/*
 * XREFs of AnFwpProgressIndicatorTimer @ 0x14083D3A0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140164E40 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 *     BgpFwQueryPerformanceCounter @ 0x140165588 (BgpFwQueryPerformanceCounter.c)
 *     BgpTxtDisplayCharacter @ 0x1401736FC (BgpTxtDisplayCharacter.c)
 *     LogFwStat @ 0x14083B8CC (LogFwStat.c)
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
  __int16 v7; // ax
  LARGE_INTEGER v8[3]; // [rsp+40h] [rbp-18h] BYREF

  BgpFwAcquireLock();
  if ( byte_1403D1808 )
  {
    PerformanceCounter = BgpFwQueryPerformanceCounter(v8);
    v5 = word_14039B808;
    v6 = PerformanceCounter;
    if ( word_14039B808 != -7989
      && (qword_1403D1810 + 10 * (v8[0].QuadPart / 33) / 100 - PerformanceCounter.QuadPart) / (v8[0].QuadPart / 33) >= 2 )
    {
      v5 = ++word_14039B808;
    }
    if ( (unsigned __int16)(v5 + 8110) <= 0x79u )
    {
      LogFwStat(1, 0, v8);
      BgpTxtDisplayCharacter(qword_14039D8B0, word_14039B808, 0, 0LL, 0LL);
      LogFwStat(0, 0, v8);
      v5 = word_14039B808;
    }
    v7 = -8118;
    if ( v5 != -7989 )
      v7 = v5 + 1;
    word_14039B808 = v7;
    qword_1403D1810 = v6.QuadPart;
  }
  BgpFwReleaseLock();
}
