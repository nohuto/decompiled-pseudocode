/*
 * XREFs of RtlUpcaseUnicodeToCustomCPN @ 0x1800E4220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // r11d
  ULONG v7; // ebx
  PCH v8; // r10
  ULONG v9; // eax
  _BYTE *v10; // rsi
  PWCH v11; // r9
  __int64 v12; // r14
  __int64 v13; // rbp
  USHORT v14; // r8
  PUSHORT DBCSOffsets; // r12
  int v16; // esi
  _WORD *WideCharTable; // r14
  __int64 v18; // r13
  PWCH v19; // rbp
  __int64 v20; // rax
  __int16 v21; // dx
  USHORT v22; // r8
  __int16 v23; // dx
  unsigned int v24; // eax
  int v26; // [rsp+30h] [rbp+8h]

  v6 = BytesInUnicodeString >> 1;
  v7 = MaxBytesInCustomCPString;
  v8 = CustomCPString;
  if ( CustomCP->DBCSCodePage )
  {
    DBCSOffsets = CustomCP->DBCSOffsets;
    v16 = (int)CustomCPString;
    WideCharTable = CustomCP->WideCharTable;
    v26 = (int)CustomCPString;
    if ( v6 )
    {
      v18 = Nls844UnicodeUpcaseTable;
      v19 = UnicodeString;
      do
      {
        if ( !v7 )
          break;
        v20 = *v19++;
        v21 = WideCharTable[v20];
        if ( DBCSOffsets[HIBYTE(v21)] )
          v22 = DBCSOffsets[(unsigned __int8)v21 + DBCSOffsets[HIBYTE(v21)]];
        else
          v22 = CustomCP->MultiByteTable[(unsigned __int8)v21];
        if ( v22 >= 0x61u )
        {
          if ( v22 > 0x7Au )
            v22 += *(_WORD *)(v18
                            + 2LL
                            * ((v22 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v18
                                                                 + 2LL
                                                                 * (((v22 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v18 + 2 * ((unsigned __int64)v22 >> 8))))));
          else
            v22 -= 32;
        }
        v23 = WideCharTable[v22];
        if ( HIBYTE(v23) )
        {
          v24 = v7--;
          if ( v24 < 2 )
            break;
          *v8++ = HIBYTE(v23);
        }
        *v8 = v23;
        --v7;
        ++v8;
        --v6;
      }
      while ( v6 );
      v16 = v26;
    }
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = (_DWORD)v8 - v16;
  }
  else
  {
    v9 = MaxBytesInCustomCPString;
    if ( v6 < MaxBytesInCustomCPString )
      v9 = BytesInUnicodeString >> 1;
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = v9;
    v10 = CustomCP->WideCharTable;
    if ( v9 )
    {
      v11 = UnicodeString;
      v12 = Nls844UnicodeUpcaseTable;
      v13 = v9;
      do
      {
        v14 = CustomCP->MultiByteTable[(unsigned __int8)v10[*v11]];
        if ( v14 >= 0x61u )
        {
          if ( v14 > 0x7Au )
            v14 += *(_WORD *)(v12
                            + 2LL
                            * ((v14 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v12
                                                                 + 2LL
                                                                 * (((v14 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v12 + 2 * ((unsigned __int64)v14 >> 8))))));
          else
            v14 -= 32;
        }
        ++v11;
        *v8++ = v10[v14];
        --v13;
      }
      while ( v13 );
    }
  }
  return v7 < v6 ? 0x80000005 : 0;
}
