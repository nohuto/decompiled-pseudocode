/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x18007B720
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x18007B300 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18007B5A0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E8F90 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUpcaseUnicodeToOemN(
        _BYTE *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  unsigned int v6; // r11d
  unsigned int v8; // ebx
  _BYTE *v9; // r10
  unsigned int v10; // eax
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

  v6 = a5 >> 1;
  v8 = a2;
  v9 = a1;
  if ( NlsMbOemCodePageTag )
  {
    if ( v6 )
    {
      v17 = NlsOemToUnicodeData;
      v18 = Nls844UnicodeUpcaseTable;
      v19 = NlsUnicodeToMbOemData;
      v20 = NlsMbOemCodePageTables;
      do
      {
        if ( !v8 )
          break;
        v21 = *a4++;
        v22 = *(_WORD *)(v19 + 2 * v21);
        if ( NlsOemLeadByteInfoTable[HIBYTE(v22)] )
          v23 = *(_WORD *)(v20
                         + 2LL
                         * ((unsigned __int8)v22 + (unsigned int)(unsigned __int16)NlsOemLeadByteInfoTable[HIBYTE(v22)]));
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
    if ( a3 )
      *a3 = (_DWORD)v9 - (_DWORD)a1;
  }
  else
  {
    v10 = a2;
    if ( v6 < a2 )
      v10 = a5 >> 1;
    if ( a3 )
      *a3 = v10;
    v11 = NlsUnicodeToOemData;
    if ( v10 )
    {
      v12 = NlsOemToUnicodeData;
      v13 = Nls844UnicodeUpcaseTable;
      v14 = v10;
      do
      {
        v15 = *(_WORD *)(v12 + 2LL * *(unsigned __int8 *)(*a4 + v11));
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
        ++a4;
        *v9++ = *(_BYTE *)(v15 + v11);
        --v14;
      }
      while ( v14 );
    }
  }
  return v8 < v6 ? 0x80000005 : 0;
}
