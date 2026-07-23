/*
 * XREFs of RtlCustomCPToUnicodeN @ 0x1800E3D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCustomCPToUnicodeN(
        PCPTABLEINFO CustomCP,
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCH CustomCPString,
        ULONG BytesInCustomCPString)
{
  ULONG v6; // r10d
  ULONG v7; // r8d
  __int64 v9; // r11
  PUSHORT MultiByteTable; // rbx
  PCH v11; // r9
  __int64 v12; // rax
  PUSHORT DBCSOffsets; // rsi
  int v14; // edi
  PCH v15; // r11
  __int64 v16; // rcx
  USHORT v17; // ax
  WCHAR v18; // cx

  v6 = BytesInCustomCPString;
  v7 = MaxBytesInUnicodeString >> 1;
  if ( CustomCP->DBCSCodePage )
  {
    DBCSOffsets = CustomCP->DBCSOffsets;
    v14 = (int)UnicodeString;
    if ( v7 )
    {
      v15 = CustomCPString;
      while ( v6 )
      {
        v16 = (unsigned __int8)*v15;
        --v7;
        --v6;
        v17 = DBCSOffsets[v16];
        if ( v17 )
        {
          if ( !v6 )
          {
            *UnicodeString = 0;
            LODWORD(UnicodeString) = (_DWORD)UnicodeString + 2;
            break;
          }
          ++v15;
          --v6;
          v18 = DBCSOffsets[v17 + (unsigned __int8)*v15];
        }
        else
        {
          v18 = CustomCP->MultiByteTable[v16];
        }
        *UnicodeString = v18;
        ++v15;
        ++UnicodeString;
        if ( !v7 )
          break;
      }
    }
    if ( BytesInUnicodeString )
      *BytesInUnicodeString = (_DWORD)UnicodeString - v14;
  }
  else
  {
    v9 = BytesInCustomCPString;
    if ( v7 < BytesInCustomCPString )
      v9 = v7;
    if ( BytesInUnicodeString )
      *BytesInUnicodeString = 2 * v9;
    MultiByteTable = CustomCP->MultiByteTable;
    if ( (_DWORD)v9 )
    {
      v11 = CustomCPString;
      do
      {
        v12 = (unsigned __int8)*v11++;
        *UnicodeString++ = MultiByteTable[v12];
        --v9;
      }
      while ( v9 );
    }
  }
  return v7 < v6 ? 0x80000005 : 0;
}
