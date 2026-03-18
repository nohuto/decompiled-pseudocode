/*
 * XREFs of SepAdtPrivilegedServiceAuditAlarm @ 0x14046C574
 * Callers:
 *     NtPrivilegedServiceAuditAlarm @ 0x14046A39C (NtPrivilegedServiceAuditAlarm.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14050FBC8 (SePrivilegedServiceAuditAlarm.c)
 *     PfQuerySuperfetchInformation @ 0x14052B3F0 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140156510 (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x140167950 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14046C750 (SepAdtAuditPrivilegeUseWithContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14056432C (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAuditFailed @ 0x1406F9D10 (SepAuditFailed.c)
 */

void __fastcall SepAdtPrivilegedServiceAuditAlarm(
        int a1,
        const int *a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        int *a6,
        char a7)
{
  __int64 *v8; // r8
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // esi
  __int64 *v12; // rax
  __int64 v13; // r13
  const int *v14; // r15
  __int64 v15; // rbx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // [rsp+38h] [rbp-D0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C8h] BYREF
  const int *v23; // [rsp+48h] [rbp-C0h]
  struct _LIST_ENTRY *Flink; // [rsp+50h] [rbp-B8h]
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  P = 0LL;
  v8 = &v21;
  v23 = a2;
  LOBYTE(a2) = a7;
  LOBYTE(v8) = a7 == 0;
  if ( (unsigned __int8)SepAdtAuditPrivilegeUseWithContext((_DWORD)a6, (_DWORD)a2, (_DWORD)v8, a1, (__int64)&v21) )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
    AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &P);
    if ( AllocatedFullProcessImageName >= 0 )
    {
      if ( a4 )
        v12 = *(__int64 **)(a4 + 152);
      else
        v12 = *(__int64 **)(a5 + 152);
      v13 = *v12;
      v14 = &SeSubsystemName;
      v15 = *(_QWORD *)(a5 + 24);
      if ( v23 )
        v14 = v23;
      memset(Src, 0, 0x418uLL);
      Src[0] = 0x124100000004LL;
      LOWORD(Src[2]) = v21;
      WORD1(Src[2]) = 8;
      if ( !a7 )
        WORD1(Src[2]) = 16;
      v16 = *(unsigned __int8 *)(v13 + 1);
      LODWORD(Src[3]) = 4;
      v17 = *(unsigned __int16 *)v14 + 16;
      Src[6] = v13;
      LODWORD(Src[7]) = 1;
      HIDWORD(Src[3]) = 4 * v16 + 8;
      HIDWORD(Src[7]) = v17;
      Src[10] = v14;
      Src[11] = 0x800000005LL;
      if ( a4 )
        Src[12] = *(_QWORD *)(a4 + 24);
      else
        Src[12] = v15;
      LODWORD(Src[15]) = 1;
      HIDWORD(Src[15]) = v17;
      Src[18] = v14;
      if ( a3 )
      {
        v18 = *a3;
        LODWORD(Src[19]) = 1;
        HIDWORD(Src[19]) = v18 + 16;
        Src[22] = a3;
      }
      if ( a6 )
      {
        v19 = *a6;
        if ( *a6 )
        {
          LODWORD(Src[23]) = 8;
          Src[26] = a6;
          HIDWORD(Src[23]) = 12 * v19 + 8;
        }
      }
      Src[28] = Flink;
      Src[34] = P;
      v20 = *(unsigned __int16 *)P + 16;
      Src[27] = 0x80000000BLL;
      HIDWORD(Src[31]) = v20;
      LODWORD(Src[31]) = 2;
      LODWORD(Src[1]) = 8;
      SepAdtLogAuditRecord(Src);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( AllocatedFullProcessImageName < 0 )
      SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  }
}
