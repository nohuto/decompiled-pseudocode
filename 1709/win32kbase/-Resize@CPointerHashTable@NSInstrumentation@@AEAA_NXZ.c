/*
 * XREFs of ?Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ @ 0x1C00FF23C
 * Callers:
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C00FEE88 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?InsertWithHash@CPointerHashTable@NSInstrumentation@@AEAAX_KPEBX1@Z @ 0x1C00FF098 (-InsertWithHash@CPointerHashTable@NSInstrumentation@@AEAAX_KPEBX1@Z.c)
 */

char __fastcall NSInstrumentation::CPointerHashTable::Resize(NSInstrumentation::CPointerHashTable *this)
{
  __int64 v1; // r12
  __int64 v3; // r14
  unsigned int v4; // eax
  unsigned int v5; // edi
  PVOID PoolWithTag; // rax
  PVOID v7; // r15
  const void **v8; // rbp
  const void **v9; // rbx

  v1 = *((unsigned int *)this + 10);
  v3 = (unsigned int)v1;
  v4 = 2 * v1;
  if ( (unsigned __int64)(2 * v1) > 0xFFFFFFFF )
    return 0;
  v5 = 2 * v1;
  if ( 16 * (unsigned __int64)v4 > 0xFFFFFFFF )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 16LL * v4, 0x38497355u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 16LL * v5);
  ++*((_DWORD *)this + 11);
  v8 = (const void **)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v7;
  *((_DWORD *)this + 10) = v5;
  if ( (_DWORD)v1 )
  {
    v9 = v8;
    do
    {
      if ( *v9 )
        NSInstrumentation::CPointerHashTable::InsertWithHash(
          this,
          0x9E3779B97F34A803uLL * ((unsigned __int64)*v9 >> 4),
          (unsigned __int64 *)*v9,
          v9[1]);
      v9 += 2;
      --v3;
    }
    while ( v3 );
  }
  ExFreePoolWithTag(v8, 0);
  return 1;
}
