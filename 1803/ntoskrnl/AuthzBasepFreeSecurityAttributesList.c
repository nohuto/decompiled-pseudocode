/*
 * XREFs of AuthzBasepFreeSecurityAttributesList @ 0x1400E2B70
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140044F30 (AuthzBasepEvaluateAceCondition.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140060010 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepFreeResourceInfo @ 0x140062FE4 (SepFreeResourceInfo.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14006BBD4 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1400A0EEC (SepCleanupMarkedForDeletionEntries.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400BBECC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140100CF0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402A039C (SepVerifyDesktopAppxPackageName.c)
 *     SepCreateClaimAttributes @ 0x14054487C (SepCreateClaimAttributes.c)
 *     SepTokenDeleteMethod @ 0x140593260 (SepTokenDeleteMethod.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x1406312F8 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SeExamineSacl @ 0x140790F20 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140791850 (SepExamineSaclEx.c)
 *     SepDeleteClaimAttributes @ 0x1407948F8 (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140794980 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1400CAD9C (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributesList(_DWORD *a1)
{
  _DWORD **v2; // r15
  _DWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  void **v6; // rdi
  _DWORD *v7; // rcx
  int v8; // eax
  _QWORD *v9; // rax
  void **v10; // rdx
  _DWORD *v11; // r14
  _DWORD **v12; // rdx
  void **v13; // r8
  int v14; // eax
  __int64 *v15; // rbp

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
      v8 = v7[8];
      if ( (v8 & 2) != 0 )
      {
        v12 = (_DWORD **)*((_QWORD *)v7 + 2);
        if ( v12[1] != v7 + 4 || (v13 = (void **)*((_QWORD *)v7 + 3), *v13 != v7 + 4) )
          __fastfail(3u);
        *v13 = v12;
        v12[1] = v13;
        v7[8] &= ~2u;
        --v3[22];
        v8 = v7[8];
      }
      if ( (v8 & 1) != 0 )
      {
        v9 = *(_QWORD **)v7;
        if ( *(_DWORD **)(*(_QWORD *)v7 + 8LL) != v7 || (v10 = (void **)*((_QWORD *)v7 + 1), *v10 != v7) )
          __fastfail(3u);
        *v10 = v9;
        v9[1] = v10;
        v7[8] &= ~1u;
        --v3[15];
        if ( (v7[8] & 4) != 0 )
          --v3[16];
      }
      ExFreePoolWithTag(v7, 0);
    }
    v11 = (_DWORD *)*((_QWORD *)v3 + 12);
    while ( v11 != v3 + 24 )
    {
      v14 = v11[4];
      v15 = (__int64 *)(v11 - 4);
      v11 = *(_DWORD **)v11;
      if ( (v14 & 1) == 0 )
      {
        AuthzBasepRemoveSecurityAttributeValueFromLists(v3, v15, 0);
        ExFreePoolWithTag(v15, 0);
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
}
