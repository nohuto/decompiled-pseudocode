/*
 * XREFs of AuthzBasepRollbackSecurityAttributeChanges @ 0x1402638F0
 * Callers:
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x1400655D8 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140093E50 (AuthzBasepDuplicateSecurityAttributes.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x14000397C (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1400039E8 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x14000464C (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

bool __fastcall AuthzBasepRollbackSecurityAttributeChanges(_DWORD *a1, __int64 a2)
{
  char v2; // di
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  _QWORD *v7; // r14
  _QWORD *v8; // rsi

  v2 = 1;
  AuthzBasepRemoveSecurityAttributeFromLists(a1, (__int64 *)a2, 0, 1);
  v6 = *(_DWORD *)(v4 + 56);
  if ( (v6 & 4) != 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      AuthzBasepFreeSecurityAttributeValues(v4, 0, v5);
      return v2;
    }
    *(_DWORD *)(v4 + 56) = v6 & 0xFFFFFFFB;
    AuthzBasepFreeSecurityAttributeValues(v4, 1, v5);
  }
  v7 = (_QWORD *)(a2 + 96);
  while ( 1 )
  {
    v8 = (_QWORD *)*v7;
    if ( (_QWORD *)*v7 == v7 )
      break;
    AuthzBasepRemoveSecurityAttributeValueFromLists((_DWORD *)a2, v8 - 2, 0);
    if ( (v8[2] & 4) != 0 )
    {
      --*(_DWORD *)(a2 + 64);
      *((_DWORD *)v8 + 4) &= ~4u;
    }
    if ( (v8[2] & 1) == 0 )
      ExFreePoolWithTag(v8 - 2, 0);
  }
  return (*(_BYTE *)(a2 + 56) & 1) == 0;
}
