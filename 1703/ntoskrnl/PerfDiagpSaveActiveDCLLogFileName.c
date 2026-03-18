/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x140578618
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14045C280 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 *     RtlWriteRegistryValue @ 0x140556350 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x1405CF770 (RtlDeleteRegistryValue.c)
 */

void PerfDiagpSaveActiveDCLLogFileName()
{
  _WORD *ValueData; // rbx
  unsigned __int16 v1; // cx
  char v2; // [rsp+40h] [rbp+8h] BYREF

  ValueData = ExAllocatePoolWithTag(PagedPool, 0x20AuLL, 0x64465250u);
  if ( ValueData )
  {
    memset(dword_140345630, 0, 0xB0uLL);
    wcscpy(&xmmword_1403455EC, L"WdiContextLog");
    dword_14034565C = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_1403455EC);
    qword_1403456B8 = (__int64)ValueData;
    word_1403456B2 = 520;
    dword_140345630[0] = 176;
    if ( (int)NtTraceControl(3u, (char *)dword_140345630, 0xB0u, dword_140345630, 0xB0u, (unsigned __int64)&v2) < 0
      || (unsigned __int16)word_1403456B0 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_1403456B0 >> 1;
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
