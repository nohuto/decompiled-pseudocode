/*
 * XREFs of SeAuditingWithTokenForSubcategory @ 0x14053A2B0
 * Callers:
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     ObCompleteObjectDuplication @ 0x140506594 (ObCompleteObjectDuplication.c)
 *     ObDuplicateObject @ 0x140507760 (ObDuplicateObject.c)
 *     PiPnpRtlSetObjectProperty @ 0x14052F53C (PiPnpRtlSetObjectProperty.c)
 *     ObInitProcess @ 0x14053923C (ObInitProcess.c)
 *     PspInsertProcess @ 0x140539300 (PspInsertProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x14053A1CC (SepAdtTokenRightAdjusted.c)
 *     PipProcessStartPhase3 @ 0x140552400 (PipProcessStartPhase3.c)
 *     PipSetDevNodeProblem @ 0x14055DCFC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x14055DF68 (PipClearDevNodeProblem.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14059BFB0 (PiPnpRtlSetDeviceRegProperty.c)
 *     SeAssignPrimaryToken @ 0x1405F09B8 (SeAssignPrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140728B88 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeExchangePrimaryToken @ 0x14072E0A8 (SeExchangePrimaryToken.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x1400E4C94 (SepAuditingForSubCategory.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x14072C1D4 (SepAdtIncorporatePerUserPolicy.c)
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
