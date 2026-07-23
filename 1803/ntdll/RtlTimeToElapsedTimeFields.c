/*
 * XREFs of RtlTimeToElapsedTimeFields @ 0x18007CB30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007CBC0 @ 0x18007CBC0 (sub_18007CBC0.c)
 */

void __cdecl RtlTimeToElapsedTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  unsigned int v3; // r10d
  unsigned int v4; // r8d
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  CSHORT v6; // [rsp+40h] [rbp+18h] BYREF

  sub_18007CBC0(Time, &v6, &v5);
  v3 = v5;
  *(_DWORD *)&TimeFields->Year = 0;
  TimeFields->Day = v6;
  TimeFields->Milliseconds = v3 % 0x3E8;
  v4 = v3 / 0x3E8 / 0x3C;
  TimeFields->Hour = v4 / 0x3C;
  TimeFields->Minute = v4 % 0x3C;
  TimeFields->Second = v3 / 0x3E8 % 0x3C;
}
