/*
 * XREFs of CmpIsSystemEntity @ 0x140565AF0
 * Callers:
 *     CmDoVirtualTest @ 0x1400BCF08 (CmDoVirtualTest.c)
 *     KCBNeedsVirtualImage @ 0x1400BCF48 (KCBNeedsVirtualImage.c)
 *     KCBNeedsVirtualImage_0 @ 0x140221E5C (KCBNeedsVirtualImage_0.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpVEExecuteOpenLogic @ 0x140552590 (CmpVEExecuteOpenLogic.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1405659B0 (CmpVEPerformOpenAccessCheck.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x1400BAFE0 (PsGetCurrentThreadProcess.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpIsVirtEnabledForSubject @ 0x140565BA4 (CmpIsVirtEnabledForSubject.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1405AE570 (SeCaptureSubjectContextEx.c)
 */

bool __fastcall CmpIsSystemEntity(char a1, struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext, int *a3)
{
  char v6; // bp
  bool v7; // bl
  int v9; // eax
  int v10; // eax
  struct _KPROCESS *CurrentThreadProcess; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !CmpVEEnabled )
    return 1;
  if ( a3 && (*a3 & 1) != 0 )
    return (*a3 & 2) != 0;
  if ( !a1 )
    return 1;
  if ( !p_SubjectContext )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    SeCaptureSubjectContextEx(KeGetCurrentThread(), CurrentThreadProcess, &SubjectContext);
    v6 = 1;
    p_SubjectContext = &SubjectContext;
  }
  v7 = (unsigned __int8)CmpIsVirtEnabledForSubject(p_SubjectContext) == 0;
  if ( a3 )
  {
    v9 = *a3 | 1;
    *a3 = v9;
    if ( v7 )
      v10 = v9 | 2;
    else
      v10 = v9 | 4;
    *a3 = v10;
  }
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  return v7;
}
