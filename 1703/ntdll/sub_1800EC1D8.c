/*
 * XREFs of sub_1800EC1D8 @ 0x1800EC1D8
 * Callers:
 *     RtlGetUILanguageInfo @ 0x1800EBC90 (RtlGetUILanguageInfo.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800ECDF0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetInstallLanguage @ 0x1800ED870 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     RtlUnicodeStringToInteger @ 0x180072D30 (RtlUnicodeStringToInteger.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     iswctype @ 0x180099620 (iswctype.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     RtlIsValidLocaleName @ 0x1800F4FC0 (RtlIsValidLocaleName.c)
 */

__int64 __fastcall sub_1800EC1D8(PUNICODE_STRING String, PULONG Value)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // esi
  __int64 v7; // r14
  LCID v8; // ecx
  _UNICODE_STRING Stringa; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v11[176]; // [rsp+30h] [rbp-E8h] BYREF

  v4 = 0;
  memset(v11, 0, 0xAAuLL);
  if ( !String )
    return (unsigned int)-1073741811;
  if ( !Value )
    return (unsigned int)-1073741811;
  v5 = String->Length >> 1;
  if ( v5 > 4 )
    return (unsigned int)-1073741811;
  v6 = 0;
  if ( v5 )
  {
    v7 = 0LL;
    while ( iswctype(String->Buffer[v7], 0x80u) )
    {
      ++v6;
      ++v7;
      if ( v6 >= v5 )
        goto LABEL_8;
    }
    return (unsigned int)-1073741811;
  }
LABEL_8:
  if ( RtlUnicodeStringToInteger(String, 0x10u, Value) < 0 )
    return (unsigned int)-1073741811;
  v8 = *Value;
  Stringa.Buffer = (PWCH)v11;
  *(_DWORD *)&Stringa.Length = 11141290;
  if ( !RtlLCIDToCultureName(v8, &Stringa) || !RtlIsValidLocaleName(Stringa.Buffer, 2u) )
    return (unsigned int)-1073741811;
  return v4;
}
