/*
 * XREFs of _SafeAllocBlob @ 0x140157030
 * Callers:
 *     RtlpMuiRegCreateLanguages @ 0x1405B755C (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x1405B75B8 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegCreateStringPool @ 0x1405B761C (RtlpMuiRegCreateStringPool.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SafeAllocBlob(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned __int64 v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // edi
  PVOID PoolWithTag; // rax
  PVOID v14; // rbx

  v7 = a3 * (unsigned __int64)a2;
  if ( v7 > 0xFFFFFFFF )
    return 0LL;
  v8 = v7 + a1;
  if ( (unsigned int)v7 + a1 < a1 )
    return 0LL;
  v9 = v7 + a1;
  v10 = a5 * (unsigned __int64)a4;
  if ( v10 > 0xFFFFFFFF )
    return 0LL;
  v11 = v10 + v8;
  if ( (unsigned int)v10 + v9 < v9 )
    return 0LL;
  if ( a6 )
    *a6 = v11;
  if ( !v11 )
    return 0LL;
  v12 = v11;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x72746C6Du);
  v14 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v12);
  return v14;
}
