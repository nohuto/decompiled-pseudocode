/*
 * XREFs of AlpcpAllocateMessageFunction @ 0x14056D500
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExCreateHandleEx @ 0x1404B7560 (ExCreateHandleEx.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x140747D60 (AlpcpAllocateMessageFromExtendedTables.c)
 */

void *__fastcall AlpcpAllocateMessageFunction(POOL_TYPE a1, SIZE_T a2, ULONG a3)
{
  char *PoolWithTag; // rax
  void *v4; // rbx
  __int64 v5; // rdi
  __int64 Handle; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag(a1, a2, a3);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return v4;
  v5 = (__int64)(PoolWithTag + 48);
  memset(PoolWithTag + 48, 0, 0x118uLL);
  Handle = ExCreateHandleEx(AlpcMessageTable, v5, 0, 0, 0LL);
  if ( Handle || (Handle = AlpcpAllocateMessageFromExtendedTables(v5)) != 0 )
  {
    *(_DWORD *)(v5 + 264) = Handle | 0x80000000;
    return v4;
  }
  ExFreePoolWithTag(v4, 0);
  return 0LL;
}
