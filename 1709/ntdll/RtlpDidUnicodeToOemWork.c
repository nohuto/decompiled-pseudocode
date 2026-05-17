/*
 * XREFs of RtlpDidUnicodeToOemWork @ 0x18007B690
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x18007B300 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18007B5A0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E8D20 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E8F90 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpDidUnicodeToOemWork(unsigned __int16 *a1, __int64 a2)
{
  char v3; // r9
  unsigned int v4; // edx
  unsigned int v6; // ebx
  unsigned int v7; // r10d
  unsigned int v8; // r11d
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  bool v13; // zf

  v3 = 1;
  if ( !NlsOemCodePageIsUTF8 )
  {
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
        v10 = v7;
        v11 = *(unsigned __int8 *)(v7 + v9);
        if ( NlsOemLeadByteInfoTable[v11] && (v12 = v7 + 1, (unsigned int)v12 < v6) )
        {
          ++v7;
          v13 = (*(char *)(v10 + v9) << 8) + *(unsigned __int8 *)(v12 + v9) == OemDefaultChar;
        }
        else
        {
          v13 = (char)v11 == (unsigned __int8)OemDefaultChar;
        }
        if ( v13 && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v8) != OemTransUniDefaultChar )
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
      while ( *(char *)(v4 + *((_QWORD *)a1 + 1)) != (unsigned __int8)OemDefaultChar
           || *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v4) == OemTransUniDefaultChar )
      {
        if ( ++v4 >= *a1 )
          return v3;
      }
      return 0;
    }
  }
  return v3;
}
