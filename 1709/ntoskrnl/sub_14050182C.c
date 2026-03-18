/*
 * XREFs of sub_14050182C @ 0x14050182C
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1405021D0 (WbGetHeapExecutedBlock.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14057642C (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     sub_140501EA0 @ 0x140501EA0 (sub_140501EA0.c)
 *     sub_140502844 @ 0x140502844 (sub_140502844.c)
 */

__int64 __fastcall sub_14050182C(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_140501EA0(a1 + 8, a2, 8, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_140502844(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
