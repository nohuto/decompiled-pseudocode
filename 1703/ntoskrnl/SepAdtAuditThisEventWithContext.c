/*
 * XREFs of SepAdtAuditThisEventWithContext @ 0x14046C810
 * Callers:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x14003E070 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1400641B0 (SeReportSecurityEventWithSubCategory.c)
 *     SepCommonAccessCheckEx @ 0x1401326AC (SepCommonAccessCheckEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x140247590 (SeAuditingFileEventsWithContextEx.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x14045E8E0 (SeAuditingHardLinkEventsWithContext.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14046A2D4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046AED8 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14046C4F0 (SepAdtAuditObjectAccessWithContext.c)
 *     SeObjectReferenceAuditAlarm @ 0x1404F4DA4 (SeObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404F61D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1405D47B0 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeAuditFipsCryptoSelftests @ 0x1406F16B0 (SeAuditFipsCryptoSelftests.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1406F2820 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1406F3178 (SepAdtOpenObjectAuditAlarm.c)
 *     SeAuditingFileOrGlobalEvents @ 0x1406F44D0 (SeAuditingFileOrGlobalEvents.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x14003E0E0 (SepAuditingEnabledForSubcategory.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14046C880 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x1406F4774 (SepAdtIncorporatePerUserPolicy.c)
 *     SepAuditFailed @ 0x1406F9D10 (SepAuditFailed.c)
 */

__int64 __fastcall SepAdtAuditThisEventWithContext(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4)
{
  __int64 v7; // rbx
  bool v8; // di
  BOOL v10; // eax
  __int64 v11; // rdx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r15
  PACCESS_TOKEN ClientToken; // r9
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-38h] BYREF
  bool v15; // [rsp+70h] [rbp+8h] BYREF

  if ( (unsigned int)a1 <= 8 )
  {
    v10 = a2 != 0;
    v11 = v10 | 0x10u;
    if ( !a3 )
      v11 = v10;
    return SepAdtAuditThisEventByCategoryWithContext(a1, v11, a4);
  }
  else
  {
    v7 = (unsigned int)(a1 - 100);
    v15 = SepAuditingEnabledForSubcategory(a1, a2, a3);
    v8 = v15;
    if ( SepTokenPolicyCounter[v7] )
    {
      if ( a4 )
      {
        p_SubjectContext = a4;
      }
      else
      {
        p_SubjectContext = &SubjectContext;
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        SeCaptureSubjectContext(&SubjectContext);
      }
      ClientToken = p_SubjectContext->ClientToken;
      if ( p_SubjectContext->ClientToken || (ClientToken = p_SubjectContext->PrimaryToken) != 0LL )
      {
        SepAdtIncorporatePerUserPolicy(v7, a2, a3, (_DWORD)ClientToken, (__int64)&v15);
        v8 = v15;
      }
      else
      {
        SepAuditFailed(3221225596LL);
      }
      if ( !a4 )
        SeReleaseSubjectContext(p_SubjectContext);
    }
    return v8;
  }
}
