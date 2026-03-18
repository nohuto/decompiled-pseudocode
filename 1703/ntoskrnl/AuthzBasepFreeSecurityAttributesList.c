/*
 * XREFs of AuthzBasepFreeSecurityAttributesList @ 0x14000DBA0
 * Callers:
 *     SepFreeResourceInfo @ 0x14003E044 (SepFreeResourceInfo.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400654EC (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140065DA4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1400665C4 (SepCleanupMarkedForDeletionEntries.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400897C0 (AuthzBasepEvaluateAceCondition.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140089FD0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402471D0 (SepVerifyDesktopAppxPackageName.c)
 *     SepCreateClaimAttributes @ 0x14046F3A8 (SepCreateClaimAttributes.c)
 *     SepTokenDeleteMethod @ 0x14051E5E0 (SepTokenDeleteMethod.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x1405A6C14 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SeExamineSacl @ 0x1406F5210 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1406F5B50 (SepExamineSaclEx.c)
 *     SepDeleteClaimAttributes @ 0x1406F95BC (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1406F9644 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1400039E8 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributesList(_DWORD *a1)
{
  _DWORD **v2; // r14
  _DWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  void **v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  void **v9; // rax
  _DWORD *v10; // rsi
  _QWORD **v11; // r8
  void **v12; // rdx
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
      v5 = (_QWORD *)*((_QWORD *)v3 + 1);
      if ( *(_DWORD **)(*(_QWORD *)v3 + 8LL) != v3 || (_DWORD *)*v5 != v3 )
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
        v12 = (void **)v7[3];
        if ( v11[1] != v7 + 2 || *v12 != v7 + 2 )
          __fastfail(3u);
        *v12 = v11;
        v11[1] = v12;
        *((_DWORD *)v7 + 8) &= ~2u;
        --v3[22];
      }
      if ( (v7[4] & 1) != 0 )
      {
        v8 = (_QWORD *)*v7;
        v9 = (void **)v7[1];
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || *v9 != v7 )
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
