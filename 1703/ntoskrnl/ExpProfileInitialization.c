/*
 * XREFs of ExpProfileInitialization @ 0x1408256D4
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1407FDF80 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     KiInitializeMutant @ 0x140121F00 (KiInitializeMutant.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ObCreateObjectType @ 0x14059EB50 (ObCreateObjectType.c)
 */

bool ExpProfileInitialization()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v2[17]; // [rsp+30h] [rbp-88h] BYREF

  KiInitializeMutant((__int64)&ExpProfileStateMutex, 0, 1);
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
