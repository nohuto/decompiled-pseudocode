/*
 * XREFs of EtwpCheckProviderLoggingAccess @ 0x1404EFE30
 * Callers:
 *     EtwpIsRegEntryAllowed @ 0x1404EFD60 (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1404C5AF0 (SeCaptureSubjectContextEx.c)
 *     EtwpCheckGuidAccess @ 0x1404EF040 (EtwpCheckGuidAccess.c)
 */

__int64 __fastcall EtwpCheckProviderLoggingAccess(__int64 a1, unsigned int *a2, char a3)
{
  unsigned int v5; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  if ( !a3 || (*(_BYTE *)(a1 + 98) & 1) != 0 )
    return 0LL;
  SeCaptureSubjectContextEx(0LL, *(PEPROCESS *)(a1 + 80), &SubjectContext);
  v5 = EtwpCheckGuidAccess(a2, 0x200u, &SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return v5;
}
