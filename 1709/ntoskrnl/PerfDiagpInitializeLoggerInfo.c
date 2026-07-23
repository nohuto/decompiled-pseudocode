/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x14073DE9C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14073E0C0 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x14073E9A4 (PerfDiagpUpdateCKCLEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(&InputBufferLength, 0, 0xB0uLL);
  dword_14035F0D8 = -2130771792;
  wcscpy(&xmmword_14035F04C, L"Circular Kernel Context Logger");
  dword_14035F0BC = 0x20000;
  RtlInitUnicodeString(&stru_14035F120, &xmmword_14035F04C);
  InputBufferLength = 180;
  dword_14035F140 = 1;
  if ( a1 )
  {
    word_14035F146 = 1;
    word_14035F144 = a2 + 1;
    HIWORD(dword_14035F140) = 1;
    LOWORD(dword_14035F140) = a2 + 2;
    InputBufferLength = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
