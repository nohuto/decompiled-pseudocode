/*
 * XREFs of ?InitializeReferenceTracker@@YA_NXZ @ 0x1C0075E8C
 * Callers:
 *     HmgCreate @ 0x1C0075A30 (HmgCreate.c)
 * Callees:
 *     ?Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@Z @ 0x1C00FDF5C (-Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@.c)
 */

char InitializeReferenceTracker(void)
{
  struct _LIST_ENTRY *PoolWithTag; // rax
  struct _LIST_ENTRY *v1; // rcx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType **v2; // rdi
  unsigned int v3; // ebx
  unsigned int v4; // eax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType *v6; // rax

  PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(PagedPoolSession, 0x10uLL, 0x39497355u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->Blink = PoolWithTag;
    v2 = &qword_1C0189408;
    PoolWithTag->Flink = PoolWithTag;
    v3 = 0;
    gpReferenceTracker = PoolWithTag;
    do
    {
      v4 = gReferenceTrackedTypes;
      if ( _bittest((const int *)&v4, v3) )
      {
        v6 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::Create(v1, *((_DWORD *)v2 - 2));
        if ( !v6 )
          return 0;
        v1 = (struct _LIST_ENTRY *)gpReferenceTracker;
        *v2 = v6;
      }
      ++v3;
      v2 += 2;
    }
    while ( v3 < 3 );
    return 1;
  }
  else
  {
    gpReferenceTracker = 0LL;
    return 0;
  }
}
