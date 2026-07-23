/*
 * XREFs of ObpVerifyAccessToBoundaryEntry @ 0x1405499E0
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140486330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140486390 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x1404BBB70 (RtlpAddKnownAce.c)
 *     RtlIsPackageSid @ 0x140549BD8 (RtlIsPackageSid.c)
 *     RtlCreateSecurityDescriptor @ 0x14054A4B0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x14054A4F0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x14054A554 (RtlAddMandatoryAce.c)
 */

__int64 __fastcall ObpVerifyAccessToBoundaryEntry(_DWORD *a1, __int64 a2)
{
  int v2; // eax
  unsigned __int8 *v3; // rbx
  unsigned int v5; // esi
  unsigned __int8 **v6; // rax
  ULONG v7; // edx
  char PreviousMode; // dl
  _GENERIC_MAPPING *p_GenericMapping; // rax
  PSID *v11; // rdx
  int v12; // eax
  ULONG v13; // edx
  UCHAR AceType; // [rsp+20h] [rbp-E0h]
  UCHAR AceTypea; // [rsp+20h] [rbp-E0h]
  PSID LabelSid; // [rsp+28h] [rbp-D8h]
  PSID LabelSida; // [rsp+28h] [rbp-D8h]
  int v18; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+68h] [rbp-98h] BYREF
  ACL Sacl; // [rsp+90h] [rbp-70h] BYREF
  ACL Acl; // [rsp+F0h] [rbp-10h] BYREF

  v2 = *a1;
  v3 = (unsigned __int8 *)(a1 + 2);
  if ( *a1 == 2 )
  {
    v5 = 0;
    if ( !RtlIsPackageSid(a1 + 2) )
    {
      RtlCreateAcl(&Acl, 0xA0u, 2u);
      RtlpAddKnownAce(&Acl, 2u, 0, 983055, v3, 0);
      v6 = *(unsigned __int8 ***)(a2 + 32);
      if ( v6 )
        RtlpAddKnownAce(&Acl, 2u, 0, 983055, *v6, 0);
      RtlCreateAcl(&Sacl, 0x54u, 2u);
      LODWORD(LabelSida) = 7;
      RtlAddMandatoryAce(&Sacl, v7, 0, *(_QWORD *)(a2 + 40), AceTypea, LabelSida);
      RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
      RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
      RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Sacl, 0);
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      p_GenericMapping = &ObpDirectoryObjectType->TypeInfo.GenericMapping;
      goto LABEL_6;
    }
    v11 = *(PSID **)(a2 + 32);
    if ( v11 && !RtlEqualSid(v3, *v11) )
    {
      *(_DWORD *)(a2 + 48) = -1073741790;
    }
    else
    {
      v12 = *(_DWORD *)(a2 + 52);
      if ( (v12 & 1) == 0 )
      {
        *(_DWORD *)(a2 + 52) = v12 | 1;
        return 1LL;
      }
      *(_DWORD *)(a2 + 48) = -1073741811;
    }
  }
  else
  {
    if ( v2 == 3 )
    {
      RtlCreateAcl(&Sacl, 0x54u, 2u);
      LODWORD(LabelSid) = 7;
      RtlAddMandatoryAce(&Sacl, v13, 0, (ULONG)v3, AceType, LabelSid);
      RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
      RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Sacl, 0);
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      p_GenericMapping = &ObpDirectoryObjectType->TypeInfo.GenericMapping;
      v5 = 0;
LABEL_6:
      LOBYTE(v5) = SeAccessCheckWithHint(
                     (__int64)SecurityDescriptor,
                     1,
                     (int *)a2,
                     1,
                     0xF000Fu,
                     0,
                     0LL,
                     (__int64)p_GenericMapping,
                     PreviousMode,
                     &v18,
                     (int *)(a2 + 48));
      return v5;
    }
    if ( v2 == 1 )
      return 1LL;
    *(_DWORD *)(a2 + 48) = -1073741595;
  }
  return 0LL;
}
