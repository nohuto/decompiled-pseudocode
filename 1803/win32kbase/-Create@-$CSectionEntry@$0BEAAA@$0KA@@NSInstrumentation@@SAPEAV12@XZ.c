/*
 * XREFs of ?Create@?$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00B0BEC
 * Callers:
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0066C64 (--$AllocateIsolatedType@V-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00BEF14 (-Initialize@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00B0E3C (-Initialize@-$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00D7AE8 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void *NSInstrumentation::CSectionEntry<81920,160>::Create()
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
  if ( !(unsigned __int8)NSInstrumentation::CSectionEntry<81920,160>::Initialize(PoolWithTag) )
  {
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v1);
    ExFreePoolWithTag(v1, 0);
    return 0LL;
  }
  return v1;
}
