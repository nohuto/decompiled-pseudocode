/*
 * XREFs of AuthzBasepRestartOperandValueEnumeration @ 0x140116668
 * Callers:
 *     AuthzBasepEvaluateSetRelationship @ 0x14011626C (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepValueInSet @ 0x1401163E8 (AuthzBasepValueInSet.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140018500 (AuthzBasepQuerySecurityAttributeAndValues.c)
 */

__int64 __fastcall AuthzBasepRestartOperandValueEnumeration(__int64 a1)
{
  bool v1; // zf
  __int64 i; // rdx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 12) == 1;
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v1 && *(_QWORD *)(a1 + 16) )
  {
    for ( i = 56LL; i < 72; i += 8LL )
      *(_QWORD *)(i + *(_QWORD *)(a1 + 16)) = 0LL;
    return AuthzBasepQuerySecurityAttributeAndValues(*(_QWORD *)(a1 + 16));
  }
  return result;
}
