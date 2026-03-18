/*
 * XREFs of AuthzBasepFindSecurityAttribute @ 0x140018420
 * Callers:
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x1400179E0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x140018CC4 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepAddSecurityAttribute @ 0x14001A3DC (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x14001A9F4 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepSecurityAttributePresent @ 0x14028DCE8 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x14058AF6C (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 *     AuthzBasepCompareSecurityAttributesInformation @ 0x14077664C (AuthzBasepCompareSecurityAttributesInformation.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x140018C50 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140127E8C (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 */

__int64 *__fastcall AuthzBasepFindSecurityAttribute(__int64 a1, const UNICODE_STRING *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r14
  __int64 v4; // rsi
  char v5; // bp
  __int64 *v8; // rdi
  const UNICODE_STRING *v9; // rcx
  __int64 *v11; // r14

  v2 = *(_QWORD **)(a1 + 8);
  v3 = (_QWORD *)(a1 + 8);
  v4 = 0LL;
  v5 = 0;
  v8 = 0LL;
  if ( v2 == (_QWORD *)(a1 + 8) )
  {
LABEL_6:
    v11 = *(__int64 **)(a1 + 32);
    if ( v11 == (__int64 *)(a1 + 32) )
      goto LABEL_7;
    while ( 1 )
    {
      v8 = v11 - 2;
      if ( (v11[5] & 1) == 0 )
      {
        if ( (unsigned __int8)AuthzBasepEqualUnicodeString(v8 + 4, a2) )
          break;
      }
      v11 = (__int64 *)*v11;
      if ( v11 == (__int64 *)(a1 + 32) )
        goto LABEL_7;
    }
  }
  else
  {
    while ( 1 )
    {
      v8 = v2;
      v9 = (const UNICODE_STRING *)(v2 + 4);
      if ( KeGetCurrentIrql() >= 2u
         ? AuthzBasepEqualUnicodeStringCaseSensitive(v9, a2)
         : RtlEqualUnicodeString(v9, a2, 1u) )
      {
        break;
      }
      v2 = (_QWORD *)*v2;
      if ( v2 == v3 )
        goto LABEL_6;
    }
  }
  v5 = 1;
LABEL_7:
  if ( v5 )
    return v8;
  return (__int64 *)v4;
}
