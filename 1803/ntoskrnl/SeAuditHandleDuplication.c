/*
 * XREFs of SeAuditHandleDuplication @ 0x14078D694
 * Callers:
 *     ObDuplicateObject @ 0x1404B6D20 (ObDuplicateObject.c)
 *     ObCompleteObjectDuplication @ 0x14055DE6C (ObCompleteObjectDuplication.c)
 *     ObAuditInheritedHandleProcedure @ 0x1407586A0 (ObAuditInheritedHandleProcedure.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x14017FF54 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     ObNormalizeHandleValue @ 0x140759094 (ObNormalizeHandleValue.c)
 */

void __fastcall SeAuditHandleDuplication(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *PrimaryToken; // rsi
  _QWORD **ClientToken; // rax
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
  v10 = *ClientToken[19];
  memset(Src, 0, 0x418uLL);
  v11 = *(unsigned __int8 *)(v10 + 1);
  LODWORD(Src[0]) = 3;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  LODWORD(Src[2]) = 524411;
  HIDWORD(Src[3]) = 4 * v11 + 8;
  HIDWORD(Src[0]) = 4690;
  Src[10] = &SeSubsystemName;
  Src[12] = PrimaryToken[3];
  LODWORD(Src[3]) = 4;
  Src[6] = v10;
  Src[7] = 0x2000000001LL;
  Src[11] = 0x800000005LL;
  Src[15] = 0x80000000BLL;
  Src[16] = ObNormalizeHandleValue(a1);
  Src[20] = *(_QWORD *)(a3 + 736);
  Src[19] = __PAIR64__(v13, v12);
  Src[23] = __PAIR64__(v13, v12);
  Src[24] = ObNormalizeHandleValue(a2);
  Src[28] = *(_QWORD *)(a4 + 736);
  Src[27] = __PAIR64__(v15, v14);
  LODWORD(Src[1]) = 7;
  SepAdtLogAuditRecord(Src);
  SeReleaseSubjectContext(&SubjectContext);
}
