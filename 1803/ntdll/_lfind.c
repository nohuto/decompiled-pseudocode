/*
 * XREFs of _lfind @ 0x18008BDE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     j___misaligned_access @ 0x180091640 (j___misaligned_access.c)
 */

void *__cdecl lfind(
        const void *Key,
        const void *Base,
        unsigned int *NumOfElements,
        unsigned int SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  int v5; // ebp
  __int64 v6; // r14
  char *v8; // rbx

  v5 = 0;
  v6 = SizeOfElements;
  v8 = (char *)Base;
  if ( !Key || !NumOfElements || !Base && *NumOfElements || !SizeOfElements || !CompareFunction )
  {
    sub_18008B020();
    return 0LL;
  }
  if ( !*NumOfElements )
    return 0LL;
  while ( ((unsigned int (__fastcall *)(const void *, char *))CompareFunction)(Key, v8) )
  {
    v8 += v6;
    if ( ++v5 >= *NumOfElements )
      return 0LL;
  }
  return v8;
}
