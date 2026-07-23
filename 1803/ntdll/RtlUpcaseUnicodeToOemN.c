/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x1800799D0
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x1800795B0 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180079850 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E4FC0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // r11d
  ULONG v8; // ebx
  PCHAR v9; // r10
  ULONG v10; // eax
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rbp
  __int64 v14; // rdi
  unsigned __int16 v15; // r8
  __int64 v17; // r12
  __int64 v18; // rbp
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // rax
  __int16 v22; // dx
  unsigned __int16 v23; // r8
  __int16 v24; // dx
  unsigned int v25; // eax

  v6 = BytesInUnicodeString >> 1;
  v8 = MaxBytesInOemString;
  v9 = OemString;
  if ( NlsMbOemCodePageTag )
  {
    if ( v6 )
    {
      v17 = qword_18015B208;
      v18 = qword_18015B238;
      v19 = qword_18015AFC0;
      v20 = qword_18015AFD8;
      do
      {
        if ( !v8 )
          break;
        v21 = *UnicodeString++;
        v22 = *(_WORD *)(v19 + 2 * v21);
        if ( word_18015B000[HIBYTE(v22)] )
          v23 = *(_WORD *)(v20
                         + 2LL * ((unsigned __int8)v22 + (unsigned int)(unsigned __int16)word_18015B000[HIBYTE(v22)]));
        else
          v23 = *(_WORD *)(v17 + 2LL * (unsigned __int8)v22);
        if ( v23 >= 0x61u )
        {
          if ( v23 > 0x7Au )
            v23 += *(_WORD *)(v18
                            + 2LL
                            * ((v23 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v18
                                                                 + 2LL
                                                                 * (((v23 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v18 + 2 * ((unsigned __int64)v23 >> 8))))));
          else
            v23 -= 32;
        }
        v24 = *(_WORD *)(v19 + 2LL * v23);
        if ( HIBYTE(v24) )
        {
          v25 = v8--;
          if ( v25 < 2 )
            break;
          *v9++ = HIBYTE(v24);
        }
        *v9 = v24;
        --v8;
        ++v9;
        --v6;
      }
      while ( v6 );
    }
    if ( BytesInOemString )
      *BytesInOemString = (_DWORD)v9 - (_DWORD)OemString;
  }
  else
  {
    v10 = MaxBytesInOemString;
    if ( v6 < MaxBytesInOemString )
      v10 = BytesInUnicodeString >> 1;
    if ( BytesInOemString )
      *BytesInOemString = v10;
    v11 = qword_18015AFD0;
    if ( v10 )
    {
      v12 = qword_18015B208;
      v13 = qword_18015B238;
      v14 = v10;
      do
      {
        v15 = *(_WORD *)(v12 + 2LL * *(unsigned __int8 *)(*UnicodeString + v11));
        if ( v15 >= 0x61u )
        {
          if ( v15 > 0x7Au )
            v15 += *(_WORD *)(v13
                            + 2LL
                            * ((v15 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v13
                                                                 + 2LL
                                                                 * (((v15 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v13 + 2 * ((unsigned __int64)v15 >> 8))))));
          else
            v15 -= 32;
        }
        ++UnicodeString;
        *v9++ = *(_BYTE *)(v15 + v11);
        --v14;
      }
      while ( v14 );
    }
  }
  return v8 < v6 ? 0x80000005 : 0;
}
