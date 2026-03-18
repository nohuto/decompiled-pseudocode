/*
 * XREFs of RtlpAddKnownAce @ 0x1404C76D0
 * Callers:
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404C20C0 (SepAppendAceToTokenObjectAcl.c)
 *     SepCreateImpersonationTokenDacl @ 0x1404C7454 (SepCreateImpersonationTokenDacl.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405349D0 (PspAllocateAndQueryNotificationChannel.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140540BA0 (ObpVerifyAccessToBoundaryEntry.c)
 *     RtlAddAccessAllowedAce @ 0x140541520 (RtlAddAccessAllowedAce.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1405419D0 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140541BF4 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PiUEventInitClientRegistrationContext @ 0x140542C18 (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x140582AF8 (PopCreateNotificationName.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1405C384C (RtlpSysVolCreateSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405E09D4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405E0F7C (_PnpGetPropertiesSecurityDescriptor.c)
 *     LocalGetAclForString @ 0x140601100 (LocalGetAclForString.c)
 *     RtlAddAccessAllowedAceEx @ 0x140605800 (RtlAddAccessAllowedAceEx.c)
 *     BiCreateKeySecurityDescriptor @ 0x140608EA0 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x14060A7FC (MiSessionObjectCreate.c)
 *     ObCreateKernelObjectsSD @ 0x14061CE70 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x14061D22C (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x14061D430 (MiCreateMemoryEventSD.c)
 *     DbgkpCreateNotificationEvent @ 0x140620BDC (DbgkpCreateNotificationEvent.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x140621F3C (ObpCreateDefaultObjectTypeSD.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1406269C4 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14062F244 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140630AC0 (CmpAdminSystemSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 *     SepInitializationPhase1 @ 0x140641CF0 (SepInitializationPhase1.c)
 *     RtlAddAccessDeniedAceEx @ 0x140644150 (RtlAddAccessDeniedAceEx.c)
 *     PfpCreateEvent @ 0x1406455CC (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x14064B320 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14064EBCC (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x1407299AC (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140729BE0 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140729E54 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlAddAccessAllowedObjectAce @ 0x140783B10 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x140783B70 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x140783DE8 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x140783E20 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x140783E70 (RtlAddAuditAccessObjectAce.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14079E914 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C83C0 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407F403C (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x1407F687C (ObpGetSilosRootDirectory.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     RtlValidAcl @ 0x1404C80D0 (RtlValidAcl.c)
 */

__int64 __fastcall RtlpAddKnownAce(PACL Acl, unsigned int a2, int a3, int a4, unsigned __int8 *Src, UCHAR a6)
{
  UCHAR v7; // bp
  UCHAR AclRevision; // cl
  UCHAR v10; // si
  PACL v11; // rcx
  unsigned int v12; // edx
  ACL *v13; // r8
  USHORT v14; // dx
  __int64 result; // rax
  unsigned int v16; // eax

  v7 = a3;
  if ( (unsigned __int64)Src <= 0x7FFFFFFF0000LL || (*Src & 0xF) != 1 || Src[1] > 0xFu )
    return 3221225592LL;
  AclRevision = Acl->AclRevision;
  if ( AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = AclRevision;
  if ( AclRevision <= (unsigned __int8)a2 )
    v10 = a2;
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
  v11 = Acl + 1;
  v12 = 0;
  if ( Acl->AceCount )
  {
    while ( v11 < (PACL)((char *)Acl + Acl->AclSize) )
    {
      ++v12;
      v11 = (PACL)((char *)v11 + v11->AclSize);
      if ( v12 >= Acl->AceCount )
        goto LABEL_13;
    }
    return 3221225591LL;
  }
LABEL_13:
  v13 = (PACL)((char *)Acl + Acl->AclSize);
  if ( v11 > v13 )
    v11 = 0LL;
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
  Acl->AclRevision = v10;
  return result;
}
