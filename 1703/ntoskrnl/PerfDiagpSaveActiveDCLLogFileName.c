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
  _WORD *PoolWithTag; // rbx
  unsigned __int16 v1; // cx
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20AuLL, 0x64465250u);
  if ( PoolWithTag )
  {
    memset(&InputBufferLength, 0, 0xB0uLL);
    wcscpy(&xmmword_1403455EC, L"WdiContextLog");
    dword_14034565C = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_1403455EC);
    qword_1403456B8 = (__int64)PoolWithTag;
    word_1403456B2 = 520;
    InputBufferLength = 176;
    if ( NtTraceControl(EtwQueryLoggerCode, &InputBufferLength, 0xB0u, &InputBufferLength, 0xB0u, &ReturnLength) < 0
      || (unsigned __int16)word_1403456B0 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_1403456B0 >> 1;
      PoolWithTag[v1] = 0;
      RtlWriteRegistryValue(
        2u,
        L"Diagnostics\\Performance",
        L"ActiveShutdownDCL",
        1u,
        PoolWithTag,
        2 * (unsigned __int16)(v1 + 1));
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
  }
}
