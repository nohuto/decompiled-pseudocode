/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x180069B20
 * Callers:
 *     toupper @ 0x180090B30 (toupper.c)
 *     sub_1800940B0 @ 0x1800940B0 (sub_1800940B0.c)
 *     sub_180094FA0 @ 0x180094FA0 (sub_180094FA0.c)
 *     sub_180097738 @ 0x180097738 (sub_180097738.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x180063BE0 (RtlUTF8ToUnicodeN.c)
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
  UTF8StringByteCount = (word_18015ADC0[*(unsigned __int8 *)v1] != 0) + 1;
  v5 = UTF8StringByteCount;
  if ( byte_18015ADB1 )
  {
    RtlUTF8ToUnicodeN(&UnicodeStringDestination, 2u, &UnicodeStringActualByteCount, v1, UTF8StringByteCount);
  }
  else
  {
    v6 = 1;
    if ( NlsMbCodePageTag )
    {
      v12 = qword_18015AFE0;
      v13 = qword_18015B210;
      while ( v5 )
      {
        v14 = *(unsigned __int8 *)v1;
        --v6;
        --v5;
        v15 = word_18015ADC0[v14];
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
      v7 = qword_18015B210;
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
