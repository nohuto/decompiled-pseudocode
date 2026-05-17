/*
 * XREFs of sub_18006BB70 @ 0x18006BB70
 * Callers:
 *     sub_18006B394 @ 0x18006B394 (sub_18006B394.c)
 *     sub_1800F7744 @ 0x1800F7744 (sub_1800F7744.c)
 * Callees:
 *     sub_18006B334 @ 0x18006B334 (sub_18006B334.c)
 */

char __fastcall sub_18006BB70(__int64 a1, int a2, char a3)
{
  __int64 v4; // rcx
  int v5; // r10d
  char v6; // r11
  __int64 v7; // rax
  char result; // al

  if ( !sub_18006B334(a1, a2) )
    return 0;
  v7 = *(_QWORD *)(v4 + 40) - 2LL;
  *(_DWORD *)(v4 + 56) = v5;
  *(_QWORD *)(v4 + 64) = v7;
  result = 1;
  *(_BYTE *)(v4 + 72) = a3;
  *(_BYTE *)(v4 + 73) = v6;
  return result;
}
