/*
 * XREFs of CmpBlockHiveWrites @ 0x14068F0F0
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x1404B85E0 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x140692878 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140692A38 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     CmpReferenceHive @ 0x140084160 (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     CmpGetNextHive @ 0x1404E1EC8 (CmpGetNextHive.c)
 */

__int64 __fastcall CmpBlockHiveWrites(__int64 *a1, int a2, __int64 **a3)
{
  char *i; // rcx
  __int64 *NextHive; // rax
  __int64 *v8; // rbx

  for ( i = 0LL; ; i = (char *)v8 )
  {
    NextHive = CmpGetNextHive(i);
    v8 = NextHive;
    if ( !NextHive )
      return a1 != 0LL ? 0xC0000034 : 0;
    if ( a1 == NextHive || !a1 )
    {
      if ( !a2 || (a2 & (_DWORD)NextHive[670]) == a2 || NextHive == CmpMasterHive )
      {
        CmpReferenceHive((__int64)NextHive);
        if ( a3 )
          *a3 = v8;
        ExAcquireResourceExclusiveLite((PERESOURCE)v8[356], 1u);
      }
      if ( a1 == v8 )
        break;
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 1374, 0xFFFFFFFF) == 1 )
    CmpDeleteHive((PERESOURCE *)v8);
  return 0LL;
}
