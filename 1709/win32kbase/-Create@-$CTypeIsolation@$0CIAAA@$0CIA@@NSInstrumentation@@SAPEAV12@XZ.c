/*
 * XREFs of ?Create@?$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C009ACF8
 * Callers:
 *     ?InitializeTypeIsolation@@YA_NXZ @ 0x1C009ACA4 (-InitializeTypeIsolation@@YA_NXZ.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0090910 (-Create@-$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@AEAA@XZ @ 0x1C0090964 (--1-$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@AEAA@XZ.c)
 */

_QWORD *NSInstrumentation::CTypeIsolation<163840,640>::Create()
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v1; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  void *v6; // rcx
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x20uLL, 0x6F736955u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  PoolWithTag[2] = 0LL;
  *((_DWORD *)PoolWithTag + 6) = 0;
  PoolWithTag[1] = PoolWithTag;
  *PoolWithTag = PoolWithTag;
  v2 = ExAllocatePoolWithTag(PagedPoolSession, 8uLL, 0x6F736955u);
  v1[2] = v2;
  if ( !v2 || (*v2 = 0LL, (v3 = NSInstrumentation::CSectionEntry<163840,640>::Create()) == 0LL) )
  {
    v6 = (void *)v1[2];
    if ( v6 )
      goto LABEL_11;
    while ( 1 )
    {
      v7 = (_QWORD *)*v1;
      if ( (_QWORD *)*v1 == v1 )
        break;
      v8 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      NSInstrumentation::CSectionEntry<163840,640>::~CSectionEntry<163840,640>(v7);
      v6 = v7;
LABEL_11:
      ExFreePoolWithTag(v6, 0);
    }
    ExFreePoolWithTag(v1, 0);
    return 0LL;
  }
  v4 = (_QWORD *)v1[1];
  *((_DWORD *)v1 + 6) = 240;
  if ( (_QWORD *)*v4 != v1 )
    __fastfail(3u);
  *v3 = v1;
  v3[1] = v4;
  *v4 = v3;
  v1[1] = v3;
  return v1;
}
