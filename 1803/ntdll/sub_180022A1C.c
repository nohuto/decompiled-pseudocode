/*
 * XREFs of sub_180022A1C @ 0x180022A1C
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x180022780 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180022BB0 (RtlCompareUnicodeStrings.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_180022A1C(
        _QWORD *a1,
        const WCHAR *a2,
        SIZE_T a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  char *v9; // r15
  int v10; // r12d
  unsigned __int64 v11; // rbx
  unsigned int v12; // edi
  const void *v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  PVOID Environment; // rax
  const WCHAR *v18; // [rsp+68h] [rbp+10h]

  v18 = a2;
  if ( a3 - 1 <= 0x13 )
  {
    v9 = (char *)&unk_18015CB20 + 56 * a3;
    v10 = *((_DWORD *)v9 - 14);
    v11 = (unsigned __int64)(v9 - 48);
    v12 = 0;
    while ( v11 < (unsigned __int64)&v9[16 * v10 - 48] )
    {
      if ( !RtlCompareUnicodeStrings(*(PCWCH *)v11, a3, a2, a3, 1u) )
      {
        v13 = (const void *)(*(_QWORD *)v11 + 2 * (a3 + 1));
        v14 = ((__int64)(*(_QWORD *)(v11 + 8) - (_QWORD)v13) >> 1) - 1;
        if ( a4 )
        {
          if ( v14 < a5 )
          {
            v15 = v14;
            *a6 = v14;
            memmove(a4, v13, 2 * v14);
            a4[v15] = 0;
            return v12;
          }
          if ( a5 )
            *a4 = 0;
        }
        v12 = -1073741789;
        *a6 = v14 + 1;
        return v12;
      }
      a2 = v18;
      v11 += 16LL;
    }
    if ( v10 == 3 )
    {
      Environment = (PVOID)*((_QWORD *)v9 - 1);
    }
    else
    {
      Environment = (PVOID)qword_18015CF80;
      if ( !qword_18015CF80 )
        Environment = NtCurrentPeb()->ProcessParameters->Environment;
    }
    *a1 = Environment;
  }
  return 3221225728LL;
}
