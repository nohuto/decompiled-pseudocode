/*
 * XREFs of HvpFreeMap @ 0x14057F99C
 * Callers:
 *     HvpInitMap @ 0x140497498 (HvpInitMap.c)
 *     HvFreeHivePartial @ 0x14049A144 (HvFreeHivePartial.c)
 *     HvHiveCleanup @ 0x140513E70 (HvHiveCleanup.c)
 *     HvpExpandMap @ 0x140566878 (HvpExpandMap.c)
 *     HvpShrinkMap @ 0x140706B64 (HvpShrinkMap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall HvpFreeMap(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _UNKNOWN **result; // rax
  unsigned int v5; // edi
  __int64 v9; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a2 )
  {
    result = &retaddr;
    v5 = 1023;
    if ( a4 < 0x400 )
      v5 = a4;
    while ( a3 <= v5 )
    {
      v9 = *(_QWORD *)(a2 + 8LL * a3);
      if ( v9 )
      {
        result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 32))(v9, 12288LL);
        *(_QWORD *)(a2 + 8LL * a3) = 0LL;
      }
      ++a3;
    }
  }
  return result;
}
