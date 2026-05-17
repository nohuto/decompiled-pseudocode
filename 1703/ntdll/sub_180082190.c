/*
 * XREFs of sub_180082190 @ 0x180082190
 * Callers:
 *     RtlTimeToElapsedTimeFields @ 0x180082100 (RtlTimeToElapsedTimeFields.c)
 * Callees:
 *     sub_18008221C @ 0x18008221C (sub_18008221C.c)
 */

__int64 __fastcall sub_180082190(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 result; // rax
  _DWORD *v7; // r11
  int v8; // r10d

  v3 = a3;
  LOBYTE(a3) = 13;
  v4 = sub_18008221C(*a1, 0xD1B71758E219652CuLL, a3);
  LOBYTE(v5) = 26;
  result = sub_18008221C(v4, 0xC6D750EBFA67B90EuLL, v5);
  *v7 = result;
  *v3 = v8 - 86400000 * result;
  return result;
}
