/*
 * XREFs of WbFindHeapExecutedBlock @ 0x1404413EC
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x1404410F4 (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     sub_14053B960 @ 0x14053B960 (sub_14053B960.c)
 *     sub_14053CA84 @ 0x14053CA84 (sub_14053CA84.c)
 */

__int64 __fastcall WbFindHeapExecutedBlock(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_14053B960(a1 + 8, a2, 8, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_14053CA84(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
