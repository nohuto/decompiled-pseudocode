/*
 * XREFs of AuthzBasepDeleteSecurityAttribute @ 0x140065EF4
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400654EC (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x14006582C (AuthzBasepReplaceSecurityAttribute.c)
 * Callees:
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x14000392C (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x14000397C (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x14000464C (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     AuthzBasepAddSecurityAttributeToLists @ 0x140065CCC (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14008A4C0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x140263604 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDeleteSecurityAttribute(_DWORD *a1, __int64 a2)
{
  int v4; // edi
  __int64 SecurityAttribute; // rax
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  _WORD v10[4]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]
  char v12; // [rsp+48h] [rbp+10h] BYREF

  v10[0] = *(_WORD *)a2;
  v10[1] = v10[0];
  v4 = 0;
  v11 = *(_QWORD *)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, v10);
  v6 = SecurityAttribute;
  if ( !SecurityAttribute || (*(_DWORD *)(SecurityAttribute + 56) & 4) != 0 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    AuthzBasepAddSecurityAttributeToLists((__int64)a1, SecurityAttribute, 0, 1);
    if ( *(_DWORD *)(a2 + 24) )
    {
      v4 = AuthzBasepDeleteSecurityAttributeValues(v6, a2, &v12);
      if ( v4 < 0 )
        return (unsigned int)v4;
      if ( v12 )
        *(_DWORD *)(v6 + 56) |= 4u;
    }
    else
    {
      *(_DWORD *)(v6 + 56) |= 4u;
      AuthzBasepDeleteAllSecurityAttributeValues(v6, v8);
    }
    if ( (*(_DWORD *)(v6 + 56) & 5) == 4 )
    {
      AuthzBasepRemoveSecurityAttributeFromLists(a1, (__int64 *)v6, 0, 1);
      AuthzBasepFreeSecurityAttributeValues(v6, 0, v9);
      ExFreePoolWithTag((PVOID)v6, 0);
    }
  }
  return (unsigned int)v4;
}
