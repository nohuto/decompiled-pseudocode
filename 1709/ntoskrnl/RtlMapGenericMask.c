/*
 * XREFs of RtlMapGenericMask @ 0x1404C0550
 * Callers:
 *     SepCreateAccessStateFromSubjectContext @ 0x140082000 (SepCreateAccessStateFromSubjectContext.c)
 *     AlpcpCheckConnectionSecurity @ 0x140467994 (AlpcpCheckConnectionSecurity.c)
 *     ObpAdjustCreatorAccessState @ 0x140484A78 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     RtlpCopyEffectiveAce @ 0x1404C0110 (RtlpCopyEffectiveAce.c)
 *     ObCaptureObjectStateForDuplication @ 0x140506A7C (ObCaptureObjectStateForDuplication.c)
 *     ObDuplicateObject @ 0x140507760 (ObDuplicateObject.c)
 *     CmpVEPerformOpenAccessCheck @ 0x140569CE0 (CmpVEPerformOpenAccessCheck.c)
 *     CMFCheckAccess @ 0x1405D5B14 (CMFCheckAccess.c)
 *     IoCheckDesiredAccess @ 0x1406B70C0 (IoCheckDesiredAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x140760F4C (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlMapGenericMask(PACCESS_MASK AccessMask, PGENERIC_MAPPING GenericMapping)
{
  if ( (*AccessMask & 0x80000000) != 0 )
    *AccessMask |= GenericMapping->GenericRead;
  if ( (*AccessMask & 0x40000000) != 0 )
    *AccessMask |= GenericMapping->GenericWrite;
  if ( (*AccessMask & 0x20000000) != 0 )
    *AccessMask |= GenericMapping->GenericExecute;
  if ( (*AccessMask & 0x10000000) != 0 )
    *AccessMask |= GenericMapping->GenericAll;
  *AccessMask &= 0xFFFFFFFu;
}
