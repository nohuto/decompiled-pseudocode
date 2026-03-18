/*
 * XREFs of ?Create@CWorkItemQueue@@SAPEAV1@XZ @ 0x1C00D2B54
 * Callers:
 *     ?Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ @ 0x1C00D2ABC (-Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ.c)
 * Callees:
 *     ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x1C00D2BBC (-Create@CManualResetEvent@@SAQEAV1@XZ.c)
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C01162B0 (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 */

union _SLIST_HEADER *CWorkItemQueue::Create(void)
{
  union _SLIST_HEADER *result; // rax
  union _SLIST_HEADER *v1; // rdi
  struct CWorkItemQueue *v2; // rbx
  struct CManualResetEvent *v3; // rax

  result = (union _SLIST_HEADER *)EngAllocMem(0, 0x20u, 0x676D6466u);
  v1 = result;
  if ( result )
  {
    v2 = (struct CWorkItemQueue *)result;
    InitializeSListHead(result + 1);
    *(_BYTE *)v2 = 0;
    v3 = CManualResetEvent::Create();
    *((_QWORD *)v2 + 1) = v3;
    if ( v3 )
      v2 = 0LL;
    else
      v1 = 0LL;
    if ( v2 )
      CWorkItemQueue::Destroy(v2);
    return v1;
  }
  return result;
}
