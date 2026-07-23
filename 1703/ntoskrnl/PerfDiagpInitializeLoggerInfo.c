/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x14045C834
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14045C280 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x1405D6650 (PerfDiagpUpdateCKCLEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     memset @ 0x140192D80 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(&InputBufferLength, 0, 0xB0uLL);
  dword_140345678 = -2130771792;
  wcscpy(&xmmword_1403455EC, L"Circular Kernel Context Logger");
  dword_14034565C = 0x20000;
  RtlInitUnicodeString(&DestinationString, &xmmword_1403455EC);
  InputBufferLength = 180;
  dword_1403456E0 = 1;
  if ( a1 )
  {
    word_1403456E6 = 1;
    word_1403456E4 = a2 + 1;
    HIWORD(dword_1403456E0) = 1;
    LOWORD(dword_1403456E0) = a2 + 2;
    InputBufferLength = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
