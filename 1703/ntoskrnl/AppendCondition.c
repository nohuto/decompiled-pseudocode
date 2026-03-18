/*
 * XREFs of AppendCondition @ 0x1406FC724
 * Callers:
 *     LocalGetConditionForString @ 0x1406FE4E8 (LocalGetConditionForString.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x14057FE50 (SddlpAlloc.c)
 */

__int64 __fastcall AppendCondition(const void **a1, unsigned int *a2, unsigned int *a3, const void *a4, size_t Size)
{
  unsigned int v5; // edi
  unsigned int v9; // r8d
  unsigned int v10; // eax
  unsigned int v11; // esi
  PVOID v12; // rax
  PVOID v13; // rbp
  void *v14; // r12
  unsigned int v15; // ebx

  v5 = 0;
  if ( a1 && a2 && a3 )
  {
    v9 = *a3;
    v10 = v9 + Size;
    if ( v9 + (unsigned int)Size >= v9 )
    {
      v11 = v9 + Size;
      if ( v10 > *a2 )
      {
        v12 = SddlpAlloc(v10);
        v13 = v12;
        if ( !v12 )
          return 8;
        v14 = (void *)*a1;
        memmove(v12, *a1, *a2);
        if ( v14 )
          ExFreePoolWithTag(v14, 0);
        *a1 = v13;
        *a2 = v11;
      }
      v15 = *a3;
      memmove((char *)*a1 + *a3, a4, (unsigned int)Size);
      *a3 = v15 + Size;
      return v5;
    }
    return 534;
  }
  return 87LL;
}
