/*
 * XREFs of EtwpCheckProviderLoggingAccess @ 0x14058C7B0
 * Callers:
 *     EtwpIsRegEntryAllowed @ 0x14058C6E4 (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x14058DC64 (EtwpCheckGuidAccess.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1405AE570 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall EtwpCheckProviderLoggingAccess(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  if ( !a3 || (*(_BYTE *)(a1 + 98) & 1) != 0 )
    return 0LL;
  SeCaptureSubjectContextEx(0LL, *(PEPROCESS *)(a1 + 80), &SubjectContext);
  v4 = EtwpCheckGuidAccess(a2, 512LL, &SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return v4;
}
