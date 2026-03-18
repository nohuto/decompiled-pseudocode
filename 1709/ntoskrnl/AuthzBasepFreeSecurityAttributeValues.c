/*
 * XREFs of AuthzBasepFreeSecurityAttributeValues @ 0x14000A478
 * Callers:
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x14000A428 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x14001A9F4 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x140089A70 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x14028DC20 (AuthzBasepRollbackSecurityAttributeChanges.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x14000A4E4 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributeValues(__int64 a1, char a2, __int64 a3)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  _DWORD *v7; // rbp

  if ( !a2 )
  {
    v5 = (_QWORD *)(a1 + 72);
    while ( 1 )
    {
      v6 = (_QWORD *)*v5;
      if ( (_QWORD *)*v5 == v5 )
        break;
      LOBYTE(a3) = 1;
      AuthzBasepRemoveSecurityAttributeValueFromLists(a1, *v5, a3);
      ExFreePoolWithTag(v6, 0);
    }
  }
  v4 = *(_QWORD **)(a1 + 96);
  while ( v4 != (_QWORD *)(a1 + 96) )
  {
    v7 = v4 - 2;
    v4 = (_QWORD *)*v4;
    if ( (v7[8] & 1) == 0 )
    {
      AuthzBasepRemoveSecurityAttributeValueFromLists(a1, v7, 0LL);
      ExFreePoolWithTag(v7, 0);
    }
  }
}
