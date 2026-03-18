/*
 * XREFs of RtlpAddKnownAce @ 0x1404BBB70
 * Callers:
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14044F9F8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140484B90 (SepAppendAceToTokenObjectAcl.c)
 *     SepCreateImpersonationTokenDacl @ 0x1404BB8F0 (SepCreateImpersonationTokenDacl.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14050E064 (PspAllocateAndQueryNotificationChannel.c)
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 *     PiUEventInitClientRegistrationContext @ 0x140548A48 (PiUEventInitClientRegistrationContext.c)
 *     RtlAddAccessAllowedAce @ 0x1405498F0 (RtlAddAccessAllowedAce.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1405499E0 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14054A09C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14054A2BC (PspAllocateAndQueryProcessNotificationChannel.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14057B66C (_PnpGetPropertiesSecurityDescriptor.c)
 *     LocalGetAclForString @ 0x14057BEE8 (LocalGetAclForString.c)
 *     PopCreateNotificationName @ 0x1405994C8 (PopCreateNotificationName.c)
 *     RtlAddAccessAllowedAceEx @ 0x14059D5C0 (RtlAddAccessAllowedAceEx.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405ADB78 (PopCreateHiberFileSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x1405AFCB8 (BiCreateKeySecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x1405B22C8 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1405B289C (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x1405B2AA4 (MiCreateMemoryEventSD.c)
 *     MiSessionObjectCreate @ 0x1405B4ABC (MiSessionObjectCreate.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405C1760 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1405C2FF0 (CmpAdminSystemSecurityDescriptor.c)
 *     DbgkpCreateNotificationEvent @ 0x1405C474C (DbgkpCreateNotificationEvent.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x1405C7438 (ObpCreateDefaultObjectTypeSD.c)
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405D6474 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     SepInitializationPhase1 @ 0x1405D7CD4 (SepInitializationPhase1.c)
 *     RtlAddAccessDeniedAceEx @ 0x1405DAB80 (RtlAddAccessDeniedAceEx.c)
 *     PfpCreateEvent @ 0x1405DCE0C (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1405E2890 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405E9464 (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x1406C38CC (PiAuCheckTokenMembership.c)
 *     RtlAddAccessAllowedObjectAce @ 0x140720400 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x140720460 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x1407206D8 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x140720710 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x140720760 (RtlAddAuditAccessObjectAce.c)
 *     SepBuildDaclWithCriticalAces @ 0x1407303A4 (SepBuildDaclWithCriticalAces.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14073B910 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140760F4C (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407878BC (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14078A3BC (ObpGetSilosRootDirectory.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     RtlValidAcl @ 0x1404BC590 (RtlValidAcl.c)
 */

__int64 __fastcall RtlpAddKnownAce(PACL Acl, unsigned int a2, int a3, int a4, unsigned __int8 *Src, UCHAR a6)
{
  UCHAR v7; // bp
  unsigned __int8 AclRevision; // si
  PACL v10; // rax
  PACL v11; // r9
  unsigned int v12; // edx
  ACL *v13; // rdx
  USHORT v14; // cx
  __int64 result; // rax
  unsigned int v16; // eax

  v7 = a3;
  if ( (unsigned __int64)Src <= 0x7FFFFFFF0000LL || (*Src & 0xF) != 1 || Src[1] > 0xFu )
    return 3221225592LL;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  if ( AclRevision <= (unsigned __int8)a2 )
    AclRevision = a2;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    v16 = a3 & 0xFFFFFF20;
    if ( a6 != 2 )
      v16 = a3 & 0xFFFFFFE0;
    if ( v16 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(Acl) )
    return 3221225591LL;
  v10 = Acl + 1;
  v11 = 0LL;
  v12 = 0;
  if ( Acl->AceCount )
  {
    while ( v10 < (PACL)((char *)Acl + Acl->AclSize) )
    {
      ++v12;
      v10 = (PACL)((char *)v10 + v10->AclSize);
      if ( v12 >= Acl->AceCount )
        goto LABEL_13;
    }
    return 3221225591LL;
  }
LABEL_13:
  v13 = (PACL)((char *)Acl + Acl->AclSize);
  if ( v10 <= v13 )
    v11 = v10;
  v14 = 4 * (Src[1] + 4);
  if ( !v11 || (PACL)((char *)v11 + v14) > v13 )
    return 3221225625LL;
  v11->AclSize = v14;
  v11->Sbz1 = v7;
  v11->AclRevision = a6;
  *(_DWORD *)&v11->AceCount = a4;
  memmove(&v11[1], Src, 4 * (unsigned int)Src[1] + 8);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
