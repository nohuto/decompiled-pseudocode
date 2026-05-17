/*
 * XREFs of sub_18007CB18 @ 0x18007CB18
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x18007C650 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18007CA30 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E99E0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E9C50 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18007CB18(unsigned __int16 *a1, __int64 a2)
{
  char v3; // r9
  unsigned int v4; // r8d
  unsigned int v6; // r11d
  unsigned int v7; // edx
  unsigned int v8; // r10d
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdi
  bool v12; // zf

  v3 = 1;
  if ( NlsMbOemCodePageTag )
  {
    v6 = *a1;
    v7 = 0;
    v8 = 0;
    if ( !*a1 )
      return v3;
    v9 = *((_QWORD *)a1 + 1);
    while ( 1 )
    {
      v10 = *(unsigned __int8 *)(v7 + v9);
      if ( word_180159FC0[v10] && (v11 = v7 + 1, (unsigned int)v11 < v6) )
      {
        ++v7;
        v12 = ((char)v10 << 8) + *(unsigned __int8 *)(v11 + v9) == word_18015A1E0;
      }
      else
      {
        v12 = (char)v10 == (unsigned __int8)word_18015A1E0;
      }
      if ( v12 && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v8) != word_180159F88 )
        break;
      ++v7;
      ++v8;
      if ( v7 >= v6 )
        return v3;
    }
    return 0;
  }
  v4 = 0;
  if ( *a1 )
  {
    while ( *(char *)(v4 + *((_QWORD *)a1 + 1)) != (unsigned __int8)word_18015A1E0
         || *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v4) == word_180159F88 )
    {
      if ( ++v4 >= *a1 )
        return v3;
    }
    return 0;
  }
  return v3;
}
