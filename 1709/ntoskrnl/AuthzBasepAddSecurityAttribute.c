/*
 * XREFs of AuthzBasepAddSecurityAttribute @ 0x14001A3DC
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14001A0A0 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x14001A36C (AuthzBasepReplaceSecurityAttribute.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x140018420 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttributeValues @ 0x14001A47C (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepAddSecurityAttributeToLists @ 0x14001A7C4 (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x14001A810 (AuthzBasepAllocateSecurityAttribute.c)
 */

__int64 __fastcall AuthzBasepAddSecurityAttribute(__int64 a1, __int64 a2)
{
  __int64 *SecurityAttribute; // rax
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // r11
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  if ( !*(_DWORD *)(a2 + 24) )
    return 3221225485LL;
  SourceString.Length = *(_WORD *)a2;
  SourceString.MaximumLength = SourceString.Length;
  SourceString.Buffer = *(wchar_t **)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, &SourceString);
  v6 = (__int64)SecurityAttribute;
  if ( SecurityAttribute )
  {
    *((_DWORD *)SecurityAttribute + 14) &= ~4u;
    goto LABEL_5;
  }
  v7 = AuthzBasepAllocateSecurityAttribute(&SourceString);
  v6 = v7;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 52) = *(_DWORD *)(a2 + 20);
    *(_WORD *)(v7 + 48) = *(_WORD *)(a2 + 16);
LABEL_5:
    LOBYTE(v5) = 1;
    AuthzBasepAddSecurityAttributeToLists(a1, v6, 0LL, v5);
    return AuthzBasepAddSecurityAttributeValues(v8, a2);
  }
  return 3221225626LL;
}
