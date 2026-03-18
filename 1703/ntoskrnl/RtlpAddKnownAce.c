/*
 * XREFs of RtlpAddKnownAce @ 0x14050C130
 * Callers:
 *     PopCreateNotificationName @ 0x1404596A4 (PopCreateNotificationName.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140469F00 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1404A1E64 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PiUEventInitClientRegistrationContext @ 0x1404A4498 (PiUEventInitClientRegistrationContext.c)
 *     RtlAddAccessAllowedAce @ 0x1404A57B0 (RtlAddAccessAllowedAce.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404F4620 (SepAppendAceToTokenObjectAcl.c)
 *     SepCreateImpersonationTokenDacl @ 0x14050BEC0 (SepCreateImpersonationTokenDacl.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140560A90 (PspAllocateAndQueryNotificationChannel.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14056CE48 (RtlpSysVolCreateSecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x14057E230 (MiSessionObjectCreate.c)
 *     LocalGetAclForString @ 0x14057F594 (LocalGetAclForString.c)
 *     BiCreateKeySecurityDescriptor @ 0x14058BA78 (BiCreateKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405971D4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14059F218 (ObpCreateDefaultObjectTypeSD.c)
 *     ObCreateKernelObjectsSD @ 0x1405A2BA8 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1405A2F64 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x1405A316C (MiCreateMemoryEventSD.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A4DF0 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1405A68C8 (CmpAdminSystemSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405C43B4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     SepInitializationPhase1 @ 0x1405C48E0 (SepInitializationPhase1.c)
 *     RtlAddAccessAllowedAceEx @ 0x1405C6EE0 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAccessDeniedAceEx @ 0x1405C6FA0 (RtlAddAccessDeniedAceEx.c)
 *     PfpCreateEvent @ 0x1405C8E6C (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1405CDB60 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405CFE64 (_PnpGetEnumSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405D2594 (PopCreateHiberFileSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x140697E4C (PiAuCheckTokenMembership.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406E011C (PspAllocateAndQueryProcessNotificationChannel.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1406E8620 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1406E8680 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x1406E88E4 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x1406E8910 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x1406E8960 (RtlAddAuditAccessObjectAce.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x1406F87EC (SepBuildDaclWithAllApplicationPackageSid.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14070360C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x14072104C (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407453E0 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x140747B7C (ObpGetSilosRootDirectory.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     RtlValidAcl @ 0x14050C290 (RtlValidAcl.c)
 */

__int64 __fastcall RtlpAddKnownAce(ACL *a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, UCHAR a6)
{
  UCHAR v7; // bp
  unsigned __int8 AclRevision; // si
  unsigned int v10; // eax
  USHORT AceCount; // r10
  ACL *v12; // rax
  ACL *v13; // r9
  unsigned int v14; // edx
  ACL *v15; // rdx
  USHORT v16; // cx
  __int64 result; // rax

  v7 = a3;
  if ( (unsigned __int64)Src <= 0x7FFFFFFF0000LL || (*Src & 0xF) != 1 || Src[1] > 0xFu )
    return 3221225592LL;
  AclRevision = a1->AclRevision;
  if ( a1->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  if ( AclRevision <= (unsigned __int8)a2 )
    AclRevision = a2;
  v10 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
      v10 = a3 & 0xFFFFFF20;
    if ( v10 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(a1) )
    return 3221225591LL;
  AceCount = a1->AceCount;
  v12 = a1 + 1;
  v13 = 0LL;
  v14 = 0;
  if ( AceCount )
  {
    while ( v12 < (ACL *)((char *)a1 + a1->AclSize) )
    {
      ++v14;
      v12 = (ACL *)((char *)v12 + v12->AclSize);
      if ( v14 >= AceCount )
        goto LABEL_13;
    }
    return 3221225591LL;
  }
LABEL_13:
  v15 = (ACL *)((char *)a1 + a1->AclSize);
  if ( v12 <= v15 )
    v13 = v12;
  v16 = 4 * (Src[1] + 4);
  if ( !v13 || (ACL *)((char *)v13 + v16) > v15 )
    return 3221225625LL;
  v13->AclSize = v16;
  v13->Sbz1 = v7;
  v13->AclRevision = a6;
  *(_DWORD *)&v13->AceCount = a4;
  memmove(&v13[1], Src, 4 * (unsigned int)Src[1] + 8);
  ++a1->AceCount;
  result = 0LL;
  a1->AclRevision = AclRevision;
  return result;
}
