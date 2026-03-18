/*
 * XREFs of LogFwReport @ 0x140755B14
 * Callers:
 *     ResFwFreeContext @ 0x140755078 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x140758B48 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpGetResolution @ 0x14003C760 (BgpGetResolution.c)
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     BgpFwQueryPerformanceCounter @ 0x1401406BC (BgpFwQueryPerformanceCounter.c)
 *     BgpGetBitsPerPixel @ 0x140140DD4 (BgpGetBitsPerPixel.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_140341A30 & 0x80u) != 0 )
  {
    dword_140341A30 &= ~0x80u;
    BgpFwQueryPerformanceCounter(&PerformanceFrequency);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_14036F1B8 = v1;
    dword_14036F1C0 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_140387598.Parameter = 0LL;
    stru_140387598.List.Flink = 0LL;
    dword_14036F15C = BitsPerPixel;
    dword_14036F1A8 = dword_140341A30;
    dword_14036F1E0 = 1000000 * qword_14036F170 / PerformanceFrequency.QuadPart;
    dword_14036F1AC = 1000000 * qword_14036F1F0 / PerformanceFrequency.QuadPart;
    dword_14036F16C = 1000000 * qword_14036F1E8 / PerformanceFrequency.QuadPart;
    stru_140387598.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_140387598, DelayedWorkQueue);
    if ( (dword_140341A30 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_14036F1B8,
        HIDWORD(qword_14036F1B8),
        dword_14036F15C);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_14036F1D0 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_14036F1B0);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_140341A50);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_14033FD38 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_14036F160 / PerformanceFrequency.QuadPart);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_14036F198 / PerformanceFrequency.QuadPart,
        1000000 * qword_14036F188 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_14036F1C8 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_14036F168);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_140341A4C,
        dword_14036F1AC,
        dword_14036F16C);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_14033FD48 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_14036F178 / PerformanceFrequency.QuadPart);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_14036F1E0,
        1000000 * qword_14036F1A0 / PerformanceFrequency.QuadPart);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_14036F180 / PerformanceFrequency.QuadPart);
      if ( qword_140341A60 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_140341A60);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_140388010 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
