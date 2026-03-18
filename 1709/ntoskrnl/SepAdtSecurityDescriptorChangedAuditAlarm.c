/*
 * XREFs of SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14072B6E0
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046D3F0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14046D680 (SeTokenDefaultDaclChangedAuditAlarm.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x1401338F0 (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x14015C0D0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14057D374 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x1406EFC08 (ObNormalizeHandleValue.c)
 *     SepAuditFailed @ 0x140731750 (SepAuditFailed.c)
 *     SepSecurityDescriptorStrictLength @ 0x14073202C (SepSecurityDescriptorStrictLength.c)
 */

void __fastcall SepAdtSecurityDescriptorChangedAuditAlarm(
        __int64 *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // edi
  __int16 v15; // ax
  int v16; // edx
  int v17; // edx
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  PVOID P; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+30h] [rbp-D8h]
  struct _LIST_ENTRY *Flink; // [rsp+38h] [rbp-D0h]
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF

  P = 0LL;
  v26 = a9;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    memset(Src, 0, 0x418uLL);
    if ( (a8 & 8) != 0 )
    {
      Src[0] = 0x132B00000006LL;
      v15 = 139;
    }
    else
    {
      if ( (a8 & 0x20) != 0 )
      {
        HIDWORD(Src[0]) = 4911;
      }
      else
      {
        HIDWORD(Src[0]) = 4913;
        if ( (a8 & 0x40) == 0 )
          HIDWORD(Src[0]) = 4670;
      }
      LODWORD(Src[0]) = 3;
      v15 = 141;
    }
    v16 = *a2;
    LOWORD(Src[2]) = v15;
    v17 = v16 + 16;
    WORD1(Src[2]) = 8;
    v18 = *(unsigned __int8 *)(a6 + 1);
    LODWORD(Src[3]) = 4;
    Src[6] = a6;
    LODWORD(Src[7]) = 1;
    HIDWORD(Src[7]) = v17;
    HIDWORD(Src[3]) = 4 * v18 + 8;
    v19 = *a1;
    Src[10] = a2;
    Src[11] = 0x800000005LL;
    if ( v19 )
      Src[12] = *(_QWORD *)(v19 + 24);
    else
      Src[12] = *(_QWORD *)(a1[2] + 24);
    v20 = *a3 + 16;
    LODWORD(Src[15]) = 1;
    HIDWORD(Src[15]) = v17;
    Src[18] = a2;
    LODWORD(Src[19]) = 1;
    HIDWORD(Src[19]) = v20;
    Src[22] = a3;
    if ( a4 )
    {
      v21 = *a4;
      LODWORD(Src[23]) = 2;
      HIDWORD(Src[23]) = v21 + 16;
      Src[26] = a4;
    }
    Src[27] = 0x80000000BLL;
    Src[28] = ObNormalizeHandleValue(a5);
    LODWORD(Src[31]) = 24;
    v22 = SepSecurityDescriptorStrictLength(a7);
    Src[33] = 4LL;
    HIDWORD(Src[31]) = v22;
    Src[34] = a7;
    Src[32] = a8;
    LODWORD(Src[35]) = 24;
    HIDWORD(Src[35]) = SepSecurityDescriptorStrictLength(v26);
    Src[38] = v23;
    Src[40] = Flink;
    Src[46] = P;
    Src[36] = a8;
    v24 = *(unsigned __int16 *)P + 16;
    Src[37] = 4LL;
    HIDWORD(Src[43]) = v24;
    Src[39] = 0x80000000BLL;
    LODWORD(Src[43]) = 2;
    LODWORD(Src[1]) = 11;
    SepAdtLogAuditRecord(Src);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
}
