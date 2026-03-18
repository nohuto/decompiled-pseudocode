/*
 * XREFs of AddInertiaInfo @ 0x1C020D67C
 * Callers:
 *     NtUserReportInertia @ 0x1C000CBF0 (NtUserReportInertia.c)
 * Callees:
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01D19B8 (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 */

__int64 __fastcall AddInertiaInfo(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        char a4,
        int a5,
        __int64 a6,
        double a7,
        __int128 *a8,
        __int128 *a9)
{
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v14; // r9
  unsigned __int64 v15; // rdx
  LARGE_INTEGER v16; // rsi
  int v18; // eax
  int v19; // r8d
  int v20; // eax
  const struct tagRECT *v21; // r8
  int v22; // ecx
  unsigned int v23; // ecx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v15 = qword_1C0334028;
  v16 = PerformanceCounter;
  if ( !qword_1C0334028 )
  {
    v15 = 100LL * gliQpcFreq / 1000;
    qword_1C0334028 = v15;
  }
  if ( (dword_1C032B588 & 1) != 0
    && gInertiaInfo == a1
    && PerformanceCounter.QuadPart - qword_1C032B580 <= v15
    && a7 <= *(double *)&qword_1C032B520 )
  {
    return 0LL;
  }
  gInertiaInfo = a1;
  qword_1C032B508 = a2;
  qword_1C032B510 = *(_QWORD *)a6;
  v18 = *(_DWORD *)(a6 + 8);
  qword_1C032B520 = *(_QWORD *)&a7;
  dword_1C032B518 = v18;
  if ( a3 )
    qword_1C032B578 = *a3;
  else
    qword_1C032B578 = 0LL;
  qword_1C032B580 = v16.QuadPart;
  v19 = ((unsigned __int8)dword_1C032B588 ^ (unsigned __int8)(8 * a4)) & 8 ^ dword_1C032B588;
  dword_1C032B588 = v19;
  if ( a5 || a1 == a3[2] )
    v20 = 0;
  else
    v20 = 2;
  v21 = (const struct tagRECT *)(v19 & 0xFFFFFFED);
  v22 = v20 | (unsigned int)v21 | (16 * (a5 & 1));
  dword_1C032B588 = v22;
  if ( a8 )
  {
    v23 = v22 | 4;
    xmmword_1C032B528 = *a8;
    xmmword_1C032B538 = *a9;
    xmmword_1C032B548 = a9[1];
    xmmword_1C032B558 = a9[2];
    xmmword_1C032B568 = a9[3];
  }
  else
  {
    v23 = v22 & 0xFFFFFFFB;
  }
  dword_1C032B588 = v23 | 1;
  Edgy::ProcessEdgyInertia((Edgy *)&gInertiaInfo, (const struct INERTIA_INFO_INTERNAL *)v15, v21, v14.QuadPart);
  return 1LL;
}
