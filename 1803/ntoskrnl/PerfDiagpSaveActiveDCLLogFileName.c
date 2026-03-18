/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x1407A115C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140649BE0 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlWriteRegistryValue @ 0x140579A30 (RtlWriteRegistryValue.c)
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 *     RtlDeleteRegistryValue @ 0x140605790 (RtlDeleteRegistryValue.c)
 */

void PerfDiagpSaveActiveDCLLogFileName()
{
  _WORD *ValueData; // rbx
  unsigned __int16 v1; // cx
  char v2; // [rsp+40h] [rbp+8h] BYREF

  ValueData = ExAllocatePoolWithTag(PagedPool, 0x20AuLL, 0x64465250u);
  if ( ValueData )
  {
    memset(dword_1403A2690, 0, 0xB0uLL);
    wcscpy(&xmmword_1403A264C, L"WdiContextLog");
    dword_1403A26BC = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_1403A264C);
    qword_1403A2718 = (__int64)ValueData;
    word_1403A2712 = 520;
    dword_1403A2690[0] = 176;
    if ( (int)NtTraceControl(3u, (char *)dword_1403A2690, 0xB0u, dword_1403A2690, 0xB0u, (unsigned __int64)&v2) < 0
      || (unsigned __int16)word_1403A2710 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_1403A2710 >> 1;
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
