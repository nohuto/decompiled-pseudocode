/*
 * XREFs of AuthzBasepFinaliseSecurityAttributesList @ 0x1400655D8
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400654EC (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x140094180 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x1402638F0 (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall AuthzBasepFinaliseSecurityAttributesList(__int64 a1, char a2)
{
  _QWORD *v3; // rsi
  _QWORD *result; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  char v8; // al

  v3 = (_QWORD *)(a1 + 32);
  while ( 1 )
  {
    result = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    v6 = result - 2;
    v7 = result - 2;
    if ( a2 )
      v8 = AuthzBasepCommitSecurityAttributeChanges(a1, v7);
    else
      v8 = AuthzBasepRollbackSecurityAttributeChanges(a1, v7);
    if ( v8 )
      ExFreePoolWithTag(v6, 0);
  }
  return result;
}
