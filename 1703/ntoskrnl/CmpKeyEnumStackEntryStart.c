/*
 * XREFs of CmpKeyEnumStackEntryStart @ 0x140670684
 * Callers:
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140670878 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpDoFindSubKeyByNumber @ 0x1404FEDD0 (CmpDoFindSubKeyByNumber.c)
 *     CmpCompareKeysByName @ 0x14066D0E4 (CmpCompareKeysByName.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryStart(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 *v4; // r14
  _DWORD *v6; // rdi
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 result; // rax
  _WORD *v11; // rax
  unsigned int SubKeyByNumber; // eax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdx

  *(_QWORD *)a1 = a2;
  v3 = a3 - a1;
  v4 = (__int64 *)(a1 + 64);
  v6 = (_DWORD *)(a1 + 16);
  v8 = a1 + 80;
  v9 = 2LL;
  do
  {
    result = *(unsigned int *)((char *)v6 + v3 + 4);
    *v6 = result;
    if ( (_DWORD)result )
    {
      v11 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a2 + 8))(
                       a2,
                       *(unsigned int *)((char *)v6 + v3 + 12),
                       v8 - 40);
      *(v4 - 5) = (__int64)v11;
      SubKeyByNumber = CmpDoFindSubKeyByNumber(a2, v11, 0);
      v6[10] = SubKeyByNumber;
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a2 + 8))(a2, SubKeyByNumber, v8);
      *v4 = v13;
      v14 = v13;
      v15 = *(_QWORD *)(a1 + 104);
      if ( !v15 || (result = CmpCompareKeysByName(v13, v15), (int)result < 0) )
      {
        *(_QWORD *)(a1 + 104) = v14;
        result = (unsigned int)v6[10];
        *(_DWORD *)(a1 + 96) = result;
      }
    }
    v8 += 8LL;
    ++v4;
    ++v6;
    --v9;
  }
  while ( v9 );
  return result;
}
