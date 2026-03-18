/*
 * XREFs of EtwpUpdateSchematizedFilterData @ 0x1405D2714
 * Callers:
 *     EtwpUpdateFilterData @ 0x140554514 (EtwpUpdateFilterData.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateSchematizedFilterData(__int64 a1, char a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  void *v8; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rsi
  unsigned int v12; // eax

  v4 = 0;
  if ( a4 )
  {
    v8 = *(void **)(a1 + 64);
    if ( !v8 )
      return v4;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  else
  {
    if ( *(_DWORD *)(a3 + 8) < 0x18u )
      return (unsigned int)-1073741811;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a3 + 8), 0x46777445u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    memmove(PoolWithTag, *(const void **)a3, *(unsigned int *)(a3 + 8));
    v12 = *(_DWORD *)(a3 + 8);
    v11[1] = 1LL << a2;
    v11[2] = v12;
    v8 = *(void **)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v11;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v4;
}
