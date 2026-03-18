/*
 * XREFs of AuthzBasepSetSecurityAttributesToken @ 0x1400654EC
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140065DA4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepDesktopAppxSubProcessToken @ 0x140066484 (SepDesktopAppxSubProcessToken.c)
 *     SepInternalSetSecurityAttributesToken @ 0x140246548 (SepInternalSetSecurityAttributesToken.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x140246D8C (SepDesktopAppModifyTokenBreakaway.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402471D0 (SepVerifyDesktopAppxPackageName.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x1402479F4 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SeSetSecurityAttributesTokenEx @ 0x140247C60 (SeSetSecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x140247F54 (SepSetSingletonEntry.c)
 *     NtSetInformationToken @ 0x14046DB70 (NtSetInformationToken.c)
 *     SepCreateClaimAttributes @ 0x14046F3A8 (SepCreateClaimAttributes.c)
 *     SepSetProcessUniqueAttribute @ 0x1404A16F4 (SepSetProcessUniqueAttribute.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x1405A6C14 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepAddTokenOriginClaim @ 0x1406F6A54 (SepAddTokenOriginClaim.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000DBA0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x1400655D8 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepValidateSecurityAttributes @ 0x140065644 (AuthzBasepValidateSecurityAttributes.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x14006582C (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttribute @ 0x14006589C (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x140065EF4 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x1402635AC (AuthzBasepDeleteAllSecurityAttributes.c)
 */

__int64 __fastcall AuthzBasepSetSecurityAttributesToken(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  int v3; // r12d
  _DWORD *v5; // r15
  int v7; // ebx
  char v8; // di
  __int64 i; // r14
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax

  v3 = *a2;
  v5 = a2;
  if ( !a3 )
  {
    v8 = 1;
    if ( v3 == 1 )
    {
      AuthzBasepFreeSecurityAttributesList(a1);
      v7 = 0;
      goto LABEL_15;
    }
LABEL_19:
    v7 = -1073741811;
    goto LABEL_20;
  }
  v7 = AuthzBasepValidateSecurityAttributes(a3);
  if ( v7 < 0 )
  {
LABEL_20:
    v8 = 0;
    goto LABEL_15;
  }
  v8 = 1;
  if ( v3 == 1 )
    AuthzBasepDeleteAllSecurityAttributes(a1);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a3 + 4); i = (unsigned int)(i + 1) )
  {
    a2 = (_DWORD *)(*(_QWORD *)(a3 + 8) + 40 * i);
    if ( v3 != 1 )
    {
      v10 = v5[i];
      if ( !v10 )
      {
        v7 = 0;
        goto LABEL_13;
      }
      v11 = v10 - 2;
      if ( !v11 )
      {
        v13 = AuthzBasepAddSecurityAttribute(a1, a2);
        goto LABEL_12;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        v13 = AuthzBasepDeleteSecurityAttribute(a1, a2);
        goto LABEL_12;
      }
      if ( v12 != 1 )
        goto LABEL_19;
    }
    v13 = AuthzBasepReplaceSecurityAttribute(a1, a2);
LABEL_12:
    v7 = v13;
LABEL_13:
    if ( v7 < 0 )
      goto LABEL_20;
  }
LABEL_15:
  LOBYTE(a2) = v8;
  AuthzBasepFinaliseSecurityAttributesList(a1, a2);
  return (unsigned int)v7;
}
