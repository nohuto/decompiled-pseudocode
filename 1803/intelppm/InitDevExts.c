/*
 * XREFs of InitDevExts @ 0x1C0003B28
 * Callers:
 *     ProcLibGlobalInit @ 0x1C003650C (ProcLibGlobalInit.c)
 * Callees:
 *     memset @ 0x1C0005280 (memset.c)
 */

__int64 __fastcall InitDevExts(unsigned int a1)
{
  SIZE_T v1; // rdi
  _LIST_ENTRY *PoolWithTag; // rax
  unsigned int v3; // ebx

  v1 = 8LL * a1;
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x72637250u);
  v3 = 0;
  WPP_MAIN_CB.Queue.ListEntry.Flink = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v1);
  else
    return (unsigned int)-1073741670;
  return v3;
}
