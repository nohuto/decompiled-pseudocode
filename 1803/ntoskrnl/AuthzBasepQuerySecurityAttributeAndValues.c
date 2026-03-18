/*
 * XREFs of AuthzBasepQuerySecurityAttributeAndValues @ 0x14005FC10
 * Callers:
 *     AuthzBasepGetNextValue @ 0x14004493C (AuthzBasepGetNextValue.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140044F30 (AuthzBasepEvaluateAceCondition.c)
 *     SepCanTokenMatchAllPackageSid @ 0x14005F800 (SepCanTokenMatchAllPackageSid.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x1400C7E84 (AuthzBasepRestartOperandValueEnumeration.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x1402A0F84 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x14006C420 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1400C7664 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1402C3750 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     AuthzBasepQuerySystemSecurityAttributeAndValues @ 0x1404F0A34 (AuthzBasepQuerySystemSecurityAttributeAndValues.c)
 */

__int64 __fastcall AuthzBasepQuerySecurityAttributeAndValues(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r14
  _QWORD *v4; // rbx
  __int64 *v5; // rbp
  char v6; // r12
  const UNICODE_STRING *v7; // rcx
  const UNICODE_STRING *v8; // rdx
  __int64 *v10; // rsi
  __int64 *v11; // rcx
  __int64 result; // rax
  __int64 v13; // rdx

  if ( *(_DWORD *)a1 == 6 )
    return AuthzBasepQueryTokenAttributeAndValues();
  if ( *(_DWORD *)a1 == 7 )
    return AuthzBasepQuerySystemSecurityAttributeAndValues();
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    v13 = **(_QWORD **)(a1 + 64);
    if ( v13 == v2 + 72 )
      return 2147483674LL;
    goto LABEL_20;
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = *(_QWORD **)(v3 + 8);
    v5 = 0LL;
    v6 = 0;
    if ( v4 == (_QWORD *)(v3 + 8) )
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
        v13 = v11[9];
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
        v5 = v10 - 2;
        if ( (v10[5] & 1) == 0 )
        {
          if ( (unsigned __int8)AuthzBasepEqualUnicodeString(v5 + 4, a1 + 16) )
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
        v7 = (const UNICODE_STRING *)(v4 + 4);
        v8 = (const UNICODE_STRING *)(a1 + 16);
        if ( KeGetCurrentIrql() >= 2u
           ? AuthzBasepEqualUnicodeStringCaseSensitive(v7, v8)
           : RtlEqualUnicodeString(v7, v8, 1u) )
        {
          break;
        }
        v4 = (_QWORD *)*v4;
        if ( v4 == (_QWORD *)(v3 + 8) )
          goto LABEL_10;
      }
    }
    v6 = 1;
    goto LABEL_11;
  }
  return 3221226021LL;
}
