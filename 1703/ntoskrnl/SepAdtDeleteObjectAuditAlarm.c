/*
 * XREFs of SepAdtDeleteObjectAuditAlarm @ 0x1406F2A24
 * Callers:
 *     NtDeleteObjectAuditAlarm @ 0x1406F4FFC (NtDeleteObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1406F51A0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140156510 (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x140167950 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14046C4F0 (SepAdtAuditObjectAccessWithContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14056432C (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x1406C11C4 (ObNormalizeHandleValue.c)
 *     SepAuditFailed @ 0x1406F9D10 (SepAuditFailed.c)
 */

void __fastcall SepAdtDeleteObjectAuditAlarm(
        const UNICODE_STRING *a1,
        unsigned __int64 a2,
        __int64 *a3,
        __int64 a4,
        _QWORD *a5,
        char a6)
{
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // eax
  _QWORD *v11; // rsi
  const int *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  unsigned int v19; // r8d
  _KPROCESS *v20; // rax
  unsigned __int16 v21; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v24[2]; // [rsp+470h] [rbp+370h] BYREF

  P = 0LL;
  v24[0] = 0LL;
  v24[1] = 0LL;
  if ( (unsigned __int8)SepAdtAuditObjectAccessWithContext(a4, a1, 1, 0, 0LL, a6, &v21) )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
    if ( AllocatedFullProcessImageName < 0 )
    {
      SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
    }
    else
    {
      v11 = v24;
      if ( a5 )
        v11 = a5;
      memset(Src, 0, 0x418uLL);
      v12 = &SeSubsystemName;
      v13 = *a3;
      LOWORD(Src[2]) = v21;
      if ( a1 )
        v12 = (const int *)a1;
      Src[0] = 0x123400000003LL;
      v14 = v13;
      WORD1(Src[2]) = 8;
      LODWORD(Src[3]) = 4;
      if ( !v13 )
        v14 = a3[2];
      HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(**(_QWORD **)(v14 + 152) + 1LL) + 8;
      v15 = v13;
      if ( !v13 )
        v15 = a3[2];
      v16 = *(_QWORD **)(v15 + 152);
      LODWORD(Src[7]) = 1;
      Src[10] = v12;
      Src[11] = 0x800000005LL;
      Src[6] = *v16;
      v17 = *(unsigned __int16 *)v12 + 16;
      HIDWORD(Src[7]) = v17;
      if ( !v13 )
        v13 = a3[2];
      v18 = *(_QWORD *)(v13 + 24);
      HIDWORD(Src[15]) = v17;
      Src[18] = v12;
      Src[19] = 0x80000000BLL;
      Src[12] = v18;
      LODWORD(Src[15]) = 1;
      Src[20] = ObNormalizeHandleValue(a2);
      Src[23] = v19 | 0x800000000LL;
      v20 = PsGetCurrentThreadProcess();
      LODWORD(Src[27]) = 2;
      Src[31] = 0x100000000DLL;
      Src[24] = v20[1].Header.WaitListHead.Flink;
      Src[30] = P;
      Src[34] = v11;
      LODWORD(Src[1]) = 8;
      HIDWORD(Src[27]) = *(unsigned __int16 *)P + 16;
      SepAdtLogAuditRecord(Src);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}
