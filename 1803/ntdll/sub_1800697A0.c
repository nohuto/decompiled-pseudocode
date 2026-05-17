/*
 * XREFs of sub_1800697A0 @ 0x1800697A0
 * Callers:
 *     sub_180069670 @ 0x180069670 (sub_180069670.c)
 *     sub_1800F52E0 @ 0x1800F52E0 (sub_1800F52E0.c)
 * Callees:
 *     sub_1800697E4 @ 0x1800697E4 (sub_1800697E4.c)
 */

char __fastcall sub_1800697A0(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v6; // rcx
  int v7; // r11d
  __int64 v8; // rax
  char result; // al

  if ( !(unsigned __int8)sub_1800697E4(a1, a2) )
    return 0;
  v8 = *(_QWORD *)(v6 + 40) - 2LL;
  *(_DWORD *)(v6 + 56) = v7;
  *(_QWORD *)(v6 + 64) = v8;
  result = 1;
  *(_BYTE *)(v6 + 72) = a3;
  *(_BYTE *)(v6 + 73) = a4;
  return result;
}
