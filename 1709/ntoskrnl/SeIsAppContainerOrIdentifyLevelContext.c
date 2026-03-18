/*
 * XREFs of SeIsAppContainerOrIdentifyLevelContext @ 0x1404F1C68
 * Callers:
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PopPowerRequestActionInfo @ 0x1404F1B94 (PopPowerRequestActionInfo.c)
 *     PfpPrivSourceEnum @ 0x1404FD22C (PfpPrivSourceEnum.c)
 * Callees:
 *     SeAccessCheck @ 0x14007E440 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall SeIsAppContainerOrIdentifyLevelContext(PSECURITY_SUBJECT_CONTEXT SubjectContext, _BYTE *a2)
{
  char v2; // si
  PSECURITY_SUBJECT_CONTEXT p_SubjectContexta; // rbx
  unsigned int v5; // edi
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  *a2 = 1;
  p_SubjectContexta = SubjectContext;
  if ( !SubjectContext )
  {
    SeCaptureSubjectContext(&SubjectContexta);
    p_SubjectContexta = &SubjectContexta;
    v2 = 1;
  }
  if ( SeAccessCheck(
         SeNullDaclSd,
         p_SubjectContexta,
         0,
         1u,
         0,
         0LL,
         (PGENERIC_MAPPING)&SystemContextGenericMapping,
         1,
         &GrantedAccess,
         &AccessStatus) )
  {
    *a2 = 0;
  }
  v5 = 0;
  if ( AccessStatus != -1073741790 )
    v5 = AccessStatus;
  if ( v2 )
    SeReleaseSubjectContext(p_SubjectContexta);
  return v5;
}
