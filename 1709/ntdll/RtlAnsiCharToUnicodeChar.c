/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x18006C8D0
 * Callers:
 *     toupper @ 0x180096660 (toupper.c)
 *     _mbstrlen @ 0x180099BA0 (_mbstrlen.c)
 *     mbtowc @ 0x18009A9DC (mbtowc.c)
 *     _safecrt_mbtowc @ 0x18009CFEC (_safecrt_mbtowc.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x180068230 (RtlUTF8ToUnicodeN.c)
 */

WCHAR __cdecl RtlAnsiCharToUnicodeChar(PUCHAR *SourceCharacter)
{
  const CHAR *v1; // rdx
  WCHAR *p_UnicodeStringDestination; // r9
  ULONG UTF8StringByteCount; // ebx
  unsigned int v5; // r8d
  int v6; // r10d
  __int64 v7; // r11
  WCHAR *v8; // r9
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int16 v15; // r11
  WCHAR UnicodeStringDestination; // [rsp+60h] [rbp+8h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+68h] [rbp+10h] BYREF

  v1 = (const CHAR *)*SourceCharacter;
  p_UnicodeStringDestination = &UnicodeStringDestination;
  UnicodeStringDestination = 32;
  UTF8StringByteCount = (NlsLeadByteInfoTable[*(unsigned __int8 *)v1] != 0) + 1;
  v5 = UTF8StringByteCount;
  if ( NlsActiveCodePageIsUTF8 )
  {
    RtlUTF8ToUnicodeN(&UnicodeStringDestination, 2u, &UnicodeStringActualByteCount, v1, UTF8StringByteCount);
  }
  else
  {
    v6 = 1;
    if ( NlsMbCodePageTag )
    {
      v12 = NlsMbAnsiCodePageTables;
      v13 = NlsAnsiToUnicodeData;
      while ( v5 )
      {
        v14 = *(unsigned __int8 *)v1;
        --v6;
        --v5;
        v15 = NlsLeadByteInfoTable[v14];
        if ( v15 )
        {
          if ( !v5 )
          {
            *p_UnicodeStringDestination = 0;
            break;
          }
          ++v1;
          --v5;
          *p_UnicodeStringDestination = *(_WORD *)(v12 + 2LL * (v15 + (unsigned int)*(unsigned __int8 *)v1));
        }
        else
        {
          *p_UnicodeStringDestination = *(_WORD *)(v13 + 2 * v14);
        }
        ++p_UnicodeStringDestination;
        ++v1;
        if ( !v6 )
          break;
      }
    }
    else
    {
      v7 = NlsAnsiToUnicodeData;
      v8 = &UnicodeStringDestination;
      if ( UTF8StringByteCount > 1 )
        v5 = 1;
      v9 = v5;
      do
      {
        v10 = *(unsigned __int8 *)v1++;
        *v8++ = *(_WORD *)(v7 + 2 * v10);
        --v9;
      }
      while ( v9 );
    }
  }
  *SourceCharacter += UTF8StringByteCount;
  return UnicodeStringDestination;
}
