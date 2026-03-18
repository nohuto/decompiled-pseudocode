/*
 * XREFs of ExpCheckWakeTimerAccess @ 0x1406128DC
 * Callers:
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     ExpCheckIRTimerAccess @ 0x140612828 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1400D47B0 (SeAccessCheckWithHint.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1405AE570 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall ExpCheckWakeTimerAccess(char a1)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v3; // [rsp+90h] [rbp+8h] BYREF
  char v4; // [rsp+98h] [rbp+10h] BYREF

  if ( !a1 )
    return 3221225506LL;
  SeCaptureSubjectContextEx(0LL, KeGetCurrentThread()->ApcState.Process, &SubjectContext);
  SeAccessCheckWithHint(
    (__int64)ExpWakeTimerSecurityDescriptor,
    7u,
    &SubjectContext,
    0,
    1,
    0,
    0LL,
    (__int64)&ExTimerObjectType->TypeInfo.GenericMapping,
    1,
    (__int64)&v4,
    (__int64)&v3);
  SeReleaseSubjectContext(&SubjectContext);
  return v3;
}
