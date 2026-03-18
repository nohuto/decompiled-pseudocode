/*
 * XREFs of AuthzBasepGetNextValue @ 0x1401164F8
 * Callers:
 *     AuthzBasepEvaluateSetRelationship @ 0x14011626C (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepValueInSet @ 0x1401163E8 (AuthzBasepValueInSet.c)
 *     AuthzBasepDeviceMemberOf @ 0x14028E584 (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepMemberOf @ 0x14028E6B4 (AuthzBasepMemberOf.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140018500 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepGetConstantOperand @ 0x140122C78 (AuthzBasepGetConstantOperand.c)
 */

__int64 __fastcall AuthzBasepGetNextValue(__int64 a1, __int64 a2)
{
  unsigned int ConstantOperand; // ecx
  unsigned int v5; // eax
  __int64 v6; // rax
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  ConstantOperand = 0;
  v10 = 0;
  if ( *(_DWORD *)(a1 + 12) == 1 )
  {
    if ( *(_BYTE *)(a1 + 4) )
    {
      v8 = *(_DWORD *)(a1 + 8);
      v9 = *(_DWORD *)(a1 + 24);
      if ( v8 < v9 )
      {
        ConstantOperand = AuthzBasepGetConstantOperand(*(_QWORD *)(a1 + 32) + v8, v9 - v8, a2, &v10);
        if ( *(_BYTE *)(a2 + 4) )
          return (unsigned int)-1073741406;
        else
          *(_DWORD *)(a1 + 8) += v10;
        return ConstantOperand;
      }
    }
    else if ( !*(_DWORD *)(a1 + 8) )
    {
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a1 + 24);
      *(_OWORD *)a2 = *(_OWORD *)a1;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
      return ConstantOperand;
    }
    return (unsigned int)-2147483622;
  }
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 || !*(_DWORD *)(a1 + 4) )
  {
    if ( v5 >= *(_DWORD *)(a1 + 4) )
      return v5 != 0 ? -2147483622 : -1073741275;
    ConstantOperand = AuthzBasepQuerySecurityAttributeAndValues(*(_QWORD *)(a1 + 16));
    *(_WORD *)a2 = *(_WORD *)a1;
    *(_BYTE *)(a2 + 4) = *(_BYTE *)(a1 + 4);
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 24);
    v6 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 16) = v6;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)a1;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
  }
  ++*(_DWORD *)(a1 + 8);
  return ConstantOperand;
}
