/*
 * XREFs of sub_1800169EC @ 0x1800169EC
 * Callers:
 *     sub_180011380 @ 0x180011380 (sub_180011380.c)
 *     sub_180011A40 @ 0x180011A40 (sub_180011A40.c)
 *     sub_180012130 @ 0x180012130 (sub_180012130.c)
 *     sub_1800132E0 @ 0x1800132E0 (sub_1800132E0.c)
 *     sub_180014090 @ 0x180014090 (sub_180014090.c)
 *     sub_180014660 @ 0x180014660 (sub_180014660.c)
 *     sub_180016810 @ 0x180016810 (sub_180016810.c)
 *     sub_180080D00 @ 0x180080D00 (sub_180080D00.c)
 *     sub_1800957D0 @ 0x1800957D0 (sub_1800957D0.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall sub_1800169EC(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *result; // rax
  _DWORD *ThreadPoolData; // r10
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // r8
  _QWORD *v11; // r9

  result = NtCurrentTeb();
  ThreadPoolData = result->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v8 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v9 = ((_BYTE)v8 - 1) & 1;
    ThreadPoolData[3] = v9;
    v10 = 8LL * v9;
    v11 = &ThreadPoolData[v10 + 8];
    *(_QWORD *)&ThreadPoolData[v10 + 10] = a3;
    *(_QWORD *)&ThreadPoolData[v10 + 12] = a4;
    *v11 = a2;
    result = (struct _TEB *)MEMORY[0x7FFE03B0];
    *(_QWORD *)&ThreadPoolData[v10 + 14] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    *a1 = v11;
  }
  else
  {
    *a1 = 0LL;
  }
  return result;
}
