/*
 * XREFs of ?Create@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C005D41C
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C005D5DC (-Allocate@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Initialize@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ @ 0x1C00D7ED8 (-Initialize@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NXZ @ 0x1C005D470 (-Initialize@-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00D7AE8 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void *NSInstrumentation::CSectionEntry<180224,704>::Create()
{
  _QWORD *PoolWithTag; // rax
  void *v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x28uLL, 0x6F736955u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    if ( (unsigned __int8)NSInstrumentation::CSectionEntry<180224,704>::Initialize(PoolWithTag) )
      return v1;
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v1);
    ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
