/*
 * XREFs of bsearch @ 0x18008DB40
 * Callers:
 *     sub_18003EC30 @ 0x18003EC30 (sub_18003EC30.c)
 *     sub_18003F160 @ 0x18003F160 (sub_18003F160.c)
 *     sub_18003F5C0 @ 0x18003F5C0 (sub_18003F5C0.c)
 *     RtlQueryProtectedPolicy @ 0x1800712C0 (RtlQueryProtectedPolicy.c)
 *     RtlSetProtectedPolicy @ 0x18007F700 (RtlSetProtectedPolicy.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     j___misaligned_access @ 0x180091640 (j___misaligned_access.c)
 */

void *__cdecl bsearch(
        const void *Key,
        const void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  size_t v6; // rsi
  char *v7; // rdi
  char *v8; // rbx
  size_t v11; // rbp
  bool v12; // zf
  char *v13; // r14
  int v14; // eax

  v6 = NumOfElements;
  v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
  v8 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && CompareFunction )
  {
    while ( v8 <= v7 )
    {
      v11 = v6 >> 1;
      if ( !(v6 >> 1) )
      {
        if ( !v6 )
          return 0LL;
        if ( ((unsigned int (__fastcall *)(const void *, char *))CompareFunction)(Key, v8) )
          return 0LL;
        return v8;
      }
      v12 = (v6 & 1) == 0;
      v6 = v11 - 1;
      if ( !v12 )
        v6 = v11;
      v13 = &v8[SizeOfElements * v6];
      v14 = ((__int64 (__fastcall *)(const void *, char *))CompareFunction)(Key, v13);
      if ( !v14 )
        return &v8[SizeOfElements * v6];
      if ( v14 >= 0 )
      {
        v8 = &v13[SizeOfElements];
        v6 = v11;
      }
      else
      {
        v7 = &v13[-SizeOfElements];
      }
    }
  }
  else
  {
    sub_18008B020();
  }
  return 0LL;
}
