/*
 * XREFs of SepAdtLogAuditRecord @ 0x140156510
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x1400641B0 (SeReportSecurityEventWithSubCategory.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14046C574 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14046C68C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x14049DA88 (SepAdtTokenRightAdjusted.c)
 *     SeAuditBootConfiguration @ 0x1405AB4EC (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1405AC188 (SeAuditProcessCreation.c)
 *     SepAuditAssignPrimaryToken @ 0x1405D4708 (SepAuditAssignPrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406F1108 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1406F16B0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x1406F1884 (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1406F1A30 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditProcessExit @ 0x1406F1F9C (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1406F211C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1406F22D0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1406F2504 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1406F2820 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1406F2A24 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x1406F2C60 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x1406F2D54 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1406F2F48 (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1406F3178 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x1406F3A0C (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406F3C50 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1406F3EE0 (SepAdtStagingEvent.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     SepQueueWorkItem @ 0x140143418 (SepQueueWorkItem.c)
 *     SepRmDispatchDataToLsa @ 0x140148404 (SepRmDispatchDataToLsa.c)
 *     SepAdtMarshallAuditRecord @ 0x140156654 (SepAdtMarshallAuditRecord.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     SepAuditFailedRaisedIrql @ 0x140248844 (SepAuditFailedRaisedIrql.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepAdtLogAuditFailureEvent @ 0x1406F2D54 (SepAdtLogAuditFailureEvent.c)
 */

void __fastcall SepAdtLogAuditRecord(_DWORD *Src)
{
  unsigned __int8 CurrentIrql; // r15
  POOL_TYPE v3; // edi
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rbx
  void *CurrentServerSilo; // rax
  PVOID *v7; // r14
  int v8; // ebp
  unsigned int v9; // ecx
  void *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-58h] BYREF
  $5BC46E0569261879018906DEC3127961 v15; // [rsp+28h] [rbp-50h] BYREF

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
    CurrentServerSilo = (void *)PsGetCurrentServerSilo();
    *(_QWORD *)(v5 + 56) = CurrentServerSilo;
    if ( CurrentServerSilo )
      ObfReferenceObjectWithTag(CurrentServerSilo, 0x69416553u);
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
    if ( SepRmAuditingEnabled || (*((_DWORD *)*v7 + 5) & 2) == 0 )
    {
      v9 = *((_DWORD *)*v7 + 3);
      *(_DWORD *)(v5 + 36) = v9;
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
    v10 = *(void **)(v5 + 56);
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x69416553u);
    ExFreePoolWithTag(*v7, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
  }
  else if ( Src[1] != 521 )
  {
    SepAuditFailedRaisedIrql(3221225626LL);
  }
}
