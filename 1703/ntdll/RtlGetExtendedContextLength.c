/*
 * XREFs of RtlGetExtendedContextLength @ 0x180068B70
 * Callers:
 *     sub_1801077AC @ 0x1801077AC (sub_1801077AC.c)
 * Callees:
 *     sub_180068D04 @ 0x180068D04 (sub_180068D04.c)
 *     sub_180068D44 @ 0x180068D44 (sub_180068D44.c)
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
  result = sub_180068D44(ContextFlags, v6);
  if ( result >= 0 )
  {
    sub_180068D04(v3, &v7, &v8);
    v5 = v7 + 24;
    if ( (v6[0] & 2) != 0 )
      v5 = MEMORY[0x7FFE03E8] - 448 + (~(v8 - 1) & (v8 + v7 + 23)) - v8;
    *v4 = v5 + v8 - 1;
    return 0;
  }
  return result;
}
