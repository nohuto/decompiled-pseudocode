/*
 * XREFs of EtwpInitializeRealTimeConnection @ 0x1408C95E8
 * Callers:
 *     EtwpInitialize @ 0x1408A3474 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObCreateObjectType @ 0x140621880 (ObCreateObjectType.c)
 */

__int64 EtwpInitializeRealTimeConnection()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 0x18u;
  v2[7] = EtwpOpenRealTimeConnectionObject;
  LOWORD(v2[0]) = 120;
  v2[8] = EtwpCloseRealTimeConnectionObject;
  LODWORD(v2[1]) = 256;
  v2[9] = EtwpDeleteRealTimeConnectionObject;
  *(GENERIC_MAPPING *)((char *)&v2[1] + 4) = EtwpGenericMapping;
  HIDWORD(v2[3]) = 1024;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[5]) = 160;
  RtlInitUnicodeString(&DestinationString, L"EtwConsumer");
  return ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&EtwpRealTimeConnectionObjectType);
}
