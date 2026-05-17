/*
 * XREFs of sub_18002567C @ 0x18002567C
 * Callers:
 *     sub_1800254A0 @ 0x1800254A0 (sub_1800254A0.c)
 *     sub_18002A150 @ 0x18002A150 (sub_18002A150.c)
 *     sub_18002C774 @ 0x18002C774 (sub_18002C774.c)
 *     sub_180046810 @ 0x180046810 (sub_180046810.c)
 *     sub_180054B20 @ 0x180054B20 (sub_180054B20.c)
 *     sub_180075FE0 @ 0x180075FE0 (sub_180075FE0.c)
 *     sub_180076EF0 @ 0x180076EF0 (sub_180076EF0.c)
 *     sub_1800773B0 @ 0x1800773B0 (sub_1800773B0.c)
 *     sub_180108E80 @ 0x180108E80 (sub_180108E80.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall sub_18002567C(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *result; // rax
  _QWORD *v5; // r11
  _DWORD *ThreadPoolData; // r10
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // r8

  result = NtCurrentTeb();
  v5 = 0LL;
  ThreadPoolData = result->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v8 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v9 = ((_BYTE)v8 - 1) & 1;
    ThreadPoolData[3] = v9;
    v10 = 8LL * v9;
    v5 = &ThreadPoolData[v10 + 8];
    *(_QWORD *)&ThreadPoolData[v10 + 10] = a3;
    *(_QWORD *)&ThreadPoolData[v10 + 12] = a4;
    *v5 = a2;
    result = (struct _TEB *)MEMORY[0x7FFE03B0];
    *(_QWORD *)&ThreadPoolData[v10 + 14] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  *a1 = v5;
  return result;
}
