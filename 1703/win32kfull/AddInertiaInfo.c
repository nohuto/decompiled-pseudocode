/*
 * XREFs of AddInertiaInfo @ 0x1C020A4D4
 * Callers:
 *     NtUserReportInertia @ 0x1C0007FA0 (NtUserReportInertia.c)
 * Callees:
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01CD820 (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
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
  unsigned __int64 v14; // rdx
  LARGE_INTEGER v15; // rsi
  int v17; // eax
  int v18; // r8d
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ecx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v14 = qword_1C0338910;
  v15 = PerformanceCounter;
  if ( !qword_1C0338910 )
  {
    v14 = 100LL * gliQpcFreq / 1000;
    qword_1C0338910 = v14;
  }
  if ( (dword_1C03300C8 & 1) != 0
    && gInertiaInfo == a1
    && PerformanceCounter.QuadPart - qword_1C03300C0 <= v14
    && a7 <= *(double *)&qword_1C0330060 )
  {
    return 0LL;
  }
  gInertiaInfo = a1;
  qword_1C0330048 = a2;
  qword_1C0330050 = *(_QWORD *)a6;
  v17 = *(_DWORD *)(a6 + 8);
  qword_1C0330060 = *(_QWORD *)&a7;
  dword_1C0330058 = v17;
  if ( a3 )
    qword_1C03300B8 = *a3;
  else
    qword_1C03300B8 = 0LL;
  qword_1C03300C0 = v15.QuadPart;
  v18 = ((unsigned __int8)dword_1C03300C8 ^ (unsigned __int8)(8 * a4)) & 8 ^ dword_1C03300C8;
  dword_1C03300C8 = v18;
  if ( a5 || a1 == a3[2] )
    v19 = 0;
  else
    v19 = 2;
  v20 = v19 | v18 & 0xFFFFFFED | (16 * (a5 & 1));
  dword_1C03300C8 = v20;
  if ( a8 )
  {
    v21 = v20 | 4;
    xmmword_1C0330068 = *a8;
    xmmword_1C0330078 = *a9;
    xmmword_1C0330088 = a9[1];
    xmmword_1C0330098 = a9[2];
    xmmword_1C03300A8 = a9[3];
  }
  else
  {
    v21 = v20 & 0xFFFFFFFB;
  }
  dword_1C03300C8 = v21 | 1;
  Edgy::ProcessEdgyInertia((Edgy *)&gInertiaInfo, (const struct INERTIA_INFO_INTERNAL *)v14);
  return 1LL;
}
