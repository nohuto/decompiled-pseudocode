/*
 * XREFs of EtwpInitializeRegistration @ 0x1408C88E0
 * Callers:
 *     EtwpInitialize @ 0x1408A3474 (EtwpInitialize.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400D3988 (KiInitializeMutant.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObCreateObjectType @ 0x140621880 (ObCreateObjectType.c)
 */

__int64 EtwpInitializeRegistration()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  KiInitializeMutant((__int64)&EtwpGlobalMutex, 0LL, 1);
  EtwpReplyListLock = 0LL;
  qword_1403A1D68 = (__int64)&EtwpReplyListHead;
  EtwpReplyListHead = (__int64)&EtwpReplyListHead;
  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 0x18u;
  v2[7] = EtwpOpenRealTimeConnectionObject;
  LOWORD(v2[0]) = 120;
  v2[8] = EtwpCloseRegistrationObject;
  LODWORD(v2[1]) = 256;
  v2[9] = EtwpDeleteRegistrationObject;
  *(GENERIC_MAPPING *)((char *)&v2[1] + 4) = EtwpGenericMapping;
  HIDWORD(v2[3]) = 2052;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[5]) = 112;
  RtlInitUnicodeString(&DestinationString, L"EtwRegistration");
  return ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&EtwpRegistrationObjectType);
}
