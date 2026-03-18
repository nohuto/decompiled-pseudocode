/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x14073E7CC
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14073E0C0 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 *     RtlWriteRegistryValue @ 0x14058C9E0 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x1405E5410 (RtlDeleteRegistryValue.c)
 */

void PerfDiagpSaveActiveDCLLogFileName()
{
  _WORD *ValueData; // rbx
  unsigned __int16 v1; // cx
  char v2; // [rsp+40h] [rbp+8h] BYREF

  ValueData = ExAllocatePoolWithTag(PagedPool, 0x20AuLL, 0x64465250u);
  if ( ValueData )
  {
    memset(dword_14035F090, 0, 0xB0uLL);
    wcscpy(&xmmword_14035F04C, L"WdiContextLog");
    dword_14035F0BC = 0x20000;
    RtlInitUnicodeString(&stru_14035F120, &xmmword_14035F04C);
    qword_14035F118 = (__int64)ValueData;
    word_14035F112 = 520;
    dword_14035F090[0] = 176;
    if ( (int)NtTraceControl(3u, (char *)dword_14035F090, 0xB0u, dword_14035F090, 0xB0u, (unsigned __int64)&v2) < 0
      || (unsigned __int16)word_14035F110 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_14035F110 >> 1;
      ValueData[v1] = 0;
      RtlWriteRegistryValue(
        2u,
        L"Diagnostics\\Performance",
        L"ActiveShutdownDCL",
        1u,
        ValueData,
        2 * (unsigned __int16)(v1 + 1));
    }
    ExFreePoolWithTag(ValueData, 0);
  }
  else
  {
    RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
  }
}
