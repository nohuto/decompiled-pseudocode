/*
 * XREFs of SeMakeAnonymousLogonToken @ 0x14081AD40
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

__int64 SeMakeAnonymousLogonToken()
{
  PSID v0; // rbx
  int v1; // eax
  int v2; // ecx
  int v3; // eax
  unsigned int v4; // r15d
  ULONG v5; // edi
  ACL *PoolWithTag; // rax
  ACL *v7; // rsi
  PVOID v8; // rax
  void *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  int v13; // [rsp+28h] [rbp-100h]
  int v14; // [rsp+30h] [rbp-F8h]
  int v15; // [rsp+A8h] [rbp-80h] BYREF
  int v16[2]; // [rsp+B0h] [rbp-78h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+B8h] [rbp-70h] BYREF
  LARGE_INTEGER Time; // [rsp+C8h] [rbp-60h] BYREF
  _QWORD v19[3]; // [rsp+D0h] [rbp-58h] BYREF
  int v20; // [rsp+E8h] [rbp-40h]
  void *v21; // [rsp+F0h] [rbp-38h]
  __int64 v22; // [rsp+F8h] [rbp-30h]
  _SID_AND_ATTRIBUTES v23; // [rsp+108h] [rbp-20h] BYREF
  __int64 v24; // [rsp+118h] [rbp-10h]
  int v25; // [rsp+120h] [rbp-8h]

  v15 = 1;
  TimeFields = (_TIME_FIELDS)_mm_load_si128((const __m128i *)&_xmm);
  RtlTimeFieldsToTime(&TimeFields, &Time);
  v0 = SeAnonymousLogonSid;
  *(_DWORD *)&TimeFields.Minute = 0;
  v1 = *((unsigned __int8 *)SeWorldSid + 1);
  v23.Sid = SeWorldSid;
  v24 = *(_QWORD *)&SeLowMandatorySid;
  *(_QWORD *)&TimeFields.Year = SeAnonymousLogonSid;
  v2 = 4 * v1 + 11;
  v23.Attributes = 7;
  v3 = *(unsigned __int8 *)(*(_QWORD *)&SeLowMandatorySid + 1LL);
  v25 = 96;
  v4 = (v2 & 0xFFFFFFFC) + 16 + ((4 * v3 + 11) & 0xFFFFFFFC);
  v5 = 4 * (*((unsigned __int8 *)SeAnonymousLogonSid + 1) + *((unsigned __int8 *)SeWorldSid + 1)) + 48;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, 0xC8uLL, 0x63416553u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlCreateAcl(PoolWithTag, v5, 2u);
    RtlAddAccessAllowedAce(v7, 2u, 0xF01FFu, SeWorldSid);
    RtlAddAccessAllowedAce(v7, 2u, 0xF01FFu, SeAnonymousLogonSid);
    v8 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x64536553u);
    v9 = v8;
    if ( v8 )
    {
      RtlCreateSecurityDescriptor(v8, 1u);
      RtlSetDaclSecurityDescriptor(v9, 1u, v7, 0);
      RtlSetOwnerSecurityDescriptor(v9, SeWorldSid, 0);
      RtlSetGroupSecurityDescriptor(v9, SeWorldSid, 0);
      v19[1] = 0LL;
      v20 = 0;
      v19[2] = 0LL;
      v22 = 0LL;
      LODWORD(v19[0]) = 48;
      v21 = v9;
      SepCreateToken(
        (HANDLE *)v16,
        v10,
        v11,
        v19,
        v13,
        v14,
        (__int64)&SeAnonymousAuthenticationId,
        &Time,
        (_SID_AND_ATTRIBUTES *)&TimeFields,
        2u,
        &v23,
        v4,
        0,
        0LL,
        0LL,
        v0,
        v7);
      SeSetMandatoryPolicyToken(*(__int64 *)v16, &v15);
      ExFreePoolWithTag(v7, 0);
      ExFreePoolWithTag(v9, 0);
      return *(_QWORD *)v16;
    }
    ExFreePoolWithTag(v7, 0);
  }
  return 0LL;
}
