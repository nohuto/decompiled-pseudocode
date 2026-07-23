/*
 * XREFs of RtlTimeToSecondsSince1980 @ 0x1800820C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008221C @ 0x18008221C (sub_18008221C.c)
 */

BOOLEAN __cdecl RtlTimeToSecondsSince1980(PLARGE_INTEGER Time, PULONG ElapsedSeconds)
{
  __int64 v2; // rax
  _DWORD *v3; // r10

  v2 = sub_18008221C(Time->QuadPart, 0xD6BF94D5E57A42BDuLL, 23) - 0x2C8DF3700LL;
  if ( HIDWORD(v2) )
    return 0;
  *v3 = v2;
  return 1;
}
