/*
 * XREFs of LogFwStat @ 0x14083B8CC
 * Callers:
 *     AnFwFadeCompletion @ 0x14083B3E4 (AnFwFadeCompletion.c)
 *     AnFwDisplayFade @ 0x14083B548 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x14083D254 (AnFwDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x14083D3A0 (AnFwpProgressIndicatorTimer.c)
 *     AnFwpFadeAnimationTimer @ 0x1408404D0 (AnFwpFadeAnimationTimer.c)
 *     AnFwpProgressAnimationManual @ 0x140840924 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x140165588 (BgpFwQueryPerformanceCounter.c)
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
  int v15; // edi
  LARGE_INTEGER v16; // rax
  LARGE_INTEGER v17; // rax
  LARGE_INTEGER v18; // rax

  v4 = a2;
  result = BgpFwQueryPerformanceCounter(a3);
  qword_1403D1858 = result.QuadPart;
  if ( !a1 )
  {
    v6 = (LARGE_INTEGER)(*(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - stru_1403D1320[v4].QuadPart);
    qword_1403D18A8 = v6.QuadPart;
    if ( (_DWORD)v4 )
    {
      v9 = v4 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( !v11 )
          {
            qword_1403D18B0 += v6.QuadPart;
            return (LARGE_INTEGER)qword_1403D1858;
          }
          v12 = v11 - 1;
          if ( !v12 )
          {
            qword_1403D1898 += v6.QuadPart;
            return (LARGE_INTEGER)qword_1403D1858;
          }
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                if ( v15 == 1 )
                  qword_1403E9AD0 += v6.QuadPart;
              }
              else
              {
                qword_1403D1830 = v6.QuadPart;
              }
            }
            else
            {
              v16.QuadPart = qword_14039B988;
              if ( v6.QuadPart < qword_14039B988 )
                v16 = v6;
              qword_14039B988 = v16.QuadPart;
              v17.QuadPart = qword_1403D1828;
              if ( v6.QuadPart > qword_1403D1828 )
                v17 = v6;
              qword_1403D1848 += v6.QuadPart;
              qword_1403D1840 += v6.QuadPart;
              ++dword_1403D183C;
              qword_1403D1828 = v17.QuadPart;
            }
            return (LARGE_INTEGER)qword_1403D1858;
          }
          qword_1403D1848 += v6.QuadPart;
          qword_1403D1880 = v6.QuadPart;
        }
        else
        {
          qword_1403D1860 += v6.QuadPart;
          qword_1403D1878 = v6.QuadPart;
        }
LABEL_8:
        qword_1403D1840 += v6.QuadPart;
        return (LARGE_INTEGER)qword_1403D1858;
      }
      v18.QuadPart = qword_14039B978;
      if ( v6.QuadPart < qword_14039B978 )
        v18 = v6;
      qword_14039B978 = v18.QuadPart;
      v8.QuadPart = qword_1403D1818;
      if ( v6.QuadPart > qword_1403D1818 )
        v8 = v6;
      qword_1403D1850 += v6.QuadPart;
    }
    else
    {
      v7.QuadPart = qword_14039B978;
      if ( v6.QuadPart < qword_14039B978 )
        v7 = v6;
      qword_14039B978 = v7.QuadPart;
      v8.QuadPart = qword_1403D1818;
      if ( v6.QuadPart > qword_1403D1818 )
        v8 = v6;
    }
    qword_1403D1860 += v6.QuadPart;
    ++dword_1403D1868;
    qword_1403D1818 = v8.QuadPart;
    goto LABEL_8;
  }
  stru_1403D1320[v4] = result;
  return result;
}
