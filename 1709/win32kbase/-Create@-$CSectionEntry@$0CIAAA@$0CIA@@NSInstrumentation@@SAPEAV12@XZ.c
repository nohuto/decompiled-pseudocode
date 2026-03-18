/*
 * XREFs of ?Create@?$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0090910
 * Callers:
 *     ?AllocateType@?$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0042614 (-AllocateType@-$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C009ACF8 (-Create@-$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ??1?$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@AEAA@XZ @ 0x1C0090964 (--1-$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Initialize@?$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@AEAA_NXZ @ 0x1C0090A04 (-Initialize@-$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@AEAA_NXZ.c)
 */

void *NSInstrumentation::CSectionEntry<163840,640>::Create()
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
    if ( (unsigned __int8)NSInstrumentation::CSectionEntry<163840,640>::Initialize(PoolWithTag) )
      return v1;
    NSInstrumentation::CSectionEntry<163840,640>::~CSectionEntry<163840,640>(v1);
    ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
