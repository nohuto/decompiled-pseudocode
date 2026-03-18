/*
 * XREFs of ExpProfileInitialization @ 0x1408C8F84
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1408A0198 (ExpInitSystemPhase1.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400D3988 (KiInitializeMutant.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObCreateObjectType @ 0x140621880 (ObCreateObjectType.c)
 */

bool ExpProfileInitialization()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v2[17]; // [rsp+30h] [rbp-88h] BYREF

  KiInitializeMutant((__int64)&ExpProfileStateMutex, 0LL, 1);
  RtlInitUnicodeString(&DestinationString, L"Profile");
  memset(v2, 0, 0x78uLL);
  LOWORD(v2[0]) = 120;
  LODWORD(v2[1]) = 256;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[5]) = 240;
  HIDWORD(v2[3]) = 983041;
  *(_OWORD *)((char *)&v2[1] + 4) = ExpProfileMapping;
  v2[9] = ExpProfileDelete;
  return (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&ExProfileObjectType) >= 0;
}
