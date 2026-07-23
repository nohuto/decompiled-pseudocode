/*
 * XREFs of RtlUnicodeToCustomCPN @ 0x1800E4140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // r10d
  ULONG v7; // eax
  _BYTE *v8; // rbx
  PWCH v9; // r9
  __int64 v10; // r11
  __int64 v11; // rax
  _WORD *WideCharTable; // rsi
  int v13; // ebx
  PWCH v14; // r11
  __int64 v15; // rax
  __int16 v16; // di
  ULONG v17; // eax

  v6 = BytesInUnicodeString >> 1;
  if ( CustomCP->DBCSCodePage )
  {
    WideCharTable = CustomCP->WideCharTable;
    v13 = (int)CustomCPString;
    if ( v6 )
    {
      v14 = UnicodeString;
      do
      {
        if ( !MaxBytesInCustomCPString )
          break;
        v15 = *v14++;
        v16 = WideCharTable[v15];
        if ( HIBYTE(v16) )
        {
          v17 = MaxBytesInCustomCPString--;
          if ( v17 < 2 )
            break;
          *CustomCPString++ = HIBYTE(v16);
        }
        *CustomCPString = v16;
        --MaxBytesInCustomCPString;
        ++CustomCPString;
        --v6;
      }
      while ( v6 );
    }
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = (_DWORD)CustomCPString - v13;
  }
  else
  {
    v7 = MaxBytesInCustomCPString;
    if ( v6 < MaxBytesInCustomCPString )
      v7 = BytesInUnicodeString >> 1;
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = v7;
    v8 = CustomCP->WideCharTable;
    if ( v7 )
    {
      v9 = UnicodeString;
      v10 = v7;
      do
      {
        v11 = *v9++;
        *CustomCPString++ = v8[v11];
        --v10;
      }
      while ( v10 );
    }
  }
  return MaxBytesInCustomCPString < v6 ? 0x80000005 : 0;
}
