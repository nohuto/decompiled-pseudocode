/*
 * XREFs of sub_18003B41C @ 0x18003B41C
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x18003B180 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18003B5B0 (RtlCompareUnicodeStrings.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18003B41C(
        _QWORD *a1,
        const WCHAR *a2,
        SIZE_T a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  __int64 v9; // r12
  unsigned int v10; // edi
  char *v11; // rbx
  int v12; // r13d
  char *v13; // rbp
  PVOID Environment; // rax
  const void *v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rbx
  const WCHAR *v19; // [rsp+68h] [rbp+10h]

  v19 = a2;
  if ( a3 - 1 > 0x13 )
    return 3221225728LL;
  v9 = 14 * a3;
  v10 = 0;
  v11 = (char *)&dword_18015BAC0[14 * a3 - 12];
  v12 = dword_18015BAC0[14 * a3 - 14];
  v13 = &v11[16 * v12];
  if ( v11 >= v13 )
  {
LABEL_5:
    if ( v12 == 3 )
    {
      Environment = *(PVOID *)&dword_18015BAC0[v9 - 2];
    }
    else
    {
      Environment = (PVOID)qword_18015BF20;
      if ( !qword_18015BF20 )
        Environment = NtCurrentPeb()->ProcessParameters->Environment;
    }
    *a1 = Environment;
    return 3221225728LL;
  }
  while ( RtlCompareUnicodeStrings(*(PCWCH *)v11, a3, a2, a3, 1u) )
  {
    a2 = v19;
    v11 += 16;
    if ( v11 >= v13 )
      goto LABEL_5;
  }
  v16 = (const void *)(*(_QWORD *)v11 + 2 * (a3 + 1));
  v17 = ((__int64)(*((_QWORD *)v11 + 1) - (_QWORD)v16) >> 1) - 1;
  if ( !a4 )
    goto LABEL_17;
  if ( v17 >= a5 )
  {
    if ( a5 )
      *a4 = 0;
LABEL_17:
    v10 = -1073741789;
    *a6 = v17 + 1;
    return v10;
  }
  v18 = v17;
  *a6 = v17;
  memmove(a4, v16, 2 * v17);
  a4[v18] = 0;
  return v10;
}
