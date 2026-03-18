/*
 * XREFs of sub_14050EEB8 @ 0x14050EEB8
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x14050F76C (WbGetHeapExecutedBlock.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14053AB8C (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     sub_14050F54C @ 0x14050F54C (sub_14050F54C.c)
 *     sub_14050FC44 @ 0x14050FC44 (sub_14050FC44.c)
 */

__int64 __fastcall sub_14050EEB8(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_14050F54C(a1 + 8, a2, 8, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_14050FC44(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
