/*
 * XREFs of SeReportSecurityEventWithSubCategory @ 0x1400E4A30
 * Callers:
 *     SeReportSecurityEvent @ 0x14025EB70 (SeReportSecurityEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406936A0 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x1400E4C94 (SepAuditingForSubCategory.c)
 *     SepAdtLogAuditRecord @ 0x1401338F0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046BDC0 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 */

NTSTATUS __stdcall SeReportSecurityEventWithSubCategory(
        ULONG Flags,
        PUNICODE_STRING SourceName,
        PSID UserSid,
        PSE_ADT_PARAMETER_ARRAY AuditParameters,
        ULONG AuditSubcategoryId)
{
  __int64 v7; // r8
  PUNICODE_STRING v8; // rbx
  unsigned __int8 *v9; // rdi
  USHORT Type; // ax
  unsigned __int8 CurrentIrql; // r13
  PACCESS_TOKEN PrimaryToken; // rcx
  USHORT v14; // ax
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r9
  ULONG AuditId; // edx
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // eax
  ULONG ParameterCount; // ebx
  int Length; // eax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF

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
  if ( AuditParameters->ParameterCount > 0x1C )
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
      if ( SubjectContext.ClientToken )
        PrimaryToken = SubjectContext.ClientToken;
      v9 = (unsigned __int8 *)**((_QWORD **)PrimaryToken + 19);
    }
    v14 = AuditParameters->Type;
    p_SubjectContext = &SubjectContext;
    if ( v9 == UserSid )
      p_SubjectContext = 0LL;
    LOBYTE(v7) = v14 == 16;
    LOBYTE(SourceName) = v14 == 8;
    if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(AuditSubcategoryId, SourceName, v7, p_SubjectContext) )
      goto LABEL_11;
    goto LABEL_20;
  }
  LOBYTE(SourceName) = Type == 8;
  if ( (unsigned __int8)SepAuditingForSubCategory(AuditSubcategoryId, SourceName) )
  {
    v9 = (unsigned __int8 *)SeLocalSystemSid;
    if ( UserSid )
      v9 = (unsigned __int8 *)UserSid;
LABEL_20:
    memset(Src, 0, 0x418uLL);
    AuditId = AuditParameters->AuditId;
    LODWORD(Src[0]) = AuditParameters->CategoryId;
    WORD1(Src[2]) = AuditParameters->Type;
    v17 = 2;
    v18 = v9[1];
    HIDWORD(Src[0]) = AuditId;
    LOWORD(Src[2]) = AuditSubcategoryId;
    LODWORD(Src[3]) = 4;
    Src[6] = v9;
    HIDWORD(Src[3]) = 4 * v18 + 8;
    Src[10] = &SeSubsystemName;
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
      v19 = HIDWORD(Src[2]) | 8;
      HIDWORD(Src[2]) |= 8u;
      if ( AuditId < 0x5FF )
        HIDWORD(Src[2]) = v19 | 2;
    }
    ParameterCount = AuditParameters->ParameterCount;
    memmove(&Src[4 * v17 + 3], AuditParameters->Parameters, 32LL * ParameterCount);
    LODWORD(Src[1]) += ParameterCount;
    SepAdtLogAuditRecord(Src);
  }
LABEL_11:
  if ( CurrentIrql < 2u && v9 && v9 != UserSid )
    SeReleaseSubjectContext(&SubjectContext);
  return 0;
}
