/*
 * XREFs of SeAuditingWithTokenForSubcategory @ 0x1404ECCC0
 * Callers:
 *     ObDuplicateObject @ 0x1404B6D20 (ObDuplicateObject.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     ObInitProcess @ 0x1404EAAEC (ObInitProcess.c)
 *     PspInsertProcess @ 0x1404EABB0 (PspInsertProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x1404ECBE0 (SepAdtTokenRightAdjusted.c)
 *     ObCompleteObjectDuplication @ 0x14055DE6C (ObCompleteObjectDuplication.c)
 *     PipClearDevNodeProblem @ 0x1405C73B4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1405C7484 (PipSetDevNodeProblem.c)
 *     PipProcessStartPhase3 @ 0x1405CACE8 (PipProcessStartPhase3.c)
 *     PiPnpRtlSetObjectProperty @ 0x1405D1C74 (PiPnpRtlSetObjectProperty.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1405DA058 (PiPnpRtlSetDeviceRegProperty.c)
 *     SeAssignPrimaryToken @ 0x140640A5C (SeAssignPrimaryToken.c)
 *     SeExchangePrimaryToken @ 0x140640AD0 (SeExchangePrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14078CF24 (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x14006A4F8 (SepAuditingForSubCategory.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140790574 (SepAdtIncorporatePerUserPolicy.c)
 */

char __fastcall SeAuditingWithTokenForSubcategory(int a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // edx
  int PrimaryToken; // r9d
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+60h] [rbp+8h] BYREF

  v3 = (unsigned int)(a1 - 100);
  v8 = SepAuditingForSubCategory(a1, 1);
  if ( SepTokenPolicyCounter[v3] )
  {
    if ( a2 )
    {
      PrimaryToken = a2;
    }
    else
    {
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContext(&SubjectContext);
      PrimaryToken = (int)SubjectContext.PrimaryToken;
      if ( SubjectContext.ClientToken )
        PrimaryToken = (int)SubjectContext.ClientToken;
    }
    LOBYTE(v4) = 1;
    SepAdtIncorporatePerUserPolicy(v3, v4, 0, PrimaryToken, (__int64)&v8);
    if ( !a2 )
      SeReleaseSubjectContext(&SubjectContext);
  }
  return v8;
}
