/*
 * XREFs of bsearch_s @ 0x18008DC50
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x18000B210 (RtlGuardCheckLongJumpTarget.c)
 *     sub_18004FC74 @ 0x18004FC74 (sub_18004FC74.c)
 *     sub_18004FEB8 @ 0x18004FEB8 (sub_18004FEB8.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     j___misaligned_access @ 0x180091640 (j___misaligned_access.c)
 */

void *__cdecl bsearch_s(
        const void *Key,
        const void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        _CoreCrtSecureSearchSortCompareFunction CompareFunction,
        void *Context)
{
  rsize_t v7; // rsi
  char *v8; // rdi
  char *v9; // rbx
  rsize_t v12; // rbp
  bool v13; // zf
  char *v14; // r14
  int v15; // eax

  v7 = NumOfElements;
  v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
  v9 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && CompareFunction )
  {
    while ( v9 <= v8 )
    {
      v12 = v7 >> 1;
      if ( !(v7 >> 1) )
      {
        if ( !v7 )
          return 0LL;
        if ( ((unsigned int (__fastcall *)(void *, const void *, char *))CompareFunction)(Context, Key, v9) )
          return 0LL;
        return v9;
      }
      v13 = (v7 & 1) == 0;
      v7 = v12 - 1;
      if ( !v13 )
        v7 = v12;
      v14 = &v9[SizeOfElements * v7];
      v15 = ((__int64 (__fastcall *)(void *, const void *, char *))CompareFunction)(Context, Key, v14);
      if ( !v15 )
        return &v9[SizeOfElements * v7];
      if ( v15 >= 0 )
      {
        v9 = &v14[SizeOfElements];
        v7 = v12;
      }
      else
      {
        v8 = &v14[-SizeOfElements];
      }
    }
  }
  else
  {
    sub_18008B020();
  }
  return 0LL;
}
