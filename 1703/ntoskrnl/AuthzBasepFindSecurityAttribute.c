/*
 * XREFs of AuthzBasepFindSecurityAttribute @ 0x14008A4C0
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x14006589C (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x140065EF4 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1400891D0 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14008A1B0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepSecurityAttributePresent @ 0x1402639B8 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x14045A6B0 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 *     AuthzBasepCompareSecurityAttributesInformation @ 0x1407324D8 (AuthzBasepCompareSecurityAttributesInformation.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140031888 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepEqualUnicodeString @ 0x140089584 (AuthzBasepEqualUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 */

const void **__fastcall AuthzBasepFindSecurityAttribute(__int64 a1, const UNICODE_STRING *a2)
{
  const void **v2; // rbx
  const void **v3; // rdi
  __int64 v4; // rbp
  char v5; // r12
  const void **v8; // rsi
  const void **v9; // rcx
  char v10; // al
  __int64 *v11; // rdi

  v2 = *(const void ***)(a1 + 8);
  v3 = (const void **)(a1 + 8);
  v4 = 0LL;
  v5 = 0;
  v8 = 0LL;
  if ( v2 == (const void **)(a1 + 8) )
  {
LABEL_6:
    v11 = *(__int64 **)(a1 + 32);
    if ( v11 == (__int64 *)(a1 + 32) )
      goto LABEL_7;
    while ( 1 )
    {
      v8 = (const void **)(v11 - 2);
      if ( (v11[5] & 1) == 0 )
      {
        if ( AuthzBasepEqualUnicodeString(v8 + 4, a2) )
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
      v9 = v2 + 4;
      v10 = KeGetCurrentIrql() >= 2u
          ? AuthzBasepEqualUnicodeStringCaseSensitive(v9, (__int64)a2)
          : RtlEqualUnicodeString((PCUNICODE_STRING)v9, a2, 1u);
      if ( v10 )
        break;
      v2 = (const void **)*v2;
      if ( v2 == v3 )
        goto LABEL_6;
    }
  }
  v5 = 1;
LABEL_7:
  if ( v5 )
    return v8;
  return (const void **)v4;
}
