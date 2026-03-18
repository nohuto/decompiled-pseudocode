/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x1405515D0
 * Callers:
 *     _safecrt_mbtowc @ 0x1401890A0 (_safecrt_mbtowc.c)
 *     toupper @ 0x14018A400 (toupper.c)
 *     _mbstrlen @ 0x14018C6F0 (_mbstrlen.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x1405773B0 (RtlUTF8ToUnicodeN.c)
 */

WCHAR __stdcall RtlAnsiCharToUnicodeChar(PUCHAR *SourceCharacter)
{
  const CHAR *v1; // r8
  WCHAR *p_UnicodeStringDestination; // r10
  int v3; // r9d
  ULONG UTF8StringByteCount; // ebx
  ULONG v6; // r11d
  __int64 v7; // r10
  WCHAR *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  int v16; // ecx
  WCHAR v17; // cx
  WCHAR UnicodeStringDestination; // [rsp+40h] [rbp+8h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+48h] [rbp+10h] BYREF

  v1 = (const CHAR *)*SourceCharacter;
  p_UnicodeStringDestination = &UnicodeStringDestination;
  UnicodeStringDestination = 32;
  v3 = 1;
  UTF8StringByteCount = 1;
  if ( NlsLeadByteInfoTable[*(unsigned __int8 *)v1] )
    UTF8StringByteCount = 2;
  v6 = UTF8StringByteCount;
  if ( NlsActiveCodePageIsUTF8 )
  {
    RtlUTF8ToUnicodeN(&UnicodeStringDestination, 2u, &UnicodeStringActualByteCount, v1, UTF8StringByteCount);
  }
  else if ( (_BYTE)NlsMbCodePageTag )
  {
    v13 = NlsMbAnsiCodePageTables;
    while ( v6 )
    {
      --v3;
      --v6;
      v14 = *(unsigned __int8 *)v1;
      v15 = NlsLeadByteInfoTable[v14];
      if ( v15 )
      {
        if ( !v6 )
        {
          *p_UnicodeStringDestination = 0;
          break;
        }
        v16 = *(unsigned __int8 *)++v1;
        --v6;
        v17 = *(_WORD *)(v13 + 2LL * ((unsigned int)v15 + v16));
      }
      else
      {
        v17 = *(_WORD *)(v14 * 2 + NlsAnsiToUnicodeData);
      }
      *p_UnicodeStringDestination = v17;
      ++v1;
      ++p_UnicodeStringDestination;
      if ( !v3 )
        break;
    }
  }
  else
  {
    v7 = NlsAnsiToUnicodeData;
    v8 = &UnicodeStringDestination;
    v9 = UTF8StringByteCount;
    if ( UTF8StringByteCount > 1 )
      v9 = 1;
    v10 = v9;
    do
    {
      v11 = *(unsigned __int8 *)v1;
      ++v8;
      ++v1;
      *(v8 - 1) = *(_WORD *)(v7 + 2 * v11);
      --v10;
    }
    while ( v10 );
  }
  *SourceCharacter += UTF8StringByteCount;
  return UnicodeStringDestination;
}
