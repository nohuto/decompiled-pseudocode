/*
 * XREFs of EtwpInitializeCoverageSampler @ 0x1408C8D9C
 * Callers:
 *     EtwpInitialize @ 0x1408A3474 (EtwpInitialize.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x14008AE10 (ExRundownCompleted.c)
 *     ExInitializePushLock @ 0x1400BA070 (ExInitializePushLock.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObCreateObjectType @ 0x140621880 (ObCreateObjectType.c)
 */

__int64 EtwpInitializeCoverageSampler()
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+40h] [rbp-29h] BYREF

  EtwpCovSampGlobals = 0LL;
  ExInitializePushLock(&stru_1403A1CE0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_1403A1CE0);
  ExRundownCompleted((PEX_RUNDOWN_REF)&stru_1403A1CE0);
  RtlInitUnicodeString(&DestinationString, L"CoverageSampler");
  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 4u;
  v2[8] = EtwpCoverageSamplerClose;
  LOWORD(v2[0]) = 120;
  v2[9] = EtwpCoverageSamplerDelete;
  HIDWORD(v2[4]) = 1;
  LODWORD(v2[5]) = 1208;
  LODWORD(v2[1]) = 402;
  HIDWORD(v2[3]) = 2031617;
  result = ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&qword_1403A1CD0);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Eu, 0xC0uLL, 0LL, 0LL, 0LL);
  return result;
}
