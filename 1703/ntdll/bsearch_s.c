/*
 * XREFs of bsearch_s @ 0x1800987F0
 * Callers:
 *     sub_180001328 @ 0x180001328 (sub_180001328.c)
 *     sub_1800016BC @ 0x1800016BC (sub_1800016BC.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180079EB0 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     j___misaligned_access @ 0x18009C3FC (j___misaligned_access.c)
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
    sub_180095DE0();
  }
  return 0LL;
}
