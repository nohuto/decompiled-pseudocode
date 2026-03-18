/*
 * XREFs of CmpBlockHiveWrites @ 0x1405C0380
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x140552590 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1405BFEE4 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1406F5AC8 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     CmpGetNextHive @ 0x14049CD7C (CmpGetNextHive.c)
 *     CmpReferenceHive @ 0x14049D1FC (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 */

__int64 __fastcall CmpBlockHiveWrites(__int64 *a1, int a2, volatile signed __int32 **a3)
{
  volatile signed __int32 *i; // rcx
  __int64 *NextHive; // rax
  volatile signed __int32 *v8; // rbx

  for ( i = 0LL; ; i = v8 )
  {
    NextHive = CmpGetNextHive(i);
    v8 = (volatile signed __int32 *)NextHive;
    if ( !NextHive )
      return a1 != 0LL ? 0xC0000034 : 0;
    if ( a1 == NextHive || !a1 )
    {
      if ( !a2 || (a2 & (_DWORD)NextHive[519]) == a2 || NextHive == CmpMasterHive )
      {
        CmpReferenceHive((__int64)NextHive);
        if ( a3 )
          *a3 = v8;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 18), 0LL);
      }
      if ( a1 == (__int64 *)v8 )
        break;
    }
  }
  if ( _InterlockedExchangeAdd(v8 + 1072, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(v8);
  return 0LL;
}
