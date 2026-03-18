/*
 * XREFs of LogFwReport @ 0x1407CE4FC
 * Callers:
 *     BgpFwLibraryDisable @ 0x1407CE670 (BgpFwLibraryDisable.c)
 *     ResFwFreeContext @ 0x1407D3A5C (ResFwFreeContext.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     BgpGetResolution @ 0x140132228 (BgpGetResolution.c)
 *     BgpFwQueryPerformanceCounter @ 0x14013B95C (BgpFwQueryPerformanceCounter.c)
 *     BgpGetBitsPerPixel @ 0x14013C074 (BgpGetBitsPerPixel.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_14035A1B0 & 0x80u) != 0 )
  {
    dword_14035A1B0 &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_140358AA0);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_14038D8D8 = v1;
    dword_14038D8E0 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_1403A2A88.Parameter = 0LL;
    stru_1403A2A88.List.Flink = 0LL;
    dword_14038D880 = BitsPerPixel;
    dword_14038D8C0 = dword_14035A1B0;
    dword_14038D8EC = 1000000 * qword_14038D890 / qword_140358AA0;
    dword_14038D8E8 = 1000000 * qword_14038D900 / qword_140358AA0;
    dword_14038D884 = 1000000 * qword_14038D908 / qword_140358AA0;
    stru_1403A2A88.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_1403A2A88, DelayedWorkQueue);
    if ( (dword_14035A1B0 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_14038D8D8,
        HIDWORD(qword_14038D8D8),
        dword_14038D880);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_14038D8F8 / qword_140358AA0);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_14038D8E4);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_14035A1D0);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_1403583C8 / qword_140358AA0);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_14038D888 / qword_140358AA0);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_1403A3598 / qword_140358AA0,
        1000000 * qword_14038D8B0 / qword_140358AA0);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_14038D8D0 / qword_140358AA0);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_14038D898);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_14035A1CC,
        dword_14038D8E8,
        dword_14038D884);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_1403583D0 / qword_140358AA0);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_14038D8A0 / qword_140358AA0);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_14038D8EC,
        1000000 * qword_14038D8C8 / qword_140358AA0);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_14038D8B8 / qword_140358AA0);
      if ( qword_14035A1E0 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_14035A1E0);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_1403A35A8 / qword_140358AA0);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
