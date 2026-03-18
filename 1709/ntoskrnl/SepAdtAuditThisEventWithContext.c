/*
 * XREFs of SepAdtAuditThisEventWithContext @ 0x14046BDC0
 * Callers:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x140015130 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1400E4A30 (SeReportSecurityEventWithSubCategory.c)
 *     SepCommonAccessCheckEx @ 0x14014204C (SepCommonAccessCheckEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x14025ECC0 (SeAuditingFileEventsWithContextEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14046BB0C (SepAdtAuditObjectAccessWithContext.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046D3F0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14046D680 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeObjectReferenceAuditAlarm @ 0x1404852E4 (SeObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140487F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x14059ECA0 (SeAuditingHardLinkEventsWithContext.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1405E9290 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeAuditFipsCryptoSelftests @ 0x140729130 (SeAuditFipsCryptoSelftests.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14072A2B0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14072AC08 (SepAdtOpenObjectAuditAlarm.c)
 *     SeAuditingFileOrGlobalEvents @ 0x14072BF80 (SeAuditingFileOrGlobalEvents.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x1400151A0 (SepAuditingEnabledForSubcategory.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14046BE30 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x14072C1D4 (SepAdtIncorporatePerUserPolicy.c)
 *     SepAuditFailed @ 0x140731750 (SepAuditFailed.c)
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
