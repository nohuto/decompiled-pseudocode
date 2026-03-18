/*
 * XREFs of CmpUnblockHiveWrites @ 0x14068F308
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x1404B85E0 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x140692878 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140692A38 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     CmpGetNextHive @ 0x1404E1EC8 (CmpGetNextHive.c)
 */

__int64 __fastcall CmpUnblockHiveWrites(PERESOURCE *P, int a2, PERESOURCE *a3)
{
  PERESOURCE *v5; // rbx
  __int64 result; // rax
  __int64 *NextHive; // rax

  v5 = P;
  if ( P )
  {
    ExReleaseResourceLite(P[356]);
  }
  else
  {
    while ( 1 )
    {
      NextHive = CmpGetNextHive((char *)P);
      v5 = (PERESOURCE *)NextHive;
      if ( !a2 || (a2 & (_DWORD)NextHive[670]) == a2 || NextHive == CmpMasterHive )
      {
        ExReleaseResourceLite((PERESOURCE)NextHive[356]);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 1374, 0xFFFFFFFF) == 1 )
          CmpDeleteHive(v5);
      }
      if ( v5 == a3 )
        break;
      P = v5;
    }
  }
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v5 + 1374, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive(v5);
  return result;
}
