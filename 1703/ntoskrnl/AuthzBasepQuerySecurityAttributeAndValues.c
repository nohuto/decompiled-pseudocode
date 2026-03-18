/*
 * XREFs of AuthzBasepQuerySecurityAttributeAndValues @ 0x14008A590
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x140089630 (SepCanTokenMatchAllPackageSid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400897C0 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepGetNextValue @ 0x140115AEC (AuthzBasepGetNextValue.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x140115EA8 (AuthzBasepRestartOperandValueEnumeration.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140247DB4 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140031888 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepEqualUnicodeString @ 0x140089584 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1402637A8 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall AuthzBasepQuerySecurityAttributeAndValues(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r14
  const void **v4; // rbx
  const void **v5; // rbp
  char v6; // r12
  const void **v7; // rcx
  const UNICODE_STRING *v8; // rdx
  char v9; // al
  __int64 *v10; // rsi
  const void **v11; // rcx
  __int64 result; // rax
  char *v13; // rdx

  if ( *(_DWORD *)a1 == 6 )
    return AuthzBasepQueryTokenAttributeAndValues();
  if ( *(_DWORD *)a1 == 7 )
    return AuthzBasepQuerySystemSecurityAttributeAndValues();
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    v13 = **(char ***)(a1 + 64);
    if ( v13 == (char *)(v2 + 72) )
      return 2147483674LL;
    goto LABEL_20;
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = *(const void ***)(v3 + 8);
    v5 = 0LL;
    v6 = 0;
    if ( v4 == (const void **)(v3 + 8) )
    {
LABEL_10:
      v10 = *(__int64 **)(v3 + 32);
      if ( v10 == (__int64 *)(v3 + 32) )
      {
LABEL_11:
        v11 = 0LL;
        if ( v6 )
          v11 = v5;
        if ( !v11 )
          return 3221226021LL;
        v13 = (char *)v11[9];
        *(_DWORD *)(a1 + 40) = *((_DWORD *)v11 + 15);
        *(_WORD *)(a1 + 32) = *((_WORD *)v11 + 24);
        *(_DWORD *)(a1 + 36) = *((_DWORD *)v11 + 13);
        *(_QWORD *)(a1 + 56) = v11;
LABEL_20:
        *(_QWORD *)(a1 + 64) = v13;
        result = 0LL;
        *(_QWORD *)(a1 + 48) = v13 + 40;
        return result;
      }
      while ( 1 )
      {
        v5 = (const void **)(v10 - 2);
        if ( (v10[5] & 1) == 0 )
        {
          if ( AuthzBasepEqualUnicodeString(v5 + 4, (const UNICODE_STRING *)(a1 + 16)) )
            break;
        }
        v10 = (__int64 *)*v10;
        if ( v10 == (__int64 *)(v3 + 32) )
          goto LABEL_11;
      }
    }
    else
    {
      while ( 1 )
      {
        v5 = v4;
        v7 = v4 + 4;
        v8 = (const UNICODE_STRING *)(a1 + 16);
        v9 = KeGetCurrentIrql() >= 2u
           ? AuthzBasepEqualUnicodeStringCaseSensitive(v7, (__int64)v8)
           : RtlEqualUnicodeString((PCUNICODE_STRING)v7, v8, 1u);
        if ( v9 )
          break;
        v4 = (const void **)*v4;
        if ( v4 == (const void **)(v3 + 8) )
          goto LABEL_10;
      }
    }
    v6 = 1;
    goto LABEL_11;
  }
  return 3221226021LL;
}
