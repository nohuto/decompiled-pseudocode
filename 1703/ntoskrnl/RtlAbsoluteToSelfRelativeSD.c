/*
 * XREFs of RtlAbsoluteToSelfRelativeSD @ 0x140572C00
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1401DF718 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1402474C4 (SepCheckAndCopySelfRelativeSD.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14057F358 (LocalConvertStringSDToSD_Rev1.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405971D4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405C43B4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405CFE64 (_PnpGetEnumSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x14072104C (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407453E0 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x14081D17C (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x14081D4F4 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlAbsoluteToSelfRelativeSD(
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PULONG BufferLength)
{
  if ( *((__int16 *)AbsoluteSecurityDescriptor + 1) >= 0 )
    return RtlMakeSelfRelativeSD(AbsoluteSecurityDescriptor, SelfRelativeSecurityDescriptor, BufferLength);
  else
    return -1073741593;
}
