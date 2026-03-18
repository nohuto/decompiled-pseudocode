/*
 * XREFs of RtlIsSandboxedToken @ 0x1404C69F0
 * Callers:
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     IopCheckInitiatorHint @ 0x140062424 (IopCheckInitiatorHint.c)
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     NtDuplicateToken @ 0x1404C66A0 (NtDuplicateToken.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     ObpParseSymbolicLinkEx @ 0x14051E840 (ObpParseSymbolicLinkEx.c)
 *     ObpCreateDirectoryObject @ 0x140579B14 (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x14058005C (ObCreateSymbolicLink.c)
 *     CmpCheckCreateAccess @ 0x140580534 (CmpCheckCreateAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x14007E440 (SeAccessCheck.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1400894E0 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
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
