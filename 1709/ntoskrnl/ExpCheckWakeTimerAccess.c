/*
 * XREFs of ExpCheckWakeTimerAccess @ 0x1405F15A0
 * Callers:
 *     ExpSetTimer @ 0x1400E1930 (ExpSetTimer.c)
 *     ExpCheckIRTimerAccess @ 0x14059C904 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1404C5AF0 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall ExpCheckWakeTimerAccess(char a1)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v3; // [rsp+90h] [rbp+8h] BYREF
  int v4; // [rsp+98h] [rbp+10h] BYREF

  if ( !a1 )
    return 3221225506LL;
  SeCaptureSubjectContextEx(0LL, KeGetCurrentThread()->ApcState.Process, &SubjectContext);
  SeAccessCheckWithHint(
    (__int64)ExpWakeTimerSecurityDescriptor,
    7,
    (int *)&SubjectContext,
    0,
    1u,
    0,
    0LL,
    (__int64)&ExTimerObjectType->TypeInfo.GenericMapping,
    1,
    &v4,
    (int *)&v3);
  SeReleaseSubjectContext(&SubjectContext);
  return v3;
}
