/*
 * XREFs of sub_180077D70 @ 0x180077D70
 * Callers:
 *     <none>
 * Callees:
 *     ZwReadVirtualMemory @ 0x18009B2A0 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall sub_180077D70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 result; // rax

  result = ZwReadVirtualMemory(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
    return a4 != *a5 ? 0x8000000D : 0;
  *a5 = 0LL;
  return result;
}
