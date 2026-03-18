/*
 * XREFs of SepAdtLogAuditRecord @ 0x1401338F0
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x1400E4A30 (SeReportSecurityEventWithSubCategory.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14046BB90 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14046BC3C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x14053A1CC (SepAdtTokenRightAdjusted.c)
 *     SeAuditProcessCreation @ 0x1405A71B4 (SeAuditProcessCreation.c)
 *     SeAuditBootConfiguration @ 0x1405DB528 (SeAuditBootConfiguration.c)
 *     SepAuditAssignPrimaryToken @ 0x1405F0A2C (SepAuditAssignPrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140728B88 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140729130 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x140729304 (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1407294C0 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditProcessExit @ 0x140729A2C (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140729BAC (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x140729D60 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x140729F94 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14072A2B0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14072A4B4 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x14072A6F0 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x14072A7E4 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14072A9D8 (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14072AC08 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x14072B49C (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14072B6E0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14072B970 (SepAdtStagingEvent.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     SepQueueWorkItem @ 0x140133A70 (SepQueueWorkItem.c)
 *     SepAdtMarshallAuditRecord @ 0x140133C3C (SepAdtMarshallAuditRecord.c)
 *     SepRmDispatchDataToLsa @ 0x14014C374 (SepRmDispatchDataToLsa.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SepAuditFailedRaisedIrql @ 0x14025FF68 (SepAuditFailedRaisedIrql.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SepAdtLogAuditFailureEvent @ 0x14072A7E4 (SepAdtLogAuditFailureEvent.c)
 */

void __fastcall SepAdtLogAuditRecord(_DWORD *Src)
{
  unsigned __int8 CurrentIrql; // r15
  POOL_TYPE v3; // edi
  char *PoolWithTag; // rax
  char *v5; // rbx
  void *CurrentServerSilo; // rax
  PVOID *v7; // r14
  int v8; // ebp
  unsigned int v9; // ecx
  void *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  char v14[8]; // [rsp+20h] [rbp-58h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v15; // [rsp+28h] [rbp-50h] BYREF

  if ( !SepRmAuditingEnabled && (Src[5] & 2) != 0 )
    return;
  CurrentIrql = KeGetCurrentIrql();
  v3 = NonPagedPoolNx;
  if ( CurrentIrql != 2 )
    v3 = PagedPool;
  PoolWithTag = (char *)ExAllocatePoolWithTag(v3, 0x40uLL, 0x69416553u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    *((_DWORD *)PoolWithTag + 12) = 0;
    *((_DWORD *)PoolWithTag + 5) = 1;
    *((_DWORD *)PoolWithTag + 8) = 1;
    CurrentServerSilo = (void *)PsGetCurrentServerSilo();
    *((_QWORD *)v5 + 7) = CurrentServerSilo;
    if ( CurrentServerSilo )
      ObfReferenceObjectWithTag(CurrentServerSilo, 0x69416553u);
    v7 = (PVOID *)(v5 + 24);
    v8 = SepAdtMarshallAuditRecord(Src);
    if ( v8 < 0 )
    {
      v13 = (void *)*((_QWORD *)v5 + 7);
      if ( v13 )
        ObfDereferenceObjectWithTag(v13, 0x69416553u);
      ExFreePoolWithTag(v5, 0);
      SepAdtLastAuditFailStatus = v8;
      _InterlockedIncrement(&SepAdtAuditFailureCount);
      if ( Src[1] == 521 )
        goto LABEL_13;
      v12 = (unsigned int)v8;
      goto LABEL_31;
    }
    if ( SepRmAuditingEnabled || (*((_DWORD *)*v7 + 5) & 2) == 0 )
    {
      v9 = *((_DWORD *)*v7 + 3);
      *((_DWORD *)v5 + 9) = v9;
      if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
      {
        if ( v9 <= 0x1D0 )
        {
          KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0, (__int64)&v15);
          SepRmDispatchDataToLsa(v5);
          KiUnstackDetachProcess(&v15, 0LL);
        }
        goto LABEL_13;
      }
      v14[0] = 0;
      if ( (unsigned __int8)SepQueueWorkItem(&SepLsaAuditQueueInfo, v5, v14) )
        goto LABEL_13;
      v11 = (void *)*((_QWORD *)v5 + 7);
      if ( v11 )
        ObfDereferenceObjectWithTag(v11, 0x69416553u);
      ExFreePoolWithTag(*v7, 0);
      ExFreePoolWithTag(v5, 0);
      if ( v14[0] )
        goto LABEL_13;
      v12 = 3221225473LL;
LABEL_31:
      SepAuditFailedRaisedIrql(v12);
LABEL_13:
      if ( SepAdtAuditFailureCount && CurrentIrql < 2u && Src[1] != 521 )
        SepAdtLogAuditFailureEvent((unsigned int)SepAdtLastAuditFailStatus, 0LL);
      return;
    }
    v10 = (void *)*((_QWORD *)v5 + 7);
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x69416553u);
    ExFreePoolWithTag(*v7, 0);
    ExFreePoolWithTag(v5, 0);
  }
  else if ( Src[1] != 521 )
  {
    SepAuditFailedRaisedIrql(3221225626LL);
  }
}
