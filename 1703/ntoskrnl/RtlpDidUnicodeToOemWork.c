/*
 * XREFs of RtlpDidUnicodeToOemWork @ 0x140433C30
 * Callers:
 *     RtlUpcaseUnicodeStringToOemString @ 0x140433810 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x140433900 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x140433B50 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpDidUnicodeToOemWork(unsigned __int16 *a1, __int64 a2)
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
  if ( (_BYTE)NlsMbOemCodePageTag )
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
      if ( NlsOemLeadByteInfoTable[v10] && (v11 = v7 + 1, (unsigned int)v11 < v6) )
      {
        ++v7;
        v12 = ((char)v10 << 8) + *(unsigned __int8 *)(v11 + v9) == OemDefaultChar;
      }
      else
      {
        v12 = (char)v10 == (unsigned __int8)OemDefaultChar;
      }
      if ( v12 && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v8) != OemTransUniDefaultChar )
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
  return v3;
}
