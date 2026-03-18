/*
 * XREFs of PnpGetCallerSessionId @ 0x1407275C8
 * Callers:
 *     PiCMQueryRemove @ 0x140737E40 (PiCMQueryRemove.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SeQuerySessionIdToken @ 0x140568610 (SeQuerySessionIdToken.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall PnpGetCallerSessionId(PULONG SessionId)
{
  PACCESS_TOKEN PrimaryToken; // rcx
  unsigned int SessionIdToken; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  SessionIdToken = SeQuerySessionIdToken(PrimaryToken, SessionId);
  SeReleaseSubjectContext(&SubjectContext);
  return SessionIdToken;
}
