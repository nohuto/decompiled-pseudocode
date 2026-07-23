/*
 * XREFs of SeMakeAnonymousLogonTokenNoEveryone @ 0x14081AB04
 * Callers:
 *     SepInitializationPhase1 @ 0x1405C48E0 (SepInitializationPhase1.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x140026E40 (RtlTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeSetMandatoryPolicyToken @ 0x14046E770 (SeSetMandatoryPolicyToken.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1404A4790 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1404A57B0 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1404A57E0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404F5D90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 *     SepCreateToken @ 0x1405C54CC (SepCreateToken.c)
 */

__int64 SeMakeAnonymousLogonTokenNoEveryone()
{
  PSID v0; // rbx
  int v1; // eax
  unsigned int v2; // r14d
  ULONG v3; // edi
  ACL *PoolWithTag; // rax
  ACL *v5; // rsi
  PVOID v6; // rax
  void *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  int v11; // [rsp+28h] [rbp-100h]
  int v12; // [rsp+30h] [rbp-F8h]
  int v13; // [rsp+A8h] [rbp-80h] BYREF
  int v14[2]; // [rsp+B0h] [rbp-78h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+B8h] [rbp-70h] BYREF
  LARGE_INTEGER Time; // [rsp+C8h] [rbp-60h] BYREF
  _QWORD v17[3]; // [rsp+D0h] [rbp-58h] BYREF
  int v18; // [rsp+E8h] [rbp-40h]
  void *v19; // [rsp+F0h] [rbp-38h]
  __int64 v20; // [rsp+F8h] [rbp-30h]
  _SID_AND_ATTRIBUTES v21; // [rsp+108h] [rbp-20h] BYREF

  v13 = 1;
  TimeFields = (_TIME_FIELDS)_mm_load_si128((const __m128i *)&_xmm);
  RtlTimeFieldsToTime(&TimeFields, &Time);
  v0 = SeAnonymousLogonSid;
  *(_DWORD *)&TimeFields.Minute = 0;
  v21.Sid = (PSID)SeUntrustedMandatorySid;
  v1 = *(unsigned __int8 *)(SeUntrustedMandatorySid + 1);
  *(_QWORD *)&TimeFields.Year = SeAnonymousLogonSid;
  v21.Attributes = 96;
  v2 = ((4 * v1 + 11) & 0xFFFFFFFC) + 16;
  v3 = 4 * (*((unsigned __int8 *)SeAnonymousLogonSid + 1) + *((unsigned __int8 *)SeWorldSid + 1)) + 48;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, 0xC8uLL, 0x63416553u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlCreateAcl(PoolWithTag, v3, 2u);
    RtlAddAccessAllowedAce(v5, 2u, 0xF01FFu, SeWorldSid);
    RtlAddAccessAllowedAce(v5, 2u, 0xF01FFu, SeAnonymousLogonSid);
    v6 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x64536553u);
    v7 = v6;
    if ( v6 )
    {
      RtlCreateSecurityDescriptor(v6, 1u);
      RtlSetDaclSecurityDescriptor(v7, 1u, v5, 0);
      RtlSetOwnerSecurityDescriptor(v7, SeWorldSid, 0);
      RtlSetGroupSecurityDescriptor(v7, SeWorldSid, 0);
      v17[1] = 0LL;
      v18 = 0;
      v17[2] = 0LL;
      v20 = 0LL;
      LODWORD(v17[0]) = 48;
      v19 = v7;
      SepCreateToken(
        (HANDLE *)v14,
        v8,
        v9,
        v17,
        v11,
        v12,
        (__int64)&SeAnonymousAuthenticationId,
        &Time,
        (_SID_AND_ATTRIBUTES *)&TimeFields,
        1u,
        &v21,
        v2,
        0,
        0LL,
        0LL,
        v0,
        v5);
      SeSetMandatoryPolicyToken(*(__int64 *)v14, &v13);
      ExFreePoolWithTag(v5, 0);
      ExFreePoolWithTag(v7, 0);
      return *(_QWORD *)v14;
    }
    ExFreePoolWithTag(v5, 0);
  }
  return 0LL;
}
