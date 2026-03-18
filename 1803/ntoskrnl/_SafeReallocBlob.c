/*
 * XREFs of _SafeReallocBlob @ 0x1402CB7C8
 * Callers:
 *     RtlpMuiRegResizeLanguageConfigList @ 0x1407F7768 (RtlpMuiRegResizeLanguageConfigList.c)
 *     RtlpMuiRegResizeLanguages @ 0x1407F77CC (RtlpMuiRegResizeLanguages.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

void *__fastcall SafeReallocBlob(
        unsigned int *P,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // esi
  PVOID PoolWithTag; // rax
  void *v14; // rbx

  if ( !P )
    return 0LL;
  v9 = a4 * (unsigned __int64)a3;
  if ( v9 > 0xFFFFFFFF || a2 + (unsigned int)v9 < a2 )
    return 0LL;
  v10 = a2 + v9;
  v11 = a2 + v9;
  if ( a7 )
    *a7 = v11;
  if ( v11 )
  {
    v12 = v11;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x72746C6Du);
    v14 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v12);
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v14 )
    return 0LL;
  memmove(v14, P, *P);
  ExFreePoolWithTag(P, 0);
  return v14;
}
