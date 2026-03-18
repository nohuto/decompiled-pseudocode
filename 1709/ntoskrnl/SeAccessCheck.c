/*
 * XREFs of SeAccessCheck @ 0x14007E440
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x1400829D0 (SeComputeCreatorDeniedRights.c)
 *     IopCreateSecurityCheck @ 0x140129858 (IopCreateSecurityCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401E3B78 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     SeIsSystemContext @ 0x14025F074 (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x140279B0C (WdipAccessCheck.c)
 *     AlpcpCheckConnectionSecurity @ 0x140467994 (AlpcpCheckConnectionSecurity.c)
 *     CmpCheckNotifyAccess @ 0x14047D900 (CmpCheckNotifyAccess.c)
 *     ObpCheckObjectReference @ 0x140484944 (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x140486D00 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x140487DB0 (ObCheckObjectAccess.c)
 *     EtwpAccessCheck @ 0x140490118 (EtwpAccessCheck.c)
 *     EtwpRegisterUMGuid @ 0x140491780 (EtwpRegisterUMGuid.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 *     RtlIsSandboxedToken @ 0x1404C69F0 (RtlIsSandboxedToken.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1404F1C68 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     NtDeleteWnfStateName @ 0x1404FDBB8 (NtDeleteWnfStateName.c)
 *     ExpWnfCheckCallerAccess @ 0x140503078 (ExpWnfCheckCallerAccess.c)
 *     PiAuVerifyAccessToObject @ 0x14052894C (PiAuVerifyAccessToObject.c)
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 *     ExIsRestrictedCaller @ 0x14057D764 (ExIsRestrictedCaller.c)
 *     CmpCheckCreateAccess @ 0x140580534 (CmpCheckCreateAccess.c)
 *     CmpCheckSecurityCellAccess @ 0x1405977F4 (CmpCheckSecurityCellAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140598790 (ExpWnfCheckCrossScopeAccess.c)
 *     PopBootStatAccessCheck @ 0x1405ACC58 (PopBootStatAccessCheck.c)
 *     CMFCheckAccess @ 0x1405D5B14 (CMFCheckAccess.c)
 *     NtSetUuidSeed @ 0x1405E2890 (NtSetUuidSeed.c)
 *     NtDeleteWnfStateData @ 0x1405EBE04 (NtDeleteWnfStateData.c)
 *     CmpCheckKeyBodyAccess @ 0x140692F64 (CmpCheckKeyBodyAccess.c)
 *     PiAuCheckTokenMembership @ 0x1406C38CC (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x1406EFDB4 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x14071768C (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x14071AD14 (PspIumVerifyParentSd.c)
 *     VfUtilIsLocalSystem @ 0x1407A6E28 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
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
  return SeAccessCheckWithHint(
           SecurityDescriptor,
           0LL,
           SubjectSecurityContext,
           SubjectContextLocked,
           DesiredAccess,
           PreviouslyGrantedAccess,
           Privileges,
           GenericMapping,
           AccessMode,
           GrantedAccess,
           AccessStatus);
}
