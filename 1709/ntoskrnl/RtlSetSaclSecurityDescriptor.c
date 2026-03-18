/*
 * XREFs of RtlSetSaclSecurityDescriptor @ 0x14054A4F0
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14000DEA8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     SepInitProcessAuditSd @ 0x1401511F4 (SepInitProcessAuditSd.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14025E0AC (SepBuildCapeSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1405499E0 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14054A188 (IopCreateSecurityDescriptorPerType.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14057B9FC (LocalConvertStringSDToSD_Rev1.c)
 *     CmpCopySaclToVirtualKey @ 0x140693140 (CmpCopySaclToVirtualKey.c)
 *     SepBuildObjectSecurityDescriptor @ 0x140730628 (SepBuildObjectSecurityDescriptor.c)
 *     ObInitSystem @ 0x140843034 (ObInitSystem.c)
 *     SeMakeSystemToken @ 0x14084AF38 (SeMakeSystemToken.c)
 *     SepInitSystemDacls @ 0x14084D144 (SepInitSystemDacls.c)
 *     ExpKeyedEventInitialization @ 0x140853288 (ExpKeyedEventInitialization.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        BOOLEAN SaclPresent,
        PACL Sacl,
        BOOLEAN SaclDefaulted)
{
  __int16 v5; // cx
  __int16 v6; // cx
  __int16 v8; // cx
  PACL v9; // rax
  __int16 v10; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v5 = *((_WORD *)SecurityDescriptor + 1);
  if ( v5 >= 0 )
  {
    if ( SaclPresent )
    {
      v8 = v5 | 0x10;
      v9 = 0LL;
      if ( Sacl )
        v9 = Sacl;
      *((_QWORD *)SecurityDescriptor + 3) = v9;
      v10 = v8 & 0xFFDF;
      *((_WORD *)SecurityDescriptor + 1) = v10;
      if ( !SaclDefaulted )
        return 0;
      v6 = v10 | 0x20;
    }
    else
    {
      v6 = v5 & 0xFFEF;
    }
    *((_WORD *)SecurityDescriptor + 1) = v6;
    return 0;
  }
  return -1073741703;
}
