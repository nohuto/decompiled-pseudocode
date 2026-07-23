/*
 * XREFs of SepCheckCreateLowBox @ 0x14059942C
 * Callers:
 *     NtCreateLowBoxToken @ 0x140549290 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlIsParentOfChildAppContainer @ 0x1404485C8 (RtlIsParentOfChildAppContainer.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall SepCheckCreateLowBox(PSID ChildAppContainerSid)
{
  int IsParentOfChildAppContainer; // ebx
  char v3; // di
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  IsParentOfChildAppContainer = 0;
  v3 = 1;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  if ( SubjectContext.ClientToken )
  {
    if ( SubjectContext.ImpersonationLevel < SecurityImpersonation )
    {
      v3 = 0;
      goto LABEL_4;
    }
  }
  else
  {
    ClientToken = SubjectContext.PrimaryToken;
  }
  IsParentOfChildAppContainer = *((_DWORD *)ClientToken + 50) & 0x2000;
LABEL_4:
  if ( !IsParentOfChildAppContainer && v3 && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 )
    IsParentOfChildAppContainer = RtlIsParentOfChildAppContainer(*((PSID *)ClientToken + 98), ChildAppContainerSid);
  SeReleaseSubjectContext(&SubjectContext);
  return IsParentOfChildAppContainer == 0 ? 0xC0000022 : 0;
}
