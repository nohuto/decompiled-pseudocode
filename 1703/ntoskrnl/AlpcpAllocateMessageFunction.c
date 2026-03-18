/*
 * XREFs of AlpcpAllocateMessageFunction @ 0x1404437D0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExCreateHandleEx @ 0x140517CF0 (ExCreateHandleEx.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1406B1460 (AlpcpAllocateMessageFromExtendedTables.c)
 */

char *__fastcall AlpcpAllocateMessageFunction(POOL_TYPE a1, SIZE_T a2, ULONG a3)
{
  char *PoolWithTag; // rax
  char *v4; // rbx
  char *v5; // rdi
  __int64 Handle; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag(a1, a2, a3);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return v4;
  v5 = PoolWithTag + 48;
  memset(PoolWithTag + 48, 0, 0x118uLL);
  Handle = ExCreateHandleEx(AlpcMessageTable, (_DWORD)v5, 0, 0, 0LL);
  if ( Handle || (Handle = AlpcpAllocateMessageFromExtendedTables(v5)) != 0 )
  {
    *((_DWORD *)v5 + 66) = Handle | 0x80000000;
    return v4;
  }
  ExFreePoolWithTag(v4, 0);
  return 0LL;
}
