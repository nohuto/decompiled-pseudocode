/*
 * XREFs of AlpcpAllocateMessageFromExtendedTables @ 0x1406B1460
 * Callers:
 *     AlpcpAllocateMessageFunction @ 0x1404437D0 (AlpcpAllocateMessageFunction.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExCreateHandleTable @ 0x14042B7E4 (ExCreateHandleTable.c)
 *     ExpFreeHandleTable @ 0x140432E04 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x140432F5C (ExpRemoveHandleTable.c)
 *     ExCreateHandleEx @ 0x140517CF0 (ExCreateHandleEx.c)
 */

unsigned __int64 __fastcall AlpcpAllocateMessageFromExtendedTables(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx
  unsigned int v5; // edi
  __int64 i; // rsi
  _QWORD *v7; // rbx
  __int64 HandleTable; // rax
  __int64 Handle; // rax

  if ( !AlpcpSecondaryMessageTables )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x61486C41u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return 0LL;
    memset(PoolWithTag, 0, 0x100uLL);
    *v3 = AlpcMessageTable;
    if ( _InterlockedCompareExchange64(&AlpcpSecondaryMessageTables, (signed __int64)v3, 0LL) )
      ExFreePoolWithTag(v3, 0x61486C41u);
  }
  v5 = 1;
  for ( i = 8LL; ; i += 8LL )
  {
    v7 = *(_QWORD **)(i + AlpcpSecondaryMessageTables);
    if ( !v7 )
    {
      HandleTable = ExCreateHandleTable(0LL, 0LL);
      v7 = (_QWORD *)HandleTable;
      if ( !HandleTable )
        return 0LL;
      if ( _InterlockedCompareExchange64(
             (volatile signed __int64 *)(AlpcpSecondaryMessageTables + 8LL * v5),
             HandleTable,
             0LL) )
      {
        ExpRemoveHandleTable(HandleTable);
        ExpFreeHandleTable(v7);
        v7 = *(_QWORD **)(i + AlpcpSecondaryMessageTables);
      }
    }
    Handle = ExCreateHandleEx((__int64)v7, a1, 0, 0, 0LL);
    if ( Handle )
      break;
    if ( ++v5 >= 0x20 )
      return 0LL;
  }
  return Handle | ((unsigned __int64)v5 << 26);
}
