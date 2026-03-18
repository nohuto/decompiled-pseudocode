/*
 * XREFs of SepAdtPrivilegeObjectAuditAlarm @ 0x14046C68C
 * Callers:
 *     SeAuditHandleCreation @ 0x140458A5C (SeAuditHandleCreation.c)
 *     NtOpenObjectAuditAlarm @ 0x14046A60C (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 *     SePrivilegeObjectAuditAlarm @ 0x14046C630 (SePrivilegeObjectAuditAlarm.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1405C7568 (NtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1405D47B0 (SeOpenObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     SepAdtLogAuditRecord @ 0x140156510 (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x140167950 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14046C750 (SepAdtAuditPrivilegeUseWithContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14056432C (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x1406C11C4 (ObNormalizeHandleValue.c)
 *     SepAuditFailed @ 0x1406F9D10 (SepAuditFailed.c)
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
  __int64 *v11; // rdx
  unsigned __int16 *v12; // r12
  PSID *v14; // rax
  unsigned __int8 *v15; // r13
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // eax
  const int *v18; // r14
  __int64 v19; // rbx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  unsigned int v24; // r8d
  __int64 v25; // r9
  unsigned int v26; // r10d
  int v27; // r11d
  int v28; // eax
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C8h] BYREF
  const int *v31; // [rsp+48h] [rbp-C0h]
  __int64 v32; // [rsp+50h] [rbp-B8h]
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  P = 0LL;
  v11 = &v29;
  v31 = a1;
  v12 = a3;
  v32 = a4;
  LOBYTE(v11) = a10;
  LOBYTE(a3) = a10 == 0;
  if ( !(unsigned __int8)SepAdtAuditPrivilegeUseWithContext((_DWORD)a9, (_DWORD)v11, (_DWORD)a3, 0, (__int64)&v29) )
    return 0;
  v14 = a5 ? *(PSID **)(a5 + 152) : *(PSID **)(a6 + 152);
  v15 = (unsigned __int8 *)*v14;
  if ( RtlEqualSid(SeLocalSystemSid, *v14) )
    return 0;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &P);
  if ( AllocatedFullProcessImageName < 0 )
  {
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
    return 0;
  }
  v18 = &SeSubsystemName;
  v19 = *(_QWORD *)(a6 + 24);
  if ( v31 )
    v18 = v31;
  memset(Src, 0, 0x418uLL);
  Src[0] = 0x124200000004LL;
  LOWORD(Src[2]) = v29;
  WORD1(Src[2]) = 8;
  if ( !a10 )
    WORD1(Src[2]) = 16;
  v20 = v15[1];
  v21 = *(unsigned __int16 *)v18 + 16;
  Src[6] = v15;
  LODWORD(Src[3]) = 4;
  LODWORD(Src[7]) = 1;
  HIDWORD(Src[3]) = 4 * v20 + 8;
  HIDWORD(Src[7]) = v21;
  Src[10] = v18;
  Src[11] = 0x800000005LL;
  if ( a5 )
    Src[12] = *(_QWORD *)(a5 + 24);
  else
    Src[12] = v19;
  LODWORD(Src[15]) = 1;
  HIDWORD(Src[15]) = v21;
  Src[18] = v18;
  if ( a2 )
  {
    v22 = *a2 + 16;
    LODWORD(Src[19]) = 1;
    HIDWORD(Src[19]) = v22;
    Src[22] = a2;
  }
  if ( v12 )
  {
    v23 = *v12 + 16;
    LODWORD(Src[23]) = 2;
    HIDWORD(Src[23]) = v23;
    Src[26] = v12;
  }
  Src[27] = 0x80000000BLL;
  Src[28] = ObNormalizeHandleValue(v32);
  Src[32] = a8;
  HIDWORD(Src[31]) = v25;
  if ( a2 )
  {
    LODWORD(Src[31]) = 7;
    Src[33] = v25;
  }
  else
  {
    LODWORD(Src[31]) = 3;
  }
  if ( a9 )
  {
    v28 = *a9;
    if ( *a9 )
    {
      LODWORD(Src[35]) = v24;
      Src[38] = a9;
      HIDWORD(Src[35]) = 12 * v28 + 8;
    }
  }
  Src[40] = a7;
  Src[39] = __PAIR64__(v24, v26);
  HIDWORD(Src[43]) = v27 + *(unsigned __int16 *)P;
  LODWORD(Src[43]) = 2;
  Src[46] = P;
  LODWORD(Src[1]) = v26;
  SepAdtLogAuditRecord(Src);
  ExFreePoolWithTag(P, 0);
  return 1;
}
