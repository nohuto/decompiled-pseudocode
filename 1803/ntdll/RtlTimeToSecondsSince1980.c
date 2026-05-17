/*
 * XREFs of RtlTimeToSecondsSince1980 @ 0x18007CAF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007CC5C @ 0x18007CC5C (sub_18007CC5C.c)
 */

char __fastcall RtlTimeToSecondsSince1980(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _DWORD *v4; // r11

  LOBYTE(a3) = 23;
  v3 = sub_18007CC5C(*a1, 0xD6BF94D5E57A42BDuLL, a3) - 0x2C8DF3700LL;
  if ( HIDWORD(v3) )
    return 0;
  *v4 = v3;
  return 1;
}
