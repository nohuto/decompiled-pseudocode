/*
 * XREFs of SepAdtPrivilegeObjectAuditAlarm @ 0x1404D591C
 * Callers:
 *     SePrivilegeObjectAuditAlarm @ 0x1404D58C0 (SePrivilegeObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeAuditHandleCreation @ 0x140577208 (SeAuditHandleCreation.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 *     NtOpenObjectAuditAlarm @ 0x1405DFF70 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14061118C (NtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140653BD0 (SeOpenObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x1400BAFE0 (PsGetCurrentThreadProcess.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     SepAdtLogAuditRecord @ 0x14017FF54 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x1404D59E0 (SepAdtAuditPrivilegeUseWithContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14050E924 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x140759094 (ObNormalizeHandleValue.c)
 *     SepAuditFailed @ 0x140795050 (SepAuditFailed.c)
 */

char __fastcall SepAdtPrivilegeObjectAuditAlarm(
        const int *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        int *a9,
        char a10)
{
  unsigned __int16 *v10; // r12
  unsigned __int16 *v11; // rsi
  PSID *v13; // rax
  unsigned __int8 *v14; // r13
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // eax
  const int *v17; // r15
  __int64 v18; // rbx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  unsigned int v23; // r8d
  __int64 v24; // r9
  unsigned int v25; // r10d
  int v26; // r11d
  int v27; // eax
  __int64 v28; // [rsp+38h] [rbp-D0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C8h] BYREF
  const int *v30; // [rsp+48h] [rbp-C0h]
  __int64 v31; // [rsp+50h] [rbp-B8h]
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  v10 = a3;
  P = 0LL;
  v11 = a2;
  v30 = a1;
  LOBYTE(a2) = a10;
  v31 = a4;
  LOBYTE(a3) = a10 == 0;
  if ( !(unsigned __int8)SepAdtAuditPrivilegeUseWithContext((_DWORD)a9, (_DWORD)a2, (_DWORD)a3, 0, (__int64)&v28) )
    return 0;
  v13 = a5 ? *(PSID **)(a5 + 152) : *(PSID **)(a6 + 152);
  v14 = (unsigned __int8 *)*v13;
  if ( RtlEqualSid(SeLocalSystemSid, *v13) )
    return 0;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &P);
  if ( AllocatedFullProcessImageName < 0 )
  {
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
    return 0;
  }
  v17 = &SeSubsystemName;
  v18 = *(_QWORD *)(a6 + 24);
  if ( v30 )
    v17 = v30;
  memset(Src, 0, 0x418uLL);
  Src[0] = 0x124200000004LL;
  LOWORD(Src[2]) = v28;
  WORD1(Src[2]) = 8;
  if ( !a10 )
    WORD1(Src[2]) = 16;
  v19 = v14[1];
  v20 = *(unsigned __int16 *)v17 + 16;
  Src[6] = v14;
  LODWORD(Src[3]) = 4;
  LODWORD(Src[7]) = 1;
  HIDWORD(Src[3]) = 4 * v19 + 8;
  HIDWORD(Src[7]) = v20;
  Src[10] = v17;
  Src[11] = 0x800000005LL;
  if ( a5 )
    Src[12] = *(_QWORD *)(a5 + 24);
  else
    Src[12] = v18;
  LODWORD(Src[15]) = 1;
  HIDWORD(Src[15]) = v20;
  Src[18] = v17;
  if ( v11 )
  {
    v21 = *v11 + 16;
    LODWORD(Src[19]) = 1;
    HIDWORD(Src[19]) = v21;
    Src[22] = v11;
  }
  if ( v10 )
  {
    v22 = *v10 + 16;
    LODWORD(Src[23]) = 2;
    HIDWORD(Src[23]) = v22;
    Src[26] = v10;
  }
  Src[27] = 0x80000000BLL;
  Src[28] = ObNormalizeHandleValue(v31);
  Src[32] = a8;
  HIDWORD(Src[31]) = v24;
  if ( v11 )
  {
    LODWORD(Src[31]) = 7;
    Src[33] = v24;
  }
  else
  {
    LODWORD(Src[31]) = 3;
  }
  if ( a9 )
  {
    v27 = *a9;
    if ( *a9 )
    {
      LODWORD(Src[35]) = v23;
      Src[38] = a9;
      HIDWORD(Src[35]) = 12 * v27 + 8;
    }
  }
  Src[40] = a7;
  Src[39] = __PAIR64__(v23, v25);
  HIDWORD(Src[43]) = v26 + *(unsigned __int16 *)P;
  LODWORD(Src[43]) = 2;
  Src[46] = P;
  LODWORD(Src[1]) = v25;
  SepAdtLogAuditRecord(Src);
  ExFreePoolWithTag(P, 0);
  return 1;
}
