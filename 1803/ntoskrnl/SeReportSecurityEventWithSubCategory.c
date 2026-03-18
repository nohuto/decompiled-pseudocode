/*
 * XREFs of SeReportSecurityEventWithSubCategory @ 0x14006A290
 * Callers:
 *     SeReportSecurityEvent @ 0x1402A0610 (SeReportSecurityEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406F6578 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x14006A4F8 (SepAuditingForSubCategory.c)
 *     SepAdtLogAuditRecord @ 0x14017FF54 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x1404D5AA0 (SepAdtAuditThisEventWithContext.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 */

NTSTATUS __stdcall SeReportSecurityEventWithSubCategory(
        ULONG Flags,
        PUNICODE_STRING SourceName,
        PSID UserSid,
        PSE_ADT_PARAMETER_ARRAY AuditParameters,
        ULONG AuditSubcategoryId)
{
  __int64 v7; // r8
  PUNICODE_STRING v8; // r15
  unsigned __int8 *v9; // rdi
  __int64 ParameterCount; // rbx
  USHORT Type; // si
  PACCESS_TOKEN PrimaryToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r9
  ULONG AuditId; // edx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  int Length; // eax
  unsigned __int8 CurrentIrql; // [rsp+28h] [rbp-E0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  v7 = 0LL;
  v8 = SourceName;
  v9 = 0LL;
  if ( Flags )
    return -1073741811;
  if ( !SourceName )
    return -1073741811;
  if ( !SourceName->Buffer )
    return -1073741811;
  if ( !SourceName->Length )
    return -1073741811;
  if ( !AuditParameters )
    return -1073741811;
  if ( AuditSubcategoryId - 100 > 0x3A )
    return -1073741811;
  ParameterCount = AuditParameters->ParameterCount;
  if ( (unsigned int)ParameterCount > 0x1C )
    return -1073741811;
  Type = AuditParameters->Type;
  if ( (Type & 0x18) == 0 )
    return -1073741811;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    if ( UserSid )
    {
      v9 = (unsigned __int8 *)UserSid;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      v7 = 0LL;
      PrimaryToken = SubjectContext.PrimaryToken;
      Type = AuditParameters->Type;
      if ( SubjectContext.ClientToken )
        PrimaryToken = SubjectContext.ClientToken;
      v9 = (unsigned __int8 *)**((_QWORD **)PrimaryToken + 19);
    }
    p_SubjectContext = &SubjectContext;
    if ( v9 == UserSid )
      p_SubjectContext = 0LL;
    LOBYTE(v7) = Type == 16;
    LOBYTE(SourceName) = Type == 8;
    if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(AuditSubcategoryId, SourceName, v7, p_SubjectContext) )
      goto LABEL_11;
    Type = AuditParameters->Type;
    ParameterCount = AuditParameters->ParameterCount;
    goto LABEL_21;
  }
  LOBYTE(SourceName) = Type == 8;
  if ( (unsigned __int8)SepAuditingForSubCategory(AuditSubcategoryId, SourceName) )
  {
    v9 = (unsigned __int8 *)UserSid;
    if ( !UserSid )
      v9 = (unsigned __int8 *)SeLocalSystemSid;
LABEL_21:
    memset(Src, 0, 0x418uLL);
    AuditId = AuditParameters->AuditId;
    LODWORD(Src[0]) = AuditParameters->CategoryId;
    v16 = v9[1];
    HIDWORD(Src[0]) = AuditId;
    v17 = 2;
    LOWORD(Src[2]) = AuditSubcategoryId;
    WORD1(Src[2]) = Type;
    LODWORD(Src[3]) = 4;
    HIDWORD(Src[3]) = 4 * v16 + 8;
    Src[10] = &SeSubsystemName;
    Src[6] = v9;
    Src[7] = 0x2000000001LL;
    LODWORD(Src[1]) = 2;
    if ( AuditSubcategoryId == 122 )
    {
      HIDWORD(Src[2]) |= 6u;
      v17 = 3;
      Length = v8->Length;
      LODWORD(Src[11]) = 1;
      HIDWORD(Src[11]) = Length + 16;
      Src[14] = v8;
      LODWORD(Src[1]) = 3;
    }
    else
    {
      v18 = HIDWORD(Src[2]) | 8;
      HIDWORD(Src[2]) |= 8u;
      if ( AuditId < 0x5FF )
        HIDWORD(Src[2]) = v18 | 2;
    }
    memmove(&Src[4 * v17 + 3], AuditParameters->Parameters, 32 * ParameterCount);
    LODWORD(Src[1]) += ParameterCount;
    SepAdtLogAuditRecord(Src);
  }
LABEL_11:
  if ( CurrentIrql < 2u && v9 && v9 != UserSid )
    SeReleaseSubjectContext(&SubjectContext);
  return 0;
}
