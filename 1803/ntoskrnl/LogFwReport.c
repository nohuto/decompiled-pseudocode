/*
 * XREFs of LogFwReport @ 0x14083B7D8
 * Callers:
 *     ResFwFreeContext @ 0x14083B078 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x14083D0D8 (BgpFwLibraryDisable.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     BgpGetResolution @ 0x1400D2BE0 (BgpGetResolution.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     BgpGetBitsPerPixel @ 0x140165560 (BgpGetBitsPerPixel.c)
 *     BgpFwQueryPerformanceCounter @ 0x140165588 (BgpFwQueryPerformanceCounter.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_14039D7F0 & 0x80u) != 0 )
  {
    dword_14039D7F0 &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_14039B980);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_1403D1888 = v1;
    dword_1403D1890 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_1403E90A8.Parameter = 0LL;
    stru_1403E90A8.List.Flink = 0LL;
    dword_1403D1820 = BitsPerPixel;
    dword_1403D1870 = dword_14039D7F0;
    dword_1403D18A0 = 1000000 * qword_1403D1830 / qword_14039B980;
    dword_1403D186C = 1000000 * qword_1403D18B0 / qword_14039B980;
    dword_1403D1838 = 1000000 * qword_1403D1898 / qword_14039B980;
    stru_1403E90A8.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_1403E90A8, DelayedWorkQueue);
    if ( (dword_14039D7F0 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_1403D1888,
        HIDWORD(qword_1403D1888),
        dword_1403D1820);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_1403D1878 / qword_14039B980);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_1403D1868);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_14039D810);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_14039B978 / qword_14039B980);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_1403D1818 / qword_14039B980);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_1403D1850 / qword_14039B980,
        1000000 * qword_1403D1860 / qword_14039B980);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_1403D1880 / qword_14039B980);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_1403D183C);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_14039D80C,
        dword_1403D186C,
        dword_1403D1838);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_14039B988 / qword_14039B980);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_1403D1828 / qword_14039B980);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_1403D18A0,
        1000000 * qword_1403D1848 / qword_14039B980);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_1403D1840 / qword_14039B980);
      if ( qword_14039D820 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_14039D820);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_1403E9AD0 / qword_14039B980);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
