/*
 * XREFs of VfUtilIsLocalSystem @ 0x140765258
 * Callers:
 *     VfCheckUserHandle @ 0x1407767AC (VfCheckUserHandle.c)
 *     ViKeInjectStatusAlerted @ 0x1407783D4 (ViKeInjectStatusAlerted.c)
 * Callees:
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     IoGetFileObjectGenericMapping @ 0x14043E710 (IoGetFileObjectGenericMapping.c)
 *     SeCaptureSubjectContextEx @ 0x14050F760 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140765540 (ViInitializeLocalSystemDescriptor.c)
 */

__int64 __fastcall VfUtilIsLocalSystem(PEPROCESS Process)
{
  unsigned int v2; // ebx
  GENERIC_MAPPING *GenericMapping; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  if ( ViInitializeLocalSystemDescriptor() )
  {
    SeCaptureSubjectContextEx(0LL, Process, &SubjectContext);
    GenericMapping = IoGetFileObjectGenericMapping();
    v2 = SeAccessCheck(
           ViLocalSystemDescriptor,
           &SubjectContext,
           0,
           1u,
           0,
           0LL,
           GenericMapping,
           1,
           &GrantedAccess,
           &AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
  }
  else
  {
    return 1;
  }
  return v2;
}
