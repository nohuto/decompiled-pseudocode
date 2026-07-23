/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x14064A06C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140649BE0 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x140649F60 (PerfDiagpUpdateCKCLEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(&OutputBuffer, 0, 0xB0uLL);
  dword_1403A26D8 = -2130771792;
  wcscpy(&xmmword_1403A264C, L"Circular Kernel Context Logger");
  dword_1403A26BC = 0x20000;
  RtlInitUnicodeString(&DestinationString, &xmmword_1403A264C);
  OutputBuffer = 180;
  dword_1403A2740 = 1;
  if ( a1 )
  {
    word_1403A2746 = 1;
    word_1403A2744 = a2 + 1;
    HIWORD(dword_1403A2740) = 1;
    LOWORD(dword_1403A2740) = a2 + 2;
    OutputBuffer = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
