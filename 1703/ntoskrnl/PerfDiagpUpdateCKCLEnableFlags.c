/*
 * XREFs of PerfDiagpUpdateCKCLEnableFlags @ 0x1405D6650
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14045C280 (PerfDiagpProxyWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x14045C834 (PerfDiagpInitializeLoggerInfo.c)
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 *     RtlpQueryRegistryValues @ 0x14055642C (RtlpQueryRegistryValues.c)
 */

NTSTATUS __fastcall PerfDiagpUpdateCKCLEnableFlags(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  unsigned int v4; // ebx
  ULONG ReturnLength[4]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v6[14]; // [rsp+40h] [rbp-59h] BYREF
  size_t Size[6]; // [rsp+B0h] [rbp+17h] BYREF

  memset(Size, 0, sizeof(Size));
  memset(v6, 0, sizeof(v6));
  LODWORD(v6[1]) = 32;
  v6[2] = a2;
  v6[3] = Size;
  LODWORD(v6[4]) = 3;
  LODWORD(Size[0]) = 48;
  result = RtlpQueryRegistryValues(2LL, L"Diagnostics\\Performance\\BootCKCLSettings", (__int64)v6, 0LL);
  if ( result >= 0 )
  {
    if ( HIDWORD(Size[0]) == 3 )
    {
      v4 = Size[0];
      if ( LODWORD(Size[0]) > 0x28 )
      {
        return -1073741789;
      }
      else
      {
        memmove(&unk_1403456E8, &Size[1], LODWORD(Size[0]));
        PerfDiagpInitializeLoggerInfo(1, v4 >> 2);
        return NtTraceControl(
                 EtwUpdateLoggerCode,
                 &InputBufferLength,
                 InputBufferLength,
                 &InputBufferLength,
                 InputBufferLength,
                 ReturnLength);
      }
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
