/*
 * XREFs of ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C0116274
 * Callers:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00D2A3C (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     ?Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ @ 0x1C00D2ABC (-Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ.c)
 *     UmfdSessionUninitialize @ 0x1C0119D60 (UmfdSessionUninitialize.c)
 * Callees:
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C01162B0 (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 *     ?Destroy@CEventPool@@SAXQEAV1@@Z @ 0x1C01162FC (-Destroy@CEventPool@@SAXQEAV1@@Z.c)
 */

void __fastcall CMultipleConsumerWorkQueue::Destroy(struct CWorkItemQueue **a1)
{
  struct CWorkItemQueue *v2; // rcx
  struct CEventPool *v3; // rcx

  v2 = *a1;
  if ( v2 )
    CWorkItemQueue::Destroy(v2);
  v3 = a1[1];
  if ( v3 )
    CEventPool::Destroy(v3);
  EngFreeMem(a1);
}
