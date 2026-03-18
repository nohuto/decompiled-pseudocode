/*
 * XREFs of PfSnArrayGrow @ 0x140579AEC
 * Callers:
 *     PfSnVolumeKeyQuery @ 0x140539080 (PfSnVolumeKeyQuery.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfSnArrayGrow(unsigned int a1, __int64 a2, __int64 a3, unsigned int *a4, const void **a5)
{
  unsigned int v7; // eax
  unsigned int v8; // ecx
  bool v9; // cf
  unsigned __int64 v10; // rax
  unsigned int v11; // ebp
  unsigned int v12; // ebx
  PVOID PoolWithTag; // rsi
  unsigned int v14; // eax

  if ( a1 < *a4 )
    return 1;
  v7 = (3 * *a4) >> 1;
  if ( v7 < 4 )
    v7 = 4;
  v8 = a1 + 4;
  v9 = a1 < v7;
  if ( a1 >= v7 )
  {
    if ( v8 < a1 )
      return 0;
    v9 = a1 < v7;
  }
  if ( v9 )
    v8 = v7;
  v10 = 8LL * v8;
  v11 = v8;
  if ( v10 > 0xFFFFFFFF )
    return 0;
  v12 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x56506343u);
  if ( PoolWithTag )
  {
    v14 = 8 * *a4;
    if ( v14 )
      memmove(PoolWithTag, *a5, v14);
    if ( *a5 )
      ExFreePoolWithTag((PVOID)*a5, 0);
    *a5 = PoolWithTag;
    *a4 = v11;
    return 1;
  }
  return v12;
}
