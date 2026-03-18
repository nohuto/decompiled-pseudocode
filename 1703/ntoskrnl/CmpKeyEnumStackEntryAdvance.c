/*
 * XREFs of CmpKeyEnumStackEntryAdvance @ 0x140670530
 * Callers:
 *     CmpKeyEnumStackAdvanceInternal @ 0x1406702E8 (CmpKeyEnumStackAdvanceInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpDoFindSubKeyByNumber @ 0x1404FEDD0 (CmpDoFindSubKeyByNumber.c)
 *     CmpCompareKeysByName @ 0x14066D0E4 (CmpCompareKeysByName.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryAdvance(__int64 *a1)
{
  __int64 v1; // r8
  int v3; // edx
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 *v9; // rbp
  int v10; // r8d
  unsigned int v11; // r8d
  unsigned int SubKeyByNumber; // eax
  unsigned int *v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rdx

  v1 = a1[13];
  v3 = 0;
  v4 = 0LL;
  v5 = a1 + 8;
  result = (__int64)(a1 + 8);
  v7 = 2LL;
  while ( *(_QWORD *)result != v1 )
  {
    ++v3;
    ++v4;
    result += 8LL;
    if ( v4 >= 2 )
      goto LABEL_7;
  }
  v8 = v3;
  v9 = &a1[v3];
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*a1 + 16))(*a1, v9 + 10);
  a1[v8 + 8] = 0LL;
  v10 = *((_DWORD *)a1 + v8 + 2);
  *((_DWORD *)a1 + v8 + 14) = -1;
  v11 = v10 + 1;
  *((_DWORD *)a1 + v8 + 2) = v11;
  if ( v11 < *((_DWORD *)a1 + v8 + 4) )
  {
    SubKeyByNumber = CmpDoFindSubKeyByNumber(*a1, (_WORD *)a1[v8 + 3], v11);
    *((_DWORD *)a1 + v8 + 14) = SubKeyByNumber;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*a1 + 8))(*a1, SubKeyByNumber, v9 + 10);
    a1[v8 + 8] = result;
  }
LABEL_7:
  a1[13] = 0LL;
  v13 = (unsigned int *)(a1 + 7);
  *((_DWORD *)a1 + 24) = -1;
  do
  {
    v14 = *v5;
    if ( *v5 )
    {
      v15 = a1[13];
      if ( !v15 || (result = CmpCompareKeysByName(*v5, v15), (int)result < 0) )
      {
        a1[13] = v14;
        result = *v13;
        *((_DWORD *)a1 + 24) = result;
      }
    }
    ++v5;
    ++v13;
    --v7;
  }
  while ( v7 );
  return result;
}
