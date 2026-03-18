/*
 * XREFs of ?Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ @ 0x1C00FEE50
 * Callers:
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C00FEA98 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?InsertWithHash@CPointerHashTable@NSInstrumentation@@AEAAX_KPEBX1@Z @ 0x1C00FECB0 (-InsertWithHash@CPointerHashTable@NSInstrumentation@@AEAAX_KPEBX1@Z.c)
 */

char __fastcall NSInstrumentation::CPointerHashTable::Resize(NSInstrumentation::CPointerHashTable *this)
{
  __int64 v1; // r15
  __int64 v3; // rsi
  unsigned int v4; // ebp
  PVOID PoolWithTag; // rax
  PVOID v6; // r12
  const void **v7; // r14
  const void **v8; // rbx

  v1 = *((unsigned int *)this + 10);
  v3 = v1;
  v4 = 2 * v1;
  if ( (unsigned __int64)(2 * v1) > 0xFFFFFFFF )
    return 0;
  if ( 16 * (unsigned __int64)v4 > 0xFFFFFFFF )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 16LL * v4, 0x38497355u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 16LL * v4);
  ++*((_DWORD *)this + 11);
  v7 = (const void **)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v6;
  *((_DWORD *)this + 10) = v4;
  if ( (_DWORD)v1 )
  {
    v8 = v7;
    do
    {
      if ( *v8 )
        NSInstrumentation::CPointerHashTable::InsertWithHash(
          this,
          0x9E3779B97F34A803uLL * ((unsigned __int64)*v8 >> 4),
          (unsigned __int64 *)*v8,
          v8[1]);
      v8 += 2;
      --v3;
    }
    while ( v3 );
  }
  ExFreePoolWithTag(v7, 0);
  return 1;
}
