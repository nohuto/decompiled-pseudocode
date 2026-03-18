/*
 * XREFs of HvpFreeMap @ 0x1405657DC
 * Callers:
 *     HvFreeHive @ 0x140479C44 (HvFreeHive.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14047C538 (HvpRemapAndEnlistHiveBins.c)
 *     HvpExpandMap @ 0x1404E585C (HvpExpandMap.c)
 *     HvFreeHivePartial @ 0x140565630 (HvFreeHivePartial.c)
 *     HvpInitMap @ 0x140591DF4 (HvpInitMap.c)
 *     HvpCleanMap @ 0x1406A0E9C (HvpCleanMap.c)
 *     HvpShrinkMap @ 0x1406A0F60 (HvpShrinkMap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
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
        result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 32))(v9, 20480LL);
        *(_QWORD *)(a2 + 8LL * a3) = 0LL;
      }
      ++a3;
    }
  }
  return result;
}
