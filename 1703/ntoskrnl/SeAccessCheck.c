/*
 * XREFs of SeAccessCheck @ 0x14008D750
 * Callers:
 *     IopCreateSecurityCheck @ 0x140032804 (IopCreateSecurityCheck.c)
 *     SeComputeCreatorDeniedRights @ 0x1400EDF40 (SeComputeCreatorDeniedRights.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401DF684 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     SeIsSystemContext @ 0x140247954 (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x1402526D0 (WdipAccessCheck.c)
 *     CMFCheckAccess @ 0x14041F098 (CMFCheckAccess.c)
 *     CmpCheckCreateAccess @ 0x14042B330 (CmpCheckCreateAccess.c)
 *     NtDeleteWnfStateName @ 0x140438840 (NtDeleteWnfStateName.c)
 *     ExIsRestrictedCaller @ 0x140443EE4 (ExIsRestrictedCaller.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404584F8 (ExpWnfCheckCrossScopeAccess.c)
 *     CmpCheckSecurityCellAccess @ 0x14045860C (CmpCheckSecurityCellAccess.c)
 *     AlpcpCheckConnectionSecurity @ 0x140472F48 (AlpcpCheckConnectionSecurity.c)
 *     RtlIsSandboxedToken @ 0x1404767C0 (RtlIsSandboxedToken.c)
 *     EtwpRegisterUMGuid @ 0x140480530 (EtwpRegisterUMGuid.c)
 *     CmpCheckNotifyAccess @ 0x14048E404 (CmpCheckNotifyAccess.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1404C7614 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PiAuVerifyAccessToObject @ 0x1404E4EF4 (PiAuVerifyAccessToObject.c)
 *     ExpWnfCheckCallerAccess @ 0x1404F0008 (ExpWnfCheckCallerAccess.c)
 *     EtwpAccessCheck @ 0x1404F2AB8 (EtwpAccessCheck.c)
 *     ObCheckCreateObjectAccess @ 0x1404F3120 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x1404F3890 (ObCheckObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1404F44E8 (ObpCheckObjectReference.c)
 *     RtlpNewSecurityObject @ 0x14051EA30 (RtlpNewSecurityObject.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     CmpCheckKeyBodyAccess @ 0x14056C688 (CmpCheckKeyBodyAccess.c)
 *     NtSetUuidSeed @ 0x1405CDB60 (NtSetUuidSeed.c)
 *     NtDeleteWnfStateData @ 0x1405D16C8 (NtDeleteWnfStateData.c)
 *     PiAuCheckTokenMembership @ 0x140697E4C (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x1406C1408 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x1406E13A8 (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x1406E4540 (PspIumVerifyParentSd.c)
 *     VfUtilIsLocalSystem @ 0x140765258 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 */

BOOLEAN __stdcall SeAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        BOOLEAN SubjectContextLocked,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK PreviouslyGrantedAccess,
        PPRIVILEGE_SET *Privileges,
        PGENERIC_MAPPING GenericMapping,
        KPROCESSOR_MODE AccessMode,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  return SeAccessCheckWithHint(SecurityDescriptor, 0LL, SubjectSecurityContext);
}
