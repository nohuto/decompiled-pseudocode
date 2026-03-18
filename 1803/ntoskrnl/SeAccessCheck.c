/*
 * XREFs of SeAccessCheck @ 0x140100B90
 * Callers:
 *     IopCreateSecurityCheck @ 0x14009EA00 (IopCreateSecurityCheck.c)
 *     SeComputeCreatorDeniedRights @ 0x1401047E0 (SeComputeCreatorDeniedRights.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x140221DC8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     SeIsSystemContext @ 0x1402A0B24 (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x1402ACDE0 (WdipAccessCheck.c)
 *     ExIsRestrictedCaller @ 0x14048C09C (ExIsRestrictedCaller.c)
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 *     ObpCheckObjectReference @ 0x1404C05AC (ObpCheckObjectReference.c)
 *     RtlpNewSecurityObject @ 0x1404C43A0 (RtlpNewSecurityObject.c)
 *     RtlIsSandboxedToken @ 0x1404DD0B0 (RtlIsSandboxedToken.c)
 *     AlpcpCheckConnectionSecurity @ 0x1404DDFAC (AlpcpCheckConnectionSecurity.c)
 *     CmpCheckNotifyAccess @ 0x1404E2560 (CmpCheckNotifyAccess.c)
 *     ExpWnfCheckCallerAccess @ 0x1404F699C (ExpWnfCheckCallerAccess.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140524180 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     ObCheckObjectAccess @ 0x14053E470 (ObCheckObjectAccess.c)
 *     ObCheckCreateObjectAccess @ 0x140561B00 (ObCheckCreateObjectAccess.c)
 *     CmpCheckSecurityCellAccess @ 0x14056251C (CmpCheckSecurityCellAccess.c)
 *     NtDeleteWnfStateName @ 0x140567140 (NtDeleteWnfStateName.c)
 *     CmpCheckCreateAccess @ 0x14056C5A8 (CmpCheckCreateAccess.c)
 *     PiAuVerifyAccessToObject @ 0x14056D570 (PiAuVerifyAccessToObject.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x14057CC28 (ExpWnfCheckCrossScopeAccess.c)
 *     EtwpAccessCheck @ 0x14058F44C (EtwpAccessCheck.c)
 *     EtwpRegisterUMGuid @ 0x140590090 (EtwpRegisterUMGuid.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     NtSetUuidSeed @ 0x14064B320 (NtSetUuidSeed.c)
 *     PopBootStatAccessCheck @ 0x1406501D4 (PopBootStatAccessCheck.c)
 *     NtDeleteWnfStateData @ 0x14065039C (NtDeleteWnfStateData.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F5E54 (CmpCheckKeyBodyAccess.c)
 *     PiAuCheckTokenMembership @ 0x1407299AC (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x140759244 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x14077B600 (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x14077E880 (PspIumVerifyParentSd.c)
 *     CMFCheckAccess @ 0x1407C8194 (CMFCheckAccess.c)
 *     VfUtilIsLocalSystem @ 0x140813FA8 (VfUtilIsLocalSystem.c)
 * Callees:
 *     InSMode @ 0x140100C70 (InSMode.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140100CF0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     SepLogAdminlessAccessFailure @ 0x14029FCE0 (SepLogAdminlessAccessFailure.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SeTokenIsAdmin @ 0x1404DFBC0 (SeTokenIsAdmin.c)
 *     SeLockSubjectContext @ 0x1405A4DC0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405A5520 (SeUnlockSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
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
  BOOLEAN v14; // di
  char v15; // di
  BOOLEAN v16; // bl
  BOOLEAN result; // al
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rcx
  BOOLEAN v19; // dl
  PSID **ClientToken; // rax
  int v21; // [rsp+40h] [rbp-88h]
  int v22; // [rsp+58h] [rbp-70h]
  struct _SECURITY_SUBJECT_CONTEXT *v23; // [rsp+60h] [rbp-68h]
  PSID **v24; // [rsp+68h] [rbp-60h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp-58h] BYREF
  BOOLEAN v26; // [rsp+D8h] [rbp+10h]
  BOOLEAN IsAdmin; // [rsp+E0h] [rbp+18h]

  v14 = 1;
  if ( KeGetCurrentIrql() > 1u || !(unsigned __int8)InSMode() )
    goto LABEL_3;
  if ( !SubjectSecurityContext )
    SeCaptureSubjectContext(&SubjectContext);
  p_SubjectContext = &SubjectContext;
  if ( SubjectSecurityContext )
    p_SubjectContext = SubjectSecurityContext;
  v19 = 0;
  v23 = p_SubjectContext;
  if ( SubjectSecurityContext )
    v19 = SubjectContextLocked;
  v26 = v19;
  if ( !v19 )
  {
    SeLockSubjectContext(p_SubjectContext);
    p_SubjectContext = v23;
  }
  ClientToken = (PSID **)p_SubjectContext->ClientToken;
  v24 = (PSID **)p_SubjectContext->ClientToken;
  if ( !p_SubjectContext->ClientToken )
  {
    ClientToken = (PSID **)p_SubjectContext->PrimaryToken;
    v24 = ClientToken;
  }
  IsAdmin = SeTokenIsAdmin(ClientToken);
  if ( IsAdmin )
    v14 = RtlEqualSid(SeLocalSystemSid, *v24[19]);
  if ( !v26 )
    SeUnlockSubjectContext(v23);
  if ( v23 == &SubjectContext )
    SeReleaseSubjectContext(v23);
  if ( IsAdmin && !v14 )
  {
    v15 = 1;
    result = SeAccessCheckWithHintWithAdminlessChecks(
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
               AccessStatus,
               1);
    if ( result )
      return result;
  }
  else
  {
LABEL_3:
    v15 = 0;
  }
  LOBYTE(v22) = 0;
  LOBYTE(v21) = AccessMode;
  v16 = SeAccessCheckWithHintWithAdminlessChecks(
          SecurityDescriptor,
          0LL,
          SubjectSecurityContext,
          SubjectContextLocked,
          DesiredAccess,
          PreviouslyGrantedAccess,
          Privileges,
          GenericMapping,
          v21,
          GrantedAccess,
          AccessStatus,
          v22);
  if ( v16 )
  {
    if ( v15 )
      SepLogAdminlessAccessFailure();
  }
  return v16;
}
