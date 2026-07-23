/*
 * XREFs of CmpHiveRootSecurityDescriptor @ 0x1405C1760
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x1405C09E0 (CmpFinishSystemHivesLoad.c)
 *     CmpSetVersionData @ 0x1405C1254 (CmpSetVersionData.c)
 *     CmpInitializeSystemHive @ 0x14083BCC8 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 *     CmpInitializePreloadedHives @ 0x14083C5EC (CmpInitializePreloadedHives.c)
 *     CmpCreateRegistryRoot @ 0x14083C9A8 (CmpCreateRegistryRoot.c)
 * Callees:
 *     RtlGetAce @ 0x140019210 (RtlGetAce.c)
 *     RtlSubAuthoritySid @ 0x140019320 (RtlSubAuthoritySid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1400FA7B0 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140486330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140486390 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x1404BBB70 (RtlpAddKnownAce.c)
 *     RtlInitializeSid @ 0x1405491E0 (RtlInitializeSid.c)
 *     RtlCreateSecurityDescriptor @ 0x14054A4B0 (RtlCreateSecurityDescriptor.c)
 */

ACL *CmpHiveRootSecurityDescriptor()
{
  unsigned __int8 *PoolWithTag; // r13
  unsigned __int8 *v1; // r15
  unsigned __int8 *v2; // r12
  unsigned __int8 *v3; // rsi
  unsigned __int8 *v4; // rax
  unsigned __int8 *v5; // r14
  ULONG v6; // edi
  ACL *v7; // rax
  ACL *v8; // rbx
  NTSTATUS Acl; // eax
  int v10; // eax
  ACL *v11; // rax
  ACL *v12; // rdi
  _BYTE *v14; // [rsp+38h] [rbp-59h] BYREF
  _SID_IDENTIFIER_AUTHORITY v15; // [rsp+40h] [rbp-51h] BYREF
  size_t IdentifierAuthority; // [rsp+48h] [rbp-49h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-41h] BYREF
  unsigned __int8 CapabilitySid[48]; // [rsp+60h] [rbp-31h] BYREF
  _BYTE CapabilityGroupSid[48]; // [rsp+90h] [rbp-1h] BYREF

  *(_DWORD *)&UnicodeString.Length = 1703960;
  LODWORD(IdentifierAuthority) = 0;
  UnicodeString.Buffer = L"registryRead";
  WORD2(IdentifierAuthority) = 256;
  *(_DWORD *)v15.Value = 0;
  *(_WORD *)&v15.Value[4] = 1280;
  LODWORD(v14) = 0;
  WORD2(v14) = 3840;
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x20204D43u);
  v1 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x20204D43u);
  v2 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x20204D43u);
  v3 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x20204D43u);
  v4 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x20204D43u);
  v5 = v4;
  if ( !PoolWithTag || !v1 || !v2 || !v3 || !v4 )
    KeBugCheckEx(0x51u, 0xBuLL, 1uLL, 0LL, 0LL);
  if ( RtlInitializeSid(PoolWithTag, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u) < 0
    || RtlInitializeSid(v1, &v15, 1u) < 0
    || RtlInitializeSid(v2, &v15, 1u) < 0
    || RtlInitializeSid(v3, &v15, 2u) < 0
    || RtlInitializeSid(v5, (PSID_IDENTIFIER_AUTHORITY)&v14, 2u) < 0 )
  {
    KeBugCheckEx(0x51u, 0xBuLL, 2uLL, 0LL, 0LL);
  }
  *RtlSubAuthoritySid(PoolWithTag, 0) = 0;
  *RtlSubAuthoritySid(v1, 0) = 12;
  *RtlSubAuthoritySid(v2, 0) = 18;
  *RtlSubAuthoritySid(v3, 0) = 32;
  *RtlSubAuthoritySid(v3, 1u) = 544;
  *RtlSubAuthoritySid(v5, 0) = 2;
  *RtlSubAuthoritySid(v5, 1u) = 1;
  if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid) < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 3uLL, 0LL, 0LL);
  v6 = 4 * (CapabilitySid[1] + PoolWithTag[1] + v1[1] + v2[1] + v3[1] + v5[1]) + 104;
  IdentifierAuthority = v6;
  v7 = (ACL *)ExAllocatePoolWithTag(PagedPool, v6, 0x20204D43u);
  v8 = v7;
  if ( !v7 )
    KeBugCheckEx(0x51u, 0xBuLL, 4uLL, 0LL, 0LL);
  Acl = RtlCreateAcl(v7, v6, 2u);
  if ( Acl < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 5uLL, Acl, 0LL);
  v10 = RtlpAddKnownAce(v8, 2u, 0, 983103, v2, 0);
  if ( v10 < 0
    || (v10 = RtlpAddKnownAce(v8, 2u, 0, 983103, v3, 0), v10 < 0)
    || (v10 = RtlpAddKnownAce(v8, 2u, 0, 131097, PoolWithTag, 0), v10 < 0)
    || (v10 = RtlpAddKnownAce(v8, 2u, 0, 131097, v1, 0), v10 < 0)
    || (v10 = RtlpAddKnownAce(v8, 2u, 0, 131097, v5, 0), v10 < 0)
    || (v10 = RtlpAddKnownAce(v8, 2u, 0, 131097, CapabilitySid, 0), v10 < 0) )
  {
    KeBugCheckEx(0x51u, 0xBuLL, 6uLL, v10, 0LL);
  }
  RtlGetAce(v8, 0, (PVOID *)&v14);
  v14[1] |= 2u;
  RtlGetAce(v8, 1u, (PVOID *)&v14);
  v14[1] |= 2u;
  RtlGetAce(v8, 2u, (PVOID *)&v14);
  v14[1] |= 2u;
  RtlGetAce(v8, 3u, (PVOID *)&v14);
  v14[1] |= 2u;
  RtlGetAce(v8, 4u, (PVOID *)&v14);
  v14[1] |= 2u;
  RtlGetAce(v8, 5u, (PVOID *)&v14);
  v14[1] |= 2u;
  v11 = (ACL *)ExAllocatePoolWithTag(PagedPool, v6 + 40LL, 0x20204D43u);
  v12 = v11;
  if ( !v11 )
    KeBugCheckEx(0x51u, 0xBuLL, 7uLL, 0LL, 0LL);
  memmove(&v11[5], v8, IdentifierAuthority);
  *(_DWORD *)v15.Value = RtlCreateSecurityDescriptor(v12, 1u);
  if ( *(int *)v15.Value < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 8uLL, *(int *)v15.Value, 0LL);
  }
  *(_DWORD *)v15.Value = RtlSetDaclSecurityDescriptor(v12, 1u, v12 + 5, 0);
  if ( *(int *)v15.Value < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 9uLL, *(int *)v15.Value, 0LL);
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  ExFreePoolWithTag(v1, 0);
  ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag(v5, 0);
  ExFreePoolWithTag(v8, 0);
  return v12;
}
