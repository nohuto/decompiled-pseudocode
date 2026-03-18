/*
 * XREFs of SepAdtLogAuditRecord @ 0x14017FF54
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x14006A290 (SeReportSecurityEventWithSubCategory.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1404D5808 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404D591C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x1404ECBE0 (SepAdtTokenRightAdjusted.c)
 *     SepAuditAssignPrimaryToken @ 0x140640D1C (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x140640FB0 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1406414B8 (SeAuditProcessCreation.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14078CF24 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14078D4C0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14078D694 (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x14078D850 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditProcessExit @ 0x14078DDCC (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14078DF4C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14078E100 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14078E334 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14078E650 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14078E854 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x14078EA90 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x14078EB84 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14078ED7C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14078EFAC (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x14078F840 (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14078FA84 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14078FD14 (SepAdtStagingEvent.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     SepQueueWorkItem @ 0x1400C33F8 (SepQueueWorkItem.c)
 *     SepRmDispatchDataToLsa @ 0x1400C7BA4 (SepRmDispatchDataToLsa.c)
 *     PsGetThreadServerSilo @ 0x1400E1718 (PsGetThreadServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     SepAdtMarshallAuditRecord @ 0x1401800A0 (SepAdtMarshallAuditRecord.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SepAuditFailedRaisedIrql @ 0x1402A1A08 (SepAuditFailedRaisedIrql.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SepAdtLogAuditFailureEvent @ 0x14078EB84 (SepAdtLogAuditFailureEvent.c)
 */

void __fastcall SepAdtLogAuditRecord(_DWORD *Src)
{
  unsigned __int8 CurrentIrql; // r15
  POOL_TYPE v3; // esi
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rbx
  void *ThreadServerSilo; // rax
  PVOID *v7; // r14
  int v8; // ebp
  PVOID v9; // rcx
  unsigned int v10; // ecx
  void *v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v15[48]; // [rsp+28h] [rbp-50h] BYREF

  if ( !SepRmAuditingEnabled && (Src[5] & 2) != 0 )
    return;
  CurrentIrql = KeGetCurrentIrql();
  v3 = NonPagedPoolNx;
  if ( CurrentIrql != 2 )
    v3 = PagedPool;
  PoolWithTag = ExAllocatePoolWithTag(v3, 0x40uLL, 0x69416553u);
  v5 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[5] = 0LL;
    *((_DWORD *)PoolWithTag + 12) = 0;
    *((_DWORD *)PoolWithTag + 5) = 1;
    *((_DWORD *)PoolWithTag + 8) = 1;
    ThreadServerSilo = (void *)PsGetThreadServerSilo((__int64)KeGetCurrentThread());
    *(_QWORD *)(v5 + 56) = ThreadServerSilo;
    if ( ThreadServerSilo )
      ObfReferenceObjectWithTag(ThreadServerSilo, 0x69416553u);
    v7 = (PVOID *)(v5 + 24);
    v8 = SepAdtMarshallAuditRecord(Src);
    if ( v8 < 0 )
    {
      v13 = *(void **)(v5 + 56);
      if ( v13 )
        ObfDereferenceObjectWithTag(v13, 0x69416553u);
      ExFreePoolWithTag((PVOID)v5, 0);
      SepAdtLastAuditFailStatus = v8;
      _InterlockedIncrement(&SepAdtAuditFailureCount);
      if ( Src[1] == 521 )
        goto LABEL_13;
      v12 = (unsigned int)v8;
      goto LABEL_31;
    }
    if ( SepRmAuditingEnabled || (v9 = *v7, (*((_DWORD *)*v7 + 5) & 2) == 0) )
    {
      v10 = *((_DWORD *)*v7 + 3);
      *(_DWORD *)(v5 + 36) = v10;
      if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
      {
        if ( v10 <= 0x1D0 )
        {
          KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0, (__int64)v15);
          SepRmDispatchDataToLsa(v5);
          KiUnstackDetachProcess((__int64)v15, 0LL);
        }
        goto LABEL_13;
      }
      v14[0] = 0;
      if ( SepQueueWorkItem((__int64)&SepLsaAuditQueueInfo, v5, v14) )
        goto LABEL_13;
      v11 = *(void **)(v5 + 56);
      if ( v11 )
        ObfDereferenceObjectWithTag(v11, 0x69416553u);
      ExFreePoolWithTag(*v7, 0);
      ExFreePoolWithTag((PVOID)v5, 0);
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
    if ( *(_QWORD *)(v5 + 56) )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 56), 0x69416553u);
      v9 = *(PVOID *)(v5 + 24);
    }
    ExFreePoolWithTag(v9, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
  }
  else if ( Src[1] != 521 )
  {
    SepAuditFailedRaisedIrql(3221225626LL);
  }
}
