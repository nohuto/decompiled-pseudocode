/*
 * XREFs of LdrCreateEnclave @ 0x1800C96A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     ZwCreateEnclave @ 0x18009BF10 (ZwCreateEnclave.c)
 *     sub_1800C9C98 @ 0x1800C9C98 (sub_1800C9C98.c)
 */

__int64 __fastcall LdrCreateEnclave(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax
  int v9; // ebx
  __int64 v10; // [rsp+58h] [rbp-10h]

  v10 = *a2;
  result = ZwCreateEnclave();
  v9 = result;
  if ( (int)result >= 0 )
  {
    if ( a6 == 16 && (v9 = sub_1800C9C98(v10, a4), v9 < 0) )
      ZwFreeVirtualMemory();
    else
      *a2 = v10;
    return (unsigned int)v9;
  }
  return result;
}
