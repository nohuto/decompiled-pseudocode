/*
 * XREFs of SepBuildDaclWithCriticalAces @ 0x1407303A4
 * Callers:
 *     SepBuildObjectSecurityDescriptor @ 0x140730628 (SepBuildObjectSecurityDescriptor.c)
 * Callees:
 *     RtlGetAce @ 0x140019210 (RtlGetAce.c)
 *     RtlLengthSid @ 0x140019280 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlQueryInformationAcl @ 0x140485250 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x140486100 (RtlAddAce.c)
 *     RtlCreateAcl @ 0x140486390 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x1404BBB70 (RtlpAddKnownAce.c)
 */

NTSTATUS __fastcall SepBuildDaclWithCriticalAces(PACL Acl, char a2, char a3, char a4, char a5, ACL **a6)
{
  int v7; // ebp
  ULONG v10; // r15d
  NTSTATUS result; // eax
  int v12; // r14d
  ULONG v13; // edi
  ACL *PoolWithTag; // rax
  ACL *v15; // rsi
  unsigned int v16; // ebx
  int Ace; // edi
  PVOID Information; // [rsp+38h] [rbp-50h] BYREF
  ACL **v21; // [rsp+40h] [rbp-48h]
  _BYTE v22[12]; // [rsp+48h] [rbp-40h] BYREF

  v7 = 0;
  v21 = a6;
  v10 = 0;
  result = RtlQueryInformationAcl(Acl, v22, 0xCu, AclSizeInformation);
  if ( result >= 0 )
  {
    result = RtlQueryInformationAcl(Acl, &Information, 4u, AclRevisionInformation);
    if ( result >= 0 )
    {
      v12 = *(_DWORD *)&v22[4];
      v13 = *(_DWORD *)&v22[4];
      if ( a2 )
      {
        v10 = 2;
        v13 = v12 + 16 + 2 * RtlLengthSid(SeAllAppPackagesSid);
      }
      if ( a4 )
      {
        v13 += 2 * RtlLengthSid(SeRegistryReadCapabilitySid) + 16;
        v10 += 2;
      }
      PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v13, 0x64536553u);
      v15 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v13);
        v16 = (unsigned int)Information;
        Ace = RtlCreateAcl(v15, v13, (ULONG)Information);
        if ( Ace < 0 )
          goto LABEL_22;
        if ( a2 )
        {
          v7 = a3 != 0 ? 0x10 : 0;
          Ace = RtlpAddKnownAce(v15, v16, v7 | 3u, 131097, (unsigned __int8 *)SeAllAppPackagesSid, 0);
          if ( Ace < 0 )
            goto LABEL_22;
          Ace = RtlpAddKnownAce(v15, v16, v7 | 0xAu, 0x80000000, (unsigned __int8 *)SeAllAppPackagesSid, 0);
          if ( Ace < 0 )
            goto LABEL_22;
        }
        if ( a4 )
        {
          if ( a5 )
            v7 = 16;
          Ace = RtlpAddKnownAce(v15, v16, v7 | 3u, 131097, (unsigned __int8 *)SeRegistryReadCapabilitySid, 0);
          if ( Ace < 0 )
            goto LABEL_22;
          Ace = RtlpAddKnownAce(v15, v16, v7 | 0xAu, 0x80000000, (unsigned __int8 *)SeRegistryReadCapabilitySid, 0);
          if ( Ace < 0 )
            goto LABEL_22;
        }
        Ace = RtlGetAce(Acl, 0, &Information);
        if ( Ace < 0 || (Ace = RtlAddAce(v15, v16, v10, Information, v12 - 8), Ace < 0) )
LABEL_22:
          ExFreePoolWithTag(v15, 0);
        else
          *v21 = v15;
        return Ace;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
