/*
 * XREFs of RtlSetSaclSecurityDescriptor @ 0x140541FE0
 * Callers:
 *     SepInitProcessAuditSd @ 0x140180424 (SepInitProcessAuditSd.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140221EE4 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14029FA3C (SepBuildCapeSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140540BA0 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateSecurityDescriptorPerType @ 0x140541ABC (IopCreateSecurityDescriptorPerType.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140600EC4 (LocalConvertStringSDToSD_Rev1.c)
 *     CmpCopySaclToVirtualKey @ 0x1406F6030 (CmpCopySaclToVirtualKey.c)
 *     ExpKeyedEventInitialization @ 0x14089EE78 (ExpKeyedEventInitialization.c)
 *     ObInitSystem @ 0x1408A15F4 (ObInitSystem.c)
 *     SeMakeSystemToken @ 0x1408BCBA0 (SeMakeSystemToken.c)
 *     SepInitSystemDacls @ 0x1408BEDD8 (SepInitSystemDacls.c)
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
