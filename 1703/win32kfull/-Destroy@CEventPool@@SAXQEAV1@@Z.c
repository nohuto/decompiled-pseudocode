/*
 * XREFs of ?Destroy@CEventPool@@SAXQEAV1@@Z @ 0x1C01162FC
 * Callers:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C0116274 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 * Callees:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C0116348 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 */

void __fastcall CEventPool::Destroy(union _SLIST_HEADER *a1)
{
  PSLIST_ENTRY v2; // rbx
  struct CEventPool::CEventPoolEntry *v3; // rcx

  v2 = ExpInterlockedFlushSList(a1 + 1);
  while ( v2 )
  {
    v3 = (struct CEventPool::CEventPoolEntry *)v2;
    v2 = v2->Next;
    CEventPool::CEventPoolEntry::Destroy(v3);
  }
  EngFreeMem(a1);
}
