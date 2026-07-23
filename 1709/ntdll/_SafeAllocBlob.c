/*
 * XREFs of _SafeAllocBlob @ 0x180052BE0
 * Callers:
 *     RtlpMuiRegCreateLanguageList @ 0x180052B54 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18007EE78 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegCreateLanguages @ 0x1800FC16C (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateStringPool @ 0x1800FC204 (RtlpMuiRegCreateStringPool.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 */

PVOID __fastcall SafeAllocBlob(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r10
  unsigned int v7; // r8d
  unsigned __int64 v8; // rcx
  unsigned int v9; // edx
  PVOID result; // rax

  v6 = a3 * (unsigned __int64)a2;
  if ( v6 > 0xFFFFFFFF )
    return 0LL;
  if ( a1 + (unsigned int)v6 < a1 )
    return 0LL;
  v7 = a1 + v6;
  v8 = a5 * (unsigned __int64)a4;
  if ( v8 > 0xFFFFFFFF || v7 + (unsigned int)v8 < v7 )
    return 0LL;
  v9 = v7 + v8;
  result = 0LL;
  if ( a6 )
    *a6 = v9;
  if ( v9 )
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v9);
  return result;
}
