/*
 * XREFs of ExpCheckWakeTimerAccess @ 0x140586274
 * Callers:
 *     ExpSetTimer @ 0x140049460 (ExpSetTimer.c)
 *     ExpCheckIRTimerAccess @ 0x14045BCD8 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     SeCaptureSubjectContextEx @ 0x14050F760 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
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
    (ULONGLONG)ExpWakeTimerSecurityDescriptor,
    7,
    (int *)&SubjectContext,
    0,
    1u,
    0,
    0LL,
    (__int64)&ExTimerObjectType->TypeInfo.GenericMapping,
    1,
    &v4,
    (NTSTATUS *)&v3);
  SeReleaseSubjectContext(&SubjectContext);
  return v3;
}
