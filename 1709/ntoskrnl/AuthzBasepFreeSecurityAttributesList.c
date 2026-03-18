/*
 * XREFs of AuthzBasepFreeSecurityAttributesList @ 0x14001EED0
 * Callers:
 *     SepFreeResourceInfo @ 0x1400150FC (SepFreeResourceInfo.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140017110 (AuthzBasepEvaluateAceCondition.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140017800 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14001A0A0 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14001A89C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140103B18 (SepCleanupMarkedForDeletionEntries.c)
 *     SepVerifyDesktopAppxPackageName @ 0x14025E908 (SepVerifyDesktopAppxPackageName.c)
 *     SepCreateClaimAttributes @ 0x14045CE28 (SepCreateClaimAttributes.c)
 *     SepTokenDeleteMethod @ 0x14048D160 (SepTokenDeleteMethod.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x1405D05F4 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SeExamineSacl @ 0x14072CC70 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x14072D59C (SepExamineSaclEx.c)
 *     SepDeleteClaimAttributes @ 0x14073100C (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140731094 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x14000A4E4 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributesList(_DWORD *a1)
{
  _DWORD **v2; // r14
  _DWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  void **v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  void **v9; // rdx
  _DWORD *v10; // rsi
  _QWORD **v11; // rdx
  void **v12; // r8
  int v13; // eax
  __int64 *v14; // r15

  v2 = (_DWORD **)(a1 + 2);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (_DWORD *)v2 )
      break;
    if ( (v3[14] & 1) != 0 )
    {
      v4 = *(_QWORD *)v3;
      if ( *(_DWORD **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = (_QWORD *)*((_QWORD *)v3 + 1), (_DWORD *)*v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      v3[14] &= ~1u;
      --*a1;
    }
    v6 = (void **)(v3 + 18);
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 == v6 )
        break;
      if ( (v7[4] & 2) != 0 )
      {
        v11 = (_QWORD **)v7[2];
        if ( v11[1] != v7 + 2 || (v12 = (void **)v7[3], *v12 != v7 + 2) )
          __fastfail(3u);
        *v12 = v11;
        v11[1] = v12;
        *((_DWORD *)v7 + 8) &= ~2u;
        --v3[22];
      }
      if ( (v7[4] & 1) != 0 )
      {
        v8 = (_QWORD *)*v7;
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (void **)v7[1], *v9 != v7) )
          __fastfail(3u);
        *v9 = v8;
        v8[1] = v9;
        *((_DWORD *)v7 + 8) &= ~1u;
        --v3[15];
        if ( (v7[4] & 4) != 0 )
          --v3[16];
      }
      ExFreePoolWithTag(v7, 0);
    }
    v10 = (_DWORD *)*((_QWORD *)v3 + 12);
    while ( v10 != v3 + 24 )
    {
      v13 = v10[4];
      v14 = (__int64 *)(v10 - 4);
      v10 = *(_DWORD **)v10;
      if ( (v13 & 1) == 0 )
      {
        AuthzBasepRemoveSecurityAttributeValueFromLists(v3, v14, 0);
        ExFreePoolWithTag(v14, 0);
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
}
