/*
 * XREFs of ?Create@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00BE7D0
 * Callers:
 *     ?Initialize@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00BEF80 (-Initialize@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00BEE48 (-Initialize@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00D7AE8 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void *NSInstrumentation::CSectionEntry<24576,96>::Create()
{
  _QWORD *PoolWithTag; // rax
  void *v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x28uLL, 0x6F736955u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  PoolWithTag[2] = 0LL;
  PoolWithTag[3] = 0LL;
  PoolWithTag[4] = 0LL;
  if ( !(unsigned __int8)NSInstrumentation::CSectionEntry<24576,96>::Initialize(PoolWithTag) )
  {
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v1);
    ExFreePoolWithTag(v1, 0);
    return 0LL;
  }
  return v1;
}
