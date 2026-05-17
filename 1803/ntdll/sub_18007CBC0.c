/*
 * XREFs of sub_18007CBC0 @ 0x18007CBC0
 * Callers:
 *     RtlTimeToElapsedTimeFields @ 0x18007CB30 (RtlTimeToElapsedTimeFields.c)
 * Callees:
 *     sub_18007CC5C @ 0x18007CC5C (sub_18007CC5C.c)
 */

__int64 __fastcall sub_18007CBC0(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 result; // rax
  int v8; // r11d

  v4 = a3;
  LOBYTE(a3) = 13;
  v5 = sub_18007CC5C(*a1, 0xD1B71758E219652CuLL, a3);
  LOBYTE(v6) = 26;
  result = sub_18007CC5C(v5, 0xC6D750EBFA67B90EuLL, v6);
  *a2 = result;
  *v4 = v8 - 86400000 * result;
  return result;
}
