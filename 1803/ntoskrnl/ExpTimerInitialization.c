/*
 * XREFs of ExpTimerInitialization @ 0x1408A0088
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1408A0198 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObCreateObjectType @ 0x140621880 (ObCreateObjectType.c)
 */

bool ExpTimerInitialization()
{
  int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v3[16]; // [rsp+30h] [rbp-29h] BYREF

  ExpWakeTimerLock = 0LL;
  qword_14039ED88 = (__int64)&ExpWakeTimerList;
  ExpWakeTimerList = (__int64)&ExpWakeTimerList;
  RtlInitUnicodeString(&DestinationString, L"Timer");
  memset(v3, 0, 0x78uLL);
  LOWORD(v3[0]) = 120;
  LODWORD(v3[1]) = 256;
  HIDWORD(v3[4]) = 512;
  HIDWORD(v3[5]) = 328;
  HIDWORD(v3[3]) = 2031619;
  *(_OWORD *)((char *)&v3[1] + 4) = ExpTimerMapping;
  v3[9] = ExpDeleteTimer;
  v0 = ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&ExTimerObjectType);
  if ( v0 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"IRTimer");
    HIDWORD(v3[5]) = 168;
    v3[9] = ExpDeleteTimer2;
    v0 = ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&ExpIRTimerObjectType);
    ExpTimerFreedCookie = ExGenRandom(0);
  }
  return v0 >= 0;
}
