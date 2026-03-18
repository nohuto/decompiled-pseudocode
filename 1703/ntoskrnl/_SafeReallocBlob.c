/*
 * XREFs of _SafeReallocBlob @ 0x14026BC10
 * Callers:
 *     RtlpMuiRegResizeLanguageConfigList @ 0x140748B48 (RtlpMuiRegResizeLanguageConfigList.c)
 *     RtlpMuiRegResizeLanguages @ 0x140748BB0 (RtlpMuiRegResizeLanguages.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
  unsigned __int64 v10; // rdx
  unsigned int v11; // ecx
  unsigned int v12; // esi
  PVOID PoolWithTag; // rax
  void *v14; // rbx

  if ( !P )
    return 0LL;
  v10 = a4 * (unsigned __int64)a3;
  if ( v10 > 0xFFFFFFFF || (unsigned int)v10 + a2 < a2 )
    return 0LL;
  v11 = v10 + a2;
  if ( a7 )
    *a7 = v11;
  if ( v11 )
  {
    v12 = v10 + a2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x72746C6Du);
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
