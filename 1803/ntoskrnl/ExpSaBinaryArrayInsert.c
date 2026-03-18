/*
 * XREFs of ExpSaBinaryArrayInsert @ 0x1402BD934
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x1402BDA4C (ExpSaPageGroupDescriptorAllocate.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpSaBinaryArrayInsert(_QWORD **a1, __int64 a2)
{
  unsigned int v4; // esi
  _QWORD *v5; // rdi
  unsigned int v6; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 i; // rdx

  v4 = 0;
  while ( 1 )
  {
    v5 = *a1;
    v6 = 1 << (v4 + 2);
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
    ++v4;
    ++a1;
    if ( v4 >= 0x10 )
      return (unsigned int)-1;
  }
  for ( i = (unsigned int)v8; v5[i + 1]; i = (v6 - 1) & ((_DWORD)i + 1) )
    ;
  v9 = i | v6;
  *v5 = v8 + 1;
  v5[i + 1] = a2;
  return v9;
}
