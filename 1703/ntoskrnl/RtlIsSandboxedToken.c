/*
 * XREFs of RtlIsSandboxedToken @ 0x1404767C0
 * Callers:
 *     IopCheckInitiatorHint @ 0x14001E214 (IopCheckInitiatorHint.c)
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     CmpCheckCreateAccess @ 0x14042B330 (CmpCheckCreateAccess.c)
 *     ObpCreateDirectoryObject @ 0x140442400 (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x14044515C (ObCreateSymbolicLink.c)
 *     SepFilterToken @ 0x14046CA74 (SepFilterToken.c)
 *     NtDuplicateToken @ 0x140476350 (NtDuplicateToken.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     ObpParseSymbolicLinkEx @ 0x1405604C0 (ObpParseSymbolicLinkEx.c)
 * Callees:
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1400EE140 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 */

bool __fastcall RtlIsSandboxedToken(PSECURITY_SUBJECT_CONTEXT SubjectContext, KPROCESSOR_MODE a2)
{
  bool v2; // di
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContexta; // rbx
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+50h] [rbp-38h] BYREF
  PVOID TokenInformation; // [rsp+98h] [rbp+10h] BYREF
  NTSTATUS AccessStatus; // [rsp+A0h] [rbp+18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+A8h] [rbp+20h] BYREF

  v2 = 0;
  LODWORD(TokenInformation) = 0;
  GrantedAccess = 0;
  p_SubjectContexta = 0LL;
  AccessStatus = 0;
  if ( a2 )
  {
    if ( SubjectContext )
    {
      p_SubjectContexta = SubjectContext;
    }
    else
    {
      p_SubjectContexta = &SubjectContexta;
      SeCaptureSubjectContext(&SubjectContexta);
    }
    if ( SeAccessCheck(
           SeMediumDaclSd,
           p_SubjectContexta,
           0,
           0x20000u,
           0,
           0LL,
           (PGENERIC_MAPPING)&RtlpRestrictedMapping,
           a2,
           &GrantedAccess,
           &AccessStatus) == 1 )
    {
      if ( ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
      {
        ClientToken = p_SubjectContexta->ClientToken;
        if ( !p_SubjectContexta->ClientToken )
          ClientToken = p_SubjectContexta->PrimaryToken;
        if ( SeQueryInformationToken(ClientToken, TokenIsAppContainer, &TokenInformation) >= 0 )
          v2 = (_DWORD)TokenInformation == 0;
      }
      else
      {
        v2 = 1;
      }
    }
  }
  else
  {
    v2 = 1;
  }
  if ( p_SubjectContexta == &SubjectContexta )
    SeReleaseSubjectContext(p_SubjectContexta);
  return !v2;
}
