/*
 * XREFs of PpmInitIdlePolicy @ 0x1408C2BE8
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTime @ 0x14003884C (PpmConvertTime.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x1401A9E20 (ZwQueryLicenseValue.c)
 */

__int64 PpmInitIdlePolicy()
{
  __int64 v0; // rax
  unsigned __int64 *v1; // rbx
  __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+50h] [rbp+8h]
  int v7; // [rsp+58h] [rbp+10h] BYREF
  int v8; // [rsp+60h] [rbp+18h] BYREF

  word_1403A660C = 0;
  word_1403A708C = 0;
  dword_1403A6610 = 50000;
  dword_1403A7090 = 50000;
  v0 = 2 * PopQpcFrequency;
  PopIdleTransitionTimeout = 2 * PopQpcFrequency;
  word_1403A6615 = 60;
  word_1403A7095 = 60;
  byte_1403A6614 = 40;
  byte_1403A7094 = 40;
  if ( !KdPitchDebugger )
    v0 = 90 * PopQpcFrequency;
  PopCoordinatedIdleExitTimeout = v0;
  v1 = (unsigned __int64 *)&PpmIdleIntervalLimits;
  v2 = 26LL;
  do
  {
    v3 = v1[1];
    if ( v3 != -1LL )
      *v1 = PpmConvertTime(v3, 0x989680uLL, PopQpcFrequency);
    v1 += 3;
    --v2;
  }
  while ( v2 );
  RtlInitUnicodeString(&DestinationString, L"Power-IdleStatesMax-Enabled");
  result = ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v7, (__int64)&v8);
  if ( (int)result >= 0 && v6 == 4 && v7 == 4 )
    PpmIdleRespectIdleStateMax = v8 != 0;
  return result;
}
