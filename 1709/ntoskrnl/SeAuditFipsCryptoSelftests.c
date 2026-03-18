/*
 * XREFs of SeAuditFipsCryptoSelftests @ 0x140729130
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtLogAuditRecord @ 0x1401338F0 (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x14015C0D0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046BDC0 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14057D374 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAuditFailed @ 0x140731750 (SepAuditFailed.c)
 */

void __fastcall SeAuditFipsCryptoSelftests(unsigned __int8 a1, unsigned int a2)
{
  __int64 v2; // rsi
  int AllocatedFullProcessImageName; // ebx
  _QWORD **PrimaryToken; // rcx
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // r14
  int v8; // ecx
  PVOID P; // [rsp+20h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD Src[132]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = a2;
  SubjectContext.ImpersonationLevel = 0x80000000;
  AllocatedFullProcessImageName = 0;
  SubjectContext.ClientToken = 0LL;
  *(_OWORD *)&SubjectContext.PrimaryToken = 0LL;
  memset(Src, 0, 0x418uLL);
  P = 0LL;
  if ( (unsigned __int8)SepAdtAuditThisEventWithContext(102LL, a1, a1 == 0, 0LL) )
  {
    LOWORD(Src[2]) = 102;
    LODWORD(Src[0]) = 1;
    SeCaptureSubjectContext(&SubjectContext);
    PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
    LODWORD(Src[3]) = 4;
    if ( SubjectContext.ClientToken )
      PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
    Src[7] = 0x2000000001LL;
    LODWORD(Src[1]) = 2;
    Src[6] = *PrimaryToken[19];
    HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(Src[6] + 1LL) + 8;
    Src[10] = &SeSubsystemName;
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
    AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
    if ( AllocatedFullProcessImageName >= 0 )
    {
      Src[11] = 0x80000000BLL;
      Src[12] = Flink;
      v8 = *(unsigned __int16 *)P + 16;
      LODWORD(Src[15]) = 2;
      HIDWORD(Src[15]) = v8;
      Src[18] = P;
      LODWORD(Src[1]) = 4;
      if ( a1 )
      {
        HIDWORD(Src[0]) = 6417;
        WORD1(Src[2]) = 8;
      }
      else
      {
        HIDWORD(Src[0]) = 6418;
        WORD1(Src[2]) = 16;
        Src[19] = 0x40000000ALL;
        Src[20] = v2;
        LODWORD(Src[1]) = 5;
      }
      SepAdtLogAuditRecord(Src);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
}
