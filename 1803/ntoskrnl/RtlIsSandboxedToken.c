/*
 * XREFs of RtlIsSandboxedToken @ 0x1404DD0B0
 * Callers:
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     IopCheckInitiatorHint @ 0x14012B520 (IopCheckInitiatorHint.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     NtDuplicateToken @ 0x1404DCD80 (NtDuplicateToken.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     ObpParseSymbolicLinkEx @ 0x14051B890 (ObpParseSymbolicLinkEx.c)
 *     SepFilterToken @ 0x140542044 (SepFilterToken.c)
 *     ObpCreateDirectoryObject @ 0x140568EF8 (ObpCreateDirectoryObject.c)
 *     CmpCheckCreateAccess @ 0x14056C5A8 (CmpCheckCreateAccess.c)
 *     ObCreateSymbolicLink @ 0x1405716D8 (ObCreateSymbolicLink.c)
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 * Callees:
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140063100 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 */

bool __fastcall RtlIsSandboxedToken(PSECURITY_SUBJECT_CONTEXT SubjectContext, KPROCESSOR_MODE a2)
{
  char v4; // di
  struct _SECURITY_SUBJECT_CONTEXT *v5; // rbx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContexta; // r14
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+50h] [rbp-48h] BYREF
  PVOID TokenInformation; // [rsp+A8h] [rbp+10h] BYREF
  NTSTATUS AccessStatus; // [rsp+B0h] [rbp+18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+B8h] [rbp+20h] BYREF

  v4 = 0;
  LODWORD(TokenInformation) = 0;
  v5 = 0LL;
  GrantedAccess = 0;
  AccessStatus = 0;
  if ( a2 )
  {
    if ( !SubjectContext )
      SeCaptureSubjectContext(&SubjectContexta);
    p_SubjectContexta = &SubjectContexta;
    if ( SubjectContext )
      p_SubjectContexta = SubjectContext;
    v5 = p_SubjectContexta;
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
      if ( !ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
        goto LABEL_8;
      ClientToken = p_SubjectContexta->ClientToken;
      if ( !p_SubjectContexta->ClientToken )
        ClientToken = p_SubjectContexta->PrimaryToken;
      if ( SeQueryInformationToken(ClientToken, TokenIsAppContainer, &TokenInformation) >= 0
        && !(_DWORD)TokenInformation )
      {
LABEL_8:
        v4 = 1;
      }
    }
  }
  else
  {
    v4 = 1;
  }
  if ( v5 == &SubjectContexta )
    SeReleaseSubjectContext(v5);
  return v4 != 1;
}
