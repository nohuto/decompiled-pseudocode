/*
 * XREFs of ?Create@?$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00C0C90
 * Callers:
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0044D08 (--$AllocateIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00D7FE8 (-Initialize@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00C0DB0 (-Initialize@-$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00D7AE8 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void *NSInstrumentation::CSectionEntry<81920,320>::Create()
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
  if ( !(unsigned __int8)NSInstrumentation::CSectionEntry<81920,320>::Initialize(PoolWithTag) )
  {
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v1);
    ExFreePoolWithTag(v1, 0);
    return 0LL;
  }
  return v1;
}
