/*
 * XREFs of EtwpUpdateSchematizedFilterData @ 0x1407B1ED0
 * Callers:
 *     EtwpUpdateFilterData @ 0x14058CE40 (EtwpUpdateFilterData.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateSchematizedFilterData(__int64 a1, char a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  void *v8; // rcx
  _QWORD *v9; // rdi
  _QWORD *PoolWithTag; // rax
  unsigned int v11; // eax

  v4 = 0;
  if ( a4 )
  {
    v8 = *(void **)(a1 + 80);
    if ( !v8 )
      return v4;
    v9 = 0LL;
  }
  else
  {
    if ( *(_DWORD *)(a3 + 8) < 0x18u )
      return (unsigned int)-1073741811;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a3 + 8), 0x46777445u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    memmove(PoolWithTag, *(const void **)a3, *(unsigned int *)(a3 + 8));
    v11 = *(_DWORD *)(a3 + 8);
    v9[1] = 1LL << a2;
    v9[2] = v11;
    v8 = *(void **)(a1 + 80);
  }
  *(_QWORD *)(a1 + 80) = v9;
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v4;
}
