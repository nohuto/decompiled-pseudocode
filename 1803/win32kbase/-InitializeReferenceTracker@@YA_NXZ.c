/*
 * XREFs of ?InitializeReferenceTracker@@YA_NXZ @ 0x1C00DB7BC
 * Callers:
 *     HmgCreate @ 0x1C00C2B84 (HmgCreate.c)
 * Callees:
 *     ?Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@Z @ 0x1C00DC75C (-Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@.c)
 */

char InitializeReferenceTracker(void)
{
  _QWORD *PoolWithTag; // rax
  NSInstrumentation::CReferenceTracker::CReferenceCountedType **v2; // rdi
  unsigned int v3; // ebx
  unsigned int v4; // eax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType *v5; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x10uLL, 0x39497355u);
  if ( PoolWithTag )
  {
    PoolWithTag[1] = PoolWithTag;
    v2 = &qword_1C019F730;
    *PoolWithTag = PoolWithTag;
    v3 = 0;
    gpReferenceTracker = PoolWithTag;
    do
    {
      v4 = gReferenceTrackedTypes;
      if ( _bittest((const int *)&v4, v3) )
      {
        v5 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::Create(
               (struct _LIST_ENTRY *)gpReferenceTracker,
               *((_DWORD *)v2 - 2));
        if ( !v5 )
          return 0;
        *v2 = v5;
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
