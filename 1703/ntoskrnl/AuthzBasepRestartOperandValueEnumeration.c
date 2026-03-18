/*
 * XREFs of AuthzBasepRestartOperandValueEnumeration @ 0x140115EA8
 * Callers:
 *     AuthzBasepValueInSet @ 0x1401159D4 (AuthzBasepValueInSet.c)
 *     AuthzBasepEvaluateSetRelationship @ 0x140115DDC (AuthzBasepEvaluateSetRelationship.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14008A590 (AuthzBasepQuerySecurityAttributeAndValues.c)
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
