/*
 * XREFs of ?Create@?$CSectionEntry@$0BDAAA@$0BDA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0073560
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0BDAAA@$0BDA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C005ED58 (-Allocate@-$CTypeIsolation@$0BDAAA@$0BDA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BDAAA@$0BDA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00BEEA8 (-Initialize@-$CTypeIsolation@$0BDAAA@$0BDA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0BDAAA@$0BDA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00735B4 (-Initialize@-$CSectionEntry@$0BDAAA@$0BDA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00D7AE8 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void *NSInstrumentation::CSectionEntry<77824,304>::Create()
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
    if ( (unsigned __int8)NSInstrumentation::CSectionEntry<77824,304>::Initialize(PoolWithTag) )
      return v1;
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v1);
    ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
