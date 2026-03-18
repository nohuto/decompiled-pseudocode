/*
 * XREFs of HvpAllocateMap @ 0x140451930
 * Callers:
 *     HvpExpandMap @ 0x14043B128 (HvpExpandMap.c)
 *     HvpInitMap @ 0x140451794 (HvpInitMap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 */

char __fastcall HvpAllocateMap(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  void *v8; // rax
  void *v9; // rsi
  __int64 v10; // rax

  if ( a4 >= 0x400 )
    return 0;
  while ( a3 <= a4 )
  {
    v8 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(20480LL, 0LL, 959597891LL);
    v9 = v8;
    if ( !v8 )
      return 0;
    memset(v8, 0, 0x5000uLL);
    v10 = a3++;
    *(_QWORD *)(a2 + 8 * v10) = v9;
  }
  return 1;
}
