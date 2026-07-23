/*
 * XREFs of RtlGetExtendedContextLength @ 0x18006D010
 * Callers:
 *     sub_18010B78C @ 0x18010B78C (sub_18010B78C.c)
 * Callees:
 *     sub_18006D084 @ 0x18006D084 (sub_18006D084.c)
 *     sub_18006D1AC @ 0x18006D1AC (sub_18006D1AC.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength(ULONG ContextFlags, PULONG ContextLength)
{
  NTSTATUS result; // eax
  unsigned int v3; // r10d
  _DWORD *v4; // r11
  int v5; // ecx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  v7 = 0;
  result = sub_18006D1AC(ContextFlags, v6);
  if ( result >= 0 )
  {
    sub_18006D084(v3, &v7, &v8);
    v5 = v7 + 24;
    if ( (v6[0] & 2) != 0 )
      v5 = MEMORY[0x7FFE03E8] - 448 + (~(v8 - 1) & (v8 + v7 + 23)) - v8;
    *v4 = v5 + v8 - 1;
    return 0;
  }
  return result;
}
