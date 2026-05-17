/*
 * XREFs of sub_1800681C0 @ 0x1800681C0
 * Callers:
 *     sub_180067F8C @ 0x180067F8C (sub_180067F8C.c)
 * Callees:
 *     ZwReadVirtualMemory @ 0x1800A5AE0 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall sub_1800681C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 result; // rax

  result = ZwReadVirtualMemory(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
    return a4 != *a5 ? 0x8000000D : 0;
  *a5 = 0LL;
  return result;
}
