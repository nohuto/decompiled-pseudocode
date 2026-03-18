/*
 * XREFs of ExpSaBinaryArrayInsert @ 0x14014AFA4
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014ABCC (ExpSaPageGroupDescriptorAllocate.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpSaBinaryArrayInsert(_QWORD **a1, __int64 a2)
{
  unsigned int v2; // esi
  _QWORD *v5; // rdi
  unsigned int v6; // ebp
  _QWORD *PoolWithTag; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // ebx
  unsigned int v12; // ebp

  v2 = 0;
  while ( 1 )
  {
    v5 = *a1;
    v6 = 1 << (v2 + 2);
    if ( !*a1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v6 + 8, 0x61537845u);
      v5 = PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, 8 * v6 + 8);
      if ( !v5 )
        return (unsigned int)-1;
      *a1 = v5;
    }
    v8 = *v5;
    if ( *v5 < (unsigned __int64)v6 )
      break;
    ++v2;
    ++a1;
    if ( v2 >= 0x10 )
      return (unsigned int)-1;
  }
  v9 = (unsigned int)v8;
  if ( v5[(unsigned int)v8 + 1] )
  {
    v12 = v6 - 1;
    do
      v9 = v12 & ((_DWORD)v9 + 1);
    while ( v5[v9 + 1] );
  }
  *v5 = v8 + 1;
  v10 = v9 | (1 << (v2 + 2));
  v5[v9 + 1] = a2;
  return v10;
}
