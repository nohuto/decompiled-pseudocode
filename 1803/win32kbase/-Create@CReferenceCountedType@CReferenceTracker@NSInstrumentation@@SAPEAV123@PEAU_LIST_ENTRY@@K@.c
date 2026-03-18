/*
 * XREFs of ?Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@Z @ 0x1C00DC75C
 * Callers:
 *     ?InitializeReferenceTracker@@YA_NXZ @ 0x1C00DB7BC (-InitializeReferenceTracker@@YA_NXZ.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ??1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ @ 0x1C00DC5C0 (--1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ.c)
 *     ?Create@CBackTraceStoreEx@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00DCD68 (-Create@CBackTraceStoreEx@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1C00DD208 (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 */

struct _LIST_ENTRY *__fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::Create(
        struct _LIST_ENTRY *a1,
        int a2)
{
  struct _LIST_ENTRY *PoolWithTag; // rax
  bool v5; // cl
  struct _LIST_ENTRY *v6; // rbx
  struct NSInstrumentation::CPointerHashTable *v8; // rax
  struct NSInstrumentation::CBackTraceStoreEx *v9; // rax
  struct _LIST_ENTRY *Flink; // rax

  PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(PagedPoolSession, 0x630uLL, 0x61497355u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  LODWORD(PoolWithTag[1].Flink) = a2;
  v8 = NSInstrumentation::CPointerHashTable::Create(v5);
  v6[1].Blink = (struct _LIST_ENTRY *)v8;
  if ( !v8 || (v9 = NSInstrumentation::CBackTraceStoreEx::Create(), (v6[2].Flink = (struct _LIST_ENTRY *)v9) == 0LL) )
  {
    NSInstrumentation::CReferenceTracker::CReferenceCountedType::~CReferenceCountedType((NSInstrumentation::CReferenceTracker::CReferenceCountedType *)v6);
    ExFreePoolWithTag(v6, 0);
    return 0LL;
  }
  Flink = a1->Flink;
  if ( a1->Flink->Blink != a1 )
    __fastfail(3u);
  v6->Flink = Flink;
  v6->Blink = a1;
  Flink->Blink = v6;
  a1->Flink = v6;
  LODWORD(v6[2].Blink) = 0;
  memset(&v6[3], 0, 0x600uLL);
  return v6;
}
