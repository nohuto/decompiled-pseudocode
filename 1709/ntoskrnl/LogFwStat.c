/*
 * XREFs of LogFwStat @ 0x1407CFD10
 * Callers:
 *     AnFwDisplayFade @ 0x1407CEDC0 (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x1407CF3B8 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x1407CF6D0 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x1407CFA7C (AnFwDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x1407CFBD0 (AnFwpProgressIndicatorTimer.c)
 *     AnFwpProgressAnimationManual @ 0x1407D3DA8 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x14013B95C (BgpFwQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall LogFwStat(int a1, int a2, LARGE_INTEGER *a3)
{
  __int64 v4; // rdi
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v6; // rcx
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rax
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  LARGE_INTEGER v15; // rax
  LARGE_INTEGER v16; // rax
  int v17; // edi
  LARGE_INTEGER v18; // rax

  v4 = a2;
  result = BgpFwQueryPerformanceCounter(a3);
  qword_14038D8A8 = result.QuadPart;
  if ( a1 )
  {
    stru_14038D050[v4] = result;
    return result;
  }
  v6 = (LARGE_INTEGER)(*(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - stru_14038D050[v4].QuadPart);
  qword_14038D8F0 = v6.QuadPart;
  if ( !(_DWORD)v4 )
  {
    v7.QuadPart = qword_1403583C8;
    if ( v6.QuadPart < qword_1403583C8 )
      v7 = v6;
    qword_1403583C8 = v7.QuadPart;
    v8.QuadPart = qword_14038D888;
    if ( v6.QuadPart > qword_14038D888 )
      v8 = v6;
LABEL_8:
    qword_14038D8B0 += v6.QuadPart;
    ++dword_14038D8E4;
    qword_14038D888 = v8.QuadPart;
    goto LABEL_9;
  }
  v9 = v4 - 1;
  if ( !v9 )
  {
    v18.QuadPart = qword_1403583C8;
    if ( v6.QuadPart < qword_1403583C8 )
      v18 = v6;
    qword_1403583C8 = v18.QuadPart;
    v8.QuadPart = qword_14038D888;
    if ( v6.QuadPart > qword_14038D888 )
      v8 = v6;
    qword_1403A3598 += v6.QuadPart;
    goto LABEL_8;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
      qword_14038D900 += v6.QuadPart;
      return (LARGE_INTEGER)qword_14038D8A8;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      qword_14038D908 += v6.QuadPart;
      return (LARGE_INTEGER)qword_14038D8A8;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v17 = v14 - 1;
        if ( v17 )
        {
          if ( v17 == 1 )
            qword_1403A35A8 += v6.QuadPart;
        }
        else
        {
          qword_14038D890 = v6.QuadPart;
        }
      }
      else
      {
        v15.QuadPart = qword_1403583D0;
        if ( v6.QuadPart < qword_1403583D0 )
          v15 = v6;
        qword_1403583D0 = v15.QuadPart;
        v16.QuadPart = qword_14038D8A0;
        if ( v6.QuadPart > qword_14038D8A0 )
          v16 = v6;
        qword_14038D8C8 += v6.QuadPart;
        qword_14038D8B8 += v6.QuadPart;
        ++dword_14038D898;
        qword_14038D8A0 = v16.QuadPart;
      }
      return (LARGE_INTEGER)qword_14038D8A8;
    }
    qword_14038D8C8 += v6.QuadPart;
    qword_14038D8D0 = v6.QuadPart;
  }
  else
  {
    qword_14038D8B0 += v6.QuadPart;
    qword_14038D8F8 = v6.QuadPart;
  }
LABEL_9:
  qword_14038D8B8 += v6.QuadPart;
  return (LARGE_INTEGER)qword_14038D8A8;
}
