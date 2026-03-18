/*
 * XREFs of RtlMapGenericMask @ 0x1404C8DF0
 * Callers:
 *     SepCreateAccessStateFromSubjectContext @ 0x1401052E0 (SepCreateAccessStateFromSubjectContext.c)
 *     ObDuplicateObject @ 0x1404B6D20 (ObDuplicateObject.c)
 *     RtlpCopyEffectiveAce @ 0x1404C8940 (RtlpCopyEffectiveAce.c)
 *     AlpcpCheckConnectionSecurity @ 0x1404DDFAC (AlpcpCheckConnectionSecurity.c)
 *     ObCaptureObjectStateForDuplication @ 0x140560818 (ObCaptureObjectStateForDuplication.c)
 *     ObpAdjustCreatorAccessState @ 0x140562B1C (ObpAdjustCreatorAccessState.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1405659B0 (CmpVEPerformOpenAccessCheck.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 *     IoCheckDesiredAccess @ 0x14071BD50 (IoCheckDesiredAccess.c)
 *     CMFCheckAccess @ 0x1407C8194 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C83C0 (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlMapGenericMask(PACCESS_MASK AccessMask, PGENERIC_MAPPING GenericMapping)
{
  ACCESS_MASK v2; // eax

  v2 = *AccessMask;
  if ( (*AccessMask & 0x80000000) != 0 )
  {
    v2 |= GenericMapping->GenericRead;
    *AccessMask = v2;
  }
  if ( (v2 & 0x40000000) != 0 )
  {
    v2 |= GenericMapping->GenericWrite;
    *AccessMask = v2;
  }
  if ( (v2 & 0x20000000) != 0 )
  {
    v2 |= GenericMapping->GenericExecute;
    *AccessMask = v2;
  }
  if ( (v2 & 0x10000000) != 0 )
  {
    v2 |= GenericMapping->GenericAll;
    *AccessMask = v2;
  }
  *AccessMask = v2 & 0xFFFFFFF;
}
