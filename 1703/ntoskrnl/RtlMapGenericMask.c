/*
 * XREFs of RtlMapGenericMask @ 0x140472660
 * Callers:
 *     SepCreateAccessStateFromSubjectContext @ 0x1400EE570 (SepCreateAccessStateFromSubjectContext.c)
 *     CMFCheckAccess @ 0x14041F098 (CMFCheckAccess.c)
 *     RtlpCopyEffectiveAce @ 0x1404721D0 (RtlpCopyEffectiveAce.c)
 *     AlpcpCheckConnectionSecurity @ 0x140472F48 (AlpcpCheckConnectionSecurity.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1404D4178 (CmpVEPerformOpenAccessCheck.c)
 *     ObpAdjustCreatorAccessState @ 0x1404F2E14 (ObpAdjustCreatorAccessState.c)
 *     ObCaptureObjectStateForDuplication @ 0x1405171E0 (ObCaptureObjectStateForDuplication.c)
 *     ObDuplicateObject @ 0x140517550 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     IoCheckDesiredAccess @ 0x14068B420 (IoCheckDesiredAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x14072104C (CMFCreateSecurityDescriptor.c)
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
