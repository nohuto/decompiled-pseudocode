/*
 * XREFs of SeLockSubjectContext @ 0x1404A6DD0
 * Callers:
 *     SepTrustLevelCheck @ 0x14006A120 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
 *     IopCreateSecurityCheck @ 0x140129858 (IopCreateSecurityCheck.c)
 *     SepCommonAccessCheckEx @ 0x14014204C (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 *     ObpCheckObjectReference @ 0x140484944 (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x140486D00 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x140487DB0 (ObCheckObjectAccess.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     PspIsContextAdmin @ 0x140512CA0 (PspIsContextAdmin.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14054903C (ObpVerifyCreatorAccessCheck.c)
 *     CMFCheckAccess @ 0x1405D5B14 (CMFCheckAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140692F64 (CmpCheckKeyBodyAccess.c)
 *     ObpCheckTraverseAccess @ 0x1406EFDB4 (ObpCheckTraverseAccess.c)
 *     EtwpCoverageUserIsAdmin @ 0x1406F7B1C (EtwpCoverageUserIsAdmin.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 */

void __stdcall SeLockSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext->PrimaryToken + 6), 1u);
  if ( SubjectContext->ClientToken )
  {
    v3 = KeGetCurrentThread();
    --v3->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext->ClientToken + 6), 1u);
  }
}
